// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setTotalMass
// Entry Point: 00f7e51c
// Size: 692 bytes
// Signature: undefined __thiscall setTotalMass(btSoftBody * this, float param_1, bool param_2)


/* btSoftBody::setTotalMass(float, bool) */

void __thiscall btSoftBody::setTotalMass(btSoftBody *this,float param_1,bool param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long *plVar9;
  long lVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = *(uint *)(this + 0x374);
  uVar2 = (ulong)uVar1;
  if (param_2) {
    if (0 < (int)uVar1) {
      lVar3 = *(long *)(this + 0x380);
      if (uVar1 == 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = uVar2 & 0xfffffffe;
        puVar8 = (undefined4 *)(lVar3 + 0xd8);
        uVar5 = uVar7;
        do {
          uVar5 = uVar5 - 2;
          puVar8[-0x1e] = 0;
          *puVar8 = 0;
          puVar8 = puVar8 + 0x3c;
        } while (uVar5 != 0);
        if (uVar7 == uVar2) goto LAB_00f7e580;
      }
      lVar4 = uVar2 - uVar7;
      puVar8 = (undefined4 *)(lVar3 + uVar7 * 0x78 + 0x60);
      do {
        lVar4 = lVar4 + -1;
        *puVar8 = 0;
        puVar8 = puVar8 + 0x1e;
      } while (lVar4 != 0);
    }
LAB_00f7e580:
    uVar5 = (ulong)*(uint *)(this + 0x3b4);
    if (0 < (int)*(uint *)(this + 0x3b4)) {
      plVar9 = (long *)(*(long *)(this + 0x3c0) + 0x20);
      do {
        lVar3 = plVar9[-2];
        lVar4 = plVar9[-1];
        uVar5 = uVar5 - 1;
        lVar10 = *plVar9;
        fVar16 = *(float *)(lVar4 + 0x14) - *(float *)(lVar3 + 0x14);
        fVar18 = *(float *)(lVar10 + 0x10) - *(float *)(lVar3 + 0x10);
        fVar11 = *(float *)(lVar4 + 0x10) - *(float *)(lVar3 + 0x10);
        fVar15 = *(float *)(lVar4 + 0x18) - *(float *)(lVar3 + 0x18);
        fVar13 = *(float *)(lVar10 + 0x14) - *(float *)(lVar3 + 0x14);
        fVar19 = *(float *)(lVar10 + 0x18) - *(float *)(lVar3 + 0x18);
        fVar14 = (float)NEON_fnmsub(fVar13,fVar11,fVar18 * fVar16);
        uVar17 = NEON_fnmsub(fVar19,fVar16,fVar13 * fVar15);
        uVar12 = NEON_fnmsub(fVar18,fVar15,fVar19 * fVar11);
        uVar17 = NEON_fmadd(uVar17,uVar17,fVar14 * fVar14);
        fVar11 = (float)NEON_fmadd(uVar12,uVar12,uVar17);
        fVar11 = SQRT(fVar11);
        *(float *)(lVar3 + 0x60) = *(float *)(lVar3 + 0x60) + fVar11;
        *(float *)(lVar4 + 0x60) = *(float *)(lVar4 + 0x60) + fVar11;
        *(float *)(lVar10 + 0x60) = *(float *)(lVar10 + 0x60) + fVar11;
        plVar9 = plVar9 + 9;
      } while (uVar5 != 0);
    }
    if ((int)uVar1 < 1) goto LAB_00f7e7c4;
    lVar3 = *(long *)(this + 0x380);
    if (uVar1 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar2 & 0xfffffffe;
      pfVar6 = (float *)(lVar3 + 0xd8);
      uVar5 = uVar7;
      do {
        uVar5 = uVar5 - 2;
        pfVar6[-0x1e] = 1.0 / pfVar6[-0x1e];
        *pfVar6 = 1.0 / *pfVar6;
        pfVar6 = pfVar6 + 0x3c;
      } while (uVar5 != 0);
      if (uVar7 == uVar2) goto LAB_00f7e69c;
    }
    lVar4 = uVar2 - uVar7;
    pfVar6 = (float *)(lVar3 + uVar7 * 0x78 + 0x60);
    do {
      lVar4 = lVar4 + -1;
      *pfVar6 = 1.0 / *pfVar6;
      pfVar6 = pfVar6 + 0x1e;
    } while (lVar4 != 0);
  }
LAB_00f7e69c:
  if ((int)uVar1 < 1) goto LAB_00f7e7c4;
  lVar3 = *(long *)(this + 0x380);
  if (uVar1 == 1) {
    fVar11 = 0.0;
    uVar7 = 0;
LAB_00f7e718:
    lVar4 = uVar2 - uVar7;
    pfVar6 = (float *)(lVar3 + uVar7 * 0x78 + 0x60);
    do {
      fVar13 = 1.0 / *pfVar6;
      if (*pfVar6 <= 0.0) {
        fVar13 = 0.0;
      }
      lVar4 = lVar4 + -1;
      fVar11 = fVar13 + fVar11;
      pfVar6 = pfVar6 + 0x1e;
    } while (lVar4 != 0);
  }
  else {
    uVar7 = uVar2 & 0xfffffffe;
    fVar13 = 0.0;
    fVar11 = 0.0;
    pfVar6 = (float *)(lVar3 + 0xd8);
    uVar5 = uVar7;
    do {
      fVar15 = 1.0 / *pfVar6;
      fVar14 = 1.0 / pfVar6[-0x1e];
      if (pfVar6[-0x1e] <= 0.0) {
        fVar14 = 0.0;
      }
      fVar13 = fVar14 + fVar13;
      if (*pfVar6 <= 0.0) {
        fVar15 = 0.0;
      }
      uVar5 = uVar5 - 2;
      fVar11 = fVar15 + fVar11;
      pfVar6 = pfVar6 + 0x3c;
    } while (uVar5 != 0);
    fVar11 = fVar11 + fVar13;
    if (uVar7 != uVar2) goto LAB_00f7e718;
  }
  fVar13 = 1.0 / param_1;
  if (uVar1 == 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = uVar2 & 0xfffffffe;
    pfVar6 = (float *)(lVar3 + 0xd8);
    uVar5 = uVar7;
    do {
      uVar5 = uVar5 - 2;
      pfVar6[-0x1e] = pfVar6[-0x1e] * fVar11 * fVar13;
      *pfVar6 = *pfVar6 * fVar11 * fVar13;
      pfVar6 = pfVar6 + 0x3c;
    } while (uVar5 != 0);
    if (uVar7 == uVar2) goto LAB_00f7e7c4;
  }
  lVar4 = uVar2 - uVar7;
  pfVar6 = (float *)(lVar3 + uVar7 * 0x78 + 0x60);
  do {
    lVar4 = lVar4 + -1;
    *pfVar6 = *pfVar6 * fVar11 * fVar13;
    pfVar6 = pfVar6 + 0x1e;
  } while (lVar4 != 0);
LAB_00f7e7c4:
  this[0x4b4] = (btSoftBody)0x1;
  return;
}


