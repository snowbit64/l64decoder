// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compute
// Entry Point: 00d4a998
// Size: 4548 bytes
// Signature: undefined __thiscall Compute(HACD * this, bool param_1, bool param_2)


/* HACD::HACD::Compute(bool, bool) */

void __thiscall HACD::HACD::Compute(HACD *this,bool param_1,bool param_2)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulong *puVar10;
  ulong *puVar11;
  basic_ostream *pbVar12;
  long *plVar13;
  void *pvVar14;
  undefined8 uVar15;
  ICHull *this_00;
  Vec3 *pVVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double *pdVar22;
  long lVar23;
  long *plVar24;
  long lVar25;
  ulong uVar26;
  long lVar27;
  ulong uVar28;
  double *pdVar29;
  code *pcVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  id local_1b0 [16];
  void *local_1a0;
  undefined **local_198;
  undefined **local_190;
  double local_188;
  ulong local_178;
  ulong uStack_170;
  ulong local_150;
  undefined8 uStack_148;
  void *local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined **local_128 [4];
  undefined8 local_108;
  undefined8 local_a0;
  undefined4 local_98;
  long local_90;
  
  lVar21 = tpidr_el0;
  local_90 = *(long *)(lVar21 + 0x28);
  lVar17 = *(long *)(this + 0x18);
  if ((((lVar17 == 0) || (lVar27 = *(long *)(this + 0x10), lVar27 == 0)) ||
      (lVar25 = *(long *)(this + 0x60), lVar25 == 0)) ||
     (uVar32 = *(ulong *)(this + 0x58), uVar32 == 0)) {
    uVar15 = 0;
    if (*(long *)(lVar21 + 0x28) == local_90) {
      return;
    }
    goto LAB_00d4ba8c;
  }
  uVar18 = *(ulong *)(this + 0x188);
  uVar33 = uVar32;
  if (uVar18 != 0 && uVar18 < uVar32) {
    MeshDecimator::MeshDecimator((MeshDecimator *)&local_198);
    local_108 = *(undefined8 *)(this + 0x178);
    MeshDecimator::Initialize
              ((MeshDecimator *)&local_198,*(ulong *)(this + 0x60),*(ulong *)(this + 0x58),
               *(Vec3 **)(this + 0x18),*(Vec3 **)(this + 0x10));
    MeshDecimator::Decimate
              ((MeshDecimator *)&local_198,0,*(ulong *)(this + 0x188),1.797693134862316e+308);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_178;
    *(ulong *)(this + 0x58) = uStack_170;
    *(ulong *)(this + 0x60) = local_178;
    uVar33 = local_178 * 0x18 + 8;
    if (SUB168(auVar1 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < local_178 * 0x18) {
      uVar33 = 0xffffffffffffffff;
    }
    puVar10 = (ulong *)operator_new__(uVar33);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uStack_170;
    uVar33 = uStack_170 * 0x18 + 8;
    if (SUB168(auVar2 * ZEXT816(0x18),8) != 0 || 0xfffffffffffffff7 < uStack_170 * 0x18) {
      uVar33 = 0xffffffffffffffff;
    }
    *puVar10 = local_178;
    *(ulong **)(this + 0x18) = puVar10 + 1;
    puVar11 = (ulong *)operator_new__(uVar33);
    *puVar11 = uStack_170;
    *(ulong **)(this + 0x10) = puVar11 + 1;
    MeshDecimator::GetMeshData
              ((MeshDecimator *)&local_198,(Vec3 *)(puVar10 + 1),(Vec3 *)(puVar11 + 1));
    MeshDecimator::~MeshDecimator((MeshDecimator *)&local_198);
    uVar33 = *(ulong *)(this + 0x58);
  }
  if (*(long *)(this + 0x178) != 0) {
    local_198 = (undefined **)0xfd8f40;
    local_128[0] = (undefined **)0xfd8f68;
    std::__ndk1::ios_base::init(local_128);
    local_a0 = 0;
    local_98 = 0xffffffff;
    local_198 = &PTR__basic_ostringstream_00fd8ed0;
    local_128[0] = &PTR__basic_ostringstream_00fd8ef8;
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    local_140 = (void *)0x0;
    local_130 = 0x10;
    local_190 = &PTR__basic_stringbuf_00fd8fa0;
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"+ Mesh",6);
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar12);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t # vertices                     \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(ulong *)(this + 0x60));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t # triangles                    \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(ulong *)(this + 0x58));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"+ Parameters",0xc);
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar12);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t min # of clusters              \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(ulong *)(this + 0x70));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t max concavity                  \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(double *)(this + 0x80));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t compacity weigth               \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(double *)(this + 0x88));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t volume weigth                  \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(double *)(this + 0x90));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t # vertices per convex-hull     \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(ulong *)(this + 0x150));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t scale                          \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(double *)(this + 0xa8));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t add extra distance points      \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       (bool)this[0x199]);
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t add face distance points       \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       (bool)this[0x198]);
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t produce full convex-hulls      \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,param_1);
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t max. distance to connect CCs   \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(double *)(this + 0x78));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar12 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_198,"\t threshold for small clusters   \t",0x22);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar12,
                       *(double *)(this + 0xb8));
    std::__ndk1::ios_base::getloc();
    plVar13 = (long *)std::__ndk1::locale::use_facet(local_1b0);
    (**(code **)(*plVar13 + 0x38))(plVar13,10);
    std::__ndk1::locale::~locale((locale *)local_1b0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pcVar30 = *(code **)(this + 0x178);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar14 = (void *)((ulong)local_1b0 | 1);
    if (((byte)local_1b0[0] & 1) != 0) {
      pvVar14 = local_1a0;
    }
    (*pcVar30)(0,0,pvVar14,uVar33);
    if (((byte)local_1b0[0] & 1) != 0) {
      operator_delete(local_1a0);
    }
    local_198 = &PTR__basic_ostringstream_00fd8ed0;
    local_190 = &PTR__basic_stringbuf_00fd8fa0;
    local_128[0] = &PTR__basic_ostringstream_00fd8ef8;
    if ((local_150 & 1) != 0) {
      operator_delete(local_140);
    }
    std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
              ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)&local_190);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_198);
    std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
              ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_128);
    if (*(code **)(this + 0x178) != (code *)0x0) {
      (**(code **)(this + 0x178))(0,0,"+ Normalizing Data\n",uVar33);
    }
  }
  NormalizeData();
  if (*(code **)(this + 0x178) != (code *)0x0) {
    (**(code **)(this + 0x178))(0,0,"+ Creating Graph\n",uVar33);
  }
  CreateGraph();
  if (*(code **)(this + 0x178) != (code *)0x0) {
    (**(code **)(this + 0x178))(0,0,"+ Initializing Dual Graph\n",uVar33);
  }
  InitializeDualGraph();
  if (*(code **)(this + 0x178) != (code *)0x0) {
    (**(code **)(this + 0x178))(0,0,"+ Initializing Priority Queue\n",uVar33);
  }
  InitializePriorityQueue();
  if (*(code **)(this + 0x178) != (code *)0x0) {
    (**(code **)(this + 0x178))(0,0,"+ Simplification ...\n",*(undefined8 *)(this + 0x58));
  }
  Simplify();
  if (*(code **)(this + 0x178) != (code *)0x0) {
    (**(code **)(this + 0x178))(0,0,"+ Denormalizing Data\n",*(undefined8 *)(this + 0x68));
  }
  uVar33 = *(ulong *)(this + 0x60);
  if ((uVar33 != 0) && (*(double *)(this + 0xa0) != 0.0)) {
    pdVar22 = *(double **)(this + 0x18);
    dVar36 = *(double *)(this + 0xa0) / (*(double *)(this + 0xa8) + *(double *)(this + 0xa8));
    if (uVar33 < 2) {
LAB_00d4b3a8:
      uVar26 = 0;
    }
    else {
      uVar28 = uVar33 - 1;
      uVar26 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar28;
      bVar5 = SUB168(auVar4 * ZEXT816(0x18),8) == 0;
      if (((pdVar22 + 2 <= pdVar22 + 2 + uVar28 * 3) && (bVar5)) &&
         ((pdVar22 + 1 <= pdVar22 + 1 + uVar28 * 3 &&
          (((bVar5 && (pdVar22 <= pdVar22 + uVar28 * 3)) && (bVar5)))))) {
        if ((pdVar22 < this + 0xe0) && (this + 200 < pdVar22 + uVar33 * 3)) goto LAB_00d4b3a8;
        uVar26 = uVar33 & 0xfffffffffffffffe;
        uVar28 = uVar26;
        pdVar29 = pdVar22;
        do {
          uVar28 = uVar28 - 2;
          dVar38 = *(double *)(this + 200);
          dVar37 = *(double *)(this + 0xd0);
          dVar39 = *(double *)(this + 0xd8);
          *pdVar29 = *pdVar29 * dVar36 + dVar38;
          pdVar29[1] = pdVar29[1] * dVar36 + dVar37;
          pdVar29[2] = pdVar29[2] * dVar36 + dVar39;
          pdVar29[3] = pdVar29[3] * dVar36 + dVar38;
          pdVar29[4] = pdVar29[4] * dVar36 + dVar37;
          pdVar29[5] = pdVar29[5] * dVar36 + dVar39;
          pdVar29 = pdVar29 + 6;
        } while (uVar28 != 0);
        if (uVar33 == uVar26) goto LAB_00d4b3ec;
      }
    }
    lVar19 = uVar33 - uVar26;
    pdVar22 = pdVar22 + uVar26 * 3 + 2;
    do {
      lVar19 = lVar19 + -1;
      dVar38 = *(double *)(this + 200);
      dVar37 = *(double *)(this + 0xd8);
      pdVar22[-1] = pdVar22[-1] * dVar36 + *(double *)(this + 0xd0);
      pdVar22[-2] = pdVar22[-2] * dVar36 + dVar38;
      *pdVar22 = dVar36 * *pdVar22 + dVar37;
      pdVar22 = pdVar22 + 3;
    } while (lVar19 != 0);
  }
