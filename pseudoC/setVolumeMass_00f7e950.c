// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setVolumeMass
// Entry Point: 00f7e950
// Size: 916 bytes
// Signature: undefined __thiscall setVolumeMass(btSoftBody * this, float param_1)


/* btSoftBody::setVolumeMass(float) */

void __thiscall btSoftBody::setVolumeMass(btSoftBody *this,float param_1)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  float *__s;
  ulong uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar4 = (ulong)*(uint *)(this + 0x374);
  if ((int)*(uint *)(this + 0x374) < 1) {
    lVar6 = *(long *)(this + 0x380);
    bVar3 = false;
    __s = (float *)0x0;
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s = (float *)(*(code *)PTR_FUN_01048e38)(uVar4 << 2,0x10);
    memset(__s,0,uVar4 << 2);
    uVar2 = *(uint *)(this + 0x374);
    uVar4 = (ulong)uVar2;
    lVar6 = *(long *)(this + 0x380);
    if ((int)uVar2 < 1) {
      bVar3 = false;
    }
    else {
      if (uVar2 == 1) {
        uVar8 = 0;
LAB_00f7ea14:
        lVar7 = uVar4 - uVar8;
        puVar9 = (undefined4 *)(lVar6 + uVar8 * 0x78 + 0x60);
        do {
          lVar7 = lVar7 + -1;
          *puVar9 = 0;
          puVar9 = puVar9 + 0x1e;
        } while (lVar7 != 0);
      }
      else {
        uVar8 = uVar4 & 0xfffffffe;
        puVar9 = (undefined4 *)(lVar6 + 0xd8);
        uVar10 = uVar8;
        do {
          uVar10 = uVar10 - 2;
          puVar9[-0x1e] = 0;
          *puVar9 = 0;
          puVar9 = puVar9 + 0x3c;
        } while (uVar10 != 0);
        if (uVar8 != uVar4) goto LAB_00f7ea14;
      }
      lVar6 = *(long *)(this + 0x380);
      bVar3 = true;
    }
  }
  uVar10 = (ulong)*(uint *)(this + 0x3d4);
  if (0 < (int)*(uint *)(this + 0x3d4)) {
    pfVar5 = (float *)(*(long *)(this + 0x3e0) + 0x30);
    do {
      uVar10 = uVar10 - 1;
      lVar7 = *(long *)(pfVar5 + -8);
      lVar1 = *(long *)(pfVar5 + -6);
      uVar2 = (int)((ulong)(lVar7 - lVar6) >> 3) * -0x11111111;
      uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      *(float *)(lVar7 + 0x60) = *(float *)(lVar7 + 0x60) + ABS(*pfVar5);
      uVar2 = (int)((ulong)(lVar1 - lVar6) >> 3) * -0x11111111;
      uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      *(float *)((long)__s + uVar12) = *(float *)((long)__s + uVar12) + 1.0;
      *(float *)(lVar1 + 0x60) = *(float *)(lVar1 + 0x60) + ABS(*pfVar5);
      *(float *)((long)__s + uVar8) = *(float *)((long)__s + uVar8) + 1.0;
      lVar7 = *(long *)(pfVar5 + -4);
      lVar1 = *(long *)(pfVar5 + -2);
      uVar2 = (int)((ulong)(lVar7 - lVar6) >> 3) * -0x11111111;
      uVar12 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      *(float *)(lVar7 + 0x60) = *(float *)(lVar7 + 0x60) + ABS(*pfVar5);
      uVar2 = (int)((ulong)(lVar1 - lVar6) >> 3) * -0x11111111;
      uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar2 << 2;
      *(float *)((long)__s + uVar12) = *(float *)((long)__s + uVar12) + 1.0;
      *(float *)(lVar1 + 0x60) = *(float *)(lVar1 + 0x60) + ABS(*pfVar5);
      *(float *)((long)__s + uVar8) = *(float *)((long)__s + uVar8) + 1.0;
      pfVar5 = pfVar5 + 0x22;
    } while (uVar10 != 0);
    lVar6 = *(long *)(this + 0x380);
  }
  if (!bVar3) goto LAB_00f7ec90;
  pfVar5 = (float *)(lVar6 + 0x60);
  pfVar11 = __s;
  uVar10 = uVar4;
  do {
    if (0.0 < *pfVar5) {
      *pfVar5 = *pfVar11 / *pfVar5;
    }
    uVar10 = uVar10 - 1;
    pfVar11 = pfVar11 + 1;
    pfVar5 = pfVar5 + 0x1e;
  } while (uVar10 != 0);
  lVar6 = *(long *)(this + 0x380);
  if ((uint)uVar4 < 2) {
    fVar13 = 0.0;
    uVar8 = 0;
LAB_00f7ebe4:
    lVar7 = uVar4 - uVar8;
    pfVar5 = (float *)(lVar6 + uVar8 * 0x78 + 0x60);
    do {
      fVar14 = 1.0 / *pfVar5;
      if (*pfVar5 <= 0.0) {
        fVar14 = 0.0;
      }
      lVar7 = lVar7 + -1;
      fVar13 = fVar14 + fVar13;
      pfVar5 = pfVar5 + 0x1e;
    } while (lVar7 != 0);
  }
  else {
    uVar8 = uVar4 & 0xfffffffe;
    fVar14 = 0.0;
    fVar13 = 0.0;
    pfVar5 = (float *)(lVar6 + 0xd8);
    uVar10 = uVar8;
    do {
      fVar16 = 1.0 / *pfVar5;
      fVar15 = 1.0 / pfVar5[-0x1e];
      if (pfVar5[-0x1e] <= 0.0) {
        fVar15 = 0.0;
      }
      fVar14 = fVar15 + fVar14;
      if (*pfVar5 <= 0.0) {
        fVar16 = 0.0;
      }
      uVar10 = uVar10 - 2;
      fVar13 = fVar16 + fVar13;
      pfVar5 = pfVar5 + 0x3c;
    } while (uVar10 != 0);
    fVar13 = fVar13 + fVar14;
    if (uVar8 != uVar4) goto LAB_00f7ebe4;
  }
  fVar14 = 1.0 / param_1;
  if ((uint)uVar4 < 2) {
    uVar8 = 0;
  }
  else {
    uVar8 = uVar4 & 0xfffffffe;
    pfVar5 = (float *)(lVar6 + 0xd8);
    uVar10 = uVar8;
    do {
      uVar10 = uVar10 - 2;
      pfVar5[-0x1e] = pfVar5[-0x1e] * fVar13 * fVar14;
      *pfVar5 = *pfVar5 * fVar13 * fVar14;
      pfVar5 = pfVar5 + 0x3c;
    } while (uVar10 != 0);
    if (uVar8 == uVar4) goto LAB_00f7ec90;
  }
  lVar7 = uVar4 - uVar8;
  pfVar5 = (float *)(lVar6 + uVar8 * 0x78 + 0x60);
  do {
    lVar7 = lVar7 + -1;
    *pfVar5 = *pfVar5 * fVar13 * fVar14;
    pfVar5 = pfVar5 + 0x1e;
  } while (lVar7 != 0);
LAB_00f7ec90:
  this[0x4b4] = (btSoftBody)0x1;
  if (__s != (float *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f7eccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_FUN_01048e40)(__s);
    return;
  }
  return;
}


