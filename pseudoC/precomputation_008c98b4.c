// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: precomputation
// Entry Point: 008c98b4
// Size: 10284 bytes
// Signature: undefined __thiscall precomputation(FillPlaneGeometry * this, IndexedTriangleSet * param_1)


/* FillPlaneGeometry::precomputation(IndexedTriangleSet*) */

byte __thiscall
FillPlaneGeometry::precomputation(FillPlaneGeometry *this,IndexedTriangleSet *param_1)

{
  undefined2 *puVar1;
  ushort **ppuVar2;
  uint uVar3;
  short *psVar4;
  void **ppvVar5;
  short *psVar6;
  short *psVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint **ppuVar13;
  bool bVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  Brep *this_00;
  ulong uVar21;
  uint *puVar22;
  char *pcVar23;
  FillPlaneGeometry *this_01;
  uint **ppuVar24;
  void *pvVar25;
  void *__dest;
  undefined2 *puVar26;
  uint *puVar27;
  long *plVar28;
  long lVar29;
  undefined8 uVar30;
  uint uVar31;
  ulong uVar32;
  ushort uVar33;
  uint uVar34;
  long lVar35;
  int *piVar36;
  void **ppvVar37;
  short *psVar38;
  ushort *puVar39;
  float **ppfVar40;
  float **ppfVar41;
  undefined4 *puVar42;
  long lVar43;
  int *piVar44;
  undefined4 *puVar45;
  ulong uVar46;
  ushort *puVar47;
  long lVar48;
  short **ppsVar49;
  uint uVar50;
  short *psVar51;
  float **ppfVar52;
  float *pfVar53;
  long lVar54;
  short **ppsVar55;
  float *pfVar56;
  float *pfVar57;
  undefined8 *puVar58;
  float *pfVar59;
  short *psVar60;
  ulong uVar61;
  ulong uVar62;
  int *piVar63;
  uint **ppuVar64;
  uint *puVar65;
  void *pvVar66;
  byte bVar67;
  undefined8 *puVar68;
  int *piVar69;
  short sVar70;
  size_t sVar71;
  long *plVar72;
  ulong uVar73;
  float fVar74;
  undefined8 uVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  undefined4 uVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined4 uVar94;
  int *local_1b8;
  undefined8 local_198;
  undefined8 local_190;
  char *local_188;
  void *local_180;
  void *local_178;
  ushort *local_168;
  uint *local_160;
  uint *local_158;
  uint *local_150;
  undefined4 *local_148;
  undefined4 *local_140;
  undefined4 *local_138;
  long local_130;
  long local_128;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  void *local_100;
  void *local_f8;
  undefined8 local_f0;
  uint **local_e8;
  uint **local_e0;
  uint **local_d8;
  undefined8 local_d0;
  float *local_c8;
  undefined8 local_c0;
  Brep *local_b8;
  void **ppvStack_b0;
  undefined4 local_a8;
  undefined2 local_a0;
  ushort uStack_9e;
  ushort uStack_9c;
  undefined2 uStack_9a;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  long local_80;
  
  lVar11 = tpidr_el0;
  local_80 = *(long *)(lVar11 + 0x28);
  uVar20 = IndexedTriangleSet::is16Bit();
  if ((uVar20 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0))
    {
                    /* try { // try from 008cbee4 to 008cbeef has its CatchHandler @ 008cc100 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar23 = "Error: Fill volume input mesh has over 64K vertices.\n";
  }
  else {
    *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) | 2;
    this_00 = (Brep *)BrepUtil::createBrepFromIndexedTriangleSet(param_1,false,true);
    *(Brep **)(this + 0x188) = this_00;
    if (this_00 == (Brep *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0
         )) {
                    /* try { // try from 008cbf34 to 008cbf3f has its CatchHandler @ 008cc0fc */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar23 = "Error: Fill volume input mesh has non-manifold edges.\n";
    }
    else {
      uVar20 = Brep::isClosed();
      if ((uVar20 & 1) != 0) {
        Brep::bbox(this_00,(Vector3 *)(this + 0x98),(Vector3 *)(this + 0xa4));
        *(float *)(this + 0x11c) =
             (*(float *)(this + 0xa8) - *(float *)(this + 0x9c)) / *(float *)(this + 0x114);
        uVar34 = (uint)((ulong)(*(long *)(this_00 + 0x2f70) - *(long *)(this_00 + 0x2f68)) >> 5);
        if (uVar34 != 0) {
          iVar19 = 0;
          uVar18 = 0;
          do {
            Brep::getFaceConeIndices(this_00,uVar18,&local_a0);
            lVar35 = *(long *)(this_00 + 0x2f50);
            lVar43 = *(long *)(this_00 + 0x2ef0);
            fVar74 = *(float *)(this + 0x9c);
            if (((ABS(*(float *)(lVar43 + (ulong)*(ushort *)
                                                  (lVar35 + (ulong)CONCAT11(local_a0._1_1_,
                                                                            (undefined)local_a0) *
                                                            0xc) * 0x10 + 4) - fVar74) < 0.01) &&
                (ABS(*(float *)(lVar43 + (ulong)*(ushort *)(lVar35 + (ulong)uStack_9e * 0xc) * 0x10
                               + 4) - fVar74) < 0.01)) &&
               (ABS(*(float *)(lVar43 + (ulong)*(ushort *)(lVar35 + (ulong)uStack_9c * 0xc) * 0x10 +
                              4) - fVar74) < 0.01)) {
              iVar19 = iVar19 + 1;
            }
            uVar18 = uVar18 + 1;
          } while (uVar34 != uVar18);
          if (iVar19 != 0) {
            lVar35 = *(long *)(this_00 + 0x2ef0);
            fVar74 = *(float *)(this + 0xa8);
            uVar20 = 0;
            uVar46 = (ulong)(*(long *)(this_00 + 0x2ef8) - lVar35) >> 4 & 0xffff;
            uVar21 = uVar20;
            if ((int)uVar46 != 0) {
              pfVar53 = (float *)(lVar35 + 4);
              do {
                uVar21 = uVar20;
                if (ABS(*pfVar53 - fVar74) <= 0.01) break;
                uVar20 = uVar20 + 1;
                pfVar53 = pfVar53 + 4;
                uVar21 = (ulong)(*(long *)(this_00 + 0x2ef8) - lVar35) >> 4;
              } while (uVar46 != uVar20);
            }
            local_e8 = (uint **)0x0;
            local_e0 = (uint **)0x0;
            local_d8 = (uint **)0x0;
            lVar43 = *(long *)(this_00 + 0x2f50);
            lVar54 = *(long *)(this_00 + 0x2f68);
            uVar34 = *(uint *)(lVar43 + (ulong)*(ushort *)(lVar35 + (uVar21 & 0xffff) * 0x10 + 0xc)
                                        * 0xc + 4);
            uVar18 = uVar34;
            do {
              uVar20 = (ulong)uVar18;
              if (ABS(*(float *)(lVar35 + (ulong)*(ushort *)
                                                  (lVar43 + (ulong)*(ushort *)(lVar54 + uVar20 * 8)
                                                            * 0xc) * 0x10 + 4) - fVar74) <= 0.01) {
                uVar16 = uVar18 - 2;
                if ((uVar18 + 1 & 3) != 0) {
                  uVar16 = uVar18 + 1;
                }
                if (*(float *)(lVar35 + (ulong)*(ushort *)
                                                (lVar43 + (ulong)*(ushort *)
                                                                  (lVar54 + (ulong)uVar16 * 8) * 0xc
                                                ) * 0x10 + 4) - fVar74 < -0.01) {
                  if (uVar18 != 0xffffffff) goto LAB_008c9c1c;
                  break;
                }
              }
              uVar16 = uVar18 + 2;
              if ((uVar18 - 1 & 3) != 0) {
                uVar16 = uVar18 - 1;
              }
              uVar18 = *(uint *)(lVar54 + (ulong)uVar16 * 8 + 4);
            } while (uVar18 != uVar34);
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar19 != 0)) {
                    /* try { // try from 008cc030 to 008cc03b has its CatchHandler @ 008cc0e0 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
                    /* try { // try from 008c9de4 to 008c9df7 has its CatchHandler @ 008cc254 */
            LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                               "Error: A vertex in the fill volume top plane is not connected to other top plane vertices.\n"
                              );
            goto LAB_008c9df8;
          }
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
           iVar19 != 0)) {
                    /* try { // try from 008cbfd4 to 008cbfdf has its CatchHandler @ 008cc0f4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Fill volume input mesh has no faces in the bottom plane of its bounding box.\n"
                          );
        bVar67 = 0;
        goto LAB_008c9a8c;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0
         )) {
                    /* try { // try from 008cbf84 to 008cbf8f has its CatchHandler @ 008cc0f8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar23 = "Error: Fill volume input mesh should be a closed manifold.\n";
    }
  }
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar23);
  bVar67 = 0;
  goto LAB_008c9a8c;
LAB_008ca728:
  uVar62 = uVar46 + 1;
  uVar61 = uVar46 & 0xffffffff;
  uVar46 = uVar62;
  if (uVar62 == (uVar21 & 0xffff)) goto LAB_008ca818;
  goto LAB_008ca73c;
LAB_008cb324:
  uVar61 = uVar61 + 1;
  uVar18 = uVar50;
  puVar27 = local_158;
  if (uVar61 == (uVar34 & 0xffff)) goto joined_r0x008cb57c;
  goto LAB_008cb33c;
  while ((uint)uVar20 != uVar18) {
LAB_008c9c1c:
    local_a0._0_1_ = 0;
    local_a0._1_1_ = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    uStack_9a = 0;
    local_98._0_4_ = 0;
    local_98._4_4_ = 0;
    local_90._0_4_ = 0;
    local_90._4_4_ = 0;
                    /* try { // try from 008c9c24 to 008c9ca7 has its CatchHandler @ 008cc2fc */
    uVar21 = computeSinglePolyline(this,(vector *)&local_a0,this_00,(uint)uVar20,false);
    if ((uVar21 & 1) == 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar19 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar19 != 0
         )) {
                    /* try { // try from 008c9d7c to 008c9d83 has its CatchHandler @ 008cc118 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: No path to fill volume bottom plane from a vertex via downward edges (local minimum).\n"
                        );
    }
    else {
      if (local_e0 < local_d8) {
        *local_e0 = (uint *)0x0;
        local_e0[1] = (uint *)0x0;
        local_e0[2] = (uint *)0x0;
        *local_e0 = (uint *)CONCAT26(uStack_9a,
                                     CONCAT24(uStack_9c,
                                              CONCAT22(uStack_9e,
                                                       CONCAT11(local_a0._1_1_,(undefined)local_a0))
                                             ));
        local_e0[1] = (uint *)CONCAT44(local_98._4_4_,(uint)local_98);
        local_a0._0_1_ = 0;
        local_a0._1_1_ = 0;
        uStack_9e = 0;
        uStack_9c = 0;
        uStack_9a = 0;
        local_98._0_4_ = 0;
        local_98._4_4_ = 0;
        local_e0[2] = (uint *)CONCAT44(local_90._4_4_,(undefined4)local_90);
        local_90._0_4_ = 0;
        local_90._4_4_ = 0;
        local_e0 = local_e0 + 3;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
        ::
        __push_back_slow_path<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>
                  ((vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
                    *)&local_e8,(vector *)&local_a0);
      }
      lVar35 = *(long *)(this_00 + 0x2f68);
      uVar34 = *(uint *)(lVar35 + uVar20 * 8 + 4);
      uVar16 = uVar34;
      do {
        uVar20 = (ulong)uVar16;
        if (ABS(*(float *)(*(long *)(this_00 + 0x2ef0) +
                           (ulong)*(ushort *)
                                   (*(long *)(this_00 + 0x2f50) +
                                   (ulong)*(ushort *)(lVar35 + uVar20 * 8) * 0xc) * 0x10 + 4) -
                fVar74) <= 0.01) {
          uVar31 = uVar16 - 2;
          if ((uVar16 + 1 & 3) != 0) {
            uVar31 = uVar16 + 1;
          }
          if (*(float *)(*(long *)(this_00 + 0x2ef0) +
                         (ulong)*(ushort *)
                                 (*(long *)(this_00 + 0x2f50) +
                                 (ulong)*(ushort *)(lVar35 + (ulong)uVar31 * 8) * 0xc) * 0x10 + 4) -
              fVar74 < -0.01) goto LAB_008c9d50;
        }
        uVar31 = uVar16 + 2;
        if ((uVar16 - 1 & 3) != 0) {
          uVar31 = uVar16 - 1;
        }
        uVar16 = *(uint *)(lVar35 + (ulong)uVar31 * 8 + 4);
      } while (uVar16 != uVar34);
      uVar20 = 0xffffffff;
    }
LAB_008c9d50:
    uVar87 = CONCAT22(uStack_9e,CONCAT11(local_a0._1_1_,(undefined)local_a0));
    pvVar66 = (void *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uVar87));
    if (pvVar66 != (void *)0x0) {
      local_98._4_4_ = (undefined4)((ulong)pvVar66 >> 0x20);
      local_98._0_4_ = uVar87;
      operator_delete(pvVar66);
    }
    if ((uVar21 & 1) == 0) goto LAB_008c9df8;
  }
  if ((ulong)(((long)local_e0 - (long)local_e8 >> 3) * -0x5555555555555555) < 3) {
                    /* try { // try from 008c9e74 to 008c9e83 has its CatchHandler @ 008cc1c8 */
    pcVar23 = (char *)LogManager::getInstance();
    LogManager::errorf(pcVar23,
                       "Error: Fill volume input mesh has no faces in the top plane of its bounding box.\n"
                      );
LAB_008c9df8:
    bVar67 = 0;
  }
  else {
    local_100 = (void *)0x0;
    local_f8 = (void *)0x0;
    local_f0 = 0;
    local_a0._0_1_ = 0;
    uStack_9c = 0xffff;
    uStack_9a = 0xffff;
    local_98._0_4_ = 0xffffffff;
                    /* try { // try from 008c9eb4 to 008c9ebf has its CatchHandler @ 008cc1a4 */
    std::__ndk1::
    vector<FillPlaneGeometry::EdgeInfo,std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo>>::resize
              ((vector<FillPlaneGeometry::EdgeInfo,std::__ndk1::allocator<FillPlaneGeometry::EdgeInfo>>
                *)&local_100,
               (ulong)(uint)((int)((ulong)(*(long *)(this_00 + 0x2f70) - *(long *)(this_00 + 0x2f68)
                                          ) >> 5) * 3),(EdgeInfo *)&local_a0);
    if ((long)local_e0 - (long)local_e8 != 0) {
      uVar21 = ((long)local_e0 - (long)local_e8 >> 3) * -0x5555555555555555;
      lVar35 = *(long *)(this_00 + 0x2f68);
      uVar20 = 0;
      do {
        puVar22 = local_e8[uVar20 * 3];
        uVar46 = (long)(local_e8 + uVar20 * 3)[1] - (long)puVar22;
        uVar61 = uVar46 >> 2 & 0xffffffff;
        uVar34 = (uint)(uVar46 >> 2);
        if (uVar34 != 0) {
          if (uVar61 < 2) {
            lVar54 = 0;
          }
          else {
            uVar46 = uVar46 >> 2 & 1;
            puVar27 = puVar22 + 1;
            lVar54 = uVar61 - uVar46;
            lVar43 = lVar54;
            do {
              puVar65 = puVar27 + -1;
              uVar18 = *puVar27;
              puVar27 = puVar27 + 2;
              lVar43 = lVar43 + -2;
              *(undefined *)
               ((long)local_100 + (ulong)(((*puVar65 & 3) + (*puVar65 >> 2) * 3) - 1) * 0xc) = 1;
              *(undefined *)
               ((long)local_100 + (ulong)(((uVar18 & 3) + (uVar18 >> 2) * 3) - 1) * 0xc) = 1;
            } while (lVar43 != 0);
            if (uVar46 == 0) goto LAB_008c9fbc;
          }
          lVar43 = lVar54 - uVar61;
          puVar27 = puVar22 + lVar54;
          do {
            bVar14 = lVar43 != -1;
            lVar43 = lVar43 + 1;
            *(undefined *)
             ((long)local_100 + (ulong)(((*puVar27 & 3) + (*puVar27 >> 2) * 3) - 1) * 0xc) = 1;
            puVar27 = puVar27 + 1;
          } while (bVar14);
        }
LAB_008c9fbc:
        uVar46 = uVar20 + 1 & 0xffffffff;
        if (1 < uVar34) {
          uVar62 = 0;
          if (uVar21 != 0) {
            uVar62 = uVar46 / uVar21;
          }
          uVar18 = *local_e8[(uVar46 - uVar62 * uVar21) * 3] - 1;
          uVar34 = *local_e8[(uVar46 - uVar62 * uVar21) * 3] + 2;
          if ((uVar18 & 3) != 0) {
            uVar34 = uVar18;
          }
          uVar62 = 1;
          do {
            uVar18 = puVar22[uVar62];
            uVar34 = *(uint *)(lVar35 + (ulong)uVar34 * 8 + 4);
            while (uVar34 != uVar18) {
              uVar16 = uVar34 + 2;
              if ((uVar34 - 1 & 3) != 0) {
                uVar16 = uVar34 - 1;
              }
              *(int *)((long)local_100 + (ulong)(((uVar34 & 3) + (uVar34 >> 2) * 3) - 1) * 0xc + 4)
                   = (int)uVar20;
              uVar34 = *(uint *)(lVar35 + (ulong)uVar16 * 8 + 4);
            }
            uVar62 = uVar62 + 1;
            iVar19 = *(int *)(lVar35 + (ulong)uVar18 * 8 + 4);
            uVar18 = iVar19 - 1;
            uVar34 = iVar19 + 2;
            if ((uVar18 & 3) != 0) {
              uVar34 = uVar18;
            }
          } while (uVar62 != uVar61);
        }
        uVar20 = uVar20 + 1;
      } while (uVar46 <= uVar21 && uVar21 - uVar46 != 0);
      if ((int)uVar21 != 0) {
        uVar21 = uVar21 & 0xffffffff;
        do {
          uVar21 = uVar21 - 1;
          puVar22 = local_e8[(uVar21 & 0xffffffff) * 3];
          uVar20 = (long)(local_e8 + (uVar21 & 0xffffffff) * 3)[1] - (long)puVar22;
          if ((uVar20 & 0x3fffffff8) != 0) {
            uVar34 = *puVar22 + 1;
            uVar18 = *puVar22 - 2;
            if ((uVar34 & 3) != 0) {
              uVar18 = uVar34;
            }
            uVar46 = 1;
            do {
              uVar34 = puVar22[uVar46];
              if (uVar18 != uVar34) {
                lVar35 = *(long *)(this_00 + 0x2f68);
                do {
                  *(int *)((long)local_100 +
                          (ulong)(((uVar18 & 3) + (uVar18 >> 2) * 3) - 1) * 0xc + 8) = (int)uVar21;
                  iVar19 = *(int *)(lVar35 + (ulong)uVar18 * 8 + 4);
                  uVar18 = iVar19 - 2;
                  if ((iVar19 + 1U & 3) != 0) {
                    uVar18 = iVar19 + 1;
                  }
                } while (uVar18 != uVar34);
              }
              uVar18 = uVar34 - 2;
              uVar46 = uVar46 + 1;
              if ((uVar34 + 1 & 3) != 0) {
                uVar18 = uVar34 + 1;
              }
            } while (uVar46 != (uVar20 >> 2 & 0xffffffff));
          }
        } while ((int)uVar21 != 0);
      }
    }
    ppvStack_b0 = &local_100;
    local_a8 = *(undefined4 *)(this + 0x134);
    ppuVar24 = local_e8;
    local_b8 = this_00;
    if (local_e8 != local_e0) {
      do {
                    /* try { // try from 008ca158 to 008ca163 has its CatchHandler @ 008cc24c */
        std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::vector
                  ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_a0,
                   (vector *)ppuVar24);
        piVar63 = (int *)CONCAT26(uStack_9a,
                                  CONCAT24(uStack_9c,
                                           CONCAT22(uStack_9e,
                                                    CONCAT11(local_a0._1_1_,(undefined)local_a0))));
        piVar44 = piVar63 + 1;
        if (piVar44 != (int *)CONCAT44(local_98._4_4_,(uint)local_98)) {
          uVar34 = *piVar63 + 1;
          piVar69 = piVar63;
          uVar18 = *piVar63 - 2;
          if ((uVar34 & 3) != 0) {
            uVar18 = uVar34;
          }
          do {
            piVar36 = piVar44;
            uVar34 = piVar63[1];
            while (uVar18 != uVar34) {
              uVar16 = (int)((ulong)((long)ppuVar24 - (long)local_e8) >> 3) * -0x55555555;
                    /* try { // try from 008ca228 to 008ca233 has its CatchHandler @ 008cc330 */
              if ((*(uint *)((long)local_100 +
                            (ulong)(((uVar18 & 3) + (uVar18 >> 2) * 3) - 1) * 0xc + 8) == uVar16) &&
                 (uVar20 = FUN_008cc788(&local_b8,uVar18), (uVar20 & 1) != 0)) {
                piVar44 = (int *)CONCAT26(uStack_9a,
                                          CONCAT24(uStack_9c,
                                                   CONCAT22(uStack_9e,
                                                            CONCAT11(local_a0._1_1_,
                                                                     (undefined)local_a0))));
                local_110 = (undefined8 *)0x0;
                local_108 = (undefined8 *)0x0;
                local_118 = (undefined8 *)0x0;
                uVar20 = (long)piVar36 - (long)piVar44;
                if (uVar20 != 0) {
                  if ((long)uVar20 < 0) {
                    /* try { // try from 008cbf1c to 008cbf23 has its CatchHandler @ 008cc2dc */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                    /* try { // try from 008ca250 to 008ca257 has its CatchHandler @ 008cc2f8 */
                  local_118 = (undefined8 *)operator_new(uVar20);
                  local_108 = (undefined8 *)((long)local_118 + ((long)uVar20 >> 2) * 4);
                  local_110 = local_118;
                  if (piVar44 != piVar36) {
                    uVar20 = (long)piVar63 - (long)piVar44;
                    if ((0x1b < uVar20) &&
                       (((undefined8 *)((long)piVar44 + (uVar20 & 0xfffffffffffffffc) + 4) <=
                         local_118 ||
                        ((int *)((long)local_118 + (uVar20 & 0xfffffffffffffffc) + 4) <= piVar44))))
                    {
                      uVar20 = (uVar20 >> 2) + 1;
                      uVar46 = uVar20 & 0x7ffffffffffffff8;
                      puVar68 = local_118 + 2;
                      local_110 = (undefined8 *)((long)local_118 + uVar46 * 4);
                      puVar58 = (undefined8 *)(piVar44 + 4);
                      uVar21 = ((ulong)((long)piVar69 - (long)piVar44) >> 2) + 1 &
                               0x7ffffffffffffff8;
                      do {
                        puVar12 = puVar58 + -1;
                        uVar75 = puVar58[-2];
                        uVar77 = puVar58[1];
                        uVar30 = *puVar58;
                        puVar58 = puVar58 + 4;
                        uVar21 = uVar21 - 8;
                        puVar68[-1] = *puVar12;
                        puVar68[-2] = uVar75;
                        puVar68[1] = uVar77;
                        *puVar68 = uVar30;
                        puVar68 = puVar68 + 4;
                      } while (uVar21 != 0);
                      piVar44 = piVar44 + uVar46;
                      if (uVar20 == uVar46) goto LAB_008ca320;
                    }
                    piVar44 = piVar44 + -1;
                    puVar68 = local_110;
                    do {
                      piVar44 = piVar44 + 1;
                      local_110 = (undefined8 *)((long)puVar68 + 4);
                      *(int *)puVar68 = *piVar44;
                      puVar68 = local_110;
                    } while (piVar44 != piVar63);
                  }
                }
LAB_008ca320:
                    /* try { // try from 008ca320 to 008ca33f has its CatchHandler @ 008cc314 */
                uVar20 = computeSecondaryPolyline
                                   (this,(vector *)&local_118,uVar18,uVar16,(vector *)&local_e8,
                                    this_00);
                if ((uVar20 & 1) == 0) {
                  if (local_118 != (undefined8 *)0x0) {
                    local_110 = local_118;
                    operator_delete(local_118);
                  }
                  bVar14 = false;
                  goto LAB_008ca668;
                }
                    /* try { // try from 008ca34c to 008ca35b has its CatchHandler @ 008cc310 */
                this_01 = (FillPlaneGeometry *)
                          std::__ndk1::
                          vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
                          ::insert((vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
                                    *)&local_e8,(__wrap_iter)ppuVar24,(vector *)&local_118);
                updateEdgeInfosForInsertedPolyline
                          (this_01,(vector *)&local_100,uVar16,(vector *)&local_e8,this_00);
                if (local_118 != (undefined8 *)0x0) {
                  local_110 = local_118;
                  operator_delete(local_118);
                }
                ppuVar24 = (uint **)(this_01 + 0x18);
              }
              iVar19 = *(int *)(*(long *)(this_00 + 0x2f68) + (ulong)uVar18 * 8 + 4);
              uVar18 = iVar19 - 2;
              if ((iVar19 + 1U & 3) != 0) {
                uVar18 = iVar19 + 1;
              }
            }
            uVar18 = uVar34 - 2;
            piVar44 = piVar36 + 1;
            if ((uVar34 + 1 & 3) != 0) {
              uVar18 = uVar34 + 1;
            }
            piVar63 = piVar36;
            piVar69 = piVar69 + 1;
          } while (piVar44 != (int *)CONCAT44(local_98._4_4_,(uint)local_98));
        }
        ppuVar24 = ppuVar24 + 3;
        piVar63 = (int *)CONCAT26(uStack_9a,
                                  CONCAT24(uStack_9c,
                                           CONCAT22(uStack_9e,
                                                    CONCAT11(local_a0._1_1_,(undefined)local_a0))));
        ppuVar64 = local_e8;
        if (ppuVar24 != local_e0) {
          ppuVar64 = ppuVar24;
        }
        if (piVar63 + 1 == piVar44) {
          iVar19 = 0;
        }
        else {
          iVar19 = 0;
          uVar18 = **ppuVar64 - 1;
          uVar34 = **ppuVar64 + 2;
          if ((uVar18 & 3) != 0) {
            uVar34 = uVar18;
          }
          lVar35 = *(long *)(this_00 + 0x2f68) + (ulong)uVar34 * 8;
          lVar43 = 0;
          piVar44 = piVar63 + 1;
          piVar69 = piVar63;
          local_1b8 = piVar63;
          do {
            piVar36 = piVar44;
            uVar34 = *(uint *)(lVar35 + 4);
            uVar18 = piVar69[1];
            if (uVar34 == uVar18) {
              lVar35 = *(long *)(this_00 + 0x2f68);
            }
            else {
              do {
                uVar16 = (int)((ulong)((long)ppuVar24 - (long)local_e8) >> 3) * -0x55555555;
                    /* try { // try from 008ca4bc to 008ca4c7 has its CatchHandler @ 008cc32c */
                if ((*(int *)((long)local_100 +
                             (ulong)(((uVar34 & 3) + (uVar34 >> 2) * 3) - 1) * 0xc + 4) ==
                     uVar16 - 1) && (uVar20 = FUN_008cc788(&local_b8,uVar34), (uVar20 & 1) != 0)) {
                  piVar44 = (int *)CONCAT26(uStack_9a,
                                            CONCAT24(uStack_9c,
                                                     CONCAT22(uStack_9e,
                                                              CONCAT11(local_a0._1_1_,
                                                                       (undefined)local_a0))));
                  local_110 = (undefined8 *)0x0;
                  local_108 = (undefined8 *)0x0;
                  local_118 = (undefined8 *)0x0;
                  uVar20 = (long)piVar36 - (long)piVar44;
                  if (uVar20 != 0) {
                    if ((long)uVar20 < 0) {
                    /* try { // try from 008cbf6c to 008cbf73 has its CatchHandler @ 008cc2ac */
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_length_error();
                    }
                    /* try { // try from 008ca4e4 to 008ca4eb has its CatchHandler @ 008cc2a8 */
                    local_118 = (undefined8 *)operator_new(uVar20);
                    local_108 = (undefined8 *)((long)local_118 + ((long)uVar20 >> 2) * 4);
                    local_110 = local_118;
                    if (piVar44 != piVar36) {
                      uVar20 = (long)piVar63 + (lVar43 * 4 - (long)piVar44);
                      if ((0x1b < uVar20) &&
                         (((undefined8 *)((long)piVar44 + (uVar20 & 0xfffffffffffffffc) + 4) <=
                           local_118 ||
                          ((int *)((long)local_118 + (uVar20 & 0xfffffffffffffffc) + 4) <= piVar44))
                         )) {
                        puVar68 = local_118 + 2;
                        puVar58 = (undefined8 *)(piVar44 + 4);
                        uVar21 = (long)local_1b8 - (long)piVar44;
                        uVar20 = (uVar20 >> 2) + 1;
                        uVar46 = uVar20 & 0x7ffffffffffffff8;
                        piVar44 = piVar44 + uVar46;
                        local_110 = (undefined8 *)((long)local_118 + uVar46 * 4);
                        uVar21 = (uVar21 >> 2) + 1 & 0x7ffffffffffffff8;
                        do {
                          puVar12 = puVar58 + -1;
                          uVar75 = puVar58[-2];
                          uVar77 = puVar58[1];
                          uVar30 = *puVar58;
                          puVar58 = puVar58 + 4;
                          uVar21 = uVar21 - 8;
                          puVar68[-1] = *puVar12;
                          puVar68[-2] = uVar75;
                          puVar68[1] = uVar77;
                          *puVar68 = uVar30;
                          puVar68 = puVar68 + 4;
                        } while (uVar21 != 0);
                        if (uVar20 == uVar46) goto LAB_008ca5bc;
                      }
                      piVar44 = piVar44 + -1;
                      puVar68 = local_110;
                      do {
                        piVar44 = piVar44 + 1;
                        local_110 = (undefined8 *)((long)puVar68 + 4);
                        *(int *)puVar68 = *piVar44;
                        puVar68 = local_110;
                      } while (piVar44 != piVar69);
                    }
                  }
LAB_008ca5bc:
                    /* try { // try from 008ca5bc to 008ca5d7 has its CatchHandler @ 008cc2d8 */
                  uVar20 = computeSecondaryPolyline
                                     (this,(vector *)&local_118,uVar34,uVar16,(vector *)&local_e8,
                                      this_00);
                  if ((uVar20 & 1) != 0) {
                    /* try { // try from 008ca5e0 to 008ca5ef has its CatchHandler @ 008cc2a4 */
                    ppuVar24 = (uint **)std::__ndk1::
                                        vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
                                        ::insert((vector<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>>>
                                                  *)&local_e8,(__wrap_iter)ppuVar24,
                                                 (vector *)&local_118);
                    updateEdgeInfosForInsertedPolyline
                              ((FillPlaneGeometry *)ppuVar24,(vector *)&local_100,uVar16,
                               (vector *)&local_e8,this_00);
                    iVar19 = iVar19 + 1;
                  }
                  if (local_118 != (undefined8 *)0x0) {
                    local_110 = local_118;
                    operator_delete(local_118);
                  }
                  if ((uVar20 & 1) == 0) {
                    bVar14 = false;
                    goto LAB_008ca668;
                  }
                }
                lVar35 = *(long *)(this_00 + 0x2f68);
                uVar16 = uVar34 + 2;
                if ((uVar34 - 1 & 3) != 0) {
                  uVar16 = uVar34 - 1;
                }
                uVar34 = *(uint *)(lVar35 + (ulong)uVar16 * 8 + 4);
              } while (uVar34 != uVar18);
            }
            iVar17 = *(int *)(lVar35 + (ulong)uVar18 * 8 + 4);
            uVar18 = iVar17 - 1;
            uVar34 = iVar17 + 2;
            if ((uVar18 & 3) != 0) {
              uVar34 = uVar18;
            }
            lVar35 = lVar35 + (ulong)uVar34 * 8;
            lVar43 = lVar43 + 1;
            local_1b8 = local_1b8 + 1;
            piVar44 = piVar36 + 1;
            piVar69 = piVar36;
          } while (piVar36 + 1 != (int *)CONCAT44(local_98._4_4_,(uint)local_98));
        }
        bVar14 = true;
        ppuVar24 = ppuVar24 + (long)iVar19 * 3;
LAB_008ca668:
        uVar87 = CONCAT22(uStack_9e,CONCAT11(local_a0._1_1_,(undefined)local_a0));
        pvVar66 = (void *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uVar87));
        if (pvVar66 != (void *)0x0) {
          local_98._4_4_ = (undefined4)((ulong)pvVar66 >> 0x20);
          local_98._0_4_ = uVar87;
          operator_delete(pvVar66);
        }
        if (!bVar14) goto LAB_008ca800;
      } while (ppuVar24 != local_e0);
    }
    lVar35 = *(long *)(this_00 + 0x2f50);
    uVar34 = ((uint)(*(int *)(this_00 + 0x2f58) - (int)lVar35) >> 2) * 0xaaab & 0xffff;
    if (uVar34 != 0) {
      uVar20 = 0;
      do {
        if (*(short *)(lVar35 + (uVar20 & 0xffff) * 0xc + 8) != -1) {
          lVar43 = *(long *)(this_00 + 0x2ef0);
          uVar8 = *(ushort *)(lVar35 + (uVar20 & 0xffff) * 0xc);
                    /* try { // try from 008ca7d8 to 008ca7ff has its CatchHandler @ 008cc194 */
          pcVar23 = (char *)LogManager::getInstance();
          pfVar53 = (float *)(lVar43 + (ulong)uVar8 * 0x10);
          LogManager::errorf(pcVar23,(double)*pfVar53,(double)pfVar53[1],(double)pfVar53[2],
                             "Error: No path from fill volume top plane to a vertex (%.3f %.3f %.3f) via downward edges.\n"
                            );
          goto LAB_008ca800;
        }
        uVar18 = (int)uVar20 + 1;
        uVar20 = (ulong)uVar18;
      } while (uVar18 != uVar34);
    }
    uVar21 = ((long)local_e0 - (long)local_e8 >> 3) * -0x5555555555555555;
    uVar34 = (uint)uVar21;
    uVar20 = (ulong)(uVar34 - 1);
    if ((uVar21 & 0xffff) != 0) {
      lVar43 = *(long *)(this_00 + 0x2f68);
      uVar46 = 0;
      uVar61 = uVar20;
LAB_008ca73c:
      uVar8 = *(ushort *)(lVar43 + (ulong)local_e8[uVar46 * 3 + 1][-1] * 8);
      uVar9 = *(ushort *)(lVar43 + (ulong)local_e8[(uVar61 & 0xffff) * 3 + 1][-1] * 8);
      if (uVar8 == uVar9) goto LAB_008ca728;
      uVar18 = *(uint *)(lVar35 + (ulong)uVar8 * 0xc + 4);
      uVar16 = uVar18;
      while (*(ushort *)(lVar43 + (ulong)uVar16 * 8) != uVar9) {
        uVar31 = uVar16 + 2;
        if ((uVar16 - 1 & 3) != 0) {
          uVar31 = uVar16 - 1;
        }
        uVar16 = *(uint *)(lVar43 + (ulong)uVar31 * 8 + 4);
        if (uVar16 == uVar18) goto LAB_008ca7b0;
      }
      if (uVar16 != 0xffffffff) goto LAB_008ca728;
LAB_008ca7b0:
                    /* try { // try from 008ca7b0 to 008ca7bf has its CatchHandler @ 008cc198 */
      pcVar23 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar23,
                         "Error: Fill volume has multiple pockets (unconnected bottom contours).\n")
      ;
