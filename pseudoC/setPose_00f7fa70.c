// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPose
// Entry Point: 00f7fa70
// Size: 1904 bytes
// Signature: undefined __thiscall setPose(btSoftBody * this, bool param_1, bool param_2)


/* btSoftBody::setPose(bool, bool) */

void __thiscall btSoftBody::setPose(btSoftBody *this,bool param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  float *pfVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  float *pfVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  
  uVar1 = *(uint *)(this + 0x374);
  uVar19 = (ulong)uVar1;
  lVar5 = *(long *)(this + 0x380);
  this[600] = (btSoftBody)param_1;
  this[0x259] = (btSoftBody)param_2;
  if ((int)uVar1 < 1) {
    fVar32 = 0.0;
  }
  else {
    if (uVar1 == 1) {
      fVar32 = 0.0;
      uVar8 = 0;
    }
    else {
      uVar8 = uVar19 & 0xfffffffe;
      fVar23 = 0.0;
      fVar32 = 0.0;
      pfVar6 = (float *)(lVar5 + 0xd8);
      uVar4 = uVar8;
      do {
        fVar22 = 1.0 / pfVar6[-0x1e];
        fVar21 = 1.0 / *pfVar6;
        if (pfVar6[-0x1e] <= 0.0) {
          fVar22 = 0.0;
        }
        fVar23 = fVar22 + fVar23;
        if (*pfVar6 <= 0.0) {
          fVar21 = 0.0;
        }
        uVar4 = uVar4 - 2;
        fVar32 = fVar21 + fVar32;
        pfVar6 = pfVar6 + 0x3c;
      } while (uVar4 != 0);
      fVar32 = fVar32 + fVar23;
      if (uVar8 == uVar19) goto LAB_00f7fb50;
    }
    lVar9 = uVar19 - uVar8;
    pfVar6 = (float *)(lVar5 + uVar8 * 0x78 + 0x60);
    do {
      fVar23 = 1.0 / *pfVar6;
      if (*pfVar6 <= 0.0) {
        fVar23 = 0.0;
      }
      lVar9 = lVar9 + -1;
      fVar32 = fVar23 + fVar32;
      pfVar6 = pfVar6 + 0x1e;
    } while (lVar9 != 0);
  }
LAB_00f7fb50:
  uVar7 = *(uint *)(this + 0x284);
  uVar2 = uVar1;
  if ((int)uVar7 < (int)uVar1) {
    lVar5 = (long)(int)uVar7;
    if (*(int *)(this + 0x288) < (int)uVar1) {
      if (uVar1 == 0) {
        uVar19 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        uVar19 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar1 << 2,0x10);
        uVar7 = *(uint *)(this + 0x284);
      }
      uVar4 = *(ulong *)(this + 0x290);
      if ((int)uVar7 < 1) {
        if (uVar4 != 0) goto LAB_00f7fc50;
      }
      else {
        uVar8 = (ulong)uVar7;
        if ((uVar7 < 8) || ((uVar19 < uVar4 + uVar8 * 4 && (uVar4 < uVar19 + uVar8 * 4)))) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar8 & 0xfffffff8;
          puVar13 = (undefined8 *)(uVar4 + 0x10);
          puVar16 = (undefined8 *)(uVar19 + 0x10);
          uVar17 = uVar10;
          do {
            puVar3 = puVar13 + -1;
            uVar33 = puVar13[-2];
            uVar26 = puVar13[1];
            uVar20 = *puVar13;
            uVar17 = uVar17 - 8;
            puVar13 = puVar13 + 4;
            puVar16[-1] = *puVar3;
            puVar16[-2] = uVar33;
            puVar16[1] = uVar26;
            *puVar16 = uVar20;
            puVar16 = puVar16 + 4;
          } while (uVar17 != 0);
          if (uVar10 == uVar8) goto LAB_00f7fc50;
        }
        lVar9 = uVar8 - uVar10;
        puVar11 = (undefined4 *)(uVar4 + uVar10 * 4);
        puVar12 = (undefined4 *)(uVar19 + uVar10 * 4);
        do {
          lVar9 = lVar9 + -1;
          *puVar12 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar12 = puVar12 + 1;
        } while (lVar9 != 0);
LAB_00f7fc50:
        if (this[0x298] != (btSoftBody)0x0) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
      }
      *(ulong *)(this + 0x290) = uVar19;
      *(uint *)(this + 0x288) = uVar1;
      this[0x298] = (btSoftBody)0x1;
    }
    else {
      uVar19 = *(ulong *)(this + 0x290);
    }
    memset((void *)(uVar19 + lVar5 * 4),0,((int)uVar1 - lVar5) * 4);
    uVar2 = *(uint *)(this + 0x374);
    lVar5 = *(long *)(this + 0x380);
  }
  uVar19 = (ulong)uVar2;
  *(uint *)(this + 0x284) = uVar1;
  if (0 < (int)uVar2) {
    fVar23 = fVar32 * 1000.0 * (float)uVar1;
    if (uVar2 == 1) {
      uVar8 = 0;
LAB_00f7fd20:
      lVar9 = uVar19 - uVar8;
      pfVar6 = (float *)(lVar5 + uVar8 * 0x78 + 0x60);
      do {
        fVar22 = -0.0;
        if (*pfVar6 <= 0.0) {
          fVar22 = fVar23;
        }
        lVar9 = lVar9 + -1;
        fVar32 = fVar22 + fVar32;
        pfVar6 = pfVar6 + 0x1e;
      } while (lVar9 != 0);
    }
    else {
      uVar8 = uVar19 & 0xfffffffe;
      fVar22 = 0.0;
      pfVar6 = (float *)(lVar5 + 0xd8);
      uVar4 = uVar8;
      do {
        fVar21 = -0.0;
        if (pfVar6[-0x1e] <= 0.0) {
          fVar21 = fVar23;
        }
        fVar24 = -0.0;
        if (*pfVar6 <= 0.0) {
          fVar24 = fVar23;
        }
        uVar4 = uVar4 - 2;
        fVar32 = fVar21 + fVar32;
        fVar22 = fVar24 + fVar22;
        pfVar6 = pfVar6 + 0x3c;
      } while (uVar4 != 0);
      fVar32 = fVar22 + fVar32;
      if (uVar8 != uVar19) goto LAB_00f7fd20;
    }
    pfVar6 = (float *)(lVar5 + 0x60);
    pfVar15 = *(float **)(this + 0x290);
    uVar4 = uVar19;
    do {
      fVar22 = fVar23 / fVar32;
      if (0.0 < *pfVar6) {
        fVar22 = 1.0 / (*pfVar6 * fVar32);
      }
      uVar4 = uVar4 - 1;
      pfVar6 = pfVar6 + 0x1e;
      *pfVar15 = fVar22;
      pfVar15 = pfVar15 + 1;
    } while (uVar4 != 0);
    if (this[0x259] != (btSoftBody)0x0) {
      uVar33 = 0;
      fVar32 = 0.0;
      pfVar6 = *(float **)(this + 0x290);
      uVar4 = uVar19;
      puVar11 = (undefined4 *)(*(long *)(this + 0x380) + 0x18);
      do {
        fVar23 = *pfVar6;
        uVar4 = uVar4 - 1;
        uVar33 = CONCAT44((float)((ulong)uVar33 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(puVar11 + -2) >> 0x20) * fVar23,
                          (float)uVar33 + (float)*(undefined8 *)(puVar11 + -2) * fVar23);
        fVar32 = (float)NEON_fmadd(*puVar11,fVar23,fVar32);
        pfVar6 = pfVar6 + 1;
        puVar11 = puVar11 + 0x1e;
      } while (uVar4 != 0);
      goto LAB_00f7fdd4;
    }
  }
  uVar33 = 0;
  fVar32 = 0.0;
