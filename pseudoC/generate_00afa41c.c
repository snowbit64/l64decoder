// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generate
// Entry Point: 00afa41c
// Size: 2756 bytes
// Signature: undefined __cdecl generate(NavigationMeshGeneratorDesc * param_1)


/* RecastNavigationMeshGenerator::generate(NavigationMeshGeneratorDesc&) */

undefined8 RecastNavigationMeshGenerator::generate(NavigationMeshGeneratorDesc *param_1)

{
  undefined (*pauVar1) [16];
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined auVar9 [16];
  uint3 uVar10;
  int iVar11;
  void *__s;
  rcHeightfield *prVar12;
  uchar *__s_00;
  rcCompactHeightfield *prVar13;
  rcContourSet *prVar14;
  rcPolyMesh *prVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined (*pauVar23) [16];
  byte *pbVar24;
  ulong uVar25;
  float fVar26;
  uint uVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined uVar31;
  undefined uVar32;
  undefined uVar33;
  undefined uVar34;
  undefined uVar35;
  undefined uVar36;
  undefined uVar37;
  undefined uVar38;
  undefined uVar39;
  undefined uVar40;
  undefined uVar41;
  undefined uVar42;
  undefined uVar43;
  undefined uVar44;
  undefined uVar45;
  undefined uVar46;
  float fVar47;
  float fVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int iVar52;
  float fVar53;
  undefined4 uVar54;
  int iVar55;
  int iVar56;
  int iVar57;
  int iVar58;
  float fVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  float fVar64;
  int iVar65;
  int iVar66;
  int iVar67;
  int iVar68;
  float fVar69;
  int iVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  int iVar74;
  int iVar75;
  int iVar76;
  int iVar77;
  int iVar78;
  int iVar79;
  int iVar80;
  int iVar81;
  uint5 uVar82;
  undefined auVar83 [16];
  uint5 uVar84;
  undefined auVar85 [16];
  undefined **local_d8;
  undefined2 local_d0;
  uint local_c8;
  uint uStack_c4;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  undefined8 local_94;
  int local_8c;
  int local_88;
  float local_84;
  undefined8 local_80;
  int local_78;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  local_b8 = *(float *)(param_1 + 0x38);
  fStack_b4 = *(float *)(param_1 + 0x3c);
  local_84 = *(float *)(param_1 + 0x58);
  local_d0 = 0x101;
  local_78 = 6;
  local_d8 = &PTR__rcContext_00fe7098;
  local_98 = *(float *)(param_1 + 0x28);
  local_8c = (int)(*(float *)(param_1 + 0x44) / local_b8);
  fVar26 = (float)*(undefined8 *)(param_1 + 0x4c);
  fVar47 = (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20);
  local_80 = CONCAT44((int)(fVar47 * fVar47),(int)(fVar26 * fVar26));
  iVar11 = (int)(float)(int)(*(float *)(param_1 + 0x48) / fStack_b4);
  local_94 = CONCAT17((char)((uint)iVar11 >> 0x18),
                      CONCAT16((char)((uint)iVar11 >> 0x10),
                               CONCAT15((char)((uint)iVar11 >> 8),
                                        CONCAT14((char)iVar11,
                                                 (int)(float)(int)((float)*(undefined8 *)
                                                                           (param_1 + 0x40) /
                                                                  fStack_b4)))));
  local_88 = (int)(*(float *)(param_1 + 0x54) / local_b8);
  rcCalcBounds(*(float **)param_1,*(int *)(param_1 + 8),&local_b0,&fStack_a4);
  rcCalcGridSize(&local_b0,&fStack_a4,local_b8,(int *)&local_c8,(int *)((ulong)&local_c8 | 4));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0)) {
                    /* try { // try from 00afabd4 to 00afabdf has its CatchHandler @ 00afaf08 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    (double)*(float *)(param_1 + 0x38),SUB81((double)*(float *)(param_1 + 0x3c),0),
                    (double)*(float *)(param_1 + 0x28),(double)*(float *)(param_1 + 0x44),
                    (double)*(float *)(param_1 + 0x40),
                    " Cell size: %f Cell height: %f Slope angle: %f Agent radius: %f Agent height:%f\n"
                   );
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0)) {
                    /* try { // try from 00afac1c to 00afac27 has its CatchHandler @ 00afaf04 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    " Input: %u triangles %u vertices\n",(ulong)*(uint *)(param_1 + 0x18),
                    (ulong)*(uint *)(param_1 + 8));
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0)) {
                    /* try { // try from 00afac64 to 00afac6f has its CatchHandler @ 00afaf00 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,(double)local_b0,
                    SUB81((double)fStack_ac,0),(double)local_a8,(double)fStack_a4,(double)local_a0,
                    (double)fStack_9c," Bounds: %f,%f,%f to %f,%f,%f\n");
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0)) {
                    /* try { // try from 00afacac to 00afacb7 has its CatchHandler @ 00afaefc */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                    " Grid: %d x %d = %d cells\n",(ulong)local_c8,(ulong)uStack_c4,
                    (ulong)(uStack_c4 * local_c8));
  uVar7 = *(int *)(param_1 + 0x18) * 3;
  __s = operator_new__((ulong)uVar7 << 2);
  *(void **)(param_1 + 0x20) = __s;
  memset(__s,0,(ulong)uVar7 << 2);
  if (uVar7 != 0) {
    uVar27 = 0;
    lVar19 = *(long *)param_1;
    lVar20 = *(long *)(param_1 + 0x10);
    do {
      uVar5 = uVar27 + 1;
      uVar6 = uVar27 + 2;
      pfVar2 = (float *)(lVar19 + (ulong)(uint)(*(int *)(lVar20 + (ulong)uVar27 * 4) * 3) * 4);
      pfVar3 = (float *)(lVar19 + (ulong)(uint)(*(int *)(lVar20 + (ulong)uVar5 * 4) * 3) * 4);
      pfVar4 = (float *)(lVar19 + (ulong)(uint)(*(int *)(lVar20 + (ulong)uVar6 * 4) * 3) * 4);
      fVar64 = *pfVar3 - *pfVar2;
      fVar47 = pfVar3[1] - pfVar2[1];
      fVar53 = pfVar4[1] - pfVar2[1];
      fVar48 = *pfVar4 - *pfVar2;
      fVar59 = pfVar3[2] - pfVar2[2];
      fVar69 = pfVar4[2] - pfVar2[2];
      fVar26 = (float)NEON_fmadd(fVar59,fVar48,fVar69 * -fVar64);
      fVar59 = (float)NEON_fmadd(fVar47,fVar69,fVar53 * -fVar59);
      fVar47 = (float)NEON_fmadd(fVar64,fVar53,fVar48 * -fVar47);
      uVar54 = NEON_fmadd(fVar59,fVar59,fVar26 * fVar26);
      fVar53 = (float)NEON_fmadd(fVar47,fVar47,uVar54);
      fVar48 = 1.0;
      if (1e-06 < fVar53) {
        fVar48 = 1.0 / SQRT(fVar53);
      }
      uVar25 = (ulong)uVar27;
      uVar27 = uVar27 + 3;
      *(float *)((long)__s + uVar25 * 4) = fVar59 * fVar48;
      *(float *)((long)__s + (ulong)uVar5 * 4) = fVar26 * fVar48;
      *(float *)((long)__s + (ulong)uVar6 * 4) = fVar47 * fVar48;
    } while (uVar27 < uVar7);
  }
  prVar12 = (rcHeightfield *)rcAllocHeightfield();
  if (prVar12 == (rcHeightfield *)0x0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0))
    {
                    /* try { // try from 00afacf4 to 00afacff has its CatchHandler @ 00afaef8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar16 = "Error: buildNavigation, out of memory \'solid\'.\n";
LAB_00afaadc:
    puVar18 = &LogManager::getInstance()::singletonLogManager;
LAB_00afaae0:
    LogManager::errorf((char *)puVar18,pcVar16);
  }
  else {
    uVar25 = rcCreateHeightfield((rcContext *)&local_d8,prVar12,local_c8,uStack_c4,&local_b0,
                                 &fStack_a4,local_b8,fStack_b4);
    if ((uVar25 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0
         )) {
                    /* try { // try from 00afad3c to 00afad47 has its CatchHandler @ 00afaef4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar16 = "Error: buildNavigation, could not create solid heightfield.\n";
      goto LAB_00afaadc;
    }
    uVar7 = *(uint *)(param_1 + 0x18);
    __s_00 = (uchar *)operator_new__((ulong)uVar7);
    memset(__s_00,0,(ulong)uVar7);
    rcMarkWalkableTriangles
              ((rcContext *)&local_d8,local_98,*(float **)param_1,uVar7 * 3,
               *(int **)(param_1 + 0x10),uVar7,__s_00);
    uVar7 = *(uint *)(param_1 + 0x18);
    uVar25 = (ulong)uVar7;
    if (uVar7 == 0) {
      uVar27 = 0;
    }
    else {
      if (uVar7 < 8) {
        uVar21 = 0;
        uVar27 = 0;
      }
      else {
        if (uVar7 < 0x20) {
          uVar27 = 0;
          uVar22 = 0;
        }
        else {
          uVar21 = uVar25 & 0xffffffe0;
          pauVar23 = (undefined (*) [16])(__s_00 + 0x10);
          iVar11 = 0;
          iVar28 = 0;
          iVar30 = 0;
          iVar29 = 0;
          iVar60 = 0;
          iVar61 = 0;
          iVar62 = 0;
          iVar63 = 0;
          iVar49 = 0;
          iVar50 = 0;
          iVar51 = 0;
          iVar52 = 0;
          iVar55 = 0;
          iVar56 = 0;
          iVar57 = 0;
          iVar58 = 0;
          iVar65 = 0;
          iVar66 = 0;
          iVar67 = 0;
          iVar68 = 0;
          iVar78 = 0;
          iVar79 = 0;
          iVar80 = 0;
          iVar81 = 0;
          iVar70 = 0;
          iVar71 = 0;
          iVar72 = 0;
          iVar73 = 0;
          iVar74 = 0;
          iVar75 = 0;
          iVar76 = 0;
          iVar77 = 0;
          uVar22 = uVar21;
          do {
            pauVar1 = pauVar23 + -1;
            auVar9 = *pauVar23;
            pauVar23 = pauVar23 + 2;
            uVar22 = uVar22 - 0x20;
            auVar83[8] = 0x3f;
            auVar83._0_8_ = 0x3f3f3f3f3f3f3f3f;
            auVar83[9] = 0x3f;
            auVar83[10] = 0x3f;
            auVar83[11] = 0x3f;
            auVar83[12] = 0x3f;
            auVar83[13] = 0x3f;
            auVar83[14] = 0x3f;
            auVar83[15] = 0x3f;
            auVar83 = NEON_cmtst(*pauVar1,auVar83,1);
            auVar85[8] = 0x3f;
            auVar85._0_8_ = 0x3f3f3f3f3f3f3f3f;
            auVar85[9] = 0x3f;
            auVar85[10] = 0x3f;
            auVar85[11] = 0x3f;
            auVar85[12] = 0x3f;
            auVar85[13] = 0x3f;
            auVar85[14] = 0x3f;
            auVar85[15] = 0x3f;
            auVar85 = NEON_cmtst(auVar9,auVar85,1);
            uVar82 = CONCAT14(auVar83[9],(uint)(auVar83[8] & 1)) & 0x1ffffffff;
            uVar84 = CONCAT14(auVar85[13],(uint)(auVar85[12] & 1)) & 0x1ffffffff;
            iVar55 = iVar55 + (uint)(auVar83[12] & 1);
            iVar56 = iVar56 + (uint)(auVar83[13] & 1);
            iVar57 = iVar57 + (uint)(auVar83[14] & 1);
            iVar58 = iVar58 + (uint)(auVar83[15] & 1);
            iVar49 = iVar49 + (int)uVar82;
            iVar50 = iVar50 + (uint)(byte)(uVar82 >> 0x20);
            iVar51 = iVar51 + (uint)(auVar83[10] & 1);
            iVar52 = iVar52 + (uint)(auVar83[11] & 1);
            iVar60 = iVar60 + (uint)(auVar83[4] & 1);
            iVar61 = iVar61 + (uint)(auVar83[5] & 1);
            iVar62 = iVar62 + (uint)(auVar83[6] & 1);
            iVar63 = iVar63 + (uint)(auVar83[7] & 1);
            iVar11 = iVar11 + (uint)(auVar83[0] & 1);
            iVar28 = iVar28 + (uint)(auVar83[1] & 1);
            iVar30 = iVar30 + (uint)(auVar83[2] & 1);
            iVar29 = iVar29 + (uint)(auVar83[3] & 1);
            iVar74 = iVar74 + (int)uVar84;
            iVar75 = iVar75 + (uint)(byte)(uVar84 >> 0x20);
            iVar76 = iVar76 + (uint)(auVar85[14] & 1);
            iVar77 = iVar77 + (uint)(auVar85[15] & 1);
            iVar70 = iVar70 + (uint)(auVar85[8] & 1);
            iVar71 = iVar71 + (uint)(auVar85[9] & 1);
            iVar72 = iVar72 + (uint)(auVar85[10] & 1);
            iVar73 = iVar73 + (uint)(auVar85[11] & 1);
            iVar78 = iVar78 + (uint)(auVar85[4] & 1);
            iVar79 = iVar79 + (uint)(auVar85[5] & 1);
            iVar80 = iVar80 + (uint)(auVar85[6] & 1);
            iVar81 = iVar81 + (uint)(auVar85[7] & 1);
            iVar65 = iVar65 + (uint)(auVar85[0] & 1);
            iVar66 = iVar66 + (uint)(auVar85[1] & 1);
            iVar67 = iVar67 + (uint)(auVar85[2] & 1);
            iVar68 = iVar68 + (uint)(auVar85[3] & 1);
          } while (uVar22 != 0);
          uVar27 = iVar65 + iVar11 + iVar70 + iVar49 + iVar78 + iVar60 + iVar74 + iVar55 +
                   iVar66 + iVar28 + iVar71 + iVar50 + iVar79 + iVar61 + iVar75 + iVar56 +
                   iVar67 + iVar30 + iVar72 + iVar51 + iVar80 + iVar62 + iVar76 + iVar57 +
                   iVar68 + iVar29 + iVar73 + iVar52 + iVar81 + iVar63 + iVar77 + iVar58;
          if (uVar21 == uVar25) goto LAB_00afa928;
          uVar22 = uVar21;
          if ((uVar7 & 0x18) == 0) goto LAB_00afa90c;
        }
        iVar28 = 0;
        iVar30 = 0;
        uVar31 = 0;
        uVar32 = 0;
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        uVar37 = 0;
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        uVar41 = 0;
        uVar42 = 0;
        uVar43 = 0;
        uVar44 = 0;
        uVar45 = 0;
        uVar46 = 0;
        uVar21 = uVar25 & 0xfffffff8;
        lVar19 = uVar22 - uVar21;
        iVar11 = 0;
        puVar18 = (undefined8 *)(__s_00 + uVar22);
        do {
          lVar19 = lVar19 + 8;
          uVar17 = NEON_cmtst(*puVar18,0x3f3f3f3f3f3f3f3f,1);
          uVar10 = CONCAT12((char)((ulong)uVar17 >> 8),(short)uVar17) & 0xff00ff;
          iVar29 = CONCAT13(uVar34,CONCAT12(uVar33,CONCAT11(uVar32,uVar31))) +
                   (uint)((byte)((ulong)uVar17 >> 0x20) & 1);
          uVar31 = (undefined)iVar29;
          uVar32 = (undefined)((uint)iVar29 >> 8);
          uVar33 = (undefined)((uint)iVar29 >> 0x10);
          uVar34 = (undefined)((uint)iVar29 >> 0x18);
          iVar49 = CONCAT13(uVar38,CONCAT12(uVar37,CONCAT11(uVar36,uVar35))) +
                   (uint)((byte)((ulong)uVar17 >> 0x28) & 1);
          uVar35 = (undefined)iVar49;
          uVar36 = (undefined)((uint)iVar49 >> 8);
          uVar37 = (undefined)((uint)iVar49 >> 0x10);
          uVar38 = (undefined)((uint)iVar49 >> 0x18);
          iVar50 = CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) +
                   (uint)((byte)((ulong)uVar17 >> 0x30) & 1);
          uVar39 = (undefined)iVar50;
          uVar40 = (undefined)((uint)iVar50 >> 8);
          uVar41 = (undefined)((uint)iVar50 >> 0x10);
          uVar42 = (undefined)((uint)iVar50 >> 0x18);
          iVar51 = CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) +
                   (uint)((byte)((ulong)uVar17 >> 0x38) & 1);
          uVar43 = (undefined)iVar51;
          uVar44 = (undefined)((uint)iVar51 >> 8);
          uVar45 = (undefined)((uint)iVar51 >> 0x10);
          uVar46 = (undefined)((uint)iVar51 >> 0x18);
          uVar27 = uVar27 + ((byte)uVar10 & 1);
          iVar11 = iVar11 + (uint)((byte)(uVar10 >> 0x10) & 1);
          iVar28 = iVar28 + (uint)((byte)((ulong)uVar17 >> 0x10) & 1);
          iVar30 = iVar30 + (uint)((byte)((ulong)uVar17 >> 0x18) & 1);
          puVar18 = puVar18 + 1;
        } while (lVar19 != 0);
        uVar27 = uVar27 + iVar29 + iVar11 + iVar49 + iVar28 + iVar50 + iVar30 + iVar51;
        if (uVar21 == uVar25) goto LAB_00afa928;
      }
LAB_00afa90c:
      lVar19 = uVar25 - uVar21;
      pbVar24 = __s_00 + uVar21;
      do {
        if ((*pbVar24 & 0x3f) != 0) {
          uVar27 = uVar27 + 1;
        }
        lVar19 = lVar19 + -1;
        pbVar24 = pbVar24 + 1;
      } while (lVar19 != 0);
    }
LAB_00afa928:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0))
    {
                    /* try { // try from 00afad84 to 00afad8f has its CatchHandler @ 00afaef0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      " Walkable: %d triangles\n",(ulong)uVar27);
    rcRasterizeTriangles
              ((rcContext *)&local_d8,*(float **)param_1,*(int *)(param_1 + 0x18) * 3,
               *(int **)(param_1 + 0x10),__s_00,*(int *)(param_1 + 0x18),prVar12,local_94._4_4_);
    rcFilterLowHangingWalkableObstacles((rcContext *)&local_d8,local_94._4_4_,prVar12);
    rcFilterLedgeSpans((rcContext *)&local_d8,(int)local_94,local_94._4_4_,prVar12);
    rcFilterWalkableLowHeightSpans((rcContext *)&local_d8,(int)local_94,prVar12);
    prVar13 = (rcCompactHeightfield *)rcAllocCompactHeightfield();
    if (prVar13 == (rcCompactHeightfield *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0
         )) {
                    /* try { // try from 00afadcc to 00afadd7 has its CatchHandler @ 00afaeec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar16 = "Error: buildNavigation: Out of memory \'chf\'.";
      goto LAB_00afaadc;
    }
    uVar25 = rcBuildCompactHeightfield
                       ((rcContext *)&local_d8,(int)local_94,local_94._4_4_,prVar12,prVar13);
    if ((uVar25 & 1) != 0) {
      uVar25 = rcErodeWalkableArea((rcContext *)&local_d8,local_8c,prVar13);
      if ((uVar25 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar11 != 0)) {
                    /* try { // try from 00afae5c to 00afae67 has its CatchHandler @ 00afaee4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar16 = "Error: buildNavigation: Could not erode.";
        goto LAB_00afab48;
      }
      uVar25 = rcBuildDistanceField((rcContext *)&local_d8,prVar13);
      if ((uVar25 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar11 != 0)) {
                    /* try { // try from 00afaea4 to 00afaeaf has its CatchHandler @ 00afaee0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar16 = "Error: buildNavigation: Could not build distance field.";
        goto LAB_00afaadc;
      }
      uVar25 = rcBuildRegions((rcContext *)&local_d8,prVar13,0,(int)local_80,local_80._4_4_);
      if ((uVar25 & 1) == 0) {
        puVar18 = (undefined8 *)LogManager::getInstance();
        pcVar16 = "Error: buildNavigation: Could not build regions.";
      }
      else {
        prVar14 = (rcContourSet *)rcAllocContourSet();
        if (prVar14 == (rcContourSet *)0x0) {
          puVar18 = (undefined8 *)LogManager::getInstance();
          pcVar16 = "Error: buildNavigation: Out of memory \'cset\'.";
        }
        else {
          uVar25 = rcBuildContours((rcContext *)&local_d8,prVar13,local_84,local_88,prVar14,1);
          if ((uVar25 & 1) == 0) {
            puVar18 = (undefined8 *)LogManager::getInstance();
            pcVar16 = "Error: buildNavigation: Could not create contours.";
          }
          else {
            prVar15 = (rcPolyMesh *)rcAllocPolyMesh();
            if (prVar15 == (rcPolyMesh *)0x0) {
              puVar18 = (undefined8 *)LogManager::getInstance();
              pcVar16 = "Error: buildNavigation: Out of memory \'pmesh\'.";
            }
            else {
              uVar25 = rcBuildPolyMesh((rcContext *)&local_d8,prVar14,local_78,prVar15);
              if ((uVar25 & 1) != 0) {
                iVar11 = *(int *)(prVar15 + 0x28);
                iVar28 = *(int *)(prVar15 + 0x2c);
                iVar30 = *(int *)(prVar15 + 0x34);
                pcVar16 = (char *)LogManager::getInstance();
                LogManager::infof(pcVar16,"Output: %i polygons %i vertices( %i KB)\n",
                                  (ulong)*(uint *)(prVar15 + 0x2c),(ulong)*(uint *)(prVar15 + 0x28),
                                  (ulong)(uint)(int)((float)((iVar11 * 3 + iVar28 * iVar30 * 2) * 2)
                                                    * 0.0009765625));
                uVar17 = convert(prVar15,(rcConfig *)&local_c8);
                rcFreeHeightField(prVar12);
                rcFreeCompactHeightfield(prVar13);
                rcFreeContourSet(prVar14);
                rcFreePolyMesh(prVar15);
                operator_delete__(__s_00);
                goto LAB_00afaae8;
              }
              puVar18 = (undefined8 *)LogManager::getInstance();
              pcVar16 = "Error: buildNavigation: Could not triangulate contours.";
            }
          }
        }
      }
      goto LAB_00afaae0;
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar11 != 0))
    {
                    /* try { // try from 00afae14 to 00afae1f has its CatchHandler @ 00afaee8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar16 = "Error: buildNavigation: Could not build compact data.";
LAB_00afab48:
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar16);
    rcFreeCompactHeightfield(prVar13);
  }
  uVar17 = 0;
LAB_00afaae8:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