LAB_00d4b3ec:
  if (*(code **)(this + 0x178) != (code *)0x0) {
    (**(code **)(this + 0x178))(0,0,"+ Computing final convex-hulls\n",*(undefined8 *)(this + 0x68))
    ;
  }
  lVar19 = *(long *)(this + 0xf8);
  if (lVar19 != 0) {
    plVar13 = (long *)(lVar19 + -8);
    lVar20 = *plVar13;
    if (lVar20 != 0) {
      lVar31 = 0;
      lVar20 = lVar20 * 0x110;
      do {
        lVar34 = lVar19 + lVar20;
        pvVar14 = *(void **)(lVar34 + -0x48);
        *(undefined ***)(lVar34 + -0x110) = &PTR__ICHull_01012900;
        if (pvVar14 != (void *)0x0) {
          *(void **)(lVar34 + -0x40) = pvVar14;
          operator_delete(pvVar14);
        }
        pvVar14 = *(void **)(lVar34 + -0x60);
        if (pvVar14 != (void *)0x0) {
          *(void **)(lVar19 + lVar20 + -0x58) = pvVar14;
          operator_delete(pvVar14);
        }
        lVar34 = lVar19 + lVar20;
        pvVar14 = *(void **)(lVar34 + -0x78);
        if (pvVar14 != (void *)0x0) {
          *(void **)(lVar34 + -0x70) = pvVar14;
          operator_delete(pvVar14);
        }
        TMMesh::~TMMesh((TMMesh *)(lVar34 + -0x108));
        lVar19 = lVar19 + -0x110;
        lVar31 = lVar31 + 0x110;
      } while (lVar20 - lVar31 != 0);
    }
    operator_delete__(plVar13);
  }
  uVar26 = *(ulong *)(this + 0x68);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar26;
  uVar33 = uVar26 * 0x110 | 8;
  if (SUB168(auVar3 * ZEXT816(0x110),8) != 0) {
    uVar33 = 0xffffffffffffffff;
  }
  puVar10 = (ulong *)operator_new__(uVar33);
  *puVar10 = uVar26;
  if (uVar26 != 0) {
    lVar19 = uVar26 * 0x110;
    puVar11 = puVar10 + 1;
    do {
      ICHull::ICHull((ICHull *)puVar11,(HeapManager *)0x0);
      puVar11 = puVar11 + 0x22;
      lVar19 = lVar19 + -0x110;
    } while (lVar19 != 0);
  }
  *(ulong **)(this + 0xf8) = puVar10 + 1;
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
  }
  uVar33 = *(ulong *)(this + 0x58) << 3;
  if (*(ulong *)(this + 0x58) >> 0x3d != 0) {
    uVar33 = 0xffffffffffffffff;
  }
  pvVar14 = operator_new__(uVar33);
  lVar19 = *(long *)(this + 0xe0);
  *(void **)(this + 0x180) = pvVar14;
  if (*(long *)(this + 0xe8) != lVar19) {
    lVar20 = 0;
    while( true ) {
      lVar34 = *(long *)(lVar19 + lVar20 * 8);
      *(long *)((long)pvVar14 + lVar34 * 8) = lVar20;
      lVar31 = *(long *)(this + 0x138);
      lVar19 = lVar31 + lVar34 * 0x310;
      plVar13 = *(long **)(lVar19 + 0xb0);
      lVar19 = *(long *)(lVar19 + 0xb8) - (long)plVar13;
      if (lVar19 != 0) {
        uVar33 = lVar19 >> 3;
        if (uVar33 < 2) {
          uVar33 = 1;
        }
        do {
          uVar33 = uVar33 - 1;
          *(long *)((long)pvVar14 + *plVar13 * 8) = lVar20;
          plVar13 = plVar13 + 1;
        } while (uVar33 != 0);
      }
      if (*(long *)(lVar31 + lVar34 * 0x310 + 0x250) != 0) {
        lVar19 = 0;
        uVar33 = 0;
        do {
          lVar23 = lVar31 + lVar34 * 0x310;
          lVar35 = lVar23 + 200;
          if (*(long *)(lVar23 + 600) != 0x10) {
            lVar35 = *(long *)(lVar23 + 0x248);
          }
          if (*(char *)(lVar35 + lVar19 + 0x11) == '\0') {
            ICHull::AddPoint((ICHull *)(*(long *)(this + 0xf8) + lVar20 * 0x110),
                             (Vec3 *)(*(long *)(this + 0x18) + *(long *)(lVar35 + lVar19) * 0x18),
                             *(long *)(lVar35 + lVar19));
            lVar31 = *(long *)(this + 0x138);
          }
          uVar33 = uVar33 + 1;
          lVar19 = lVar19 + 0x18;
        } while (uVar33 < *(ulong *)(lVar31 + lVar34 * 0x310 + 0x250));
      }
      this_00 = (ICHull *)(*(long *)(this + 0xf8) + lVar20 * 0x110);
      *(undefined8 *)(this_00 + 0xe0) = 0;
      if (param_1) {
        while (iVar7 = ICHull::Process(), iVar7 == 3) {
          plVar13 = (long *)operator_new(0x110);
          ICHull::ICHull((ICHull *)plVar13,*(HeapManager **)(this + 400));
          lVar35 = *(long *)(this + 0xf8);
          lVar31 = lVar35 + lVar20 * 0x110;
          plVar24 = (long *)(lVar31 + 0x18);
          lVar19 = *plVar24;
          puVar10 = (ulong *)(lVar31 + 0x20);
          uVar33 = *puVar10;
          if (uVar33 != 0) {
            lVar19 = *(long *)(lVar19 + 0x38);
            *plVar24 = lVar19;
          }
          lVar19 = *(long *)(lVar19 + 0x18);
          lVar31 = *(long *)(this + 0x18);
          dVar36 = *(double *)(this + 0xa0) * 0.0001;
          iVar7 = rand();
          iVar8 = rand();
          iVar9 = rand();
          pdVar22 = (double *)(lVar31 + lVar19 * 0x18);
          local_198 = (undefined **)(*pdVar22 + dVar36 * (double)(iVar7 % 10 + -5));
          local_190 = (undefined **)(pdVar22[1] + dVar36 * (double)(iVar8 % 10 + -5));
          local_188 = pdVar22[2] + dVar36 * (double)(iVar9 % 10 + -5);
          ICHull::AddPoint((ICHull *)plVar13,(Vec3 *)&local_198,lVar19);
          if (1 < uVar33) {
            lVar19 = uVar33 - 1;
            plVar24 = (long *)(lVar35 + lVar20 * 0x110 + 0x18);
            do {
              ICHull::AddPoint((ICHull *)plVar13,
                               (Vec3 *)(*(long *)(this + 0x18) + *(long *)(*plVar24 + 0x18) * 0x18),
                               *(long *)(*plVar24 + 0x18));
              if (*puVar10 != 0) {
                *plVar24 = *(long *)(*plVar24 + 0x38);
              }
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          ICHull::operator=((ICHull *)(*(long *)(this + 0xf8) + lVar20 * 0x110),(ICHull *)plVar13);
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
      else {
        while (iVar7 = ICHull::Process(this_00,*(ulong *)(this + 0x150)), iVar7 == 3) {
          plVar13 = (long *)operator_new(0x110);
          ICHull::ICHull((ICHull *)plVar13,*(HeapManager **)(this + 400));
          lVar35 = *(long *)(this + 0xf8);
          lVar31 = lVar35 + lVar20 * 0x110;
          plVar24 = (long *)(lVar31 + 0x18);
          lVar19 = *plVar24;
          puVar10 = (ulong *)(lVar31 + 0x20);
          uVar33 = *puVar10;
          if (uVar33 != 0) {
            lVar19 = *(long *)(lVar19 + 0x38);
            *plVar24 = lVar19;
          }
          lVar19 = *(long *)(lVar19 + 0x18);
          lVar31 = *(long *)(this + 0x18);
          dVar36 = *(double *)(this + 0xa0) * 0.0001;
          iVar7 = rand();
          iVar8 = rand();
          iVar9 = rand();
          pdVar22 = (double *)(lVar31 + lVar19 * 0x18);
          local_198 = (undefined **)(*pdVar22 + dVar36 * (double)(iVar7 % 10 + -5));
          local_190 = (undefined **)(pdVar22[1] + dVar36 * (double)(iVar8 % 10 + -5));
          local_188 = pdVar22[2] + dVar36 * (double)(iVar9 % 10 + -5);
          ICHull::AddPoint((ICHull *)plVar13,(Vec3 *)&local_198,lVar19);
          if (1 < uVar33) {
            lVar19 = uVar33 - 1;
            plVar24 = (long *)(lVar35 + lVar20 * 0x110 + 0x18);
            do {
              ICHull::AddPoint((ICHull *)plVar13,
                               (Vec3 *)(*(long *)(this + 0x18) + *(long *)(*plVar24 + 0x18) * 0x18),
                               *(long *)(*plVar24 + 0x18));
              if (*puVar10 != 0) {
                *plVar24 = *(long *)(*plVar24 + 0x38);
              }
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
          }
          ICHull::operator=((ICHull *)(*(long *)(this + 0xf8) + lVar20 * 0x110),(ICHull *)plVar13);
          (**(code **)(*plVar13 + 8))(plVar13);
          this_00 = (ICHull *)(*(long *)(this + 0xf8) + lVar20 * 0x110);
        }
      }
      if ((param_2) &&
         (lVar19 = *(long *)(this + 0x138), *(long *)(lVar19 + lVar34 * 0x310 + 0x250) != 0)) {
        lVar31 = 0;
        uVar33 = 0;
        do {
          lVar19 = lVar19 + lVar34 * 0x310;
          lVar35 = lVar19 + 200;
          if (*(long *)(lVar19 + 600) != 0x10) {
            lVar35 = *(long *)(lVar19 + 0x248);
          }
          if (*(char *)(lVar35 + lVar31 + 0x11) != '\0') {
            uVar26 = *(ulong *)(lVar35 + lVar31);
            if ((long)uVar26 < 0) {
              pVVar16 = (Vec3 *)(*(long *)(this + 0x20) + ~uVar26 * 0x18);
            }
            else {
              pVVar16 = (Vec3 *)(*(long *)(this + 0x18) + uVar26 * 0x18);
            }
            ICHull::AddPoint((ICHull *)(*(long *)(this + 0xf8) + lVar20 * 0x110),pVVar16,uVar26);
          }
          lVar19 = *(long *)(this + 0x138);
          uVar33 = uVar33 + 1;
          lVar31 = lVar31 + 0x18;
        } while (uVar33 < *(ulong *)(lVar19 + lVar34 * 0x310 + 0x250));
      }
      lVar19 = *(long *)(this + 0xe0);
      lVar20 = lVar20 + 1;
      if (lVar20 == *(long *)(this + 0xe8) - lVar19 >> 3) break;
      pvVar14 = *(void **)(this + 0x180);
    }
  }
  if (uVar18 != 0 && uVar18 < uVar32) {
    *(undefined8 *)this = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x58);
    *(long *)(this + 0x10) = lVar27;
    *(long *)(this + 0x18) = lVar17;
    *(ulong *)(this + 0x58) = uVar32;
    *(long *)(this + 0x60) = lVar25;
    lVar21 = *(long *)(lVar21 + 0x28);
  }
  else {
    lVar21 = *(long *)(lVar21 + 0x28);
  }
  uVar15 = 1;
  if (lVar21 == local_90) {
    return;
  }
LAB_00d4ba8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}


