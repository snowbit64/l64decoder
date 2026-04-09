// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputePrimitiveSet
// Entry Point: 00ea59f0
// Size: 1772 bytes
// Signature: undefined __thiscall ComputePrimitiveSet(VHACD * this, Parameters * param_1)


/* VHACD::VHACD::ComputePrimitiveSet(VHACD::IVHACD::Parameters const&) */

void __thiscall VHACD::VHACD::ComputePrimitiveSet(VHACD *this,Parameters *param_1)

{
  void *pvVar1;
  long lVar2;
  char cVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  VoxelSet *this_00;
  VHACD *pVVar6;
  ulong uVar7;
  VHACD *pVVar8;
  long *plVar9;
  Volume *this_01;
  double dVar10;
  ushort local_190;
  void *local_180;
  undefined **local_178;
  undefined **local_170 [8];
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  plVar9 = *(long **)(param_1 + 0x30);
  if ((plVar9 != (long *)0x0) && (DAT_0212337c == 0)) {
    DAT_0212337c = (**(code **)(*plVar9 + 0x10))(plVar9,"VHACD::ComputePrimitiveSet");
    plVar9 = *(long **)(param_1 + 0x30);
  }
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))(plVar9,DAT_0212337c);
  }
  clock_gettime(0,(timespec *)(this + 0x278));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x228));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x240));
  local_178 = (undefined **)0xfd8f40;
  local_108[0] = (undefined **)0xfd8f68;
  std::__ndk1::ios_base::init(local_108);
  local_80 = 0;
  local_78 = 0xffffffff;
  local_178 = &PTR__basic_ostringstream_00fd8ed0;
  local_108[0] = &PTR__basic_ostringstream_00fd8ef8;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_110 = 0x10;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_170[0] = &PTR__basic_stringbuf_00fd8fa0;
  if (*(long *)(param_1 + 0x28) != 0) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"+ ",2);
    pVVar6 = *(VHACD **)(this + 0x238);
    uVar7 = *(ulong *)(this + 0x230);
    if (((byte)this[0x228] & 1) == 0) {
      pVVar6 = this + 0x229;
      uVar7 = (ulong)((byte)this[0x228] >> 1);
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,(char *)pVVar6,uVar7);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet((id *)&local_190);
    (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_190);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    plVar5 = *(long **)(param_1 + 0x28);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)&local_190 | 1);
    if ((local_190 & 1) != 0) {
      pvVar1 = local_180;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,pvVar1);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
  }
  if (((byte)this[0x2b8] & 1) == 0) {
    *(undefined8 *)(this + 0x268) = 0;
    *(undefined8 *)(this + 0x260) = 0;
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
      pVVar6 = *(VHACD **)(this + 0x238);
      pVVar8 = *(VHACD **)(this + 0x250);
      if (((byte)this[0x228] & 1) == 0) {
        pVVar6 = this + 0x229;
      }
      if (((byte)this[0x240] & 1) == 0) {
        pVVar8 = this + 0x241;
      }
      (**(code **)(*plVar5 + 0x10))(*(undefined8 *)(this + 600),0,0,plVar5,pVVar6,pVVar8);
    }
  }
  this_00 = (VoxelSet *)operator_new(0xb10);
  VoxelSet::VoxelSet(this_00);
  Volume::Convert(*(Volume **)(this + 0x2a8),this_00);
  this_01 = *(Volume **)(this + 0x2a8);
  *(VoxelSet **)(this + 0x2b0) = this_00;
  if (this_01 != (Volume *)0x0) {
    Volume::~Volume(this_01);
    operator_delete(this_01);
  }
  *(undefined8 *)(this + 0x2a8) = 0;
  if (*(long *)(param_1 + 0x28) != 0) {
    local_190 = 0;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        local_170,(basic_string *)&local_190);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"\t # primitives               ",0x1d);
    uVar7 = (**(code **)(**(long **)(this + 0x2b0) + 0x18))();
    cVar3 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar7);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet((id *)&local_190);
    (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_190);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"\t # inside surface           ",0x1d);
    uVar7 = (**(code **)(**(long **)(this + 0x2b0) + 0x28))();
    cVar3 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar7);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet((id *)&local_190);
    (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_190);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"\t # on surface               ",0x1d);
    uVar7 = (**(code **)(**(long **)(this + 0x2b0) + 0x20))();
    cVar3 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,uVar7);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet((id *)&local_190);
    (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_190);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    plVar5 = *(long **)(param_1 + 0x28);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)&local_190 | 1);
    if ((local_190 & 1) != 0) {
      pvVar1 = local_180;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,pvVar1);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
  }
  *(undefined8 *)(this + 600) = 0x402e000000000000;
  if (((byte)this[0x2b8] & 1) == 0) {
    *(undefined8 *)(this + 0x268) = 0x4059000000000000;
    *(undefined8 *)(this + 0x260) = 0x4059000000000000;
    plVar5 = *(long **)(param_1 + 0x20);
    if (plVar5 != (long *)0x0) {
      pVVar6 = *(VHACD **)(this + 0x238);
      pVVar8 = *(VHACD **)(this + 0x250);
      if (((byte)this[0x228] & 1) == 0) {
        pVVar6 = this + 0x229;
      }
      if (((byte)this[0x240] & 1) == 0) {
        pVVar8 = this + 0x241;
      }
      (**(code **)(*plVar5 + 0x10))
                (*(undefined8 *)(this + 600),0x4059000000000000,0x4059000000000000,plVar5,pVVar6,
                 pVVar8);
    }
  }
  clock_gettime(0,(timespec *)(this + 0x288));
  if (*(long *)(param_1 + 0x28) != 0) {
    local_190 = 0;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        local_170,(basic_string *)&local_190);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_178,"\t time ",7);
    dVar10 = (double)NEON_fmadd((double)(*(long *)(this + 0x290) - *(long *)(this + 0x280)),
                                0x3e112e0be826d695,
                                (double)(*(long *)(this + 0x288) - *(long *)(this + 0x278)));
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        (dVar10 * 1000.0) / 1000.0);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"s",1);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet((id *)&local_190);
    (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_190);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    plVar5 = *(long **)(param_1 + 0x28);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)&local_190 | 1);
    if ((local_190 & 1) != 0) {
      pvVar1 = local_180;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5,pvVar1);
    if ((local_190 & 1) != 0) {
      operator_delete(local_180);
    }
  }
  local_108[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_178 = &PTR__basic_ostringstream_00fd8ed0;
  local_170[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_170);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


