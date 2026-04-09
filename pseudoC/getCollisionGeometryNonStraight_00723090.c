// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionGeometryNonStraight
// Entry Point: 00723090
// Size: 988 bytes
// Signature: undefined __cdecl getCollisionGeometryNonStraight(uint param_1, float * param_2, float * param_3, float param_4, float param_5, uint * param_6, Vector3 * * param_7, Vector3 * param_8)


/* VehicleCollisionDistanceUtil::getCollisionGeometryNonStraight(unsigned int, float*, float*,
   float, float, unsigned int&, Vector3*&, Vector3 (&) [4]) */

void VehicleCollisionDistanceUtil::getCollisionGeometryNonStraight
               (uint param_1,float *param_2,float *param_3,float param_4,float param_5,uint *param_6
               ,Vector3 **param_7,Vector3 *param_8)

{
  float *pfVar1;
  uint uVar2;
  long lVar3;
  undefined4 *puVar4;
  Vector3 *pVVar5;
  int iVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  uint *local_c0;
  uint *local_b8;
  undefined8 local_b0;
  long local_a8;
  
  lVar3 = tpidr_el0;
  local_a8 = *(long *)(lVar3 + 0x28);
  uVar9 = (param_1 - 1) * 3;
  pfVar1 = param_3 + uVar9;
  fVar24 = *param_3;
  fVar23 = param_3[2];
  fVar22 = *pfVar1;
  fVar25 = pfVar1[2];
  uVar14 = NEON_fmadd(fVar24,fVar22,param_3[1] * pfVar1[1]);
  fVar15 = (float)NEON_fmadd(fVar23,fVar25,uVar14);
  fVar16 = 0.0;
  if (fVar15 < 0.995) {
    pfVar1 = param_2 + uVar9;
    fVar16 = SQRT((fVar15 + 1.0) * 0.5);
    uVar14 = NEON_fmadd(*pfVar1 - *param_2,*pfVar1 - *param_2,
                        (pfVar1[1] - param_2[1]) * (pfVar1[1] - param_2[1]));
    fVar15 = (float)NEON_fmadd(pfVar1[2] - param_2[2],pfVar1[2] - param_2[2],uVar14);
    fVar15 = ((1.0 - fVar16) / (fVar16 + 1.0)) * fVar15 * 0.25;
    fVar16 = 0.0;
    if (0.0225 < fVar15) {
      fVar15 = SQRT(fVar15) + -0.15;
      fVar15 = fVar15 + fVar15;
      fVar16 = param_4 * 0.9;
      if (fVar15 <= param_4 * 0.9) {
        fVar16 = fVar15;
      }
    }
  }
  puVar4 = (undefined4 *)operator_new__((ulong)(param_1 << 2) << 2);
  if (param_1 != 0) {
    uVar7 = 0;
    uVar9 = 2;
    fVar17 = (0.0 - param_4 * 0.0) - (param_4 * 0.0 + 0.0);
    fVar15 = (float)NEON_fmadd(fVar23,fVar22,fVar25 * -fVar24);
    do {
      fVar23 = param_3[uVar9] * 0.5 * param_4;
      fVar22 = param_3[uVar9 - 2] * -0.5 * param_4;
      fVar25 = param_2[uVar9 - 2] + fVar23;
      fVar23 = param_2[uVar9 - 2] - fVar23;
      fVar24 = param_2[uVar9] + fVar22;
      fVar22 = param_2[uVar9] - fVar22;
      if (((ulong)(param_1 - 1) * 4 - uVar7 == 0) && (0.0 < fVar16)) {
        fVar26 = fVar23 - fVar25;
        fVar27 = fVar22 - fVar24;
        uVar14 = NEON_fmadd(fVar26,fVar26,fVar17 * fVar17);
        fVar29 = (float)NEON_fmadd(fVar27,fVar27,uVar14);
        fVar28 = 1.0;
        if (1e-06 < fVar29) {
          fVar28 = 1.0 / SQRT(fVar29);
        }
        fVar29 = fVar16 * fVar26 * fVar28;
        fVar26 = fVar16 * fVar27 * fVar28;
        if (fVar15 < 0.0) {
          fVar23 = fVar23 - fVar29;
          fVar22 = fVar22 - fVar26;
        }
        else {
          fVar25 = fVar25 + fVar29;
          fVar24 = fVar24 + fVar26;
        }
      }
      iVar6 = (int)uVar7;
      puVar4[uVar7 & 0xffffffff] = fVar25;
      uVar7 = uVar7 + 4;
      uVar9 = uVar9 + 3;
      puVar4[iVar6 + 1] = fVar24;
      puVar4[iVar6 + 2] = fVar23;
      puVar4[iVar6 + 3] = fVar22;
    } while ((ulong)param_1 * 4 - uVar7 != 0);
  }
  local_c0 = (uint *)0x0;
  local_b8 = (uint *)0x0;
  local_b0 = 0;
                    /* try { // try from 00723310 to 0072331f has its CatchHandler @ 00723474 */
  ConvexHull2DUtil::createHull((uchar *)puVar4,8,param_1 << 1,(vector *)&local_c0);
  puVar12 = local_c0;
  uVar13 = (long)local_b8 - (long)local_c0;
  uVar7 = uVar13 >> 2;
  uVar9 = (int)uVar7 << 1;
                    /* try { // try from 00723338 to 0072333b has its CatchHandler @ 0072346c */
  pVVar5 = (Vector3 *)operator_new__((ulong)uVar9 * 0xc);
  *param_7 = pVVar5;
  if ((int)uVar7 != 0) {
    uVar13 = uVar13 >> 2 & 0xffffffff;
    puVar8 = (undefined4 *)(pVVar5 + 8);
    do {
      uVar2 = *puVar12;
      uVar13 = uVar13 - 1;
      uVar18 = puVar4[uVar2 << 1];
      uVar10 = uVar7 & 0xffffffff;
      uVar7 = uVar7 + 1;
      puVar11 = (undefined4 *)(pVVar5 + uVar10 * 0xc);
      uVar19 = NEON_fmadd(param_5,0x3f000000,param_2[(uVar2 >> 1) + (uVar2 & 0xfffffffe) + 1]);
      uVar20 = puVar4[uVar2 << 1 | 1];
      uVar14 = NEON_fmadd(param_5,0xbf000000,param_2[(uVar2 >> 1) + (uVar2 & 0xfffffffe) + 1]);
      puVar8[-2] = uVar18;
      puVar8[-1] = uVar19;
      *puVar8 = uVar20;
      *puVar11 = uVar18;
      puVar11[1] = uVar14;
      puVar11[2] = uVar20;
      puVar8 = puVar8 + 3;
      puVar12 = puVar12 + 1;
    } while (uVar13 != 0);
  }
  *param_6 = uVar9;
  uVar18 = *puVar4;
  uVar19 = puVar4[1];
  uVar20 = puVar4[2];
  uVar21 = puVar4[3];
  uVar14 = NEON_fmadd(param_5,0xbf000000,param_2[1]);
  *(undefined4 *)param_8 = uVar18;
  *(undefined4 *)(param_8 + 8) = uVar19;
  *(undefined4 *)(param_8 + 4) = uVar14;
  fVar16 = param_2[1];
  *(undefined4 *)(param_8 + 0xc) = uVar20;
  *(undefined4 *)(param_8 + 0x14) = uVar21;
  uVar14 = NEON_fmadd(param_5,0xbf000000,fVar16);
  *(undefined4 *)(param_8 + 0x10) = uVar14;
  fVar16 = param_2[1];
  *(undefined4 *)(param_8 + 0x18) = uVar18;
  *(undefined4 *)(param_8 + 0x20) = uVar19;
  uVar14 = NEON_fmadd(param_5,0x3f000000,fVar16);
  *(undefined4 *)(param_8 + 0x1c) = uVar14;
  fVar16 = param_2[1];
  *(undefined4 *)(param_8 + 0x24) = uVar20;
  *(undefined4 *)(param_8 + 0x2c) = uVar21;
  uVar14 = NEON_fmadd(param_5,0x3f000000,fVar16);
  *(undefined4 *)(param_8 + 0x28) = uVar14;
  operator_delete__(puVar4);
  if (local_c0 != (uint *)0x0) {
    local_b8 = local_c0;
    operator_delete(local_c0);
  }
  if (*(long *)(lVar3 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