LAB_008ca800:
      bVar67 = 0;
      goto joined_r0x008ca808;
    }
LAB_008ca818:
    uVar46 = uVar21 & 0xffff;
                    /* try { // try from 008ca828 to 008ca82f has its CatchHandler @ 008cc188 */
    std::__ndk1::
    vector<FillPlaneGeometry::Polyline*,std::__ndk1::allocator<FillPlaneGeometry::Polyline*>>::
    reserve((vector<FillPlaneGeometry::Polyline*,std::__ndk1::allocator<FillPlaneGeometry::Polyline*>>
             *)(this + 0xb0),uVar46);
    ppuVar64 = local_e0;
    for (ppuVar24 = local_e8; ppuVar24 != ppuVar64; ppuVar24 = ppuVar24 + 3) {
      pvVar66 = *(void **)(this + 0xb0);
      ppvVar5 = *(void ***)(this + 0xb8);
                    /* try { // try from 008ca848 to 008ca8d3 has its CatchHandler @ 008cc224 */
      pvVar25 = operator_new(0x38);
      uVar61 = (long)ppvVar5 - (long)pvVar66;
      ppvVar37 = *(void ***)(this + 0xc0);
      puVar68 = (undefined8 *)((long)pvVar25 + 0x10);
      *(undefined8 *)((long)pvVar25 + 0x18) = 0;
      *puVar68 = 0;
      *(undefined8 *)((long)pvVar25 + 0x28) = 0;
      *(undefined8 *)((long)pvVar25 + 0x20) = 0;
      *(undefined2 *)((long)pvVar25 + 0x32) = 0;
      *(short *)((long)pvVar25 + 0x30) = (short)(uVar61 >> 3);
      *(undefined4 *)((long)pvVar25 + 0x34) = 0x3f800000;
      if (ppvVar5 == ppvVar37) {
        uVar62 = ((long)uVar61 >> 3) + 1;
        if (uVar62 >> 0x3d != 0) {
                    /* try { // try from 008cc0a0 to 008cc0a7 has its CatchHandler @ 008cc1d0 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar62 <= (ulong)((long)uVar61 >> 2)) {
          uVar62 = (long)uVar61 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar61) {
          uVar62 = 0x1fffffffffffffff;
        }
        if (uVar62 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar62 >> 0x3d != 0) {
                    /* try { // try from 008cc0b8 to 008cc0c3 has its CatchHandler @ 008cc1d0 */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar62 << 3);
        }
        ppvVar5 = (void **)((long)__dest + ((long)uVar61 >> 3) * 8);
        *ppvVar5 = pvVar25;
        if (0 < (long)uVar61) {
          memcpy(__dest,pvVar66,uVar61);
        }
        *(void **)(this + 0xb0) = __dest;
        *(void ***)(this + 0xb8) = ppvVar5 + 1;
        *(void **)(this + 0xc0) = (void *)((long)__dest + uVar62 * 8);
        if (pvVar66 != (void *)0x0) {
          operator_delete(pvVar66);
        }
      }
      else {
        *ppvVar5 = pvVar25;
        *(void ***)(this + 0xb8) = ppvVar5 + 1;
      }
                    /* try { // try from 008ca928 to 008ca92f has its CatchHandler @ 008cc21c */
      std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::reserve
                ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)puVar68,
                 (long)ppuVar24[1] - (long)*ppuVar24 >> 2);
      puVar27 = ppuVar24[1];
      for (puVar22 = *ppuVar24; puVar22 != puVar27; puVar22 = puVar22 + 1) {
                    /* try { // try from 008ca960 to 008ca967 has its CatchHandler @ 008cc2d0 */
        FUN_007204e4(puVar68,*(long *)(this_00 + 0x2ef0) +
                             (ulong)*(ushort *)
                                     (*(long *)(this_00 + 0x2f50) +
                                     (ulong)*(ushort *)
                                             (*(long *)(this_00 + 0x2f68) + (ulong)*puVar22 * 8) *
                                     0xc) * 0x10);
      }
    }
    local_118 = (undefined8 *)0x0;
    local_110 = (undefined8 *)0x0;
    local_108 = (undefined8 *)0x0;
                    /* try { // try from 008ca990 to 008ca99b has its CatchHandler @ 008cc180 */
    std::__ndk1::
    vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
    ::reserve((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
               *)&local_118,uVar46);
    ppuVar64 = local_e0;
    for (ppuVar24 = local_e8; ppuVar24 != ppuVar64; ppuVar24 = ppuVar24 + 3) {
      local_98._0_4_ = 0;
      local_98._4_4_ = 0;
      local_90._0_4_ = 0;
      local_90._4_4_ = 0;
      local_a0._0_1_ = 0;
      local_a0._1_1_ = 0;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      puVar22 = *ppuVar24;
      puVar27 = ppuVar24[1];
      uVar61 = (long)puVar27 - (long)puVar22;
      if (uVar61 == 0) {
        local_90 = (undefined2 *)0x0;
        puVar26 = (undefined2 *)0x0;
      }
      else {
        if ((long)uVar61 < 0) {
                    /* try { // try from 008cc088 to 008cc093 has its CatchHandler @ 008cc1d4 */
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
                    /* try { // try from 008caa08 to 008caa0b has its CatchHandler @ 008cc220 */
        puVar26 = (undefined2 *)operator_new(uVar61 >> 1);
        local_a0._0_1_ = SUB81(puVar26,0);
        local_a0._1_1_ = (undefined)((ulong)puVar26 >> 8);
        uStack_9e = (ushort)((ulong)puVar26 >> 0x10);
        uStack_9c = (ushort)((ulong)puVar26 >> 0x20);
        uStack_9a = (undefined2)((ulong)puVar26 >> 0x30);
        local_98._0_4_ = (uint)puVar26;
        local_98._4_4_ = (undefined4)((ulong)puVar26 >> 0x20);
        local_90 = puVar26 + ((long)uVar61 >> 2);
        puVar22 = *ppuVar24;
        puVar27 = ppuVar24[1];
      }
      local_98 = (undefined2 *)CONCAT44(local_98._4_4_,(uint)local_98);
      while (puVar22 != puVar27) {
        puVar65 = puVar22 + 1;
        uVar10 = *(undefined2 *)
                  (*(long *)(this_00 + 0x2f50) +
                  (ulong)*(ushort *)(*(long *)(this_00 + 0x2f68) + (ulong)*puVar22 * 8) * 0xc);
        puVar22 = puVar65;
        if (puVar26 < local_90) {
          local_98 = puVar26 + 1;
          *puVar26 = uVar10;
          puVar26 = local_98;
        }
        else {
          pvVar66 = (void *)CONCAT26(uStack_9a,
                                     CONCAT24(uStack_9c,
                                              CONCAT22(uStack_9e,
                                                       CONCAT11(local_a0._1_1_,(undefined)local_a0))
                                             ));
          sVar71 = (long)puVar26 - (long)pvVar66;
          if (sVar71 == 0xfffffffffffffffd || (long)(sVar71 + 3) < 0 != SCARRY8(sVar71,3)) {
                    /* try { // try from 008cbfbc to 008cbfc3 has its CatchHandler @ 008cc2b0 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar62 = (long)local_90 - (long)pvVar66;
          uVar61 = ((long)sVar71 >> 1) + 1;
          if (uVar61 <= uVar62) {
            uVar61 = uVar62;
          }
          if (0x7ffffffffffffffd < uVar62) {
            uVar61 = 0x7fffffffffffffff;
          }
          if (uVar61 == 0) {
            pvVar25 = (void *)0x0;
          }
          else {
            if ((long)uVar61 < 0) {
                    /* try { // try from 008cc00c to 008cc017 has its CatchHandler @ 008cc2b0 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008caaa8 to 008caaab has its CatchHandler @ 008cc264 */
            pvVar25 = operator_new(uVar61 << 1);
          }
          puVar1 = (undefined2 *)((long)pvVar25 + ((long)sVar71 >> 1) * 2);
          puVar26 = puVar1 + 1;
          *puVar1 = uVar10;
          if (0 < (long)sVar71) {
            memcpy(pvVar25,pvVar66,sVar71);
          }
          local_90 = (undefined2 *)((long)pvVar25 + uVar61 * 2);
          local_a0._0_1_ = SUB81(pvVar25,0);
          local_a0._1_1_ = (undefined)((ulong)pvVar25 >> 8);
          uStack_9e = (ushort)((ulong)pvVar25 >> 0x10);
          uStack_9c = (ushort)((ulong)pvVar25 >> 0x20);
          uStack_9a = (undefined2)((ulong)pvVar25 >> 0x30);
          local_98 = puVar26;
          if (pvVar66 != (void *)0x0) {
            operator_delete(pvVar66);
            puVar26 = local_98;
          }
        }
      }
      if (local_110 < local_108) {
        *local_110 = 0;
        local_110[1] = 0;
        local_110[2] = 0;
        *local_110 = CONCAT26(uStack_9a,
                              CONCAT24(uStack_9c,
                                       CONCAT22(uStack_9e,
                                                CONCAT11(local_a0._1_1_,(undefined)local_a0))));
        local_110[1] = local_98;
        local_110[2] = local_90;
        local_110 = local_110 + 3;
      }
      else {
                    /* try { // try from 008cab14 to 008cab1f has its CatchHandler @ 008cc220 */
        std::__ndk1::
        vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
        ::
        __push_back_slow_path<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>
                  ((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                    *)&local_118,(vector *)&local_a0);
        uVar87 = CONCAT22(uStack_9e,CONCAT11(local_a0._1_1_,(undefined)local_a0));
        pvVar66 = (void *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,uVar87));
        if (pvVar66 != (void *)0x0) {
          local_98._4_4_ = (undefined4)((ulong)pvVar66 >> 0x20);
          local_98._0_4_ = uVar87;
          operator_delete(pvVar66);
        }
      }
    }
    bVar67 = 0;
    uVar61 = 0;
    do {
      psVar38 = (short *)local_118[(uVar61 & 0xffff) * 3];
      psVar6 = (short *)(local_118 + (uVar61 & 0xffff) * 3)[1];
      psVar51 = psVar38;
      if (psVar38 != psVar6) {
        psVar4 = (short *)local_118[(uVar20 & 0xffff) * 3];
        psVar7 = (short *)(local_118 + (uVar20 & 0xffff) * 3)[1];
        do {
          psVar60 = psVar4;
          if (psVar4 == psVar7) {
LAB_008cab70:
            psVar51 = psVar38;
            if (psVar60 != psVar7) break;
          }
          else {
            do {
              if (*psVar60 == *psVar38) goto LAB_008cab70;
              psVar60 = psVar60 + 1;
            } while (psVar60 != psVar7);
          }
          psVar38 = psVar38 + 1;
          psVar51 = psVar6;
        } while (psVar38 != psVar6);
      }
      bVar14 = psVar51 == psVar6;
      uVar18 = (uint)uVar61;
      uVar16 = (uint)(uVar20 & 0xffff);
      if (!bVar14) {
        uVar16 = uVar18;
      }
      uVar20 = (ulong)uVar16;
      bVar67 = bVar14 | bVar67;
      if (!bVar14) {
        uVar18 = uVar18 + 1;
      }
      uVar61 = (ulong)uVar18;
      uVar8 = (ushort)uVar21;
    } while ((!bVar14) && ((uVar18 & 0xffff) != (uint)uVar8));
    if (bVar67 == 0) {
                    /* try { // try from 008cb2a8 to 008cb2b7 has its CatchHandler @ 008cc17c */
      pcVar23 = (char *)LogManager::getInstance();
      LogManager::errorf(pcVar23,
                         "Error: Fill volume should have at least one vertical path that does not have a vertex in common with a neighboring path.\n"
                        );
    }
    else {
                    /* try { // try from 008cabe4 to 008cabeb has its CatchHandler @ 008cc164 */
      std::__ndk1::
      vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
      ::vector((vector<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>,std::__ndk1::allocator<std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>>>
                *)&local_130,uVar46);
      do {
        lVar43 = local_130;
        uVar62 = uVar61 & 0xffff;
        lVar35 = uVar62 + (uVar61 & 0xffff) * 2;
        ppuVar2 = (ushort **)(local_118 + lVar35);
        ppvVar5 = (void **)(local_130 + lVar35 * 8);
        ppsVar55 = (short **)(ppvVar5 + 2);
        pvVar66 = *ppvVar5;
        uVar20 = (long)ppuVar2[1] - (long)*ppuVar2;
        if ((ulong)((long)*ppsVar55 - (long)pvVar66 >> 1) < (ulong)((long)uVar20 >> 1)) {
          if ((long)uVar20 < 0) {
                    /* try { // try from 008cc094 to 008cc09f has its CatchHandler @ 008cc1ac */
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          plVar72 = (long *)(local_130 + uVar62 * 0x18 + 8);
          lVar35 = *plVar72;
                    /* try { // try from 008cac8c to 008cac8f has its CatchHandler @ 008cc1a8 */
          pvVar25 = operator_new(uVar20);
          sVar71 = lVar35 - (long)pvVar66;
          if (0 < (long)sVar71) {
            memcpy(pvVar25,pvVar66,sVar71);
          }
          *ppvVar5 = pvVar25;
          *plVar72 = (long)pvVar25 + sVar71;
          *ppsVar55 = (short *)((long)pvVar25 + ((long)uVar20 >> 1) * 2);
          if (pvVar66 != (void *)0x0) {
            operator_delete(pvVar66);
          }
        }
        lVar35 = *(long *)(this_00 + 0x2ef0);
        uVar20 = (ulong)*(ushort *)(lVar35 + (ulong)**ppuVar2 * 0x10 + 0xc);
        lVar54 = *(long *)(this_00 + 0x2f50);
        uVar9 = *(ushort *)(lVar35 + (ulong)(*ppuVar2)[1] * 0x10 + 0xc);
        uVar73 = (ulong)uVar9;
        puVar47 = (ushort *)(lVar54 + uVar20 * 0xc + 8);
        uVar33 = (ushort)uVar61;
        if (*puVar47 == 0xffff) {
          *puVar47 = uVar33;
        }
        else {
          uVar16 = *(uint *)(lVar54 + uVar20 * 0xc + 4);
          lVar48 = *(long *)(this_00 + 0x2f68);
          uVar31 = uVar16;
          do {
            uVar32 = (ulong)uVar31;
            uVar20 = uVar32;
            if (*(ushort *)(lVar48 + uVar32 * 8) == uVar9) goto LAB_008cad98;
            uVar50 = uVar31 + 2;
            if ((uVar31 - 1 & 3) != 0) {
              uVar50 = uVar31 - 1;
            }
            uVar31 = *(uint *)(lVar48 + (ulong)uVar50 * 8 + 4);
          } while (uVar31 != uVar16);
          uVar32 = 0xffffffff;
          uVar20 = uVar32;
LAB_008cad98:
          do {
            uVar16 = (uint)uVar32;
            if (ABS(*(float *)(lVar35 + (ulong)*(ushort *)
                                                (lVar54 + (ulong)*(ushort *)(lVar48 + uVar32 * 8) *
                                                          0xc) * 0x10 + 4) - fVar74) <= 0.01) {
              uVar31 = uVar16 - 2;
              if ((uVar16 + 1 & 3) != 0) {
                uVar31 = uVar16 + 1;
              }
              if (*(float *)(lVar35 + (ulong)*(ushort *)
                                              (lVar54 + (ulong)*(ushort *)
                                                                (lVar48 + (ulong)uVar31 * 8) * 0xc)
                                      * 0x10 + 4) - fVar74 < -0.01) goto LAB_008cae04;
            }
            uVar31 = uVar16 + 2;
            if ((uVar16 - 1 & 3) != 0) {
              uVar31 = uVar16 - 1;
            }
            uVar16 = *(uint *)(lVar48 + (ulong)uVar31 * 8 + 4);
            uVar32 = (ulong)uVar16;
          } while (uVar16 != (uint)uVar20);
          uVar16 = 0xffffffff;
LAB_008cae04:
                    /* try { // try from 008cae04 to 008cae0f has its CatchHandler @ 008cc1c4 */
          uVar20 = Brep::splitCone(this_00,uVar16,(uint)uVar20,uVar33);
          uVar20 = uVar20 & 0xffffffff;
        }
        sVar70 = (short)uVar20;
        ppsVar49 = (short **)(lVar43 + uVar62 * 0x18 + 8);
        psVar38 = *ppsVar49;
        if (psVar38 == *ppsVar55) {
          pvVar66 = *ppvVar5;
          uVar62 = (long)psVar38 - (long)pvVar66;
          if (uVar62 == 0xfffffffffffffffd || (long)(uVar62 + 3) < 0 != SCARRY8(uVar62,3)) {
                    /* try { // try from 008cc0a8 to 008cc0af has its CatchHandler @ 008cc1b0 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar32 = ((long)uVar62 >> 1) + 1;
          if (uVar32 <= uVar62) {
            uVar32 = uVar62;
          }
          if (0x7ffffffffffffffd < uVar62) {
            uVar32 = 0x7fffffffffffffff;
          }
          if (uVar32 == 0) {
            pvVar25 = (void *)0x0;
          }
          else {
            if ((long)uVar32 < 0) {
                    /* try { // try from 008cc0d0 to 008cc0db has its CatchHandler @ 008cc1b0 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008cae94 to 008cae97 has its CatchHandler @ 008cc19c */
            pvVar25 = operator_new(uVar32 << 1);
          }
          psVar38 = (short *)((long)pvVar25 + ((long)uVar62 >> 1) * 2);
          *psVar38 = sVar70;
          if (0 < (long)uVar62) {
            memcpy(pvVar25,pvVar66,uVar62);
          }
          *ppvVar5 = pvVar25;
          *ppsVar49 = psVar38 + 1;
          *ppsVar55 = (short *)((long)pvVar25 + uVar32 * 2);
          if (pvVar66 != (void *)0x0) {
            operator_delete(pvVar66);
          }
        }
        else {
          *psVar38 = sVar70;
          *ppsVar49 = psVar38 + 1;
        }
        puVar47 = *ppuVar2;
        lVar35 = ((long)ppuVar2[1] - (long)puVar47 >> 1) + -1;
        if (lVar35 != 1) {
          lVar43 = 1;
          uVar62 = uVar73;
          do {
            lVar43 = lVar43 + 1;
            puVar39 = (ushort *)(*(long *)(this_00 + 0x2f50) + uVar62 * 0xc + 8);
            uVar9 = *(ushort *)(*(long *)(this_00 + 0x2ef0) + (ulong)puVar47[lVar43] * 0x10 + 0xc);
            uVar73 = (ulong)uVar9;
            if (*puVar39 == 0xffff) {
              *puVar39 = uVar33;
            }
            else {
              lVar54 = *(long *)(this_00 + 0x2f68);
              uVar16 = *(uint *)(*(long *)(this_00 + 0x2f50) + uVar62 * 0xc + 4);
              uVar62 = (ulong)uVar16;
              uVar31 = uVar16;
              do {
                uVar32 = (ulong)uVar31;
                if (*(ushort *)(lVar54 + uVar32 * 8) == uVar9) goto LAB_008cafa4;
                uVar50 = uVar31 + 2;
                if ((uVar31 - 1 & 3) != 0) {
                  uVar50 = uVar31 - 1;
                }
                uVar31 = *(uint *)(lVar54 + (ulong)uVar50 * 8 + 4);
              } while (uVar31 != uVar16);
              uVar32 = 0xffffffff;
LAB_008cafa4:
              do {
                uVar31 = (uint)uVar62;
                if (*(short *)(lVar54 + uVar62 * 8) == (short)uVar20) goto LAB_008cafdc;
                uVar50 = uVar31 + 2;
                if ((uVar31 - 1 & 3) != 0) {
                  uVar50 = uVar31 - 1;
                }
                uVar31 = *(uint *)(lVar54 + (ulong)uVar50 * 8 + 4);
                uVar62 = (ulong)uVar31;
              } while (uVar31 != uVar16);
              uVar31 = 0xffffffff;
LAB_008cafdc:
                    /* try { // try from 008cafdc to 008cafe7 has its CatchHandler @ 008cc26c */
              uVar62 = Brep::splitCone(this_00,uVar31,(uint)uVar32,uVar33);
              uVar62 = uVar62 & 0xffffffff;
            }
            sVar70 = (short)uVar62;
            psVar38 = *ppsVar49;
            if (psVar38 == *ppsVar55) {
              pvVar66 = *ppvVar5;
              uVar20 = (long)psVar38 - (long)pvVar66;
              if (uVar20 == 0xfffffffffffffffd || (long)(uVar20 + 3) < 0 != SCARRY8(uVar20,3)) {
                    /* try { // try from 008cc018 to 008cc01f has its CatchHandler @ 008cc268 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar32 = ((long)uVar20 >> 1) + 1;
              if (uVar32 <= uVar20) {
                uVar32 = uVar20;
              }
              if (0x7ffffffffffffffd < uVar20) {
                uVar32 = 0x7fffffffffffffff;
              }
              if (uVar32 == 0) {
                pvVar25 = (void *)0x0;
              }
              else {
                if ((long)uVar32 < 0) {
                    /* try { // try from 008cc070 to 008cc07b has its CatchHandler @ 008cc268 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 008cb054 to 008cb057 has its CatchHandler @ 008cc250 */
                pvVar25 = operator_new(uVar32 << 1);
              }
              psVar38 = (short *)((long)pvVar25 + ((long)uVar20 >> 1) * 2);
              *psVar38 = sVar70;
              if (0 < (long)uVar20) {
                memcpy(pvVar25,pvVar66,uVar20);
              }
              *ppvVar5 = pvVar25;
              *ppsVar49 = psVar38 + 1;
              *ppsVar55 = (short *)((long)pvVar25 + uVar32 * 2);
              if (pvVar66 != (void *)0x0) {
                operator_delete(pvVar66);
              }
            }
            else {
              *psVar38 = sVar70;
              *ppsVar49 = psVar38 + 1;
            }
            if (lVar43 == lVar35) break;
            puVar47 = *ppuVar2;
            uVar20 = uVar62;
            uVar62 = uVar73;
          } while( true );
        }
        sVar15 = (short)uVar73;
        lVar35 = *(long *)(this_00 + 0x2f50);
        puVar47 = (ushort *)(lVar35 + uVar73 * 0xc + 8);
        if (*puVar47 == 0xffff) {
          *puVar47 = uVar33;
        }
        else {
          lVar43 = *(long *)(this_00 + 0x2f68);
          uVar16 = *(uint *)(lVar35 + uVar73 * 0xc + 4);
          uVar31 = uVar16;
          do {
            if (*(short *)(lVar43 + (ulong)uVar31 * 8) == sVar70) goto LAB_008cb140;
            uVar50 = uVar31 + 2;
            if ((uVar31 - 1 & 3) != 0) {
              uVar50 = uVar31 - 1;
            }
            uVar31 = *(uint *)(lVar43 + (ulong)uVar50 * 8 + 4);
          } while (uVar31 != uVar16);
          uVar31 = 0xffffffff;
LAB_008cb140:
          uVar16 = uVar31 + 2;
          if ((uVar31 - 1 & 3) != 0) {
            uVar16 = uVar31 - 1;
          }
          uVar16 = *(uint *)(lVar43 + (ulong)uVar16 * 8 + 4);
          uVar20 = (ulong)uVar16;
          fVar76 = *(float *)(*(long *)(this_00 + 0x2ef0) +
                              (ulong)*(ushort *)
                                      (lVar35 + (ulong)*(ushort *)(lVar43 + uVar20 * 8) * 0xc) *
                              0x10 + 4);
          while (0.01 < fVar76 - *(float *)(this + 0x9c)) {
            uVar50 = (int)uVar20 - 1;
            uVar16 = (int)uVar20 + 2;
            if ((uVar50 & 3) != 0) {
              uVar16 = uVar50;
            }
            uVar16 = *(uint *)(lVar43 + (ulong)uVar16 * 8 + 4);
            uVar20 = (ulong)uVar16;
            fVar76 = *(float *)(*(long *)(this_00 + 0x2ef0) +
                                (ulong)*(ushort *)
                                        (lVar35 + (ulong)*(ushort *)(lVar43 + uVar20 * 8) * 0xc) *
                                0x10 + 4);
          }
                    /* try { // try from 008cb1cc to 008cb1df has its CatchHandler @ 008cc1c0 */
          sVar15 = Brep::splitCone(this_00,uVar31,uVar16,uVar33);
        }
        psVar38 = *ppsVar49;
        if (psVar38 == *ppsVar55) {
          pvVar66 = *ppvVar5;
          uVar20 = (long)psVar38 - (long)pvVar66;
          if (uVar20 == 0xfffffffffffffffd || (long)(uVar20 + 3) < 0 != SCARRY8(uVar20,3)) {
                    /* try { // try from 008cc0b0 to 008cc0b7 has its CatchHandler @ 008cc1b4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          uVar62 = ((long)uVar20 >> 1) + 1;
          if (uVar62 <= uVar20) {
            uVar62 = uVar20;
          }
          if (0x7ffffffffffffffd < uVar20) {
            uVar62 = 0x7fffffffffffffff;
          }
          if (uVar62 == 0) {
            pvVar25 = (void *)0x0;
          }
          else {
            if ((long)uVar62 < 0) {
                    /* try { // try from 008cc0c4 to 008cc0cf has its CatchHandler @ 008cc1b4 */
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
                    /* try { // try from 008cb244 to 008cb247 has its CatchHandler @ 008cc1a0 */
            pvVar25 = operator_new(uVar62 << 1);
          }
          psVar38 = (short *)((long)pvVar25 + ((long)uVar20 >> 1) * 2);
          *psVar38 = sVar15;
          if (0 < (long)uVar20) {
            memcpy(pvVar25,pvVar66,uVar20);
          }
          *ppvVar5 = pvVar25;
          *ppsVar49 = psVar38 + 1;
          *ppsVar55 = (short *)((long)pvVar25 + uVar62 * 2);
          if (pvVar66 != (void *)0x0) {
            operator_delete(pvVar66);
          }
        }
        else {
          *psVar38 = sVar15;
          *ppsVar49 = psVar38 + 1;
        }
        uVar16 = 0;
        if (((int)uVar61 + 1U & 0xffff) != (uint)uVar8) {
          uVar16 = (int)uVar61 + 1;
        }
        uVar61 = (ulong)uVar16;
      } while ((uVar16 & 0xffff) != (uVar18 & 0xffff));
      local_148 = (undefined4 *)0x0;
      local_140 = (undefined4 *)0x0;
      local_138 = (undefined4 *)0x0;
      uVar20 = (ulong)(uVar34 - 2) & 0xffff;
                    /* try { // try from 008cb2d0 to 008cb2db has its CatchHandler @ 008cc154 */
      std::__ndk1::vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>>::reserve
                ((vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>> *)&local_148,uVar20);
      local_160 = (uint *)0x0;
      local_158 = (uint *)0x0;
      local_150 = (uint *)0x0;
                    /* try { // try from 008cb2e4 to 008cb2ef has its CatchHandler @ 008cc150 */
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::reserve
                ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)&local_160,uVar20);
      puVar22 = local_160;
      puVar27 = local_158;
      if ((uVar21 & 0xffff) != 0) {
        uVar61 = 0;
        lVar35 = *(long *)(this_00 + 0x2f50);
        lVar43 = *(long *)(this_00 + 0x2f68);
        uVar18 = (uint)**(ushort **)(local_128 + -0x18);
LAB_008cb33c:
        uVar50 = (uint)**(ushort **)(local_130 + uVar61 * 0x18);
        uVar16 = *(uint *)(lVar35 + (ulong)uVar50 * 0xc + 4);
        uVar31 = uVar16;
        do {
          uVar62 = (ulong)uVar31;
          if (*(ushort *)(lVar43 + uVar62 * 8) == uVar18) goto LAB_008cb3e8;
          uVar3 = uVar31 + 2;
          if ((uVar31 - 1 & 3) != 0) {
            uVar3 = uVar31 - 1;
          }
          uVar31 = *(uint *)(lVar43 + (ulong)uVar3 * 8 + 4);
        } while (uVar31 != uVar16);
        uVar62 = 0xffffffff;
LAB_008cb3e8:
        do {
          puVar22 = local_160;
          uVar16 = (uint)uVar62;
          uVar18 = uVar16 - 2;
          if ((uVar16 + 1 & 3) != 0) {
            uVar18 = uVar16 + 1;
          }
          if (0.01 <= ABS(*(float *)(*(long *)(this_00 + 0x2ef0) +
                                     (ulong)*(ushort *)
                                             (lVar35 + (ulong)*(ushort *)
                                                               (lVar43 + (ulong)uVar18 * 8) * 0xc) *
                                     0x10 + 4) - *(float *)(this + 0xa8))) goto LAB_008cb324;
          uVar18 = uVar16 >> 2;
          puVar27 = local_160;
          if (local_160 == local_158) {
LAB_008cb460:
            if (puVar27 == local_158) goto LAB_008cb468;
          }
          else {
            do {
              if (*puVar27 == uVar18) goto LAB_008cb460;
              puVar27 = puVar27 + 1;
            } while (puVar27 != local_158);
LAB_008cb468:
            if (local_158 == local_150) {
              uVar73 = (long)local_158 - (long)local_160;
              uVar62 = ((long)uVar73 >> 2) + 1;
              if (uVar62 >> 0x3e != 0) {
                    /* try { // try from 008cc068 to 008cc06f has its CatchHandler @ 008cc260 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar62 <= (ulong)((long)uVar73 >> 1)) {
                uVar62 = (long)uVar73 >> 1;
              }
              if (0x7ffffffffffffffb < uVar73) {
                uVar62 = 0x3fffffffffffffff;
              }
              if (uVar62 == 0) {
                puVar27 = (uint *)0x0;
              }
              else {
                if (uVar62 >> 0x3e != 0) {
                    /* try { // try from 008cc07c to 008cc087 has its CatchHandler @ 008cc260 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 008cb4c0 to 008cb4c3 has its CatchHandler @ 008cc248 */
                puVar27 = (uint *)operator_new(uVar62 << 2);
              }
              puVar65 = puVar27 + ((long)uVar73 >> 2);
              *puVar65 = uVar18;
              if (0 < (long)uVar73) {
                memcpy(puVar27,puVar22,uVar73);
              }
              local_150 = puVar27 + uVar62;
              local_160 = puVar27;
              local_158 = puVar65 + 1;
              if (puVar22 != (uint *)0x0) {
                operator_delete(puVar22);
              }
            }
            else {
              *local_158 = uVar18;
              local_158 = local_158 + 1;
            }
                    /* try { // try from 008cb510 to 008cb51f has its CatchHandler @ 008cc274 */
            Brep::getFaceConeIndices(this_00,uVar18,&local_a0);
            pfVar53 = local_d0;
            lVar35 = *(long *)(this_00 + 0x2f50);
            local_d0._0_4_ =
                 CONCAT22(*(undefined2 *)(lVar35 + (ulong)uStack_9e * 0xc + 8),
                          *(undefined2 *)
                           (lVar35 + (ulong)CONCAT11(local_a0._1_1_,(undefined)local_a0) * 0xc + 8))
            ;
            uVar10 = *(undefined2 *)(lVar35 + (ulong)uStack_9c * 0xc + 8);
            if (local_140 < local_138) {
              local_140[4] = 0;
              *(undefined8 *)((long)local_140 + 6) = 0xffffffffffffffff;
              *local_140 = (undefined4)local_d0;
              *(undefined2 *)(local_140 + 1) = uVar10;
              local_140 = local_140 + 5;
            }
            else {
                    /* try { // try from 008cb564 to 008cb56f has its CatchHandler @ 008cc25c */
              std::__ndk1::vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>>::
              __emplace_back_slow_path<unsigned_short(&)[3]>
                        ((vector<BrepTriangle,std::__ndk1::allocator<BrepTriangle>> *)&local_148,
                         (unsigned_short *)&local_d0);
            }
            lVar43 = *(long *)(this_00 + 0x2f68);
            lVar35 = *(long *)(this_00 + 0x2f50);
          }
          uVar18 = uVar16 + 2;
          if ((uVar16 - 1 & 3) != 0) {
            uVar18 = uVar16 - 1;
          }
          uVar62 = (ulong)*(uint *)(lVar43 + (ulong)uVar18 * 8 + 4);
        } while( true );
      }
