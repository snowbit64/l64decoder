// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: linearProgram3
// Entry Point: 0087e5e0
// Size: 1120 bytes
// Signature: undefined __thiscall linearProgram3(ObstacleAvoidance * this, vector * param_1, ulong param_2, ulong param_3, float param_4, Vector2 * param_5)


/* ObstacleAvoidance::linearProgram3(std::__ndk1::vector<ObstacleAvoidance::Line,
   std::__ndk1::allocator<ObstacleAvoidance::Line> > const&, unsigned long, unsigned long, float,
   Vector2&) */

void __thiscall
ObstacleAvoidance::linearProgram3
          (ObstacleAvoidance *this,vector *param_1,ulong param_2,ulong param_3,float param_4,
          Vector2 *param_5)

{
  float *pfVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong __n;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  lVar2 = tpidr_el0;
  local_a8 = *(long *)(lVar2 + 0x28);
  puVar11 = *(undefined8 **)param_1;
  lVar10 = *(long *)(param_1 + 8);
  if (param_3 < (ulong)(lVar10 - (long)puVar11 >> 4)) {
    fVar13 = 0.0;
    uVar5 = param_2 << 4;
    do {
      puVar3 = puVar11 + param_3 * 2;
      fVar14 = (float)NEON_fmadd(*(undefined4 *)(puVar3 + 1),
                                 *(float *)((long)puVar3 + 4) - *(float *)(param_5 + 4),
                                 (*(float *)puVar3 - *(float *)param_5) *
                                 -*(float *)((long)puVar3 + 0xc));
      if (fVar13 < fVar14) {
        local_c8 = (undefined8 *)0x0;
        local_c0 = (undefined8 *)0x0;
        local_b8 = (undefined8 *)0x0;
        uVar6 = param_2;
        uVar4 = uVar5;
        if (param_2 == 0) {
          if (param_3 != 0) goto LAB_0087e770;
        }
        else {
          if ((long)param_2 < 0) {
                    /* try { // try from 0087ea34 to 0087ea3b has its CatchHandler @ 0087ea40 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
          local_c8 = (undefined8 *)operator_new(uVar5);
          local_b8 = local_c8 + param_2 * 2;
          puVar3 = local_c8;
          puVar7 = puVar11;
          uVar9 = uVar5;
          do {
            uVar8 = *puVar7;
            uVar9 = uVar9 - 0x10;
            local_c0 = puVar3 + 2;
            puVar3[1] = puVar7[1];
            *puVar3 = uVar8;
            puVar3 = local_c0;
            puVar7 = puVar7 + 2;
          } while (uVar9 != 0);
          if (param_2 < param_3) {
LAB_0087e770:
            do {
              puVar7 = local_c8;
              puVar3 = puVar11 + param_3 * 2;
              pfVar1 = (float *)((long)puVar11 + uVar4);
              fVar14 = pfVar1[2];
              fVar18 = (float)((ulong)puVar3[1] >> 0x20);
              fVar20 = pfVar1[3];
              fVar13 = (float)puVar3[1];
              fVar21 = fVar14 * -fVar18 + fVar20 * fVar13;
              if (ABS(fVar21) <= 1e-05) {
                fVar21 = (float)NEON_fmadd(fVar13,fVar14,fVar20 * fVar18);
                if (fVar21 <= 0.0) {
                  uVar8 = CONCAT44(((float)((ulong)*puVar3 >> 0x20) +
                                   (float)((ulong)*(undefined8 *)((long)puVar11 + uVar4) >> 0x20)) *
                                   0.5,((float)*puVar3 +
                                       (float)*(undefined8 *)((long)puVar11 + uVar4)) * 0.5);
                  goto LAB_0087e7f4;
                }
              }
              else {
                fVar15 = (float)*puVar3;
                fVar16 = (float)((ulong)*puVar3 >> 0x20);
                fVar17 = (float)NEON_fmadd(fVar14,fVar16 - pfVar1[1],(fVar15 - *pfVar1) * -fVar20);
                fVar17 = fVar17 / fVar21;
                uVar8 = CONCAT44(fVar16 + fVar18 * fVar17,fVar15 + fVar13 * fVar17);
LAB_0087e7f4:
                fVar20 = fVar20 - fVar18;
                fVar14 = fVar14 - fVar13;
                fVar18 = (float)NEON_fmadd(fVar14,fVar14,fVar20 * fVar20);
                fVar13 = 1.0;
                if (1e-06 < fVar18) {
                  fVar13 = 1.0 / SQRT(fVar18);
                }
                if (local_c0 == local_b8) {
                  __n = (long)local_c0 - (long)local_c8;
                  uVar9 = ((long)__n >> 4) + 1;
                  if (uVar9 >> 0x3c != 0) {
                    /* try { // try from 0087ea20 to 0087ea33 has its CatchHandler @ 0087ea5c */
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_length_error();
                  }
                  if (uVar9 <= (ulong)((long)__n >> 3)) {
                    uVar9 = (long)__n >> 3;
                  }
                  if (0x7fffffffffffffef < __n) {
                    uVar9 = 0xfffffffffffffff;
                  }
                  if (uVar9 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_006d1f18(
                                "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                                );
                  }
                    /* try { // try from 0087e860 to 0087e863 has its CatchHandler @ 0087ea58 */
                  puVar3 = (undefined8 *)operator_new(uVar9 << 4);
                  puVar11 = puVar3 + ((long)__n >> 4) * 2;
                  *puVar11 = uVar8;
                  *(float *)(puVar11 + 1) = fVar14 * fVar13;
                  *(float *)((long)puVar11 + 0xc) = fVar20 * fVar13;
                  if (0 < (long)__n) {
                    memcpy(puVar3,puVar7,__n);
                  }
                  local_c0 = puVar11 + 2;
                  local_b8 = puVar3 + uVar9 * 2;
                  local_c8 = puVar3;
                  if (puVar7 != (undefined8 *)0x0) {
                    operator_delete(puVar7);
                  }
                }
                else {
                  *local_c0 = uVar8;
                  *(float *)(local_c0 + 1) = fVar14 * fVar13;
                  *(float *)((long)local_c0 + 0xc) = fVar20 * fVar13;
                  local_c0 = local_c0 + 2;
                }
              }
              uVar6 = uVar6 + 1;
              puVar11 = *(undefined8 **)param_1;
              uVar4 = uVar4 + 0x10;
            } while (uVar6 < param_3);
          }
        }
        uVar8 = *(undefined8 *)param_5;
        fStack_ac = *(float *)(puVar11 + param_3 * 2 + 1);
        local_b0 = -*(float *)((long)puVar11 + param_3 * 0x10 + 0xc);
        fVar14 = fStack_ac * param_4;
        fVar13 = local_b0 * param_4;
        *(float *)(param_5 + 4) = fVar14;
        *(float *)param_5 = fVar13;
        puVar3 = local_c8;
        if (local_c0 != local_c8) {
          lVar10 = 0;
          puVar11 = local_c0;
          uVar6 = 0;
          do {
            pfVar1 = (float *)((long)puVar3 + lVar10);
            fVar13 = (float)NEON_fmadd(pfVar1[2],pfVar1[1] - fVar14,(*pfVar1 - fVar13) * -pfVar1[3])
            ;
            if (0.0 < fVar13) {
              uVar12 = *(undefined8 *)param_5;
              uVar4 = linearProgram1((ObstacleAvoidance *)puVar3,(vector *)&local_c8,uVar6,param_4,
                                     (Vector2 *)&local_b0,true,param_5);
              puVar3 = local_c8;
              puVar11 = local_c0;
              if ((uVar4 & 1) == 0) {
                *(undefined8 *)param_5 = uVar12;
                goto LAB_0087e990;
              }
            }
            uVar4 = uVar6 + 1;
            uVar6 = (long)puVar11 - (long)puVar3 >> 4;
            if (uVar6 <= uVar4) goto LAB_0087e990;
            fVar13 = *(float *)param_5;
            fVar14 = *(float *)(param_5 + 4);
            lVar10 = lVar10 + 0x10;
            uVar6 = uVar4;
          } while( true );
        }
        uVar6 = 0;
        puVar11 = local_c8;
LAB_0087e990:
        if (uVar6 < (ulong)((long)puVar11 - (long)puVar3 >> 4)) {
          fVar13 = (float)uVar8;
          *(undefined8 *)param_5 = uVar8;
          fVar14 = (float)((ulong)uVar8 >> 0x20);
        }
        else {
          fVar13 = *(float *)param_5;
          fVar14 = *(float *)(param_5 + 4);
        }
        puVar11 = *(undefined8 **)param_1;
        puVar7 = puVar11 + param_3 * 2;
        fVar21 = *(float *)puVar7;
        fVar20 = *(float *)((long)puVar7 + 4);
        uVar19 = *(undefined4 *)(puVar7 + 1);
        fVar18 = *(float *)((long)puVar7 + 0xc);
        if (puVar3 != (undefined8 *)0x0) {
          local_c0 = puVar3;
          operator_delete(puVar3);
          puVar11 = *(undefined8 **)param_1;
        }
        lVar10 = *(long *)(param_1 + 8);
        fVar13 = (float)NEON_fmadd(uVar19,fVar20 - fVar14,(fVar21 - fVar13) * -fVar18);
      }
      param_3 = param_3 + 1;
    } while (param_3 < (ulong)(lVar10 - (long)puVar11 >> 4));
  }
  if (*(long *)(lVar2 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


