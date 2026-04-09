// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateArea
// Entry Point: 00f7f2c0
// Size: 964 bytes
// Signature: undefined __thiscall updateArea(btSoftBody * this, bool param_1)


/* btSoftBody::updateArea(bool) */

void __thiscall btSoftBody::updateArea(btSoftBody *this,bool param_1)

{
  uint uVar1;
  int iVar2;
  int *__s;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  ulong uVar10;
  undefined4 *puVar11;
  int *piVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  
  uVar1 = *(uint *)(this + 0x3b4);
  uVar6 = (ulong)uVar1;
  if (0 < (int)uVar1) {
    plVar5 = (long *)(*(long *)(this + 0x3c0) + 0x20);
    uVar4 = uVar6;
    do {
      lVar7 = plVar5[-2];
      lVar8 = plVar5[-1];
      uVar4 = uVar4 - 1;
      lVar14 = *plVar5;
      fVar20 = *(float *)(lVar8 + 0x14) - *(float *)(lVar7 + 0x14);
      fVar22 = *(float *)(lVar14 + 0x10) - *(float *)(lVar7 + 0x10);
      fVar15 = *(float *)(lVar8 + 0x10) - *(float *)(lVar7 + 0x10);
      fVar19 = *(float *)(lVar8 + 0x18) - *(float *)(lVar7 + 0x18);
      fVar17 = *(float *)(lVar14 + 0x14) - *(float *)(lVar7 + 0x14);
      fVar23 = *(float *)(lVar14 + 0x18) - *(float *)(lVar7 + 0x18);
      fVar18 = (float)NEON_fnmsub(fVar17,fVar15,fVar22 * fVar20);
      uVar21 = NEON_fnmsub(fVar23,fVar20,fVar17 * fVar19);
      uVar16 = NEON_fnmsub(fVar22,fVar19,fVar23 * fVar15);
      uVar21 = NEON_fmadd(uVar21,uVar21,fVar18 * fVar18);
      fVar15 = (float)NEON_fmadd(uVar16,uVar16,uVar21);
      *(float *)(plVar5 + 3) = SQRT(fVar15);
      plVar5 = plVar5 + 9;
    } while (uVar4 != 0);
  }
  uVar3 = *(uint *)(this + 0x374);
  uVar4 = (ulong)uVar3;
  if (!param_1) {
    if (0 < (int)uVar3) {
      lVar7 = *(long *)(this + 0x380);
      if (uVar3 == 1) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar4 & 0xfffffffe;
        puVar11 = (undefined4 *)(lVar7 + 0xdc);
        uVar10 = uVar13;
        do {
          uVar10 = uVar10 - 2;
          puVar11[-0x1e] = 0;
          *puVar11 = 0;
          puVar11 = puVar11 + 0x3c;
        } while (uVar10 != 0);
        if (uVar13 == uVar4) goto LAB_00f7f428;
      }
      lVar8 = uVar4 - uVar13;
      puVar11 = (undefined4 *)(lVar7 + uVar13 * 0x78 + 100);
      do {
        lVar8 = lVar8 + -1;
        *puVar11 = 0;
        puVar11 = puVar11 + 0x1e;
      } while (lVar8 != 0);
    }
LAB_00f7f428:
    if (0 < (int)uVar1) {
      plVar5 = (long *)(*(long *)(this + 0x3c0) + 0x20);
      do {
        lVar7 = plVar5[-1];
        uVar6 = uVar6 - 1;
        fVar15 = *(float *)(plVar5 + 3);
        *(float *)(plVar5[-2] + 100) = *(float *)(plVar5[-2] + 100) + fVar15;
        lVar8 = *plVar5;
        *(float *)(lVar7 + 100) = *(float *)(lVar7 + 100) + fVar15;
        *(float *)(lVar8 + 100) = *(float *)(lVar8 + 100) + fVar15;
        plVar5 = plVar5 + 9;
      } while (uVar6 != 0);
    }
    if ((int)uVar3 < 1) {
      return;
    }
    lVar7 = *(long *)(this + 0x380);
    if (uVar3 == 1) {
      uVar10 = 0;
    }
    else {
      uVar10 = uVar4 & 0xfffffffe;
      pfVar9 = (float *)(lVar7 + 0xdc);
      uVar6 = uVar10;
      do {
        uVar6 = uVar6 - 2;
        pfVar9[-0x1e] = pfVar9[-0x1e] * 0.3333333;
        *pfVar9 = *pfVar9 * 0.3333333;
        pfVar9 = pfVar9 + 0x3c;
      } while (uVar6 != 0);
      if (uVar10 == uVar4) {
        return;
      }
    }
    lVar8 = uVar4 - uVar10;
    pfVar9 = (float *)(lVar7 + uVar10 * 0x78 + 100);
    do {
      lVar8 = lVar8 + -1;
      *pfVar9 = *pfVar9 * 0.3333333;
      pfVar9 = pfVar9 + 0x1e;
    } while (lVar8 != 0);
    return;
  }
  if ((int)uVar3 < 1) {
    lVar7 = *(long *)(this + 0x380);
    __s = (int *)0x0;
    goto LAB_00f7f540;
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  __s = (int *)(*(code *)PTR_FUN_01048e38)(uVar4 << 2,0x10);
  memset(__s,0,uVar4 << 2);
  uVar3 = *(uint *)(this + 0x374);
  uVar6 = (ulong)uVar3;
  lVar7 = *(long *)(this + 0x380);
  if ((int)uVar3 < 1) goto LAB_00f7f540;
  if (uVar3 == 1) {
    uVar10 = 0;
LAB_00f7f520:
    lVar8 = uVar6 - uVar10;
    puVar11 = (undefined4 *)(lVar7 + uVar10 * 0x78 + 100);
    do {
      lVar8 = lVar8 + -1;
      *puVar11 = 0;
      puVar11 = puVar11 + 0x1e;
    } while (lVar8 != 0);
  }
  else {
    uVar10 = uVar6 & 0xfffffffe;
    puVar11 = (undefined4 *)(lVar7 + 0xdc);
    uVar4 = uVar10;
    do {
      uVar4 = uVar4 - 2;
      puVar11[-0x1e] = 0;
      *puVar11 = 0;
      puVar11 = puVar11 + 0x3c;
    } while (uVar4 != 0);
    if (uVar10 != uVar6) goto LAB_00f7f520;
  }
  lVar7 = *(long *)(this + 0x380);
LAB_00f7f540:
  uVar6 = (ulong)*(uint *)(this + 0x3b4);
  if (0 < (int)*(uint *)(this + 0x3b4)) {
    plVar5 = (long *)(*(long *)(this + 0x3c0) + 0x20);
    do {
      lVar8 = plVar5[-2];
      lVar14 = plVar5[-1];
      uVar6 = uVar6 - 1;
      fVar15 = ABS(*(float *)(plVar5 + 3));
      uVar1 = (int)((ulong)(lVar8 - lVar7) >> 3) * -0x11111111;
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      uVar1 = (int)((ulong)(lVar14 - lVar7) >> 3) * -0x11111111;
      iVar2 = *(int *)((long)__s + uVar4);
      uVar10 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      *(float *)(lVar8 + 100) = *(float *)(lVar8 + 100) + fVar15;
      lVar8 = *plVar5;
      fVar17 = *(float *)(lVar14 + 100);
      *(int *)((long)__s + uVar4) = iVar2 + 1;
      iVar2 = *(int *)((long)__s + uVar10);
      uVar1 = (int)((ulong)(lVar8 - lVar7) >> 3) * -0x11111111;
      uVar4 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
      *(float *)(lVar14 + 100) = fVar17 + fVar15;
      *(int *)((long)__s + uVar10) = iVar2 + 1;
      fVar17 = *(float *)(lVar8 + 100);
      *(int *)((long)__s + uVar4) = *(int *)((long)__s + uVar4) + 1;
      *(float *)(lVar8 + 100) = fVar17 + fVar15;
      plVar5 = plVar5 + 9;
    } while (uVar6 != 0);
    uVar3 = *(uint *)(this + 0x374);
    lVar7 = *(long *)(this + 0x380);
  }
  if ((int)uVar3 < 1) {
    if (__s == (int *)0x0) {
      return;
    }
  }
  else {
    uVar6 = (ulong)uVar3;
    pfVar9 = (float *)(lVar7 + 100);
    piVar12 = __s;
    do {
      if (*piVar12 < 1) {
        *pfVar9 = 0.0;
      }
      else {
        *pfVar9 = *pfVar9 / (float)*piVar12;
      }
      uVar6 = uVar6 - 1;
      pfVar9 = pfVar9 + 0x1e;
      piVar12 = piVar12 + 1;
    } while (uVar6 != 0);
  }
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f7f670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(__s);
  return;
}


