// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Decimate
// Entry Point: 00d596b8
// Size: 2256 bytes
// Signature: undefined __thiscall Decimate(MeshDecimator * this, ulong param_1, ulong param_2, double param_3)


/* HACD::MeshDecimator::Decimate(unsigned long, unsigned long, double) */

undefined8 __thiscall
HACD::MeshDecimator::Decimate(MeshDecimator *this,ulong param_1,ulong param_2,double param_3)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  char cVar5;
  basic_ostream *pbVar6;
  long *plVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined auVar13 [16];
  id local_5c8 [16];
  void *local_5b8;
  double local_5b0;
  undefined **local_5a8;
  undefined **local_5a0;
  void *local_598;
  ulong local_560;
  undefined8 uStack_558;
  void *local_550;
  undefined8 uStack_548;
  undefined4 local_540;
  undefined **local_538 [17];
  undefined8 local_4b0;
  undefined4 local_4a8;
  undefined **local_4a0;
  undefined **local_498 [8];
  ulong local_458;
  undefined8 uStack_450;
  void *local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined **local_430 [17];
  undefined8 local_3a8;
  undefined4 local_3a0;
  long local_a0;
  
  lVar3 = tpidr_el0;
  local_a0 = *(long *)(lVar3 + 0x28);
  local_5b0 = 0.0;
  if (*(long *)(this + 0x90) != 0) {
    local_4a0 = (undefined **)0xfd8f40;
    local_430[0] = (undefined **)0xfd8f68;
    std::__ndk1::ios_base::init(local_430);
    local_3a8 = 0;
    local_3a0 = 0xffffffff;
    local_4a0 = &PTR__basic_ostringstream_00fd8ed0;
    local_430[0] = &PTR__basic_ostringstream_00fd8ef8;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    uStack_450 = 0;
    local_458 = 0;
    uStack_440 = 0;
    local_448 = (void *)0x0;
    local_438 = 0x10;
    local_498[0] = &PTR__basic_stringbuf_00fd8fa0;
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"+ Mesh",6);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"\t # vertices                     \t",0x22);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                       *(ulong *)(this + 0x10));
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"\t # triangles                    \t",0x22);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                       *(ulong *)(this + 0x28));
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"+ Parameters",0xc);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"\t target # of vertices           \t",0x22);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_1);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"\t target # of triangles          \t",0x22);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_2);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_4a0,"\t QEM\t\t\t                  \t",0x1b);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,param_3);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet((id *)&local_5a8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)&local_5a8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pcVar9 = *(code **)(this + 0x90);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)&local_5a8 | 1);
    if (((ulong)local_5a8 & 1) != 0) {
      pvVar1 = local_598;
    }
    (*pcVar9)(0,0,pvVar1,*(undefined8 *)(this + 0x10));
    if (((ulong)local_5a8 & 1) != 0) {
      operator_delete(local_598);
    }
    local_4a0 = &PTR__basic_ostringstream_00fd8ed0;
    local_498[0] = &PTR__basic_stringbuf_00fd8fa0;
    local_430[0] = &PTR__basic_ostringstream_00fd8ef8;
    if ((local_458 & 1) != 0) {
      operator_delete(local_448);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_498);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_4a0);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_430);
    if (*(code **)(this + 0x90) != (code *)0x0) {
      (**(code **)(this + 0x90))(0,0,"+ Initialize QEM \n",*(undefined8 *)(this + 0x10));
    }
  }
  InitializeQEM();
  if (*(code **)(this + 0x90) != (code *)0x0) {
    (**(code **)(this + 0x90))(0,0,"+ Initialize priority queue \n",*(undefined8 *)(this + 0x10));
  }
  InitializePriorityQueue();
  uVar8 = extraout_x1;
  if (*(code **)(this + 0x90) != (code *)0x0) {
    (**(code **)(this + 0x90))(0,0,"+ Simplification \n",*(undefined8 *)(this + 0x10));
    uVar8 = extraout_x1_00;
  }
  if ((*(long *)(this + 0x78) != *(long *)(this + 0x70)) && (*(long *)(this + 0x30) != 0)) {
    dVar10 = *(double *)(this + 0x38);
    dVar12 = -1.0;
    while ((dVar4 = local_5b0, uVar2 = *(ulong *)(this + 0x20),
           (uVar2 > param_1 && param_2 <= *(ulong *)(this + 0x28)) &&
           (uVar2 <= param_1 || *(ulong *)(this + 0x28) != param_2) && (local_5b0 < param_3))) {
      dVar11 = (double)NEON_ucvtf(*(undefined8 *)(this + 0x10));
      dVar11 = 100.0 - ((double)(unkuint9)uVar2 * 100.0) / dVar11;
      if (1.0 < ABS(dVar11 - dVar12) && *(long *)(this + 0x90) != 0) {
        FUN_00d58284(dVar11,SQRT(local_5b0),&local_4a0,uVar8,"%3.2f %% V = %lu \t QEM = %f \t \t \r"
                    );
        (**(code **)(this + 0x90))(dVar11,dVar4,&local_4a0,*(undefined8 *)(this + 0x20));
        dVar12 = dVar11;
      }
      auVar13 = EdgeCollapse(this,&local_5b0);
      uVar8 = auVar13._8_8_;
      if ((((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
          (local_5b0 = (1.0 / (dVar10 * dVar10)) * local_5b0,
          *(long *)(this + 0x78) == *(long *)(this + 0x70))) || (*(long *)(this + 0x30) == 0))
      break;
    }
  }
  if (*(long *)(this + 0x90) != 0) {
    local_5a8 = (undefined **)0xfd8f40;
    local_538[0] = (undefined **)0xfd8f68;
    std::__ndk1::ios_base::init(local_538);
    local_4b0 = 0;
    local_4a8 = 0xffffffff;
    local_5a8 = &PTR__basic_ostringstream_00fd8ed0;
    local_538[0] = &PTR__basic_ostringstream_00fd8ef8;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    uStack_558 = 0;
    local_560 = 0;
    uStack_548 = 0;
    local_550 = (void *)0x0;
    local_540 = 0x10;
    local_5a0 = &PTR__basic_stringbuf_00fd8fa0;
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"+ Simplification output",0x17);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet(local_5c8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)local_5c8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"\t # vertices                     \t",0x22);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                       *(ulong *)(this + 0x20));
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet(local_5c8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)local_5c8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"\t # triangles                    \t",0x22);
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                       *(ulong *)(this + 0x28));
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet(local_5c8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)local_5c8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_5a8,"\t QEM\t\t\t\t\t          \t",0x15);
    dVar12 = local_5b0;
    cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,local_5b0);
    std::__ndk1::ios_base::getloc();
    plVar7 = (long *)std::__ndk1::locale::use_facet(local_5c8);
    (**(code **)(*plVar7 + 0x38))(plVar7,10);
    std::__ndk1::locale::~locale((locale *)local_5c8);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pcVar9 = *(code **)(this + 0x90);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)local_5c8 | 1);
    if (((byte)local_5c8[0] & 1) != 0) {
      pvVar1 = local_5b8;
    }
    (*pcVar9)(0x4059000000000000,dVar12,pvVar1,*(undefined8 *)(this + 0x20));
    if (((byte)local_5c8[0] & 1) != 0) {
      operator_delete(local_5b8);
    }
    local_5a8 = &PTR__basic_ostringstream_00fd8ed0;
    local_5a0 = &PTR__basic_stringbuf_00fd8fa0;
    local_538[0] = &PTR__basic_ostringstream_00fd8ef8;
    if ((local_560 & 1) != 0) {
      operator_delete(local_550);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_5a0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_5a8);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_538);
  }
  if (*(long *)(lVar3 + 0x28) == local_a0) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


