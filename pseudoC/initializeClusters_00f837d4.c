// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeClusters
// Entry Point: 00f837d4
// Size: 1324 bytes
// Signature: undefined initializeClusters(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::initializeClusters() */

void btSoftBody::initializeClusters(void)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  long in_x0;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  float *pfVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  float fVar34;
  float fVar35;
  undefined8 uVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  
  if (0 < *(int *)(in_x0 + 0x5dc)) {
    lVar20 = 0;
    do {
      lVar22 = *(long *)(*(long *)(in_x0 + 0x5e8) + lVar20 * 8);
      uVar1 = *(uint *)(lVar22 + 0x24);
      *(undefined4 *)(lVar22 + 0xa4) = 0;
      uVar2 = *(uint *)(lVar22 + 4);
      uVar10 = uVar1;
      if ((int)uVar2 < (int)uVar1) {
        if (*(int *)(lVar22 + 8) < (int)uVar1) {
          if (uVar1 == 0) {
            uVar21 = 0;
            uVar10 = uVar2;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            uVar21 = (*(code *)PTR_FUN_01048e38)((long)(int)uVar1 << 2,0x10);
            uVar10 = *(uint *)(lVar22 + 4);
          }
          uVar4 = *(ulong *)(lVar22 + 0x10);
          if ((int)uVar10 < 1) {
            if (uVar4 != 0) goto LAB_00f83934;
          }
          else {
            uVar5 = (ulong)uVar10;
            if ((uVar10 < 8) || ((uVar21 < uVar4 + uVar5 * 4 && (uVar4 < uVar21 + uVar5 * 4)))) {
              uVar11 = 0;
            }
            else {
              uVar11 = uVar5 & 0xfffffff8;
              puVar15 = (undefined8 *)(uVar4 + 0x10);
              puVar17 = (undefined8 *)(uVar21 + 0x10);
              uVar18 = uVar11;
              do {
                puVar3 = puVar15 + -1;
                uVar33 = puVar15[-2];
                uVar28 = puVar15[1];
                uVar36 = *puVar15;
                uVar18 = uVar18 - 8;
                puVar15 = puVar15 + 4;
                puVar17[-1] = *puVar3;
                puVar17[-2] = uVar33;
                puVar17[1] = uVar28;
                *puVar17 = uVar36;
                puVar17 = puVar17 + 4;
              } while (uVar18 != 0);
              if (uVar11 == uVar5) goto LAB_00f83934;
            }
            lVar6 = uVar5 - uVar11;
            puVar12 = (undefined4 *)(uVar4 + uVar11 * 4);
            puVar14 = (undefined4 *)(uVar21 + uVar11 * 4);
            do {
              lVar6 = lVar6 + -1;
              *puVar14 = *puVar12;
              puVar12 = puVar12 + 1;
              puVar14 = puVar14 + 1;
            } while (lVar6 != 0);
LAB_00f83934:
            if (*(char *)(lVar22 + 0x18) != '\0') {
              gNumAlignedFree = gNumAlignedFree + 1;
              (*(code *)PTR_FUN_01048e40)();
            }
          }
          *(undefined *)(lVar22 + 0x18) = 1;
          *(ulong *)(lVar22 + 0x10) = uVar21;
          *(uint *)(lVar22 + 8) = uVar1;
        }
        else {
          uVar21 = *(ulong *)(lVar22 + 0x10);
        }
        memset((void *)(uVar21 + (long)(int)uVar2 * 4),0,((long)(int)uVar1 - (long)(int)uVar2) * 4);
        uVar10 = *(uint *)(lVar22 + 0x24);
      }
      uVar21 = (ulong)uVar10;
      *(uint *)(lVar22 + 4) = uVar1;
      if ((int)uVar10 < 1) {
        fVar24 = 0.0;
        fVar26 = 0.0;
        fVar29 = 0.0;
        fVar23 = 1.0 / *(float *)(lVar22 + 0xa4);
        *(float *)(lVar22 + 0xa4) = fVar23;
      }
      else {
        plVar7 = *(long **)(lVar22 + 0x30);
        pfVar13 = *(float **)(lVar22 + 0x10);
        plVar8 = plVar7;
        pfVar19 = pfVar13;
        uVar4 = uVar21;
        do {
          if (*(float *)(*plVar8 + 0x60) == 0.0) {
            *(undefined *)(lVar22 + 0x1a0) = 1;
            fVar23 = 1e+18;
          }
          else {
            fVar23 = 1.0 / *(float *)(*plVar8 + 0x60);
          }
          *pfVar19 = fVar23;
          uVar4 = uVar4 - 1;
          plVar8 = plVar8 + 1;
          fVar23 = *(float *)(lVar22 + 0xa4) + fVar23;
          *(float *)(lVar22 + 0xa4) = fVar23;
          pfVar19 = pfVar19 + 1;
        } while (uVar4 != 0);
        fVar23 = 1.0 / fVar23;
        fVar24 = 0.0;
        fVar26 = 0.0;
        fVar29 = 0.0;
        *(float *)(lVar22 + 0xa4) = fVar23;
        uVar4 = uVar21;
        do {
          fVar31 = *pfVar13;
          uVar4 = uVar4 - 1;
          uVar33 = *(undefined8 *)(*plVar7 + 0x14);
          fVar29 = (float)NEON_fmadd(fVar31,*(undefined4 *)(*plVar7 + 0x10),fVar29);
          fVar24 = fVar24 + (float)uVar33 * fVar31;
          fVar26 = fVar26 + (float)((ulong)uVar33 >> 0x20) * fVar31;
          plVar7 = plVar7 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar4 != 0);
      }
      *(undefined4 *)(lVar22 + 0x114) = 0;
      *(undefined8 *)(lVar22 + 0x180) = 0;
      *(float *)(lVar22 + 0x108) = fVar29 * fVar23;
      *(undefined8 *)(lVar22 + 0x168) = 0;
      *(undefined8 *)(lVar22 + 0x160) = 0;
      *(undefined8 *)(lVar22 + 0x178) = 0;
      *(undefined8 *)(lVar22 + 0x170) = 0;
      *(ulong *)(lVar22 + 0x10c) = CONCAT44(fVar26 * fVar23,fVar24 * fVar23);
      *(undefined8 *)(lVar22 + 0xb0) = 0;
      *(undefined8 *)(lVar22 + 0xa8) = 0;
      *(undefined8 *)(lVar22 + 0xc0) = 0;
      *(undefined8 *)(lVar22 + 0xb8) = 0;
      *(undefined8 *)(lVar22 + 0xd0) = 0;
      *(undefined8 *)(lVar22 + 200) = 0;
      if ((int)uVar10 < 1) {
        fVar27 = 0.0;
        fVar30 = 0.0;
        fVar25 = 0.0;
        fVar32 = 0.0;
        fVar31 = 0.0;
        uVar33 = 0;
      }
      else {
        uVar33 = 0;
        fVar32 = 0.0;
        fVar30 = 0.0;
        fVar25 = 0.0;
        fVar27 = 0.0;
        uVar4 = (ulong)uVar10;
        plVar8 = *(long **)(lVar22 + 0x30);
        pfVar13 = *(float **)(lVar22 + 0x10);
        do {
          fVar39 = *pfVar13;
          uVar4 = uVar4 - 1;
          uVar36 = *(undefined8 *)(*plVar8 + 0x14);
          fVar34 = *(float *)(*plVar8 + 0x10) - fVar29 * fVar23;
          fVar35 = (float)uVar36 - fVar24 * fVar23;
          fVar37 = (float)((ulong)uVar36 >> 0x20) - fVar26 * fVar23;
          fVar31 = (float)((ulong)uVar33 >> 0x20) - fVar37 * fVar39 * fVar34;
          uVar33 = CONCAT44(fVar31,(float)uVar33 - fVar35 * fVar39 * fVar34);
          *(undefined8 *)(lVar22 + 0xac) = uVar33;
          fVar30 = (float)NEON_fmadd(fVar39,fVar35 * fVar35 + fVar34 * fVar34,fVar30);
          fVar25 = fVar25 + (fVar37 * fVar37 + fVar34 * fVar34) * fVar39;
          fVar27 = fVar27 + (fVar37 * fVar37 + fVar35 * fVar35) * fVar39;
          fVar32 = fVar32 - fVar39 * fVar35 * fVar37;
          *(float *)(lVar22 + 0xd0) = fVar30;
          *(float *)(lVar22 + 0xa8) = fVar27;
          *(float *)(lVar22 + 0xbc) = fVar25;
          *(float *)(lVar22 + 0xc0) = fVar32;
          plVar8 = plVar8 + 1;
          pfVar13 = pfVar13 + 1;
        } while (uVar4 != 0);
      }
      fVar23 = (float)uVar33;
      uVar1 = *(uint *)(lVar22 + 0x44);
      *(undefined4 *)(lVar22 + 0xb4) = 0;
      fVar29 = (float)NEON_fnmsub(fVar30,fVar25,fVar32 * fVar32);
      fVar34 = (float)NEON_fnmsub(fVar31,fVar32,fVar23 * fVar30);
      fVar35 = (float)NEON_fnmsub(fVar23,fVar32,fVar31 * fVar25);
      fVar26 = (float)NEON_fnmsub(fVar27,fVar30,fVar31 * fVar31);
      *(undefined4 *)(lVar22 + 0xc4) = 0;
      *(undefined4 *)(lVar22 + 0xd4) = 0;
      *(undefined4 *)(lVar22 + 0x60) = 0x3f800000;
      fVar24 = (float)NEON_fnmsub(fVar27,fVar25,fVar23 * fVar23);
      *(undefined8 *)(lVar22 + 0x6c) = 0;
      *(undefined8 *)(lVar22 + 100) = 0;
      uVar38 = NEON_fmadd(fVar34,fVar23,fVar27 * fVar29);
      fVar23 = (float)NEON_fnmsub(fVar31,fVar23,fVar27 * fVar32);
      *(undefined4 *)(lVar22 + 0x74) = 0x3f800000;
      *(undefined8 *)(lVar22 + 0x78) = 0;
      *(undefined8 *)(lVar22 + 0x80) = 0;
      *(undefined8 *)(lVar22 + 0x88) = 0x3f800000;
      fVar31 = (float)NEON_fmadd(fVar31,fVar35,uVar38);
      fVar31 = 1.0 / fVar31;
      *(float *)(lVar22 + 0xbc) = fVar31 * fVar26;
      *(float *)(lVar22 + 0xa8) = fVar31 * fVar29;
      *(float *)(lVar22 + 0xac) = fVar31 * fVar34;
      *(float *)(lVar22 + 0xb0) = fVar31 * fVar35;
      *(float *)(lVar22 + 0xb8) = fVar31 * fVar34;
      *(float *)(lVar22 + 0xc0) = fVar31 * fVar23;
      *(float *)(lVar22 + 200) = fVar31 * fVar35;
      *(float *)(lVar22 + 0xcc) = fVar31 * fVar23;
      *(float *)(lVar22 + 0xd0) = fVar31 * fVar24;
      *(undefined8 *)(lVar22 + 0x98) = *(undefined8 *)(lVar22 + 0x110);
      *(undefined8 *)(lVar22 + 0x90) = *(undefined8 *)(lVar22 + 0x108);
      if (((int)uVar1 < (int)uVar10) && (*(int *)(lVar22 + 0x48) < (int)uVar10)) {
        if (uVar10 == 0) {
          lVar6 = 0;
        }
        else {
          gNumAlignedAllocs = gNumAlignedAllocs + 1;
          lVar6 = (*(code *)PTR_FUN_01048e38)
                            (-(ulong)(uVar10 >> 0x1f) & 0xfffffff000000000 | uVar21 << 4,0x10);
          uVar1 = *(uint *)(lVar22 + 0x44);
        }
        if (0 < (int)uVar1) {
          lVar9 = 0;
          do {
            puVar15 = (undefined8 *)(*(long *)(lVar22 + 0x50) + lVar9);
            uVar33 = *puVar15;
            ((undefined8 *)(lVar6 + lVar9))[1] = puVar15[1];
            *(undefined8 *)(lVar6 + lVar9) = uVar33;
            lVar9 = lVar9 + 0x10;
          } while ((ulong)uVar1 * 0x10 - lVar9 != 0);
        }
        if ((*(long *)(lVar22 + 0x50) != 0) && (*(char *)(lVar22 + 0x58) != '\0')) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *(undefined *)(lVar22 + 0x58) = 1;
        *(long *)(lVar22 + 0x50) = lVar6;
        *(uint *)(lVar22 + 0x48) = uVar10;
      }
      *(uint *)(lVar22 + 0x44) = uVar10;
      if (0 < (int)uVar10) {
        lVar9 = 0;
        lVar6 = 0;
        do {
          lVar16 = *(long *)(*(long *)(lVar22 + 0x30) + lVar6 * 8);
          lVar6 = lVar6 + 1;
          fVar23 = *(float *)(lVar22 + 0x110);
          uVar33 = *(undefined8 *)(lVar16 + 0x10);
          fVar24 = *(float *)(lVar16 + 0x18);
          puVar15 = (undefined8 *)(*(long *)(lVar22 + 0x50) + lVar9);
          lVar9 = lVar9 + 0x10;
          *puVar15 = CONCAT44((float)((ulong)uVar33 >> 0x20) -
                              (float)((ulong)*(undefined8 *)(lVar22 + 0x108) >> 0x20),
                              (float)uVar33 - (float)*(undefined8 *)(lVar22 + 0x108));
          *(float *)(puVar15 + 1) = fVar24 - fVar23;
          *(undefined4 *)((long)puVar15 + 0xc) = 0;
        } while (lVar6 < *(int *)(lVar22 + 0x44));
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(in_x0 + 0x5dc));
  }
  return;
}


