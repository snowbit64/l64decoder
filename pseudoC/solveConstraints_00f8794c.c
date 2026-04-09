// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveConstraints
// Entry Point: 00f8794c
// Size: 1736 bytes
// Signature: undefined solveConstraints(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::solveConstraints() */

void btSoftBody::solveConstraints(void)

{
  code *pcVar1;
  uint uVar2;
  btSoftBody *in_x0;
  long lVar3;
  ulong uVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  ulong uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
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
  
  applyClusters(in_x0,false);
  uVar2 = *(uint *)(in_x0 + 0x394);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    do {
      lVar7 = *(long *)(in_x0 + 0x3a0) + lVar3;
      lVar3 = lVar3 + 0x48;
      uVar16 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x20);
      uVar13 = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x20);
      fVar18 = *(float *)(*(long *)(lVar7 + 0x10) + 0x28);
      fVar12 = (float)uVar13 - (float)uVar16;
      fVar14 = (float)((ulong)uVar13 >> 0x20) - (float)((ulong)uVar16 >> 0x20);
      fVar15 = *(float *)(*(long *)(lVar7 + 0x18) + 0x28);
      *(undefined4 *)(lVar7 + 0x44) = 0;
      fVar15 = fVar15 - fVar18;
      *(ulong *)(lVar7 + 0x38) = CONCAT44(fVar14,fVar12);
      *(float *)(lVar7 + 0x40) = fVar15;
      fVar12 = (float)NEON_fmadd(fVar15,fVar15,fVar12 * fVar12 + fVar14 * fVar14);
      *(float *)(lVar7 + 0x34) = 1.0 / (fVar12 * *(float *)(lVar7 + 0x28));
    } while ((ulong)uVar2 * 0x48 - lVar3 != 0);
  }
  uVar2 = *(uint *)(in_x0 + 0x3f4);
  if (0 < (int)uVar2) {
    lVar3 = 0;
    fVar12 = *(float *)(in_x0 + 0x240);
    do {
      plVar9 = (long *)(*(long *)(in_x0 + 0x400) + lVar3);
      lVar7 = plVar9[3];
      fVar14 = *(float *)(plVar9 + 1);
      uVar17 = *(undefined4 *)((long)plVar9 + 0xc);
      uVar19 = *(undefined4 *)(plVar9 + 2);
      uVar21 = NEON_fmadd(uVar17,*(undefined4 *)(lVar7 + 0xc),fVar14 * *(float *)(lVar7 + 8));
      uVar25 = NEON_fmadd(*(undefined4 *)(lVar7 + 0x1c),uVar17,*(float *)(lVar7 + 0x18) * fVar14);
      uVar17 = NEON_fmadd(*(undefined4 *)(lVar7 + 0x2c),uVar17,*(float *)(lVar7 + 0x28) * fVar14);
      fVar26 = *(float *)(lVar7 + 0x15c);
      fVar31 = *(float *)(lVar7 + 0x16c);
      fVar14 = (float)NEON_fmadd(uVar19,*(undefined4 *)(lVar7 + 0x10),uVar21);
      fVar24 = *(float *)(lVar7 + 0x170);
      fVar15 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x20),uVar19,uVar25);
      fVar18 = (float)NEON_fmadd(*(undefined4 *)(lVar7 + 0x30),uVar19,uVar17);
      fVar27 = *(float *)(lVar7 + 0x174);
      fVar28 = *(float *)(lVar7 + 0x19c) + *(float *)(*plVar9 + 0x60);
      fVar22 = *(float *)(lVar7 + 0x160);
      fVar29 = (float)NEON_fnmsub(*(float *)(lVar7 + 0x150),fVar18,fVar24 * fVar14);
      fVar33 = *(float *)(lVar7 + 0x164);
      uVar25 = NEON_fnmsub(fVar26,fVar14,*(float *)(lVar7 + 0x14c) * fVar15);
      fVar23 = (float)NEON_fnmsub(*(float *)(lVar7 + 0x14c),fVar18,fVar31 * fVar14);
      uVar21 = NEON_fnmsub(*(float *)(lVar7 + 0x154),fVar18,fVar27 * fVar14);
      fVar30 = (float)NEON_fnmsub(fVar22,fVar14,*(float *)(lVar7 + 0x150) * fVar15);
      fVar34 = (float)NEON_fnmsub(fVar33,fVar14,*(float *)(lVar7 + 0x154) * fVar15);
      uVar17 = NEON_fmsub(uVar25,fVar15,fVar28);
      *(float *)((long)plVar9 + 0x54) = fVar14;
      fVar27 = (float)NEON_fnmsub(fVar27,fVar15,fVar33 * fVar18);
      fVar35 = (float)NEON_fnmsub(uVar21,fVar15,fVar29 * fVar18);
      fVar33 = (float)NEON_fmadd(fVar30,fVar14,uVar17);
      fVar26 = (float)NEON_fnmsub(fVar31,fVar15,fVar26 * fVar18);
      uVar17 = NEON_fnmsub(fVar24,fVar15,fVar22 * fVar18);
      uVar19 = NEON_fmadd(fVar23,fVar18,fVar28);
      fVar31 = (float)NEON_fnmsub(fVar29,fVar14,fVar23 * fVar15);
      fVar32 = (float)NEON_fnmsub(fVar34,fVar15,fVar30 * fVar18);
      fVar30 = (float)NEON_fnmsub(uVar25,fVar18,fVar34 * fVar14);
      *(float *)(plVar9 + 0xb) = fVar15;
      uVar25 = NEON_fmsub(uVar17,fVar18,fVar28);
      fVar23 = (float)NEON_fmsub(uVar21,fVar14,uVar19);
      fVar24 = (float)NEON_fnmsub(fVar26,fVar18,fVar27 * fVar14);
      *(float *)((long)plVar9 + 0x5c) = fVar18;
      fVar34 = (float)NEON_fnmsub(fVar32,fVar31,fVar35 * fVar33);
      *(undefined4 *)(plVar9 + 6) = 0;
      fVar28 = (float)NEON_fmadd(fVar27,fVar15,uVar25);
      fVar22 = (float)NEON_fnmsub(uVar17,fVar14,fVar26 * fVar15);
      fVar26 = (float)NEON_fnmsub(fVar23,fVar33,fVar30 * fVar31);
      *(undefined4 *)(plVar9 + 8) = 0;
      *(undefined4 *)(plVar9 + 10) = 0;
      fVar27 = (float)NEON_fnmsub(fVar35,fVar30,fVar23 * fVar32);
      fVar18 = (float)NEON_fnmsub(fVar28,fVar23,fVar24 * fVar35);
      *(undefined4 *)(plVar9 + 0xc) = 0;
      uVar17 = NEON_fmadd(fVar26,fVar28,fVar34 * fVar24);
      fVar15 = (float)NEON_fnmsub(fVar35,fVar22,fVar28 * fVar31);
      fVar14 = (float)NEON_fnmsub(fVar28,fVar33,fVar32 * fVar22);
      fVar29 = (float)NEON_fmadd(fVar27,fVar22,uVar17);
      fVar31 = (float)NEON_fnmsub(fVar24,fVar31,fVar23 * fVar22);
      fVar12 = 1.0 / (fVar29 * fVar12);
      fVar23 = (float)NEON_fnmsub(fVar30,fVar22,fVar24 * fVar33);
      fVar22 = (float)NEON_fnmsub(fVar24,fVar32,fVar28 * fVar30);
      *(float *)(plVar9 + 5) = fVar12 * fVar23;
      *(float *)((long)plVar9 + 0x24) = fVar12 * fVar26;
      *(float *)((long)plVar9 + 0x2c) = fVar12 * fVar31;
      *(float *)((long)plVar9 + 0x34) = fVar12 * fVar34;
      *(float *)(plVar9 + 7) = fVar12 * fVar14;
      *(float *)((long)plVar9 + 0x3c) = fVar12 * fVar15;
      *(float *)((long)plVar9 + 0x44) = fVar12 * fVar27;
      *(float *)(plVar9 + 9) = fVar12 * fVar22;
      *(float *)((long)plVar9 + 0x4c) = fVar12 * fVar18;
      fVar12 = *(float *)(in_x0 + 0x240);
      *(float *)((long)plVar9 + 100) = *(float *)(*plVar9 + 0x60) * fVar12;
      if ((*(byte *)(lVar7 + 0xe0) & 3) == 0) {
        if ((*(uint *)(lVar7 + 0xec) & 0xfffffffe) != 4) {
          *(undefined4 *)(lVar7 + 0xec) = 1;
        }
        *(undefined4 *)(lVar7 + 0xf0) = 0;
      }
      lVar3 = lVar3 + 0x68;
    } while ((ulong)uVar2 * 0x68 - lVar3 != 0);
  }
  iVar5 = *(int *)(in_x0 + 0x1cc);
  if (0 < iVar5) {
    uVar4 = (ulong)*(uint *)(in_x0 + 0x1e4);
    if (0 < (int)*(uint *)(in_x0 + 0x1e4)) {
      iVar11 = 0;
      do {
        if (0 < (int)uVar4) {
          lVar3 = 0;
          do {
            pcVar1 = VSolve_Links;
            if (*(int *)(*(long *)(in_x0 + 0x1f0) + lVar3 * 4) != 0) {
              pcVar1 = (code *)0x0;
            }
            (*pcVar1)(0x3f800000);
            uVar4 = (ulong)*(int *)(in_x0 + 0x1e4);
            lVar3 = lVar3 + 1;
          } while (lVar3 < (long)uVar4);
          iVar5 = *(int *)(in_x0 + 0x1cc);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar5);
    }
    uVar2 = *(uint *)(in_x0 + 0x374);
    if (0 < (int)uVar2) {
      lVar3 = 0;
      do {
        fVar12 = *(float *)(in_x0 + 0x240);
        lVar7 = *(long *)(in_x0 + 0x380) + lVar3;
        lVar3 = lVar3 + 0x78;
        *(undefined4 *)(lVar7 + 0x1c) = 0;
        uVar17 = NEON_fmadd(*(undefined4 *)(lVar7 + 0x38),fVar12,*(undefined4 *)(lVar7 + 0x28));
        *(ulong *)(lVar7 + 0x10) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar7 + 0x30) >> 0x20) * fVar12,
                      (float)*(undefined8 *)(lVar7 + 0x20) +
                      (float)*(undefined8 *)(lVar7 + 0x30) * fVar12);
        *(undefined4 *)(lVar7 + 0x18) = uVar17;
      } while ((ulong)uVar2 * 0x78 - lVar3 != 0);
    }
  }
  iVar5 = *(int *)(in_x0 + 0x1d0);
  if (0 < iVar5) {
    iVar11 = 0;
    uVar4 = (ulong)*(uint *)(in_x0 + 0x204);
    do {
      if (0 < (int)uVar4) {
        lVar3 = 0;
        do {
          (*(code *)(&PTR_PSolve_Links_0101bc58)[*(int *)(*(long *)(in_x0 + 0x210) + lVar3 * 4)])
                    (0x3f800000,(float)iVar11 / (float)iVar5);
          uVar4 = (ulong)*(int *)(in_x0 + 0x204);
          lVar3 = lVar3 + 1;
        } while (lVar3 < (long)uVar4);
        iVar5 = *(int *)(in_x0 + 0x1d0);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar5);
    uVar2 = *(uint *)(in_x0 + 0x374);
    if (0 < (int)uVar2) {
      lVar3 = 0;
      fVar12 = (float)NEON_fmsub(*(undefined4 *)(in_x0 + 0x180),*(undefined4 *)(in_x0 + 0x244),
                                 *(undefined4 *)(in_x0 + 0x244));
      do {
        lVar7 = *(long *)(in_x0 + 0x380) + lVar3;
        lVar3 = lVar3 + 0x78;
        *(undefined8 *)(lVar7 + 0x44) = 0;
        *(undefined8 *)(lVar7 + 0x3c) = 0;
        *(undefined4 *)(lVar7 + 0x4c) = 0;
        *(ulong *)(lVar7 + 0x30) =
             CONCAT44(((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) -
                      (float)((ulong)*(undefined8 *)(lVar7 + 0x20) >> 0x20)) * fVar12,
                      ((float)*(undefined8 *)(lVar7 + 0x10) - (float)*(undefined8 *)(lVar7 + 0x20))
                      * fVar12);
        *(float *)(lVar7 + 0x38) = (*(float *)(lVar7 + 0x18) - *(float *)(lVar7 + 0x28)) * fVar12;
      } while ((ulong)uVar2 * 0x78 - lVar3 != 0);
    }
  }
  iVar5 = *(int *)(in_x0 + 0x1d4);
  if (iVar5 < 1) goto LAB_00f87edc;
  uVar2 = *(uint *)(in_x0 + 0x374);
  fVar14 = *(float *)(in_x0 + 0x17c);
  fVar12 = *(float *)(in_x0 + 0x244);
  if ((int)uVar2 < 1) {
LAB_00f87e20:
    uVar4 = (ulong)*(uint *)(in_x0 + 0x224);
    if (0 < (int)*(uint *)(in_x0 + 0x224)) {
      iVar11 = 0;
      do {
        if (0 < (int)uVar4) {
          lVar3 = 0;
          do {
            (*(code *)(&PTR_PSolve_Links_0101bc58)[*(int *)(*(long *)(in_x0 + 0x230) + lVar3 * 4)])
                      (0x3f800000,0);
            uVar4 = (ulong)*(int *)(in_x0 + 0x224);
            lVar3 = lVar3 + 1;
          } while (lVar3 < (long)uVar4);
          iVar5 = *(int *)(in_x0 + 0x1d4);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar5);
    }
  }
  else {
    lVar3 = 0;
    do {
      lVar7 = *(long *)(in_x0 + 0x380) + lVar3;
      lVar3 = lVar3 + 0x78;
      *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar7 + 0x10);
    } while ((ulong)uVar2 * 0x78 - lVar3 != 0);
    iVar5 = *(int *)(in_x0 + 0x1d4);
    if (0 < iVar5) goto LAB_00f87e20;
  }
  uVar4 = (ulong)*(uint *)(in_x0 + 0x374);
  if (0 < (int)*(uint *)(in_x0 + 0x374)) {
    fVar12 = fVar12 * fVar14;
    puVar6 = (undefined4 *)(*(long *)(in_x0 + 0x380) + 0x38);
    do {
      uVar4 = uVar4 - 1;
      uVar17 = NEON_fmadd((float)puVar6[-8] - (float)puVar6[-4],fVar12,*puVar6);
      *(ulong *)(puVar6 + -2) =
           CONCAT44((float)((ulong)*(undefined8 *)(puVar6 + -2) >> 0x20) +
                    fVar12 * ((float)((ulong)*(undefined8 *)(puVar6 + -10) >> 0x20) -
                             (float)((ulong)*(undefined8 *)(puVar6 + -6) >> 0x20)),
                    (float)*(undefined8 *)(puVar6 + -2) +
                    fVar12 * ((float)*(undefined8 *)(puVar6 + -10) -
                             (float)*(undefined8 *)(puVar6 + -6)));
      *puVar6 = uVar17;
      puVar6 = puVar6 + 0x1e;
    } while (uVar4 != 0);
  }
LAB_00f87edc:
  uVar2 = *(uint *)(in_x0 + 0x5dc);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    lVar3 = *(long *)(in_x0 + 0x5e8);
    do {
      lVar7 = *(long *)(lVar3 + uVar4 * 8);
      if ((0.0 < *(float *)(lVar7 + 0x188)) &&
         (uVar8 = (ulong)*(uint *)(lVar7 + 0x24), 0 < (int)*(uint *)(lVar7 + 0x24))) {
        plVar9 = *(long **)(lVar7 + 0x30);
        do {
          lVar10 = *plVar9;
          if (0.0 < *(float *)(lVar10 + 0x60)) {
            fVar14 = *(float *)(lVar10 + 0x28) - *(float *)(lVar7 + 0x110);
            fVar18 = (float)*(undefined8 *)(lVar10 + 0x20) - (float)*(undefined8 *)(lVar7 + 0x108);
            fVar22 = (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20) -
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x108) >> 0x20);
            fVar12 = (float)((ulong)*(undefined8 *)(lVar7 + 0x170) >> 0x20);
            fVar23 = (float)*(undefined8 *)(lVar7 + 0x170);
            fVar15 = -(fVar23 * fVar14) + fVar18 * *(float *)(lVar7 + 0x178) +
                     (float)*(undefined8 *)(lVar7 + 0x164);
            fVar18 = -(fVar12 * fVar18) + fVar22 * fVar23 +
                     (float)((ulong)*(undefined8 *)(lVar7 + 0x164) >> 0x20);
            fVar12 = (fVar14 * fVar12 - *(float *)(lVar7 + 0x178) * fVar22) +
                     *(float *)(lVar7 + 0x160);
            fVar23 = *(float *)(lVar10 + 0x30);
            fVar14 = (float)*(undefined8 *)(lVar10 + 0x34);
            fVar22 = (float)((ulong)*(undefined8 *)(lVar10 + 0x34) >> 0x20);
            fVar24 = fVar14 * fVar14 + fVar23 * fVar23 + fVar22 * fVar22;
            uVar20 = NEON_fcmgt(CONCAT44(fVar24,fVar15 * fVar15 + fVar12 * fVar12 + fVar18 * fVar18)
                                ,CONCAT44(fVar24,fVar24),4);
            if ((uVar20 & 1) == 0) {
              fVar24 = *(float *)(lVar7 + 0x188);
              uVar17 = NEON_fmadd(fVar24,fVar12 - fVar23,fVar23);
              *(undefined4 *)(lVar10 + 0x30) = uVar17;
              *(ulong *)(lVar10 + 0x34) =
                   CONCAT44(fVar22 + (fVar18 - fVar22) * fVar24,fVar14 + (fVar15 - fVar14) * fVar24)
              ;
            }
          }
          uVar8 = uVar8 - 1;
          plVar9 = plVar9 + 1;
        } while (uVar8 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  applyClusters(in_x0,true);
  return;
}


