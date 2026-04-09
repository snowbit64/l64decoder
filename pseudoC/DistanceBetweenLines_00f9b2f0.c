// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DistanceBetweenLines
// Entry Point: 00f9b2f0
// Size: 1020 bytes
// Signature: undefined __cdecl DistanceBetweenLines(btVector3 * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, btVector3 * param_6)


/* DistanceBetweenLines(btVector3 const&, btVector3 const&, btVector3 const&, btVector3 const&,
   btVector3*, btVector3*) */

float DistanceBetweenLines
                (btVector3 *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4,
                btVector3 *param_5,btVector3 *param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  if ((DAT_02125d50 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_02125d50);
    if (iVar1 != 0) {
      __cxa_guard_release(&DAT_02125d50);
    }
  }
  fVar9 = *(float *)(param_2 + 8);
  fVar11 = *(float *)(param_4 + 4);
  fVar10 = *(float *)(param_4 + 8);
  fVar14 = *(float *)param_4;
  fVar7 = *(float *)(param_1 + 8);
  fVar2 = (float)NEON_fnmsub(fVar10,*(float *)(param_2 + 4),fVar11 * fVar9);
  fVar6 = (float)NEON_fnmsub(fVar14,fVar9,*(float *)param_2 * fVar10);
  fVar3 = (float)NEON_fnmsub(*(float *)param_2,fVar11,fVar14 * *(float *)(param_2 + 4));
  uVar4 = NEON_fmadd(fVar6,fVar6,fVar2 * fVar2);
  fVar5 = (float)NEON_fmadd(fVar3,fVar3,uVar4);
  fVar5 = 1.0 / SQRT(fVar5);
  fVar2 = fVar5 * fVar2;
  fVar6 = fVar5 * fVar6;
  fVar5 = fVar5 * fVar3;
  uVar4 = *(undefined4 *)(param_3 + 8);
  fVar8 = *(float *)param_3;
  fVar3 = *(float *)(param_3 + 4);
  fVar25 = (float)*(undefined8 *)param_1;
  fVar26 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  DAT_02125d40 = fVar2;
  DAT_02125d44 = fVar6;
  DAT_02125d48 = fVar5;
  if (param_5 != (btVector3 *)0x0) {
    fVar17 = (float)NEON_fnmsub(fVar11,fVar5,fVar10 * fVar6);
    fVar10 = (float)NEON_fnmsub(fVar10,fVar2,fVar14 * fVar5);
    fVar14 = (float)NEON_fnmsub(fVar14,fVar6,fVar11 * fVar2);
    uVar12 = NEON_fmadd(fVar10,fVar10,fVar17 * fVar17);
    fVar11 = (float)NEON_fmadd(fVar14,fVar14,uVar12);
    fVar11 = 1.0 / SQRT(fVar11);
    uVar13 = *(undefined8 *)param_2;
    fVar17 = fVar11 * fVar17;
    fVar10 = fVar11 * fVar10;
    fVar11 = fVar11 * fVar14;
    if ((DAT_02125d38 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_02125d38);
      if (iVar1 != 0) {
        __cxa_guard_release(&DAT_02125d38);
      }
    }
    uVar20 = *(undefined8 *)param_1;
    fVar22 = *(float *)(param_1 + 8);
    *(undefined4 *)(param_5 + 0xc) = 0;
    fVar19 = (float)uVar20;
    fVar15 = ((float)uVar13 + fVar25) - fVar19;
    fVar21 = (float)((ulong)uVar20 >> 0x20);
    fVar16 = ((float)((ulong)uVar13 >> 0x20) + fVar26) - fVar21;
    fVar14 = (float)NEON_fmadd(fVar11,uVar4,fVar10 * fVar3);
    fVar9 = (fVar9 + fVar7) - fVar22;
    fVar18 = (float)NEON_fnmadd(fVar17,fVar8,-fVar14);
    fVar14 = (float)NEON_fmadd(fVar9,fVar11,fVar17 * fVar15 + fVar10 * fVar16);
    fVar10 = (float)NEON_fnmadd(fVar22,fVar11,-(fVar18 + fVar17 * fVar19 + fVar10 * fVar21));
    fVar10 = fVar10 / fVar14;
    uVar12 = NEON_fmadd(fVar10,fVar9,fVar22);
    *(ulong *)param_5 = CONCAT44(fVar21 + fVar16 * fVar10,fVar19 + fVar15 * fVar10);
    *(undefined4 *)(param_5 + 8) = uVar12;
  }
  if (param_6 != (btVector3 *)0x0) {
    fVar15 = *(float *)(param_3 + 8);
    fVar16 = *(float *)(param_4 + 8);
    fVar10 = (float)NEON_fnmsub(DAT_02125d48,*(float *)(param_2 + 4),
                                DAT_02125d44 * *(float *)(param_2 + 8));
    fVar11 = (float)NEON_fnmsub(DAT_02125d40,*(float *)(param_2 + 8),
                                *(float *)param_2 * DAT_02125d48);
    uVar20 = *(undefined8 *)param_4;
    fVar14 = (float)NEON_fnmsub(*(float *)param_2,DAT_02125d44,
                                DAT_02125d40 * *(float *)(param_2 + 4));
    uVar12 = NEON_fmadd(fVar11,fVar11,fVar10 * fVar10);
    fVar9 = (float)NEON_fmadd(fVar14,fVar14,uVar12);
    fVar9 = 1.0 / SQRT(fVar9);
    uVar13 = *(undefined8 *)param_3;
    uVar12 = *(undefined4 *)param_1;
    fVar17 = *(float *)(param_1 + 4);
    fVar10 = fVar9 * fVar10;
    fVar11 = fVar9 * fVar11;
    fVar9 = fVar9 * fVar14;
    uVar23 = *(undefined4 *)(param_1 + 8);
    if ((DAT_02125d38 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_02125d38);
      if (iVar1 != 0) {
        __cxa_guard_release(&DAT_02125d38);
      }
    }
    fVar14 = (float)NEON_fmadd(fVar9,uVar23,fVar11 * fVar17);
    fVar22 = (float)*(undefined8 *)param_3;
    fVar19 = ((float)uVar20 + (float)uVar13) - fVar22;
    fVar24 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
    fVar21 = ((float)((ulong)uVar20 >> 0x20) + (float)((ulong)uVar13 >> 0x20)) - fVar24;
    fVar14 = (float)NEON_fnmadd(fVar10,uVar12,-fVar14);
    fVar18 = *(float *)(param_3 + 8);
    *(undefined4 *)(param_6 + 0xc) = 0;
    fVar17 = (fVar16 + fVar15) - fVar18;
    fVar15 = (float)NEON_fmadd(fVar17,fVar9,fVar10 * fVar19 + fVar11 * fVar21);
    fVar9 = (float)NEON_fnmadd(fVar18,fVar9,-(fVar14 + fVar10 * fVar22 + fVar11 * fVar24));
    fVar9 = fVar9 / fVar15;
    uVar12 = NEON_fmadd(fVar9,fVar17,fVar18);
    *(ulong *)param_6 = CONCAT44(fVar24 + fVar21 * fVar9,fVar22 + fVar19 * fVar9);
    *(undefined4 *)(param_6 + 8) = uVar12;
  }
  fVar7 = (float)NEON_fmadd(fVar5,fVar7,fVar6 * fVar26);
  uVar12 = NEON_fmadd(fVar3,fVar6,fVar8 * fVar2);
  fVar2 = (float)NEON_fmadd(uVar4,fVar5,uVar12);
  return ABS(fVar2 - (fVar7 + fVar2 * fVar25));
}


