// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createHull
// Entry Point: 00b52f24
// Size: 1024 bytes
// Signature: undefined __cdecl createHull(float * param_1, uint param_2, float * * param_3, uint * param_4, uint * * param_5, uint * param_6)


/* ConvexHull3DUtil::createHull(float*, unsigned int, float*&, unsigned int&, unsigned int*&,
   unsigned int&) */

void ConvexHull3DUtil::createHull
               (float *param_1,uint param_2,float **param_3,uint *param_4,uint **param_5,
               uint *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  void *pvVar8;
  float *pfVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  float *pfVar13;
  long lVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  void *pvVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  undefined auStack_a8 [4];
  ulong local_a4;
  float *local_98;
  char local_90;
  undefined8 local_84;
  void *local_78;
  char local_70;
  ulong local_64;
  void *local_58;
  char local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (0 < (int)param_2) {
    uVar12 = 0;
    uVar17 = 0;
    do {
      uVar3 = (int)uVar12 * 3;
      if ((int)uVar17 < 1) {
        fVar25 = param_1[uVar3];
        uVar22 = (ulong)(uVar3 + 1);
        uVar21 = (ulong)(uVar3 + 2);
      }
      else {
        uVar22 = (ulong)(uVar3 + 1);
        uVar21 = (ulong)(uVar3 + 2);
        fVar25 = param_1[uVar3];
        uVar23 = (ulong)uVar17;
        pfVar9 = param_1 + 2;
        do {
          uVar36 = NEON_fmadd(pfVar9[-2] - fVar25,pfVar9[-2] - fVar25,
                              (pfVar9[-1] - param_1[uVar22]) * (pfVar9[-1] - param_1[uVar22]));
          fVar37 = (float)NEON_fmadd(*pfVar9 - param_1[uVar21],*pfVar9 - param_1[uVar21],uVar36);
          if (fVar37 < 0.001) goto LAB_00b52fbc;
          uVar23 = uVar23 - 1;
          pfVar9 = pfVar9 + 3;
        } while (uVar23 != 0);
      }
      lVar14 = (long)(int)uVar17 + (long)(int)uVar17 * 2;
      param_1[(int)lVar14] = fVar25;
      param_1[lVar14 + 1] = param_1[uVar22];
      (param_1 + (int)lVar14)[2] = param_1[uVar21];
      uVar17 = uVar17 + 1;
LAB_00b52fbc:
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_2);
  }
  local_98 = (float *)0x0;
  local_78 = (void *)0x0;
  local_90 = '\x01';
  local_70 = '\x01';
  local_a4 = 0;
  local_84 = 0;
  local_50 = '\x01';
  local_58 = (void *)0x0;
  local_64 = 0;
                    /* try { // try from 00b53058 to 00b53073 has its CatchHandler @ 00b53338 */
  btConvexHullComputer::compute(auStack_a8,SUB81(param_1,0),0,0xc,0.0,0.0);
  uVar21 = local_a4;
  uVar17 = (uint)local_a4;
  *param_4 = (uint)local_a4;
  uVar12 = (long)(int)(uint)local_a4 * 0xc;
  if ((ulong)((long)(int)(uint)local_a4 * 3) >> 0x3e != 0) {
    uVar12 = 0xffffffffffffffff;
  }
                    /* try { // try from 00b5308c to 00b5308f has its CatchHandler @ 00b53334 */
  pfVar9 = (float *)operator_new__(uVar12);
  pvVar8 = local_58;
  pvVar6 = local_78;
  uVar12 = uVar21 & 0xffffffff;
  *param_3 = pfVar9;
  if (0 < (int)uVar17) {
    if ((uVar17 < 5) || ((pfVar9 < local_98 + uVar12 * 4 + -1 && (local_98 < pfVar9 + uVar12 * 3))))
    {
      lVar14 = 0;
    }
    else {
      uVar22 = 4;
      if ((uVar21 & 3) != 0) {
        uVar22 = uVar21 & 3;
      }
      lVar14 = uVar12 - uVar22;
      lVar11 = lVar14;
      pfVar13 = pfVar9;
      pfVar19 = local_98;
      do {
        fVar25 = *pfVar19;
        fVar28 = pfVar19[1];
        fVar32 = pfVar19[2];
        fVar37 = pfVar19[4];
        fVar29 = pfVar19[5];
        fVar33 = pfVar19[6];
        fVar26 = pfVar19[8];
        fVar30 = pfVar19[9];
        fVar34 = pfVar19[10];
        fVar27 = pfVar19[0xc];
        fVar31 = pfVar19[0xd];
        fVar35 = pfVar19[0xe];
        pfVar19 = pfVar19 + 0x10;
        *pfVar13 = fVar25;
        pfVar13[1] = fVar28;
        pfVar13[2] = fVar32;
        pfVar13[3] = fVar37;
        pfVar13[4] = fVar29;
        pfVar13[5] = fVar33;
        pfVar13[6] = fVar26;
        pfVar13[7] = fVar30;
        pfVar13[8] = fVar34;
        pfVar13[9] = fVar27;
        pfVar13[10] = fVar31;
        pfVar13[0xb] = fVar35;
        pfVar13 = pfVar13 + 0xc;
        lVar11 = lVar11 + -4;
      } while (lVar11 != 0);
    }
    lVar11 = uVar12 - lVar14;
    pfVar13 = local_98 + lVar14 * 4 + 1;
    pfVar9 = pfVar9 + lVar14 * 3 + 1;
    do {
      lVar11 = lVar11 + -1;
      pfVar9[-1] = pfVar13[-1];
      *pfVar9 = *pfVar13;
      pfVar19 = pfVar13 + 1;
      pfVar13 = pfVar13 + 4;
      pfVar9[1] = *pfVar19;
      pfVar9 = pfVar9 + 3;
    } while (lVar11 != 0);
  }
  iVar7 = (int)local_64;
  uVar12 = local_64 & 0xffffffff;
  if ((int)local_64 < 1) {
    uVar17 = 0;
  }
  else {
    uVar21 = 0;
    uVar17 = 0;
    do {
      iVar4 = *(int *)((long)local_58 + uVar21 * 4);
      piVar15 = (int *)((long)local_78 +
                       (long)*(int *)((long)local_78 + (long)iVar4 * 0xc + 4) * 0xc +
                       (long)iVar4 * 0xc);
      piVar16 = piVar15 + (long)*piVar15 * 3;
      iVar4 = piVar16[2];
      while (iVar4 != piVar15[2]) {
        uVar17 = uVar17 + 1;
        piVar16 = piVar16 + (long)piVar16[1] * 3 + (long)piVar16[(long)piVar16[1] * 3] * 3;
        iVar4 = piVar16[2];
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar12);
  }
  uVar3 = uVar17 * 3;
  *param_6 = uVar17;
  uVar21 = -(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2;
  if ((ulong)(long)(int)uVar3 >> 0x3e != 0) {
    uVar21 = 0xffffffffffffffff;
  }
                    /* try { // try from 00b531f0 to 00b531f3 has its CatchHandler @ 00b53330 */
  puVar10 = (uint *)operator_new__(uVar21);
  *param_5 = puVar10;
  pvVar24 = pvVar8;
  if (0 < iVar7) {
    uVar21 = 0;
    uVar17 = 0;
    while( true ) {
      lVar14 = (long)*(int *)((long)pvVar8 + uVar21 * 4);
      piVar16 = (int *)((long)pvVar6 +
                       (long)*(int *)((long)pvVar6 + lVar14 * 0xc + 4) * 0xc + lVar14 * 0xc);
      piVar15 = piVar16 + (long)*piVar16 * 3;
      uVar3 = piVar16[2];
      if (piVar15[2] != uVar3) {
        uVar1 = piVar15[2];
        uVar20 = *(uint *)((long)pvVar6 + lVar14 * 0xc + 8);
        do {
          uVar18 = uVar1;
          uVar1 = uVar17 + 1;
          uVar2 = uVar17 + 2;
          puVar10[uVar17] = uVar3;
          uVar17 = uVar17 + 3;
          puVar10[uVar1] = uVar20;
          puVar10[uVar2] = uVar18;
          piVar15 = piVar15 + (long)piVar15[1] * 3 + (long)piVar15[(long)piVar15[1] * 3] * 3;
          uVar1 = piVar15[2];
          uVar20 = uVar18;
        } while (piVar15[2] != uVar3);
      }
      uVar21 = uVar21 + 1;
      pvVar24 = local_58;
      if (uVar21 == uVar12) break;
      puVar10 = *param_5;
    }
  }
  if ((pvVar24 != (void *)0x0) && (local_50 != '\0')) {
                    /* try { // try from 00b532ac to 00b532b3 has its CatchHandler @ 00b5332c */
    btAlignedFreeInternal(pvVar24);
  }
  local_58 = (void *)0x0;
  local_64 = 0;
  local_50 = 1;
  if ((local_78 != (void *)0x0) && (local_70 != '\0')) {
                    /* try { // try from 00b532d4 to 00b532d7 has its CatchHandler @ 00b53328 */
    btAlignedFreeInternal(local_78);
  }
  local_70 = 1;
  local_78 = (void *)0x0;
  local_84 = 0;
  if ((local_98 != (float *)0x0) && (local_90 != '\0')) {
                    /* try { // try from 00b532f4 to 00b532f7 has its CatchHandler @ 00b53324 */
    btAlignedFreeInternal(local_98);
  }
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