joined_r0x008cb57c:
      for (; puVar65 = local_158, puVar22 != local_158; puVar22 = puVar22 + 1) {
        local_158 = puVar27;
                    /* try { // try from 008cb584 to 008cb58b has its CatchHandler @ 008cc1bc */
        Brep::removeFace(this_00,*puVar22);
        puVar27 = local_158;
        local_158 = puVar65;
      }
      local_158 = puVar27;
                    /* try { // try from 008cb598 to 008cb59f has its CatchHandler @ 008cc14c */
      Brep::purge();
      local_d0 = (float *)0x0;
      local_c8 = (float *)0x0;
      local_c0 = 0;
                    /* try { // try from 008cb5a8 to 008cb5cb has its CatchHandler @ 008cc178 */
      std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::reserve
                ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)&local_d0,uVar46);
      std::__ndk1::
      vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>
      ::reserve((vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>
                 *)(this + 0xe0),uVar46);
      local_a0 = 0;
      if ((uVar21 & 0xffff) != 0) {
        local_a0 = 0;
        do {
          puVar68 = *(undefined8 **)(this + 0xe8);
          if (puVar68 < *(undefined8 **)(this + 0xf0)) {
            *puVar68 = 0;
            *(ushort *)((long)puVar68 + 0x14) = local_a0;
            *(undefined4 *)(puVar68 + 1) = 0x3f800000;
            *(undefined8 *)((long)puVar68 + 0xc) = 0;
            *(undefined8 *)((long)puVar68 + 0x16) = 0xffffffffffffffff;
            *(undefined8 **)(this + 0xe8) = puVar68 + 4;
          }
          else {
                    /* try { // try from 008cb618 to 008cb643 has its CatchHandler @ 008cc1d8 */
            std::__ndk1::
            vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>
            ::__emplace_back_slow_path<unsigned_short&>
                      ((vector<FillPlaneGeometry::VertexFormat,std::__ndk1::allocator<FillPlaneGeometry::VertexFormat>>
                        *)(this + 0xe0),&local_a0);
          }
          FUN_007204e4(&local_d0,
                       *(undefined8 *)
                        (*(long *)(*(long *)(this + 0xb0) + (ulong)local_a0 * 8) + 0x10));
          local_a0 = local_a0 + 1;
        } while (local_a0 != uVar8);
      }
      *(uint *)(this + 0x130) = uVar34 & 0xffff;
                    /* try { // try from 008cb66c to 008cb673 has its CatchHandler @ 008cc174 */
      plVar72 = (long *)operator_new(0x2fb8);
                    /* try { // try from 008cb680 to 008cb6a3 has its CatchHandler @ 008cc140 */
      Brep::Brep((Brep *)plVar72,uVar8,(Vector3 *)local_d0,0,(BrepWedge *)0x0,(uint)uVar20,
                 (BrepTriangle *)local_148,false,false,(Matrix4x4 *)0x0,(Matrix4x4 *)0x0,
                 (uchar *)0x0);
                    /* try { // try from 008cb6a4 to 008cb6bb has its CatchHandler @ 008cc174 */
      subdivideTopPlane(this,(Brep *)plVar72,this_00,(vector *)&local_130);
      uVar75 = NEON_fmov(0x3f800000,4);
      local_180 = (void *)0x0;
      local_a0._0_1_ = (undefined)uVar75;
      local_a0._1_1_ = (undefined)((ulong)uVar75 >> 8);
      uStack_9e = (ushort)((ulong)uVar75 >> 0x10);
      uStack_9c = (ushort)((ulong)uVar75 >> 0x20);
      uStack_9a = (undefined2)((ulong)uVar75 >> 0x30);
                    /* try { // try from 008cb6cc to 008cb6df has its CatchHandler @ 008cc13c */
      plVar28 = (long *)BrepUtil::createIndexedTriangleSetFromBrep
                                  (*(Brep **)(this + 0x188),1,(Vector2 *)&local_a0,
                                   (Vector2 *)&local_180,&local_168);
                    /* try { // try from 008cb6e4 to 008cb6fb has its CatchHandler @ 008cc170 */
      uVar20 = TriangleSet::getNumVertices();
      std::__ndk1::
      vector<FillPlaneGeometry::SideVertexFormat,std::__ndk1::allocator<FillPlaneGeometry::SideVertexFormat>>
      ::resize((vector<FillPlaneGeometry::SideVertexFormat,std::__ndk1::allocator<FillPlaneGeometry::SideVertexFormat>>
                *)(this + 200),uVar20 & 0xffffffff);
      uVar18 = 0;
      uVar34 = 0;
      while( true ) {
                    /* try { // try from 008cb708 to 008cb70f has its CatchHandler @ 008cc1dc */
        uVar16 = TriangleSet::getNumVertices();
        if (uVar34 == uVar16) break;
        lVar43 = *(long *)(this + 200);
                    /* try { // try from 008cb71c to 008cb74f has its CatchHandler @ 008cc228 */
        lVar35 = TriangleSet::getPositions();
        uVar21 = (ulong)uVar34;
        puVar42 = (undefined4 *)(lVar35 + (ulong)uVar18 * 4);
        puVar45 = (undefined4 *)(lVar43 + uVar21 * 0x1c);
        *puVar45 = *puVar42;
        puVar45[1] = puVar42[1];
        puVar45[2] = puVar42[2];
        lVar35 = TriangleSet::getNormals();
        uVar20 = (ulong)uVar18;
        lVar43 = lVar43 + uVar21 * 0x1c;
        uVar34 = uVar34 + 1;
        uVar18 = uVar18 + 3;
        puVar42 = (undefined4 *)(lVar35 + uVar20 * 4);
        *(undefined4 *)(lVar43 + 0xc) = *puVar42;
        *(undefined4 *)(lVar43 + 0x10) = puVar42[1];
        *(undefined4 *)(lVar43 + 0x14) = puVar42[2];
        *(ushort *)(lVar43 + 0x18) = local_168[uVar21];
      }
      uVar34 = (int)((ulong)(plVar72[0x5ee] - plVar72[0x5ed]) >> 5) * 3;
      *(uint *)(this + 0x8c) = uVar34;
      *(int *)(this + 0x90) = (int)((ulong)(*(long *)(this + 0xe8) - *(long *)(this + 0xe0)) >> 5);
                    /* try { // try from 008cb7b4 to 008cb7bb has its CatchHandler @ 008cc138 */
      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::vector
                ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_180,
                 (ulong)uVar34);
      if ((int)((ulong)(plVar72[0x5ee] - plVar72[0x5ed]) >> 5) != 0) {
        uVar21 = 0;
        uVar20 = 0;
        do {
                    /* try { // try from 008cb7e0 to 008cb7eb has its CatchHandler @ 008cc1b8 */
          Brep::getFaceConeIndices
                    ((Brep *)plVar72,(uint)uVar20,
                     (ushort *)((long)local_180 + (uVar21 & 0xffffffff) * 2));
          uVar20 = uVar20 + 1;
          uVar21 = uVar21 + 3;
        } while (uVar20 < ((ulong)(plVar72[0x5ee] - plVar72[0x5ed]) >> 5 & 0xffffffff));
      }
      if (this[0x97] != (FillPlaneGeometry)0x0) {
                    /* try { // try from 008cb818 to 008cb84f has its CatchHandler @ 008cc18c */
        iVar17 = IndexedTriangleSet::getNumIndices();
        iVar19 = *(int *)(this + 0x8c);
        *(int *)(this + 0x8c) = iVar19 + iVar17;
        *(int *)(this + 0x90) =
             *(int *)(this + 0x90) +
             (int)((ulong)(*(long *)(this + 0xd0) - *(long *)(this + 200)) >> 2) * -0x49249249;
        std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::resize
                  ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)&local_180,
                   (ulong)(uint)(iVar19 + iVar17));
        lVar35 = plVar72[0x5ee];
        uVar34 = 0;
        lVar43 = plVar72[0x5ed];
        lVar48 = plVar72[0x5df];
        lVar54 = plVar72[0x5de];
        while( true ) {
                    /* try { // try from 008cb874 to 008cb88b has its CatchHandler @ 008cc1e0 */
          uVar18 = IndexedTriangleSet::getNumIndices();
          if (uVar34 == uVar18) break;
          lVar29 = IndexedTriangleSet::getIndices16();
          uVar20 = (ulong)uVar34;
          uVar18 = (int)((ulong)(lVar35 - lVar43) >> 5) * 3 + uVar34;
          uVar34 = uVar34 + 1;
          *(short *)((long)local_180 + (ulong)uVar18 * 2) =
               *(short *)(lVar29 + uVar20 * 2) + (short)((uint)((int)lVar48 - (int)lVar54) >> 4);
        }
      }
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 8))(plVar28);
      }
      if (local_168 != (ushort *)0x0) {
        operator_delete(local_168);
      }
                    /* try { // try from 008cb8dc to 008cb8e3 has its CatchHandler @ 008cc18c */
      std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
                ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0x140),
                 *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 5,false);
      local_a0._0_1_ = 0;
      local_a0._1_1_ = 0;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      local_98._0_4_ = 0;
                    /* try { // try from 008cb8fc to 008cb903 has its CatchHandler @ 008cc134 */
      std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::resize
                ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)(this + 0x158),
                 *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 5,(Vector3 *)&local_a0);
      local_a0._0_1_ = 0;
      local_a0._1_1_ = 0;
      uStack_9e = 0;
      uStack_9c = 0;
      uStack_9a = 0;
      local_98._0_4_ = 0;
                    /* try { // try from 008cb91c to 008cb923 has its CatchHandler @ 008cc130 */
      std::__ndk1::vector<Vector3,std::__ndk1::allocator<Vector3>>::resize
                ((vector<Vector3,std::__ndk1::allocator<Vector3>> *)(this + 0x170),
                 *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 5,(Vector3 *)&local_a0);
      local_188 = (char *)0x0;
      local_198 = 0;
      lVar35 = *(long *)(this + 0xe0);
      lVar43 = *(long *)(this + 0xe8);
      local_190 = 0x200000000;
                    /* try { // try from 008cb948 to 008cb99b has its CatchHandler @ 008cc168 */
      iVar19 = (**(code **)(**(long **)(this + 0x60) + 0x10))(*(long **)(this + 0x60),0);
      *(int *)(this + 0x58) = iVar19 * (int)((ulong)(lVar43 - lVar35) >> 5);
      if (this[0x97] == (FillPlaneGeometry)0x0) {
        *(undefined8 *)(this + 0xd0) = *(undefined8 *)(this + 200);
      }
      else {
        lVar35 = *(long *)(this + 200);
        lVar43 = *(long *)(this + 0xd0);
        *(int *)(this + 0x84) =
             (int)((ulong)(*(long *)(*(long *)(this + 0x188) + 0x2f70) -
                          *(long *)(*(long *)(this + 0x188) + 0x2f68)) >> 5) * 3;
        iVar19 = (**(code **)(**(long **)(this + 0x60) + 0x10))(*(long **)(this + 0x60),0);
        iVar19 = (int)local_190 + (int)((ulong)(lVar43 - lVar35) >> 2) * iVar19 * -0x49249249;
        local_190 = CONCAT44(local_190._4_4_,iVar19);
        *(int *)(this + 0x80) = iVar19;
      }
                    /* try { // try from 008cb9cc to 008cb9d3 has its CatchHandler @ 008cc16c */
      RenderDeviceManager::getInstance();
      plVar28 = (long *)RenderDeviceManager::getCurrentRenderDevice();
                    /* try { // try from 008cb9e0 to 008cb9e3 has its CatchHandler @ 008cc12c */
      uVar75 = (**(code **)(*plVar28 + 0x138))();
      local_a0._0_1_ = SUB81(local_180,0);
      local_a0._1_1_ = (undefined)((ulong)local_180 >> 8);
      uStack_9e = (ushort)((ulong)local_180 >> 0x10);
      uStack_9c = (ushort)((ulong)local_180 >> 0x20);
      uStack_9a = (undefined2)((ulong)local_180 >> 0x30);
      local_98._0_4_ = (int)local_178 - (int)local_180 & 0xfffffffe;
      local_88 = "FillPlane";
      local_98._4_4_ = 1;
      local_90._0_4_ = 0;
                    /* try { // try from 008cba24 to 008cba5f has its CatchHandler @ 008cc190 */
      uVar30 = (**(code **)(*plVar28 + 0x110))(plVar28,uVar75,&local_a0);
      lVar35 = plVar72[0x5ee];
      lVar43 = plVar72[0x5ed];
      *(undefined8 *)(this + 0x78) = uVar30;
      uVar34 = (int)((ulong)(lVar35 - lVar43) >> 5) * 3;
      *(uint *)(this + 0x68) = uVar34;
      std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::resize
                ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(this + 0xf8),
                 (ulong)uVar34);
      uVar20 = (ulong)(uint)(*(int *)(this + 0x68) << 1) & 0x1fffe;
      if ((int)uVar20 != 0) {
        memmove(*(void **)(this + 0xf8),local_180,uVar20);
      }
      lVar35 = *(long *)(this + 0xe0);
      lVar43 = *(long *)(this + 0xe8);
                    /* try { // try from 008cba90 to 008cbacb has its CatchHandler @ 008cc190 */
      iVar19 = (**(code **)(**(long **)(this + 0x60) + 0x10))(*(long **)(this + 0x60),0);
      local_188 = "FillPlane";
      iVar19 = (int)local_190 + iVar19 * (int)((ulong)(lVar43 - lVar35) >> 5);
      local_190 = CONCAT44(local_190._4_4_,iVar19);
      *(int *)(this + 0x88) = iVar19;
      uVar75 = (**(code **)(*plVar28 + 0x108))(plVar28,uVar75,&local_198);
      ppfVar40 = *(float ***)(this + 0xb0);
      ppfVar52 = *(float ***)(this + 0xb8);
      *(undefined8 *)(this + 0x70) = uVar75;
      ppfVar41 = ppfVar52;
      if (ppfVar52 != ppfVar40) {
        uVar20 = 0;
        do {
          puVar68 = (undefined8 *)ppfVar40[uVar20];
          uVar20 = (ulong)((int)uVar20 + 1);
          uVar87 = *(undefined4 *)(puVar68[3] + -4);
          *puVar68 = *(undefined8 *)(puVar68[3] + -0xc);
          *(undefined4 *)(puVar68 + 1) = uVar87;
          ppfVar40 = *(float ***)(this + 0xb0);
          ppfVar52 = *(float ***)(this + 0xb8);
          ppfVar41 = ppfVar40;
        } while (uVar20 < (ulong)((long)ppfVar52 - (long)ppfVar40 >> 3));
      }
      lVar35 = *(long *)(this + 0xe0);
      lVar43 = *(long *)(this + 0xe8);
      uVar20 = lVar43 - lVar35;
      fVar74 = *(float *)(this + 0x114) / (float)(unkuint9)(ulong)((long)uVar20 >> 5);
      *(float *)(this + 0x120) = fVar74;
      if (ppfVar41 != ppfVar52) {
        ppfVar40 = ppfVar41;
        do {
          fVar76 = *(float *)(this + 0x9c);
          fVar74 = (float)NEON_fmadd(fVar74 * (float)(uVar20 >> 5 & 0xffffffff),
                                     *(undefined4 *)(this + 0x11c),fVar76);
          if ((fVar76 <= fVar74) &&
             (fVar76 = *(float *)(this + 0xa8), fVar74 <= *(float *)(this + 0xa8))) {
            fVar76 = fVar74;
          }
          pfVar59 = *ppfVar40;
          pfVar53 = *(float **)(pfVar59 + 4);
          do {
            pfVar57 = pfVar53;
            pfVar53 = pfVar57 + 3;
            fVar74 = pfVar57[4];
            pfVar56 = (float *)(*(long *)(pfVar59 + 6) + -0xc);
            if (pfVar53 == (float *)(*(long *)(pfVar59 + 6) + -0xc)) break;
            pfVar56 = pfVar53;
          } while (fVar76 < fVar74);
          fVar81 = pfVar57[2];
          fVar82 = pfVar57[5];
          ppfVar40 = ppfVar40 + 1;
          fVar78 = *pfVar57;
          fVar74 = (fVar76 - fVar74) / (pfVar57[1] - fVar74);
          fVar79 = *pfVar56;
          pfVar59[1] = fVar76;
          fVar76 = (float)NEON_fmadd(fVar78 - fVar79,fVar74,fVar79);
          fVar74 = (float)NEON_fmadd(fVar81 - fVar82,fVar74,fVar82);
          *pfVar59 = fVar76 + pfVar59[10];
          pfVar59[2] = fVar74 + pfVar59[0xb];
          if (ppfVar40 == ppfVar52) break;
          fVar74 = *(float *)(this + 0x120);
        } while( true );
      }
      for (; lVar35 != lVar43; lVar35 = lVar35 + 0x20) {
        if ((ulong)*(ushort *)(lVar35 + 0x16) != 0xffff) {
          fVar76 = *(float *)(lVar35 + 8);
          fVar79 = *(float *)(lVar35 + 0xc);
          uVar75 = *(undefined8 *)(ppfVar41[*(ushort *)(lVar35 + 0x14)] + 1);
          uVar30 = *(undefined8 *)(ppfVar41[*(ushort *)(lVar35 + 0x16)] + 1);
          fVar78 = (float)NEON_fmadd(*ppfVar41[*(ushort *)(lVar35 + 0x16)],fVar79,
                                     fVar76 * *ppfVar41[*(ushort *)(lVar35 + 0x14)]);
          fVar74 = (float)uVar75 * fVar76 + (float)uVar30 * fVar79;
          fVar76 = (float)((ulong)uVar75 >> 0x20) * fVar76 + (float)((ulong)uVar30 >> 0x20) * fVar79
          ;
          if ((ulong)*(ushort *)(lVar35 + 0x18) != 0xffff) {
            fVar79 = *(float *)(lVar35 + 0x10);
            uVar75 = *(undefined8 *)(ppfVar41[*(ushort *)(lVar35 + 0x18)] + 1);
            fVar78 = (float)NEON_fmadd(*ppfVar41[*(ushort *)(lVar35 + 0x18)],fVar79,fVar78);
            fVar74 = fVar74 + (float)uVar75 * fVar79;
            fVar76 = fVar76 + (float)((ulong)uVar75 >> 0x20) * fVar79;
          }
          fVar79 = INFINITY;
          if (local_d0 == local_c8) {
            fVar79 = INFINITY;
          }
          else {
            pfVar53 = local_d0;
            fVar81 = local_c8[-3];
            fVar82 = local_c8[-1];
            fVar84 = local_c8[-2];
            do {
              fVar80 = *pfVar53;
              fVar85 = pfVar53[1];
              fVar83 = pfVar53[2];
              fVar86 = fVar85 - fVar84;
              fVar89 = fVar80 - fVar81;
              fVar92 = fVar83 - fVar82;
              uVar87 = NEON_fmadd(fVar78 - fVar81,fVar89,(fVar74 - fVar84) * fVar86);
              uVar94 = NEON_fmadd(fVar89,fVar89,fVar86 * fVar86);
              fVar88 = (float)NEON_fmadd(fVar76 - fVar82,fVar92,uVar87);
              fVar91 = (float)NEON_fmadd(fVar92,fVar92,uVar94);
              fVar88 = fVar88 / fVar91;
              fVar91 = fVar82;
              fVar90 = fVar84;
              fVar93 = fVar81;
              if ((0.0 < fVar88) &&
                 (fVar91 = fVar83, fVar90 = fVar85, fVar93 = fVar80, fVar88 < 1.0)) {
                fVar91 = fVar82 + fVar92 * fVar88;
                fVar90 = fVar84 + fVar86 * fVar88;
                fVar93 = fVar81 + fVar89 * fVar88;
              }
              pfVar53 = pfVar53 + 3;
              uVar87 = NEON_fmadd(fVar90 - fVar74,fVar90 - fVar74,
                                  (fVar93 - fVar78) * (fVar93 - fVar78));
              fVar82 = (float)NEON_fmadd(fVar91 - fVar76,fVar91 - fVar76,uVar87);
              fVar81 = SQRT(fVar82);
              if (fVar79 <= SQRT(fVar82)) {
                fVar81 = fVar79;
              }
              fVar79 = fVar81;
              fVar81 = fVar80;
              fVar82 = fVar83;
              fVar84 = fVar85;
            } while (pfVar53 != local_c8);
          }
          *(float *)(lVar35 + 4) = fVar79;
        }
      }
      updateMaxVertexVolumeSlope();
      puVar42 = *(undefined4 **)(this + 0xe0);
      puVar45 = *(undefined4 **)(this + 0xe8);
      *(undefined4 *)(this + 0x118) = 0;
      uVar20 = (long)puVar45 - (long)puVar42;
      if (uVar20 != 0) {
        lVar35 = *(long *)(this + 0xb0);
        do {
          *puVar42 = 0;
          if (*(short *)((long)puVar42 + 0x16) == -1) {
            fVar74 = *(float *)(this + 0x9c);
            fVar76 = (float)NEON_fmadd((float)(uVar20 >> 5 & 0xffffffff) * 0.0,
                                       *(undefined4 *)(this + 0x11c),fVar74);
            if ((fVar74 <= fVar76) &&
               (fVar74 = *(float *)(this + 0xa8), fVar76 <= *(float *)(this + 0xa8))) {
              fVar74 = fVar76;
            }
            pfVar59 = *(float **)(lVar35 + (ulong)*(ushort *)(puVar42 + 5) * 8);
            pfVar53 = *(float **)(pfVar59 + 4);
            do {
              pfVar57 = pfVar53;
              pfVar53 = pfVar57 + 3;
              fVar76 = pfVar57[4];
              pfVar56 = (float *)(*(long *)(pfVar59 + 6) + -0xc);
              if (pfVar53 == (float *)(*(long *)(pfVar59 + 6) + -0xc)) break;
              pfVar56 = pfVar53;
            } while (fVar74 < fVar76);
            fVar81 = pfVar57[2];
            fVar82 = pfVar57[5];
            fVar78 = *pfVar57;
            fVar76 = (fVar74 - fVar76) / (pfVar57[1] - fVar76);
            fVar79 = *pfVar56;
            pfVar59[1] = fVar74;
            fVar78 = (float)NEON_fmadd(fVar78 - fVar79,fVar76,fVar79);
            fVar74 = (float)NEON_fmadd(fVar81 - fVar82,fVar76,fVar82);
            *pfVar59 = fVar78 + pfVar59[10];
            pfVar59[2] = fVar74 + pfVar59[0xb];
          }
          puVar42 = puVar42 + 8;
        } while (puVar42 != puVar45);
      }
      (**(code **)(*plVar72 + 8))(plVar72);
      if (local_180 != (void *)0x0) {
        local_178 = local_180;
        operator_delete(local_180);
      }
      if (local_d0 != (float *)0x0) {
        local_c8 = local_d0;
        operator_delete(local_d0);
      }
      if (local_160 != (uint *)0x0) {
        local_158 = local_160;
        operator_delete(local_160);
      }
      if (local_148 != (undefined4 *)0x0) {
        local_140 = local_148;
        operator_delete(local_148);
      }
      FUN_008ce6a0(&local_130);
    }
    FUN_008ce6a0(&local_118);
joined_r0x008ca808:
    if (local_100 != (void *)0x0) {
      local_f8 = local_100;
      operator_delete(local_100);
    }
  }
  ppuVar24 = local_e8;
  ppuVar64 = local_e0;
  if (local_e8 != (uint **)0x0) {
    while (ppuVar13 = ppuVar64, ppuVar13 != ppuVar24) {
      ppuVar64 = ppuVar13 + -3;
      puVar22 = *ppuVar64;
      if (puVar22 != (uint *)0x0) {
        ppuVar13[-2] = puVar22;
        operator_delete(puVar22);
      }
    }
    local_e0 = ppuVar24;
    operator_delete(local_e8);
  }
LAB_008c9a8c:
  if (*(long *)(lVar11 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar67;
}


