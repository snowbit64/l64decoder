// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onExecuteAsync
// Entry Point: 0072be14
// Size: 3168 bytes
// Signature: undefined onExecuteAsync(void)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VehicleNavigationMapGenerator::PhysicsTask::onExecuteAsync() */

bool VehicleNavigationMapGenerator::PhysicsTask::onExecuteAsync(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ushort uVar5;
  long lVar6;
  void *pvVar7;
  bool bVar8;
  long in_x0;
  ulong uVar9;
  void *pvVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  int iVar19;
  undefined8 *puVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 *local_388;
  undefined8 *local_348;
  undefined8 *local_338;
  void *local_330;
  undefined8 *local_328;
  undefined8 *local_320;
  void *local_318;
  void *local_310;
  undefined8 local_308;
  void *local_300;
  void *local_2f8;
  undefined8 local_2f0;
  undefined **ppuStack_2e8;
  void **local_2e0;
  void **ppvStack_2d8;
  uint local_2d0;
  float local_2c8;
  float fStack_2c4;
  float local_2c0;
  float local_2bc;
  float fStack_2b8;
  float local_2b4;
  float local_2b0;
  float fStack_2ac;
  float local_2a8;
  float local_2a4;
  float fStack_2a0;
  float local_29c;
  float fStack_294;
  float local_290;
  float fStack_288;
  float local_284;
  float fStack_27c;
  float local_278;
  float fStack_270;
  float local_26c;
  float local_268 [82];
  float local_120;
  float local_11c;
  float fStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  
  lVar6 = tpidr_el0;
  local_b8 = *(long *)(lVar6 + 0x28);
  Mutex::enterCriticalSection();
  if (*(char *)(in_x0 + 0x3a) == '\0') {
    if (*(char *)(in_x0 + 0x38) == '\0') {
      uVar1 = *(uint *)(in_x0 + 0x40);
      local_c0 = 0x80000000;
      iVar14 = uVar1 * 0x208;
      iVar19 = *(uint *)(in_x0 + 0x3c) * 8;
      local_c8 = 0xbf80000000000000;
      lVar13 = *(long *)(in_x0 + 0x18);
      lVar4 = *(long *)(in_x0 + 0x20);
      fVar24 = *(float *)(lVar4 + (ulong)(uint)(iVar14 + 0x208 + iVar19) * 4);
      fVar25 = *(float *)(lVar4 + (ulong)(uint)(iVar14 + 0x208 + iVar19 + 8) * 4);
      fVar27 = *(float *)(lVar4 + (ulong)(uint)(iVar14 + iVar19) * 4);
      fVar28 = *(float *)(lVar4 + (ulong)(uint)(iVar14 + iVar19 + 8) * 4);
      fVar36 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 200));
      fVar31 = fVar25;
      if (fVar24 <= fVar25) {
        fVar31 = fVar24;
      }
      fVar23 = fVar28;
      if (fVar27 <= fVar28) {
        fVar23 = fVar27;
      }
      if (fVar23 <= fVar31) {
        fVar31 = fVar23;
      }
      if (fVar28 <= fVar27) {
        fVar28 = fVar27;
      }
      fVar27 = *(float *)(lVar13 + 0xc0);
      if (fVar25 <= fVar24) {
        fVar25 = fVar24;
      }
      fVar24 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0xc4));
      local_120 = fVar27 * 8.0;
      uVar35 = NEON_ucvtf(*(undefined4 *)(in_x0 + 0x30));
      if (fVar25 <= fVar28) {
        fVar25 = fVar28;
      }
      uVar29 = NEON_ucvtf(*(undefined4 *)(in_x0 + 0x34));
      local_2e0 = &local_300;
      ppuStack_2e8 = &PTR__IPhysicsEntityReport_00fda838;
      uVar30 = NEON_fmadd(uVar35,fVar27 * 64.0,fVar24 * -0.5);
      uVar35 = NEON_fmadd(uVar29,fVar27 * 64.0,fVar36 * -0.5);
      fVar34 = (float)*(undefined8 *)(lVar13 + 0x78);
      fVar38 = (float)((ulong)*(undefined8 *)(lVar13 + 0x78) >> 0x20);
      fVar40 = (float)NEON_fmadd((float)(ulong)*(uint *)(in_x0 + 0x3c),local_120,uVar30);
      fVar28 = *(float *)(lVar13 + 0xd4) + fVar25 + 0.25;
      local_300 = (void *)0x0;
      local_2f8 = (void *)0x0;
      local_318 = (void *)0x0;
      local_310 = (void *)0x0;
      fVar24 = local_120 + fVar40;
      fVar41 = (float)NEON_fmadd((float)(ulong)uVar1,local_120,uVar35);
      uStack_108 = *(undefined8 *)(lVar13 + 0x70);
      local_110 = *(undefined8 *)(lVar13 + 0x68);
      uStack_f8 = *(undefined8 *)(lVar13 + 0x80);
      uStack_100 = *(undefined8 *)(lVar13 + 0x78);
      fVar32 = (float)*(undefined8 *)(lVar13 + 0x68);
      fVar33 = (float)((ulong)*(undefined8 *)(lVar13 + 0x68) >> 0x20);
      uVar35 = NEON_fmadd(fVar24,*(undefined4 *)(lVar13 + 0x70),fVar28 * *(float *)(lVar13 + 0x80));
      uVar29 = NEON_fmadd(fVar40,*(undefined4 *)(lVar13 + 0x70),fVar31 * *(float *)(lVar13 + 0x80));
      fVar39 = local_120 + fVar41;
      fVar36 = (float)*(undefined8 *)(lVar13 + 0x88);
      fVar23 = (float)((ulong)*(undefined8 *)(lVar13 + 0x88) >> 0x20);
      local_120 = local_120 * 0.5;
      uStack_e8 = *(undefined8 *)(lVar13 + 0x90);
      local_f0 = *(undefined8 *)(lVar13 + 0x88);
      local_11c = (fVar28 - fVar31) * 0.5;
      fVar37 = (float)NEON_fmadd(fVar41,*(undefined4 *)(lVar13 + 0x90),uVar29);
      fVar25 = (float)NEON_fmadd(fVar39,*(undefined4 *)(lVar13 + 0x90),uVar35);
      fVar22 = (float)*(undefined8 *)(lVar13 + 0x98);
      fVar26 = (float)((ulong)*(undefined8 *)(lVar13 + 0x98) >> 0x20);
      local_2d0 = *(uint *)(lVar13 + 0xdc);
      ppvStack_2d8 = &local_318;
      local_308 = 0;
      local_2f0 = 0;
      local_e0 = CONCAT44((fVar26 + fVar38 * fVar31 + fVar33 * fVar40 + fVar23 * fVar41 +
                          fVar26 + fVar38 * fVar28 + fVar33 * fVar24 + fVar23 * fVar39) * 0.5,
                          (fVar22 + fVar34 * fVar31 + fVar32 * fVar40 + fVar36 * fVar41 +
                          fVar22 + fVar34 * fVar28 + fVar32 * fVar24 + fVar36 * fVar39) * 0.5);
      local_d8 = CONCAT44((int)((ulong)*(undefined8 *)(lVar13 + 0xa0) >> 0x20),
                          (*(float *)(lVar13 + 0xa0) + fVar37 + *(float *)(lVar13 + 0xa0) + fVar25)
                          * 0.5);
                    /* try { // try from 0072c114 to 0072c13b has its CatchHandler @ 0072ca74 */
      fStack_118 = local_120;
      Bt2ScenegraphPhysicsContext::overlapBoxShapes
                (*(Bt2ScenegraphPhysicsContext **)(lVar13 + 0xa8),(Matrix4x4 *)&local_110,
                 (Vector3 *)&local_120,(IPhysicsEntityReport *)&ppuStack_2e8,
                 *(uint *)(lVar13 + 0xe0) | local_2d0,false,true,false,0,(TransformGroup **)0x0,0);
      local_330 = (void *)0x0;
      local_328 = (undefined8 *)0x0;
      local_320 = (undefined8 *)0x0;
      if (local_2f8 != local_300) {
        uVar15 = 0;
        puVar11 = (undefined8 *)0x0;
        do {
          lVar13 = *(long *)((long)local_300 + uVar15 * 8);
          puVar20 = puVar11;
          pvVar10 = local_330;
                    /* try { // try from 0072c1a8 to 0072c257 has its CatchHandler @ 0072ca90 */
          if ((lVar13 != *(long *)(*(long *)(in_x0 + 0x18) + 0xb0)) &&
             ((((**(code **)(**(long **)(lVar13 + 200) + 0x10))
                          (*(long **)(lVar13 + 200),lVar13 + 8,local_268,&local_2c8),
               (uint)(int)(local_2c8 - local_268[0]) < 0x40 &&
               ((uint)(int)(local_2c0 - local_268[2]) < 0x40)) ||
              (uVar9 = Bt2ScenegraphPhysicsContext::overlapBoxSingle
                                 (*(Bt2ScenegraphPhysicsContext **)(*(long *)(in_x0 + 0x18) + 0xa8),
                                  (Matrix4x4 *)&local_110,(Vector3 *)&local_120,
                                  *(btCollisionObject **)((long)local_300 + uVar15 * 8),true),
              (uVar9 & 1) != 0)))) {
            pvVar7 = local_300;
            if (puVar11 == local_320) {
              uVar18 = (long)puVar11 - (long)local_330;
              uVar9 = ((long)uVar18 >> 3) + 1;
              if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0072ca48 to 0072ca4f has its CatchHandler @ 0072ca84 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar9 <= (ulong)((long)uVar18 >> 2)) {
                uVar9 = (long)uVar18 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar9 = 0x1fffffffffffffff;
              }
              if (uVar9 == 0) {
                pvVar10 = (void *)0x0;
              }
              else {
                if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0072ca58 to 0072ca63 has its CatchHandler @ 0072ca84 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                pvVar10 = operator_new(uVar9 << 3);
              }
              puVar11 = (undefined8 *)((long)pvVar10 + ((long)uVar18 >> 3) * 8);
              puVar20 = puVar11 + 1;
              *puVar11 = *(undefined8 *)((long)pvVar7 + uVar15 * 8);
              if (0 < (long)uVar18) {
                memcpy(pvVar10,local_330,uVar18);
              }
              local_320 = (undefined8 *)((long)pvVar10 + uVar9 * 8);
              local_328 = puVar20;
              if (local_330 != (void *)0x0) {
                operator_delete(local_330);
              }
            }
            else {
              puVar20 = puVar11 + 1;
              *puVar11 = *(undefined8 *)((long)local_300 + uVar15 * 8);
              local_328 = puVar20;
            }
          }
          local_330 = pvVar10;
          uVar15 = (ulong)((int)uVar15 + 1);
          puVar11 = puVar20;
        } while (uVar15 < (ulong)((long)local_2f8 - (long)local_300 >> 3));
      }
      local_348 = (undefined8 *)0x0;
      local_338 = (undefined8 *)0x0;
      if (local_310 == local_318) {
        local_388 = (undefined8 *)0x0;
      }
      else {
        uVar15 = 0;
        local_388 = (undefined8 *)0x0;
        do {
          lVar13 = *(long *)((long)local_318 + uVar15 * 8);
          puVar11 = local_348;
                    /* try { // try from 0072c314 to 0072c3c7 has its CatchHandler @ 0072ca8c */
          if ((lVar13 != *(long *)(*(long *)(in_x0 + 0x18) + 0xb0)) &&
             ((((**(code **)(**(long **)(lVar13 + 200) + 0x10))
                          (*(long **)(lVar13 + 200),lVar13 + 8,local_268,&local_2c8),
               (uint)(int)(local_2c8 - local_268[0]) < 0x40 &&
               ((uint)(int)(local_2c0 - local_268[2]) < 0x40)) ||
              (uVar9 = Bt2ScenegraphPhysicsContext::overlapBoxSingle
                                 (*(Bt2ScenegraphPhysicsContext **)(*(long *)(in_x0 + 0x18) + 0xa8),
                                  (Matrix4x4 *)&local_110,(Vector3 *)&local_120,
                                  *(btCollisionObject **)((long)local_318 + uVar15 * 8),true),
              (uVar9 & 1) != 0)))) {
            pvVar10 = local_318;
            if (local_388 == local_338) {
              uVar18 = (long)local_388 - (long)local_348;
              uVar9 = ((long)uVar18 >> 3) + 1;
              if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0072ca50 to 0072ca57 has its CatchHandler @ 0072ca80 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar9 <= (ulong)((long)uVar18 >> 2)) {
                uVar9 = (long)uVar18 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar18) {
                uVar9 = 0x1fffffffffffffff;
              }
              if (uVar9 == 0) {
                puVar11 = (undefined8 *)0x0;
              }
              else {
                if (uVar9 >> 0x3d != 0) {
                    /* try { // try from 0072ca64 to 0072ca6f has its CatchHandler @ 0072ca80 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                puVar11 = (undefined8 *)operator_new(uVar9 << 3);
              }
              puVar20 = puVar11 + ((long)uVar18 >> 3);
              *puVar20 = *(undefined8 *)((long)pvVar10 + uVar15 * 8);
              if (0 < (long)uVar18) {
                memcpy(puVar11,local_348,uVar18);
              }
              local_338 = puVar11 + uVar9;
              local_388 = puVar20 + 1;
              if (local_348 != (undefined8 *)0x0) {
                operator_delete(local_348);
              }
            }
            else {
              *local_388 = *(undefined8 *)((long)local_318 + uVar15 * 8);
              local_388 = local_388 + 1;
            }
          }
          local_348 = puVar11;
          uVar15 = (ulong)((int)uVar15 + 1);
        } while (uVar15 < (ulong)((long)local_310 - (long)local_318 >> 3));
      }
      uVar15 = 0;
      uVar5 = *(ushort *)(*(long *)(in_x0 + 0x18) + 0x24);
      do {
        uVar9 = 0;
        fVar31 = (float)NEON_fmadd((float)(uVar15 & 0xffffffff),fVar27,fVar40);
        iVar14 = iVar19 + (int)uVar15;
        do {
          iVar3 = uVar1 * 8 + (int)uVar9;
          uVar2 = iVar14 + *(int *)(in_x0 + 0x30) * 0x40;
          uVar17 = iVar3 + *(int *)(in_x0 + 0x34) * 0x40;
          bVar8 = uVar2 <= uVar5;
          uVar21 = (uint)uVar5;
          if (bVar8 && uVar17 < uVar21 || bVar8 && uVar17 == uVar21) {
            fVar25 = *(float *)(*(long *)(in_x0 + 0x20) + (ulong)(uint)(iVar14 + iVar3 * 0x41) * 4);
            if ((long)local_328 - (long)local_330 != 0) {
              uVar18 = 0;
              fVar24 = (float)NEON_fmadd((float)(uVar9 & 0xffffffff),fVar27,fVar41);
              fVar28 = fVar31 + 0.01;
              if (uVar2 != 0) {
                fVar28 = fVar31;
              }
              lVar13 = *(long *)(in_x0 + 0x18);
              fVar36 = fVar24 + 0.01;
              if (uVar17 != 0) {
                fVar36 = fVar24;
              }
              fVar24 = fVar28 + -0.01;
              if (uVar2 != uVar21) {
                fVar24 = fVar28;
              }
              uVar29 = NEON_fmadd(fVar24,*(undefined4 *)(lVar13 + 0x68),
                                  *(float *)(lVar13 + 0x78) * 0.0);
              fStack_2c4 = *(float *)(lVar13 + 0xd8);
              uVar35 = NEON_fmadd(fVar24,*(undefined4 *)(lVar13 + 0x70),
                                  *(float *)(lVar13 + 0x80) * 0.0);
              fVar28 = fVar36 + -0.01;
              if (uVar17 != uVar21) {
                fVar28 = fVar36;
              }
              local_2c8 = (float)NEON_fmadd(fVar28,*(undefined4 *)(lVar13 + 0x88),uVar29);
              local_2c0 = (float)NEON_fmadd(fVar28,*(undefined4 *)(lVar13 + 0x90),uVar35);
              local_2c8 = *(float *)(lVar13 + 0x98) + local_2c8;
              local_2c0 = *(float *)(lVar13 + 0xa0) + local_2c0;
              fVar28 = (fStack_2c4 - fVar25) + 0.1;
                    /* try { // try from 0072c59c to 0072c5af has its CatchHandler @ 0072caac */
              while (fVar24 = (float)Bt2ScenegraphPhysicsContext::raycastSingle
                                               (*(Bt2ScenegraphPhysicsContext **)(lVar13 + 0xa8),
                                                (Vector3 *)&local_2c8,(Vector3 *)&local_c8,fVar28,
                                                *(btCollisionObject **)
                                                 ((long)local_330 + uVar18 * 8),(Vector3 *)0x0),
                    fVar28 <= fVar24) {
                uVar18 = (ulong)((int)uVar18 + 1);
                if ((ulong)((long)local_328 - (long)local_330 >> 3) <= uVar18) goto LAB_0072c480;
                lVar13 = *(long *)(in_x0 + 0x18);
              }
              fVar24 = *(float *)(*(long *)(in_x0 + 0x18) + 0xd8) - fVar24;
              local_268[uVar15 * 9 + uVar9] = fVar24;
              if (fVar24 != 3.402823e+38) goto LAB_0072c484;
            }
LAB_0072c480:
            local_268[uVar15 * 9 + uVar9] = fVar25;
          }
LAB_0072c484:
          uVar9 = uVar9 + 1;
        } while (uVar9 != 9);
        uVar15 = uVar15 + 1;
      } while (uVar15 != 9);
      fVar25 = fVar27 * 1.414214;
      fVar31 = (float)NEON_fmadd(fVar25,fVar27 * -1.414214,fVar25 * -(fVar27 * 1.414214));
      uVar15 = 0;
      do {
        uVar9 = uVar15 + 1;
        uVar18 = 0;
        fVar28 = (float)NEON_fmadd((float)(uVar15 & 0xffffffff),fVar27,fVar40);
        fVar24 = fVar27 + fVar28;
        iVar14 = iVar19 + (int)uVar15;
        do {
          uVar2 = iVar14 + *(int *)(in_x0 + 0x30) * 0x40;
          iVar3 = uVar1 * 8 + (int)uVar18;
          uVar17 = iVar3 + *(int *)(in_x0 + 0x34) * 0x40;
          if (uVar2 < uVar21 && uVar17 < uVar21) {
            fVar36 = *(float *)(*(long *)(in_x0 + 0x28) + (ulong)(uint)(iVar14 + iVar3 * 0x40) * 4);
            if (fVar36 == 3.402823e+38) {
LAB_0072c6bc:
              fVar23 = INFINITY;
            }
            else {
              lVar13 = *(long *)(in_x0 + 0x18);
              fVar33 = local_268[uVar15 * 9 + uVar18];
              fVar32 = local_268[uVar9 * 9 + uVar18];
              fVar37 = local_268[uVar15 * 9 + uVar18 + 1];
              fVar34 = local_268[uVar9 * 9 + uVar18 + 1];
              fVar22 = cosf(*(float *)(lVar13 + 0xd0));
              fVar26 = INFINITY;
              fVar23 = INFINITY;
              if (((fVar33 != 3.402823e+38) && (fVar23 = fVar26, fVar32 != 3.402823e+38)) &&
                 ((fVar37 != 3.402823e+38 && (fVar34 != 3.402823e+38)))) {
                uVar35 = NEON_fmadd(fVar34 - fVar33,fVar25,(fVar37 - fVar32) * -(fVar27 * 1.414214))
                ;
                uVar29 = NEON_fmadd(fVar25,fVar37 - fVar32,fVar27 * -1.414214 * -(fVar34 - fVar33));
                uVar35 = NEON_fmadd(uVar35,uVar35,fVar31 * fVar31);
                fVar23 = (float)NEON_fmadd(uVar29,uVar29,uVar35);
                fVar23 = ABS(fVar31) / SQRT(fVar23);
                if (fVar23 < fVar22) goto LAB_0072c6bc;
                if (local_348 != local_388) {
                  local_2c0 = (float)NEON_fmadd((float)(uVar18 & 0xffffffff),fVar27,fVar41);
                  fStack_2c4 = fVar33 + 0.25;
                  fStack_2b8 = fVar32 + 0.25;
                  fStack_2ac = fVar37 + 0.25;
                  local_2a8 = fVar27 + local_2c0;
                  fStack_2a0 = fVar34 + 0.25;
                  fVar26 = (((fVar33 + fVar34) - fVar32) - fVar37) * 0.5;
                  if (fVar26 <= 0.0) {
                    fStack_2c4 = fStack_2c4 - fVar26;
                    fStack_2a0 = fStack_2a0 - fVar26;
                  }
                  else {
                    fStack_2b8 = fVar26 + fStack_2b8;
                    fStack_2ac = fVar26 + fStack_2ac;
                  }
                  fStack_270 = *(float *)(lVar13 + 0xd4);
                  fStack_294 = fStack_270 + fStack_2c4;
                  fStack_288 = fStack_270 + fStack_2b8;
                  fStack_27c = fStack_270 + fStack_2ac;
                  fStack_270 = fStack_270 + fStack_2a0;
                  local_2c8 = fVar28;
                  local_2bc = fVar24;
                  local_2b4 = local_2c0;
                  local_2b0 = fVar28;
                  local_2a4 = fVar24;
                  local_29c = local_2a8;
                  local_290 = local_2c0;
                  local_284 = local_2c0;
                  local_278 = local_2a8;
                  local_26c = local_2a8;
                  if (local_388 != local_348) {
                    uVar16 = 0;
                    /* try { // try from 0072c948 to 0072c957 has its CatchHandler @ 0072ca9c */
                    while (uVar12 = Bt2ScenegraphPhysicsContext::overlapPointCloudSingle
                                              (*(Bt2ScenegraphPhysicsContext **)(lVar13 + 0xa8),
                                               (Matrix4x4 *)(lVar13 + 0x68),(Vector3 *)&local_2c8,8,
                                               (btCollisionObject *)local_348[uVar16],true),
                          (uVar12 & 1) == 0) {
                      uVar16 = (ulong)((int)uVar16 + 1);
                      if ((ulong)((long)local_388 - (long)local_348 >> 3) <= uVar16)
                      goto LAB_0072c990;
                      lVar13 = *(long *)(in_x0 + 0x18);
                    }
                    fVar23 = INFINITY;
                    goto LAB_0072c6c0;
                  }
                }
LAB_0072c990:
                fVar23 = (float)NEON_fmadd(1.0 / (1.0 / (fVar22 * fVar22) + -1.0),
                                           1.0 / (fVar23 * fVar23) + -1.0,0x3f800000);
                fVar36 = fVar36 * fVar23;
                fVar22 = (float)NEON_fmin(fVar36,0x41800000);
                fVar23 = 1.0;
                if (1.0 <= fVar36) {
                  fVar23 = fVar22;
                }
              }
            }
LAB_0072c6c0:
                    /* try { // try from 0072c6c8 to 0072c6d3 has its CatchHandler @ 0072caa0 */
            VehicleNavigationMap::setCellCost
                      ((VehicleNavigationMap *)(*(long *)(in_x0 + 0x18) + 0x10),fVar23,(ushort)uVar2
                       ,(ushort)uVar17);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 8);
        uVar15 = uVar9;
      } while (uVar9 != 8);
      uVar1 = *(int *)(in_x0 + 0x3c) + 1;
      *(uint *)(in_x0 + 0x3c) = uVar1;
      if (uVar1 < 8) {
        bVar8 = true;
      }
      else {
        uVar1 = *(int *)(in_x0 + 0x40) + 1;
        bVar8 = uVar1 < 8;
        *(undefined4 *)(in_x0 + 0x3c) = 0;
        *(uint *)(in_x0 + 0x40) = uVar1;
      }
      if (local_348 != (undefined8 *)0x0) {
        operator_delete(local_348);
      }
      if (local_330 != (void *)0x0) {
        operator_delete(local_330);
      }
      if (local_318 != (void *)0x0) {
        local_310 = local_318;
        operator_delete(local_318);
      }
      if (local_300 != (void *)0x0) {
        local_2f8 = local_300;
        operator_delete(local_300);
      }
      goto LAB_0072be78;
    }
    iVar14 = 0;
    uVar5 = *(ushort *)(*(long *)(in_x0 + 0x18) + 0x24);
    do {
      iVar19 = 0;
      do {
        uVar1 = iVar14 + *(int *)(in_x0 + 0x30) * 0x40;
        uVar2 = iVar19 + *(int *)(in_x0 + 0x34) * 0x40;
        uVar17 = (uint)uVar5;
        if (uVar1 < uVar17 && uVar2 < uVar17) {
                    /* try { // try from 0072bf20 to 0072bf27 has its CatchHandler @ 0072caa4 */
          VehicleNavigationMap::setCellCost
                    ((VehicleNavigationMap *)(*(long *)(in_x0 + 0x18) + 0x10),INFINITY,(ushort)uVar1
                     ,(ushort)uVar2);
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 0x40);
      iVar14 = iVar14 + 1;
    } while (iVar14 != 0x40);
  }
  bVar8 = false;
  *(undefined4 *)(in_x0 + 0x40) = 8;
LAB_0072be78:
                    /* try { // try from 0072be78 to 0072be7f has its CatchHandler @ 0072ca88 */
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar6 + 0x28) == local_b8) {
    return bVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