LAB_00f7fdd4:
  uVar1 = *(uint *)(this + 0x264);
  uVar7 = uVar2;
  if (((int)uVar1 < (int)uVar2) && (*(int *)(this + 0x268) < (int)uVar2)) {
    if (uVar2 == 0) {
      lVar5 = 0;
    }
    else {
      gNumAlignedAllocs = gNumAlignedAllocs + 1;
      lVar5 = (*(code *)PTR_FUN_01048e38)
                        (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 | uVar19 << 4,0x10);
      uVar1 = *(uint *)(this + 0x264);
    }
    if (0 < (int)uVar1) {
      lVar9 = 0;
      do {
        uVar20 = *(undefined8 *)(*(long *)(this + 0x270) + lVar9);
        ((undefined8 *)(lVar5 + lVar9))[1] = ((undefined8 *)(*(long *)(this + 0x270) + lVar9))[1];
        *(undefined8 *)(lVar5 + lVar9) = uVar20;
        lVar9 = lVar9 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar9 != 0);
    }
    if ((*(long *)(this + 0x270) != 0) && (this[0x278] != (btSoftBody)0x0)) {
      gNumAlignedFree = gNumAlignedFree + 1;
      (*(code *)PTR_FUN_01048e40)();
    }
    uVar7 = *(uint *)(this + 0x374);
    *(long *)(this + 0x270) = lVar5;
    *(uint *)(this + 0x268) = uVar2;
    this[0x278] = (btSoftBody)0x1;
  }
  *(uint *)(this + 0x264) = uVar2;
  if (0 < (int)uVar7) {
    lVar9 = 0;
    lVar5 = 0;
    do {
      lVar18 = *(long *)(this + 0x380) + lVar5;
      lVar5 = lVar5 + 0x78;
      uVar20 = *(undefined8 *)(lVar18 + 0x10);
      fVar23 = *(float *)(lVar18 + 0x18);
      puVar13 = (undefined8 *)(*(long *)(this + 0x270) + lVar9);
      lVar9 = lVar9 + 0x10;
      *(undefined4 *)((long)puVar13 + 0xc) = 0;
      *puVar13 = CONCAT44((float)((ulong)uVar20 >> 0x20) - (float)((ulong)uVar33 >> 0x20),
                          (float)uVar20 - (float)uVar33);
      *(float *)(puVar13 + 1) = fVar23 - fVar32;
    } while ((ulong)uVar7 * 0x78 - lVar5 != 0);
  }
  fVar23 = 0.0;
  fVar22 = 0.0;
  uVar1 = *(uint *)(this + 0x374);
  uVar19 = (ulong)uVar1;
  if ((param_1) && (fVar22 = 0.0, 0 < (int)uVar1)) {
    uVar4 = (ulong)*(uint *)(this + 0x3b4);
    fVar22 = 0.0;
    if (0 < (int)*(uint *)(this + 0x3b4)) {
      lVar5 = *(long *)(this + 0x380);
      fVar22 = 0.0;
      fVar21 = *(float *)(lVar5 + 0x10);
      fVar24 = *(float *)(lVar5 + 0x14);
      plVar14 = (long *)(*(long *)(this + 0x3c0) + 0x20);
      fVar25 = *(float *)(lVar5 + 0x18);
      do {
        lVar5 = plVar14[-1];
        lVar9 = *plVar14;
        uVar4 = uVar4 - 1;
        lVar18 = plVar14[-2];
        plVar14 = plVar14 + 9;
        fVar27 = *(float *)(lVar5 + 0x14) - fVar24;
        fVar31 = *(float *)(lVar5 + 0x10) - fVar21;
        fVar29 = *(float *)(lVar9 + 0x10) - fVar21;
        fVar34 = *(float *)(lVar5 + 0x18) - fVar25;
        fVar35 = *(float *)(lVar9 + 0x14) - fVar24;
        fVar37 = *(float *)(lVar9 + 0x18) - fVar25;
        uVar36 = NEON_fnmsub(fVar35,fVar31,fVar29 * fVar27);
        uVar28 = NEON_fnmsub(fVar37,fVar27,fVar35 * fVar34);
        uVar36 = NEON_fmadd(uVar36,*(float *)(lVar18 + 0x18) - fVar25,fVar22);
        uVar30 = NEON_fnmsub(fVar29,fVar34,fVar37 * fVar31);
        uVar36 = NEON_fmadd(uVar28,*(float *)(lVar18 + 0x10) - fVar21,uVar36);
        fVar22 = (float)NEON_fmadd(uVar30,*(float *)(lVar18 + 0x14) - fVar24,uVar36);
      } while (uVar4 != 0);
      fVar22 = fVar22 * 0.1666667;
    }
  }
  *(float *)(this + 0x25c) = fVar22;
  fVar21 = 0.0;
  *(undefined8 *)(this + 0x2b4) = 0;
  fVar24 = 0.0;
  fVar25 = 0.0;
  *(undefined8 *)(this + 0x2ac) = 0x3f80000000000000;
  fVar29 = 0.0;
  fVar27 = 0.0;
  *(undefined8 *)(this + 0x2ec) = 0;
  *(undefined8 *)(this + 0x2e4) = 0;
  *(undefined8 *)(this + 0x2d8) = 0x3f800000;
  uVar20 = 0;
  *(undefined8 *)(this + 0x334) = 0;
  *(undefined8 *)(this + 0x32c) = 0;
  *(undefined8 *)(this + 0x314) = 0;
  *(undefined8 *)(this + 0x30c) = 0;
  fVar22 = 0.0;
  *(undefined8 *)(this + 700) = 0;
  *(undefined8 *)(this + 0x324) = 0;
  *(undefined8 *)(this + 0x31c) = 0;
  uVar26 = 0;
  *(undefined8 *)(this + 0x2a0) = uVar33;
  *(float *)(this + 0x2a8) = fVar32;
  *(undefined4 *)(this + 0x2c4) = 0x3f800000;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined4 *)(this + 0x2e0) = 0x3f800000;
  *(undefined4 *)(this + 0x2f4) = 0x3f800000;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x308) = 0x3f800000;
  *(undefined4 *)(this + 0x33c) = 0;
  if (0 < (int)uVar1) {
    uVar20 = 0;
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar23 = 0.0;
    fVar21 = 0.0;
    fVar24 = 0.0;
    uVar26 = 0;
    pfVar6 = *(float **)(this + 0x290);
    pfVar15 = (float *)(*(long *)(this + 0x270) + 8);
    do {
      fVar32 = *pfVar6;
      uVar19 = uVar19 - 1;
      fVar22 = fVar32 * pfVar15[-2];
      fVar24 = (float)NEON_fmadd(fVar22,pfVar15[-2],fVar24);
      fVar21 = (float)NEON_fmadd(pfVar15[-1],fVar22,fVar21);
      fVar23 = (float)NEON_fmadd(*pfVar15,fVar22,fVar23);
      fVar25 = pfVar15[-1] * fVar32;
      fVar32 = *pfVar15 * fVar32;
      *(float *)(this + 0x310) = fVar24;
      *(float *)(this + 0x314) = fVar21;
      *(float *)(this + 0x318) = fVar23;
      fVar22 = (float)((ulong)uVar20 >> 0x20) +
               (float)((ulong)*(undefined8 *)(pfVar15 + -2) >> 0x20) * fVar25;
      uVar20 = CONCAT44(fVar22,(float)uVar20 + (float)*(undefined8 *)(pfVar15 + -2) * fVar25);
      fVar29 = (float)NEON_fmadd(*pfVar15,fVar25,fVar29);
      *(undefined8 *)(this + 800) = uVar20;
      *(float *)(this + 0x328) = fVar29;
      fVar25 = (float)((ulong)uVar26 >> 0x20) +
               (float)((ulong)*(undefined8 *)(pfVar15 + -2) >> 0x20) * fVar32;
      uVar26 = CONCAT44(fVar25,(float)uVar26 + (float)*(undefined8 *)(pfVar15 + -2) * fVar32);
      fVar27 = (float)NEON_fmadd(*pfVar15,fVar32,fVar27);
      *(undefined8 *)(this + 0x330) = uVar26;
      *(float *)(this + 0x338) = fVar27;
      pfVar6 = pfVar6 + 1;
      pfVar15 = pfVar15 + 4;
    } while (uVar19 != 0);
  }
  fVar32 = (float)uVar20;
  fVar31 = (float)uVar26;
  *(undefined4 *)(this + 0x31c) = 0;
  fVar34 = (float)NEON_fnmsub(fVar27,fVar22,fVar25 * fVar29);
  fVar35 = (float)NEON_fnmsub(fVar31,fVar29,fVar32 * fVar27);
  fVar37 = (float)NEON_fnmsub(fVar32,fVar25,fVar31 * fVar22);
  *(undefined4 *)(this + 0x32c) = 0;
  fVar40 = (float)NEON_fnmsub(fVar23,fVar25,fVar21 * fVar27);
  fVar27 = (float)NEON_fnmsub(fVar24,fVar27,fVar23 * fVar31);
  *(undefined4 *)(this + 0x33c) = 0;
  uVar36 = NEON_fmadd(fVar35,fVar21,fVar24 * fVar34);
  fVar38 = (float)NEON_fmadd(fVar23,fVar37,uVar36);
  fVar38 = 1.0 / fVar38;
  fVar39 = (float)NEON_fnmsub(fVar21,fVar29,fVar23 * fVar22);
  fVar25 = (float)NEON_fnmsub(fVar21,fVar31,fVar24 * fVar25);
  fVar22 = (float)NEON_fnmsub(fVar24,fVar22,fVar21 * fVar32);
  fVar32 = (float)NEON_fnmsub(fVar23,fVar32,fVar24 * fVar29);
  *(float *)(this + 0x314) = fVar38 * fVar40;
  *(float *)(this + 0x310) = fVar38 * fVar34;
  *(float *)(this + 0x318) = fVar38 * fVar39;
  *(float *)(this + 800) = fVar38 * fVar35;
  *(float *)(this + 0x324) = fVar38 * fVar27;
  *(float *)(this + 0x328) = fVar38 * fVar32;
  *(float *)(this + 0x330) = fVar38 * fVar37;
  *(float *)(this + 0x334) = fVar38 * fVar25;
  *(float *)(this + 0x338) = fVar38 * fVar22;
  updateConstants();
  return;
}


