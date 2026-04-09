// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DetourNavigationMeshQuery
// Entry Point: 00af8d00
// Size: 1816 bytes
// Signature: undefined __thiscall DetourNavigationMeshQuery(DetourNavigationMeshQuery * this, NavigationMesh * param_1)


/* DetourNavigationMeshQuery::DetourNavigationMeshQuery(NavigationMesh*) */

void __thiscall
DetourNavigationMeshQuery::DetourNavigationMeshQuery
          (DetourNavigationMeshQuery *this,NavigationMesh *param_1)

{
  float *pfVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined auVar16 [16];
  uint uVar17;
  uint uVar18;
  int iVar19;
  dtNavMesh *this_00;
  dtNavMeshQuery *this_01;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  void *__s;
  ulong uVar23;
  ulong uVar24;
  void *pvVar25;
  ulong uVar26;
  ulong uVar27;
  long lVar28;
  ulong uVar29;
  void *pvVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined auVar48 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  int local_14c;
  uchar *local_148;
  void *pvStack_140;
  ulong local_138;
  void *pvStack_130;
  void *local_128;
  void *pvStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  dtQueryFilter::dtQueryFilter((dtQueryFilter *)(this + 0x10));
  this_00 = (dtNavMesh *)operator_new(0x68);
                    /* try { // try from 00af8d48 to 00af8d4b has its CatchHandler @ 00af9440 */
  dtNavMesh::dtNavMesh(this_00);
  *(dtNavMesh **)this = this_00;
  this_01 = (dtNavMeshQuery *)operator_new(0x60);
                    /* try { // try from 00af8d5c to 00af8d5f has its CatchHandler @ 00af943c */
  dtNavMeshQuery::dtNavMeshQuery(this_01);
  *(dtNavMeshQuery **)(this + 8) = this_01;
  *(undefined4 *)(this + 0x118) = 0xffff;
  *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x18) = 0x412000003f800000;
  *(undefined8 *)(this + 0x28) = 0x3fc0000040000000;
  lVar20 = NavigationMesh::getVertices();
  puVar21 = (undefined8 *)NavigationMesh::getGridMinBound();
  puVar22 = (undefined8 *)NavigationMesh::getGridMaxBound();
  fVar35 = (float)NavigationMesh::getCellSize();
  fVar36 = (float)NavigationMesh::getCellHeight();
  uVar17 = NavigationMesh::getNumOfVertices();
  uVar18 = NavigationMesh::getNumOfNodes();
  if (uVar17 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0))
    {
                    /* try { // try from 00af933c to 00af9347 has its CatchHandler @ 00af9420 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: No vertices to create navigation mesh.\n");
    goto LAB_00af92ac;
  }
  uVar32 = (ulong)uVar18;
  uVar33 = (ulong)(uVar17 * 0xc) << 1;
  __s = operator_new__(uVar33);
  if (uVar17 * 0xc != 0) {
    memset(__s,0xff,uVar33);
  }
  if (uVar18 != 0) {
    lVar34 = 0;
    pvVar25 = __s;
    do {
      NavigationMesh::getNodeAt(param_1,(uint)lVar34);
      uVar33 = NavigationMeshNode::getNumOfEdges();
      uVar23 = NavigationMeshNode::getVertexIndices();
      uVar24 = NavigationMeshNode::getConnectionIndices();
      if ((uint)uVar33 != 0) {
        uVar26 = uVar33 & 0xffffffff;
        if ((uint)uVar33 < 4) {
          uVar27 = 0;
        }
        else {
          uVar27 = 0;
          if (((uint)(uVar26 - 1) < 0xfffffffa) && (uVar26 - 1 >> 0x20 == 0)) {
            uVar27 = 0;
            pvVar30 = (void *)((long)__s + lVar34 * 0x18);
            uVar29 = uVar26 * 2;
            uVar31 = (long)pvVar30 + uVar29 + 0xc;
            if (((void *)(uVar23 + uVar29) <= pvVar30 || uVar31 <= uVar23) &&
               ((void *)(uVar24 + uVar29) <= pvVar30 || uVar31 <= uVar24)) {
              uVar31 = 0;
              uVar27 = uVar33 & 0xfffffffc;
              do {
                puVar3 = (undefined8 *)((long)pvVar25 + uVar31);
                *puVar3 = *(undefined8 *)(uVar23 + uVar31);
                puVar5 = (undefined8 *)(uVar24 + uVar31);
                uVar31 = uVar31 + 8;
                *(undefined8 *)((long)puVar3 + 0xc) = *puVar5;
              } while ((uVar29 & 0x1fffffff8) != uVar31);
              if (uVar27 == uVar26) goto LAB_00af8e24;
            }
          }
        }
        do {
          lVar28 = uVar27 * 2;
          *(undefined2 *)((long)pvVar25 + lVar28) = *(undefined2 *)(uVar23 + lVar28);
          iVar19 = (int)uVar27;
          uVar27 = uVar27 + 1;
          *(undefined2 *)((long)pvVar25 + (ulong)(iVar19 + 6) * 2) =
               *(undefined2 *)(uVar24 + lVar28);
        } while (uVar26 != uVar27);
      }
LAB_00af8e24:
      pvVar25 = (void *)((long)pvVar25 + 0x18);
      lVar34 = lVar34 + 1;
    } while ((uint)lVar34 != uVar18);
  }
  pvVar25 = operator_new__((ulong)(uVar17 * 3) << 1);
  memset(pvVar25,0,(ulong)uVar17 * 6);
  uVar4 = uVar17;
  if (uVar17 < 2) {
    uVar4 = 1;
  }
  uVar33 = (ulong)uVar4;
  fVar37 = *(float *)puVar21;
  fVar38 = *(float *)((long)puVar21 + 4);
  fVar39 = *(float *)(puVar21 + 1);
  if (uVar4 < 8) {
    uVar26 = 0;
LAB_00af90b8:
    uVar23 = uVar26 * 3;
    lVar34 = uVar33 - uVar26;
    do {
      pfVar1 = (float *)(lVar20 + (uVar23 & 0xffffffff) * 4);
      puVar2 = (undefined2 *)((long)pvVar25 + (uVar23 & 0xffffffff) * 2);
      uVar23 = uVar23 + 3;
      fVar40 = (*pfVar1 - fVar37) / fVar35;
      fVar41 = (pfVar1[1] - fVar38) / fVar36;
      fVar43 = 0.5;
      if (fVar40 <= 0.0) {
        fVar43 = -0.5;
      }
      fVar42 = (pfVar1[2] - fVar39) / fVar35;
      fVar44 = 0.5;
      if (fVar41 <= 0.0) {
        fVar44 = -0.5;
      }
      *puVar2 = (short)(int)(fVar40 + fVar43);
      fVar40 = 0.5;
      if (fVar42 <= 0.0) {
        fVar40 = -0.5;
      }
      lVar34 = lVar34 + -1;
      puVar2[1] = (short)(int)(fVar41 + fVar44);
      puVar2[2] = (short)(int)(fVar42 + fVar40);
    } while (lVar34 != 0);
  }
  else {
    uVar26 = uVar33 & 0xfffffff8;
    uVar23 = 0;
    uVar24 = uVar26;
    do {
      uVar27 = uVar23 & 0xfffffff8;
      uVar23 = uVar23 + 0x18;
      uVar24 = uVar24 - 8;
      pfVar1 = (float *)(lVar20 + uVar27 * 4);
      puVar2 = (undefined2 *)((long)pvVar25 + uVar27 * 2);
      auVar50._0_4_ = (*pfVar1 - fVar37) / fVar35;
      auVar50._4_4_ = (pfVar1[3] - fVar37) / fVar35;
      auVar50._8_4_ = (pfVar1[6] - fVar37) / fVar35;
      auVar50._12_4_ = (pfVar1[9] - fVar37) / fVar35;
      fVar40 = (pfVar1[1] - fVar38) / fVar36;
      fVar41 = (pfVar1[4] - fVar38) / fVar36;
      fVar43 = (pfVar1[7] - fVar38) / fVar36;
      fVar42 = (pfVar1[10] - fVar38) / fVar36;
      auVar48 = NEON_fcmgt(auVar50,0,4);
      auVar58._0_4_ = (pfVar1[0xc] - fVar37) / fVar35;
      auVar58._4_4_ = (pfVar1[0xf] - fVar37) / fVar35;
      auVar58._8_4_ = (pfVar1[0x12] - fVar37) / fVar35;
      auVar58._12_4_ = (pfVar1[0x15] - fVar37) / fVar35;
      auVar55._8_4_ = 0xbf000000;
      auVar55._0_8_ = 0xbf000000bf000000;
      auVar55._12_4_ = 0xbf000000;
      auVar49._8_4_ = 0x3f000000;
      auVar49._0_8_ = 0x3f0000003f000000;
      auVar49._12_4_ = 0x3f000000;
      auVar49 = NEON_bsl(auVar48,auVar49,auVar55,1);
      auVar15._4_2_ = SUB42(fVar41,0);
      auVar15._0_4_ = fVar40;
      auVar15._6_2_ = (short)((uint)fVar41 >> 0x10);
      auVar15._8_2_ = SUB42(fVar43,0);
      auVar15._10_2_ = (short)((uint)fVar43 >> 0x10);
      auVar15._12_2_ = SUB42(fVar42,0);
      auVar15._14_2_ = (short)((uint)fVar42 >> 0x10);
      auVar55 = NEON_fcmgt(auVar15,0,4);
      auVar48._8_4_ = 0xbf000000;
      auVar48._0_8_ = 0xbf000000bf000000;
      auVar48._12_4_ = 0xbf000000;
      auVar56._8_4_ = 0x3f000000;
      auVar56._0_8_ = 0x3f0000003f000000;
      auVar56._12_4_ = 0x3f000000;
      auVar56 = NEON_bsl(auVar55,auVar56,auVar48,1);
      fVar60 = (pfVar1[0xd] - fVar38) / fVar36;
      fVar61 = (pfVar1[0x10] - fVar38) / fVar36;
      fVar62 = (pfVar1[0x13] - fVar38) / fVar36;
      fVar63 = (pfVar1[0x16] - fVar38) / fVar36;
      auVar55 = NEON_fcmgt(auVar58,0,4);
      auVar57._8_4_ = 0xbf000000;
      auVar57._0_8_ = 0xbf000000bf000000;
      auVar57._12_4_ = 0xbf000000;
      auVar9._8_4_ = 0x3f000000;
      auVar9._0_8_ = 0x3f0000003f000000;
      auVar9._12_4_ = 0x3f000000;
      auVar55 = NEON_bsl(auVar55,auVar9,auVar57,1);
      fVar51 = (pfVar1[0xe] - fVar39) / fVar35;
      fVar52 = (pfVar1[0x11] - fVar39) / fVar35;
      fVar53 = (pfVar1[0x14] - fVar39) / fVar35;
      fVar54 = (pfVar1[0x17] - fVar39) / fVar35;
      auVar16._4_4_ = fVar61;
      auVar16._0_4_ = fVar60;
      auVar16._8_4_ = fVar62;
      auVar16._12_4_ = fVar63;
      auVar48 = NEON_fcmgt(auVar16,0,4);
      auVar59._8_4_ = 0xbf000000;
      auVar59._0_8_ = 0xbf000000bf000000;
      auVar59._12_4_ = 0xbf000000;
      auVar10._8_4_ = 0x3f000000;
      auVar10._0_8_ = 0x3f0000003f000000;
      auVar10._12_4_ = 0x3f000000;
      auVar48 = NEON_bsl(auVar48,auVar10,auVar59,1);
      fVar44 = (pfVar1[2] - fVar39) / fVar35;
      fVar45 = (pfVar1[5] - fVar39) / fVar35;
      fVar46 = (pfVar1[8] - fVar39) / fVar35;
      fVar47 = (pfVar1[0xb] - fVar39) / fVar35;
      auVar14._4_4_ = fVar52;
      auVar14._0_4_ = fVar51;
      auVar14._8_4_ = fVar53;
      auVar14._12_4_ = fVar54;
      auVar57 = NEON_fcmgt(auVar14,0,4);
      auVar7._8_4_ = 0xbf000000;
      auVar7._0_8_ = 0xbf000000bf000000;
      auVar7._12_4_ = 0xbf000000;
      auVar11._8_4_ = 0x3f000000;
      auVar11._0_8_ = 0x3f0000003f000000;
      auVar11._12_4_ = 0x3f000000;
      auVar57 = NEON_bsl(auVar57,auVar11,auVar7,1);
      auVar13._4_4_ = fVar45;
      auVar13._0_4_ = fVar44;
      auVar13._8_4_ = fVar46;
      auVar13._12_4_ = fVar47;
      auVar59 = NEON_fcmgt(auVar13,0,4);
      auVar8._8_4_ = 0xbf000000;
      auVar8._0_8_ = 0xbf000000bf000000;
      auVar8._12_4_ = 0xbf000000;
      auVar12._8_4_ = 0x3f000000;
      auVar12._0_8_ = 0x3f0000003f000000;
      auVar12._12_4_ = 0x3f000000;
      auVar59 = NEON_bsl(auVar59,auVar12,auVar8,1);
      *puVar2 = (short)(int)(auVar50._0_4_ + auVar49._0_4_);
      puVar2[1] = (short)(int)(fVar40 + auVar56._0_4_);
      puVar2[2] = (short)(int)(fVar44 + auVar59._0_4_);
      puVar2[3] = (short)(int)(auVar50._4_4_ + auVar49._4_4_);
      puVar2[4] = (short)(int)(fVar41 + auVar56._4_4_);
      puVar2[5] = (short)(int)(fVar45 + auVar59._4_4_);
      puVar2[6] = (short)(int)(auVar50._8_4_ + auVar49._8_4_);
      puVar2[7] = (short)(int)(fVar43 + auVar56._8_4_);
      puVar2[8] = (short)(int)(fVar46 + auVar59._8_4_);
      puVar2[9] = (short)(int)(auVar50._12_4_ + auVar49._12_4_);
      puVar2[10] = (short)(int)(fVar42 + auVar56._12_4_);
      puVar2[0xb] = (short)(int)(fVar47 + auVar59._12_4_);
      puVar2[0xc] = (short)(int)(auVar58._0_4_ + auVar55._0_4_);
      puVar2[0xd] = (short)(int)(fVar60 + auVar48._0_4_);
      puVar2[0xe] = (short)(int)(fVar51 + auVar57._0_4_);
      puVar2[0xf] = (short)(int)(auVar58._4_4_ + auVar55._4_4_);
      puVar2[0x10] = (short)(int)(fVar61 + auVar48._4_4_);
      puVar2[0x11] = (short)(int)(fVar52 + auVar57._4_4_);
      puVar2[0x12] = (short)(int)(auVar58._8_4_ + auVar55._8_4_);
      puVar2[0x13] = (short)(int)(fVar62 + auVar48._8_4_);
      puVar2[0x14] = (short)(int)(fVar53 + auVar57._8_4_);
      puVar2[0x15] = (short)(int)(auVar58._12_4_ + auVar55._12_4_);
      puVar2[0x16] = (short)(int)(fVar63 + auVar48._12_4_);
      puVar2[0x17] = (short)(int)(fVar54 + auVar57._12_4_);
    } while (uVar24 != 0);
    if (uVar26 != uVar33) goto LAB_00af90b8;
  }
  local_148 = (uchar *)0x0;
  local_14c = 0;
  local_78 = 0;
  uStack_80 = 0;
  local_88 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  local_c8 = 0;
  uStack_d0 = 0;
  local_d8 = 0;
  uStack_e0 = 0;
  local_e8 = 0;
  uStack_f0 = 0;
  local_f8 = 0;
  uStack_100 = 0;
  local_108 = 0;
  uStack_110 = 0;
  local_118 = 0;
  pvStack_120 = (void *)0x0;
  local_128 = (void *)0x0;
  local_138 = (ulong)uVar17;
  pvStack_140 = pvVar25;
  pvStack_130 = __s;
                    /* try { // try from 00af9184 to 00af918b has its CatchHandler @ 00af9454 */
  pvStack_120 = operator_new__(uVar32);
  memset(pvStack_120,0,uVar32);
                    /* try { // try from 00af91a0 to 00af91a7 has its CatchHandler @ 00af9454 */
  local_128 = operator_new__(uVar32 << 1);
  memset(local_128,1,uVar32 << 1);
  local_118 = CONCAT44(6,uVar18);
  uStack_9c = *(undefined4 *)(puVar21 + 1);
  uStack_a4 = (undefined4)*puVar21;
  uStack_a0 = (undefined4)((ulong)*puVar21 >> 0x20);
  local_98 = *puVar22;
  local_78 = CONCAT71(local_78._1_7_,1);
  uStack_90 = CONCAT44(uStack_90._4_4_,*(undefined4 *)(puVar22 + 1));
  uStack_80 = CONCAT44(fVar36,fVar35);
                    /* try { // try from 00af920c to 00af929b has its CatchHandler @ 00af9454 */
  if ((*(long *)this == 0) ||
     (uVar32 = dtCreateNavMeshData((dtNavMeshCreateParams *)&pvStack_140,&local_148,&local_14c),
     (uVar32 & 1) == 0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0))
    {
                    /* try { // try from 00af92ec to 00af92f7 has its CatchHandler @ 00af9424 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Could not ceate navigation mesh.\n");
  }
  iVar19 = dtNavMesh::init(*(dtNavMesh **)this,local_148,local_14c,1);
  if (iVar19 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0))
    {
                    /* try { // try from 00af9384 to 00af938f has its CatchHandler @ 00af941c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Could not init navigation mesh.\n");
  }
  iVar19 = dtNavMeshQuery::init(*(dtNavMeshQuery **)(this + 8),*(dtNavMesh **)this,uVar18);
  if (iVar19 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0))
    {
                    /* try { // try from 00af93d4 to 00af93df has its CatchHandler @ 00af9418 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Could not init navigation query object.\n");
  }
  operator_delete__(__s);
  operator_delete__(pvVar25);
LAB_00af92ac:
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


