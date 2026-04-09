// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btRayAabb
// Entry Point: 00f52298
// Size: 836 bytes
// Signature: undefined __cdecl btRayAabb(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, float * param_5, btVector3 * param_6)


/* btRayAabb(btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&, float&,
   btVector3&) */

undefined8
btRayAabb(btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,float *param_5
         ,btVector3 *param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  
  fVar10 = *(float *)param_4 - *(float *)param_3;
  fVar5 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar8 = (*(float *)param_3 + *(float *)param_4) * 0.5;
  fVar11 = fVar10 * 0.5;
  fVar16 = (*(float *)(param_3 + 4) + *(float *)(param_4 + 4)) * 0.5;
  fVar7 = fVar5 * 0.5;
  fVar2 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar20 = -(fVar5 * 0.5);
  fVar12 = *(float *)param_2 - fVar8;
  fVar8 = *(float *)param_1 - fVar8;
  fVar6 = *(float *)(param_1 + 4) - fVar16;
  fVar19 = (*(float *)(param_3 + 8) + *(float *)(param_4 + 8)) * 0.5;
  fVar17 = fVar2 * 0.5;
  fVar18 = -(fVar2 * 0.5);
  fVar16 = *(float *)(param_2 + 4) - fVar16;
  fVar3 = *(float *)(param_1 + 8) - fVar19;
  fVar21 = -(fVar10 * 0.5);
  fVar19 = *(float *)(param_2 + 8) - fVar19;
  bVar1 = fVar17 < fVar3;
  if ((((uint)(fVar11 < fVar8) << 3 | (uint)(fVar7 < fVar6) << 4 |
        (uint)(fVar8 < fVar21) | (uint)(fVar6 < fVar20) << 1 | (uint)(fVar3 < fVar18) << 2 |
       (uint)bVar1 << 5) &
      ((uint)(fVar11 < fVar12) << 3 | (uint)(fVar7 < fVar16) << 4 |
       (uint)(fVar12 < fVar21) | (uint)(fVar16 < fVar20) << 1 | (uint)(fVar19 < fVar18) << 2 |
      (uint)(fVar17 < fVar19) << 5)) != 0) {
    return 0;
  }
  fVar15 = *(float *)param_2 - *(float *)param_1;
  fVar4 = *param_5;
  if (fVar21 <= fVar8) {
    uVar22 = 0;
    if (fVar21 <= fVar12) goto LAB_00f52404;
    fVar14 = -(fVar11 + fVar8) / fVar15;
    fVar21 = 0.0;
    if (fVar14 < fVar4) {
      fVar4 = fVar14;
    }
  }
  else {
    fVar21 = -(fVar11 + fVar8) / fVar15;
    if (fVar21 < 0.0) {
LAB_00f52404:
      uVar22 = 0;
      fVar21 = 0.0;
    }
    else {
      uVar22 = 0x3f800000;
    }
  }
  fVar14 = *(float *)(param_2 + 4) - *(float *)(param_1 + 4);
  if (fVar20 <= fVar6) {
    uVar9 = (ulong)uVar22;
    if ((fVar16 < fVar20) && (fVar20 = -(fVar7 + fVar6) / fVar14, fVar20 < fVar4)) {
      fVar4 = fVar20;
    }
  }
  else {
    fVar20 = -(fVar7 + fVar6) / fVar14;
    if (fVar21 <= fVar20) {
      uVar9 = 0x3f80000000000000;
      fVar21 = fVar20;
    }
    else {
      uVar9 = (ulong)uVar22;
    }
  }
  fVar20 = *(float *)(param_2 + 8) - *(float *)(param_1 + 8);
  if (fVar18 <= fVar3) {
    if ((fVar19 < fVar18) && (fVar18 = -(fVar17 + fVar3) / fVar20, fVar18 < fVar4)) {
      fVar4 = fVar18;
    }
LAB_00f524e8:
    uVar13 = 0;
    if (fVar8 <= fVar11) goto LAB_00f524a0;
LAB_00f524f4:
    fVar8 = (float)NEON_fnmadd(fVar10,0xbf000000,-fVar8);
    fVar8 = fVar8 / fVar15;
    if (fVar8 < fVar21) goto LAB_00f52508;
    uVar13 = 0;
    uVar9 = 0xbf800000;
    if (fVar6 <= fVar7) goto LAB_00f52574;
LAB_00f52514:
    fVar5 = (float)NEON_fnmadd(fVar5,0xbf000000,-fVar6);
    fVar5 = fVar5 / fVar14;
    if (fVar5 < fVar8) goto LAB_00f52594;
    uVar13 = 0;
    uVar9 = 0xbf80000000000000;
    if (bVar1) goto LAB_00f52538;
LAB_00f5259c:
    if (fVar17 < fVar19) {
      fVar2 = (float)NEON_fnmadd(fVar2,0xbf000000,-fVar3);
      if (fVar2 / fVar20 < fVar4) {
        fVar4 = fVar2 / fVar20;
      }
    }
  }
  else {
    fVar18 = -(fVar17 + fVar3) / fVar20;
    if (fVar18 < fVar21) goto LAB_00f524e8;
    uVar9 = 0;
    uVar13 = 0x3f800000;
    fVar21 = fVar18;
    if (fVar11 < fVar8) goto LAB_00f524f4;
LAB_00f524a0:
    if (fVar11 < fVar12) {
      fVar8 = (float)NEON_fnmadd(fVar10,0xbf000000,-fVar8);
      if (fVar8 / fVar15 < fVar4) {
        fVar4 = fVar8 / fVar15;
      }
    }
LAB_00f52508:
    fVar8 = fVar21;
    if (fVar7 < fVar6) goto LAB_00f52514;
LAB_00f52574:
    if (fVar7 < fVar16) {
      fVar5 = (float)NEON_fnmadd(fVar5,0xbf000000,-fVar6);
      if (fVar5 / fVar14 < fVar4) {
        fVar4 = fVar5 / fVar14;
      }
    }
LAB_00f52594:
    fVar5 = fVar8;
    if (!bVar1) goto LAB_00f5259c;
LAB_00f52538:
    fVar2 = (float)NEON_fnmadd(fVar2,0xbf000000,-fVar3);
    fVar2 = fVar2 / fVar20;
    if (fVar5 <= fVar2) {
      uVar9 = 0;
      uVar13 = 0xbf800000;
      if (fVar4 < fVar2) {
        return 0;
      }
      goto LAB_00f525c4;
    }
  }
  fVar2 = fVar5;
  if (fVar4 < fVar2) {
    return 0;
  }
LAB_00f525c4:
  *param_5 = fVar2;
  *(ulong *)param_6 = uVar9;
  *(undefined4 *)(param_6 + 8) = uVar13;
  *(undefined4 *)(param_6 + 0xc) = 0;
  return 1;
}


