// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Process
// Entry Point: 00f8c050
// Size: 1644 bytes
// Signature: undefined __thiscall Process(CollideVF_SS * this, btDbvtNode * param_1, btDbvtNode * param_2)


/* btSoftColliders::CollideVF_SS::Process(btDbvtNode const*, btDbvtNode const*) */

undefined8 __thiscall
btSoftColliders::CollideVF_SS::Process(CollideVF_SS *this,btDbvtNode *param_1,btDbvtNode *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined4 uVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  
  lVar9 = *(long *)(param_2 + 0x28);
  lVar10 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(lVar9 + 0x10);
  lVar6 = *(long *)(lVar9 + 0x18);
  lVar8 = *(long *)(lVar9 + 0x20);
  fVar34 = *(float *)(lVar4 + 0x10);
  fVar26 = *(float *)(lVar4 + 0x14);
  fVar52 = *(float *)(lVar6 + 0x14);
  fVar41 = *(float *)(lVar6 + 0x18);
  fVar20 = *(float *)(lVar8 + 0x10);
  fVar23 = *(float *)(lVar8 + 0x14);
  fVar18 = *(float *)(lVar4 + 0x18);
  fVar55 = *(float *)(lVar6 + 0x10);
  fVar46 = fVar52 - fVar26;
  fVar11 = *(float *)(lVar8 + 0x18);
  fVar48 = fVar41 - fVar18;
  fVar43 = fVar55 - fVar34;
  fVar36 = (float)NEON_fnmsub(fVar23 - fVar26,fVar43,(fVar20 - fVar34) * fVar46);
  fVar37 = (float)NEON_fnmsub(fVar11 - fVar18,fVar46,(fVar23 - fVar26) * fVar48);
  fVar45 = *(float *)(lVar10 + 0x18);
  fVar38 = (float)NEON_fnmsub(fVar20 - fVar34,fVar48,(fVar11 - fVar18) * fVar43);
  uVar27 = NEON_fmadd(fVar37,fVar37,fVar36 * fVar36);
  fVar44 = *(float *)(lVar10 + 0x10);
  fVar42 = *(float *)(lVar10 + 0x14);
  fVar28 = (float)NEON_fmadd(fVar38,fVar38,uVar27);
  if (fVar28 <= 1.192093e-07) {
    fVar28 = 3.402823e+38;
    goto LAB_00f8c3d0;
  }
  fVar59 = fVar34 - fVar44;
  fVar60 = fVar26 - fVar42;
  fVar35 = fVar18 - fVar45;
  fVar31 = 1.0 / SQRT(fVar28);
  uVar27 = NEON_fmadd(fVar31 * fVar38,fVar60,fVar31 * fVar37 * fVar59);
  fVar50 = (float)NEON_fmadd(fVar31 * fVar36,fVar35,uVar27);
  fVar28 = 3.402823e+38;
  if (3.402823e+38 <= fVar50 * fVar50) goto LAB_00f8c3d0;
  fVar12 = fVar52 - fVar42;
  fVar39 = fVar50 * fVar31 * fVar38;
  fVar40 = fVar50 * fVar31 * fVar36;
  fVar29 = fVar41 - fVar45;
  fVar31 = fVar50 * fVar31 * fVar37;
  fVar54 = fVar12 - fVar39;
  fVar47 = fVar60 - fVar39;
  fVar49 = fVar35 - fVar40;
  fVar13 = fVar55 - fVar44;
  fVar51 = fVar59 - fVar31;
  fVar56 = fVar29 - fVar40;
  fVar53 = fVar13 - fVar31;
  fVar14 = fVar23 - fVar42;
  fVar28 = (float)NEON_fnmsub(fVar56,fVar47,fVar54 * fVar49);
  uVar27 = NEON_fnmsub(fVar53,fVar49,fVar51 * fVar56);
  uVar57 = NEON_fnmsub(fVar51,fVar54,fVar53 * fVar47);
  uVar27 = NEON_fmadd(uVar27,fVar38,fVar28 * fVar37);
  fVar32 = fVar20 - fVar44;
  fVar28 = (float)NEON_fmadd(uVar57,fVar36,uVar27);
  fVar15 = fVar11 - fVar45;
  if (fVar28 <= 0.0) {
LAB_00f8c248:
    uVar27 = NEON_fmadd(fVar46,fVar46,fVar43 * fVar43);
    fVar28 = (float)NEON_fmadd(fVar48,fVar48,uVar27);
    if (fVar28 <= 1.192093e-07) {
      fVar28 = 3.402823e+38;
    }
    else {
      fVar36 = (float)NEON_fmadd(fVar46,fVar60,fVar43 * fVar59);
      fVar36 = (float)NEON_fnmadd(fVar48,fVar35,-fVar36);
      fVar28 = (float)NEON_fminnm(fVar36 / fVar28,0x3f800000);
      if (fVar28 <= 0.0) {
        fVar28 = 0.0;
      }
      fVar43 = (float)NEON_fmadd(fVar28,fVar43,fVar59);
      fVar46 = (float)NEON_fmadd(fVar28,fVar46,fVar60);
      fVar48 = (float)NEON_fmadd(fVar28,fVar48,fVar35);
      uVar27 = NEON_fmadd(fVar46,fVar46,fVar43 * fVar43);
      fVar28 = (float)NEON_fmadd(fVar48,fVar48,uVar27);
      if (3.402823e+38 <= fVar28) {
        fVar28 = 3.402823e+38;
      }
    }
    fVar36 = fVar20 - fVar55;
    fVar38 = fVar23 - fVar52;
    fVar31 = fVar11 - fVar41;
    uVar27 = NEON_fmadd(fVar38,fVar38,fVar36 * fVar36);
    fVar37 = (float)NEON_fmadd(fVar31,fVar31,uVar27);
    if (1.192093e-07 < fVar37) {
      fVar35 = (float)NEON_fmadd(fVar38,fVar12,fVar36 * fVar13);
      fVar35 = (float)NEON_fnmadd(fVar31,fVar29,-fVar35);
      fVar37 = (float)NEON_fminnm(fVar35 / fVar37,0x3f800000);
      if (fVar37 <= 0.0) {
        fVar37 = 0.0;
      }
      fVar36 = (float)NEON_fmadd(fVar37,fVar36,fVar13);
      fVar38 = (float)NEON_fmadd(fVar37,fVar38,fVar12);
      fVar37 = (float)NEON_fmadd(fVar37,fVar31,fVar29);
      uVar27 = NEON_fmadd(fVar38,fVar38,fVar36 * fVar36);
      fVar31 = (float)NEON_fmadd(fVar37,fVar37,uVar27);
      if (fVar31 < fVar28) {
        fVar43 = fVar36;
        fVar46 = fVar38;
        fVar28 = fVar31;
        fVar48 = fVar37;
      }
    }
    fVar36 = fVar34 - fVar20;
    fVar38 = fVar26 - fVar23;
    fVar35 = fVar18 - fVar11;
    uVar27 = NEON_fmadd(fVar38,fVar38,fVar36 * fVar36);
    fVar37 = (float)NEON_fmadd(fVar35,fVar35,uVar27);
    if (fVar37 <= 1.192093e-07) goto LAB_00f8c3d0;
    fVar31 = (float)NEON_fmadd(fVar38,fVar14,fVar36 * fVar32);
    fVar31 = (float)NEON_fnmadd(fVar35,fVar15,-fVar31);
    fVar37 = (float)NEON_fminnm(fVar31 / fVar37,0x3f800000);
    if (fVar37 <= 0.0) {
      fVar37 = 0.0;
    }
    fVar31 = (float)NEON_fmadd(fVar37,fVar36,fVar32);
    fVar39 = (float)NEON_fmadd(fVar37,fVar38,fVar14);
    fVar40 = (float)NEON_fmadd(fVar37,fVar35,fVar15);
    uVar27 = NEON_fmadd(fVar39,fVar39,fVar31 * fVar31);
    fVar36 = (float)NEON_fmadd(fVar40,fVar40,uVar27);
    if (fVar28 <= fVar36) goto LAB_00f8c3d0;
  }
  else {
    fVar30 = fVar14 - fVar39;
    fVar33 = fVar15 - fVar40;
    fVar58 = fVar32 - fVar31;
    fVar28 = (float)NEON_fnmsub(fVar33,fVar54,fVar30 * fVar56);
    uVar57 = NEON_fnmsub(fVar53,fVar30,fVar58 * fVar54);
    uVar27 = NEON_fnmsub(fVar58,fVar56,fVar53 * fVar33);
    uVar27 = NEON_fmadd(uVar27,fVar38,fVar28 * fVar37);
    fVar28 = (float)NEON_fmadd(uVar57,fVar36,uVar27);
    if (fVar28 <= 0.0) goto LAB_00f8c248;
    fVar28 = (float)NEON_fnmsub(fVar49,fVar30,fVar47 * fVar33);
    uVar27 = NEON_fnmsub(fVar51,fVar33,fVar58 * fVar49);
    uVar57 = NEON_fnmsub(fVar58,fVar47,fVar51 * fVar30);
    uVar27 = NEON_fmadd(uVar27,fVar38,fVar28 * fVar37);
    fVar28 = (float)NEON_fmadd(uVar57,fVar36,uVar27);
    fVar36 = fVar50 * fVar50;
    if (fVar28 <= 0.0) goto LAB_00f8c248;
  }
  fVar43 = fVar31;
  fVar48 = fVar40;
  fVar46 = fVar39;
  fVar28 = fVar36;
LAB_00f8c3d0:
  fVar36 = fVar44 - *(float *)(lVar10 + 0x20);
  fVar37 = fVar42 - *(float *)(lVar10 + 0x24);
  fVar38 = fVar45 - *(float *)(lVar10 + 0x28);
  uVar27 = NEON_fmadd(fVar37,fVar37,fVar36 * fVar36);
  fVar36 = (float)NEON_fmadd(fVar38,fVar38,uVar27);
  fVar36 = (float)NEON_fmadd(SQRT(fVar36),0x40000000,*(undefined4 *)(this + 0x18));
  if (fVar28 < fVar36 * fVar36) {
    fVar44 = fVar43 + fVar44;
    fVar45 = fVar48 + fVar45;
    fVar42 = fVar46 + fVar42;
    fVar52 = fVar52 - fVar42;
    fVar18 = fVar18 - fVar45;
    fVar41 = fVar41 - fVar45;
    fVar20 = fVar20 - fVar44;
    fVar34 = fVar34 - fVar44;
    fVar23 = fVar23 - fVar42;
    fVar26 = fVar26 - fVar42;
    fVar55 = fVar55 - fVar44;
    fVar11 = fVar11 - fVar45;
    fVar44 = -(fVar52 * fVar20) + fVar55 * fVar23;
    uVar27 = NEON_fnmsub(fVar11,fVar52,fVar41 * fVar23);
    fVar45 = -(fVar11 * fVar55) + fVar20 * fVar41;
    uVar27 = NEON_fmadd(uVar27,uVar27,fVar44 * fVar44);
    fVar37 = (float)NEON_fmadd(fVar45,fVar45,uVar27);
    fVar45 = -(fVar23 * fVar34) + fVar20 * fVar26;
    fVar42 = -(fVar26 * fVar55) + fVar34 * fVar52;
    fVar38 = -(fVar11 * fVar26) + fVar23 * fVar18;
    fVar26 = -(fVar18 * fVar52) + fVar26 * fVar41;
    fVar23 = *(float *)(lVar6 + 0x60);
    fVar11 = -(fVar18 * fVar20) + fVar34 * fVar11;
    fVar44 = -(fVar41 * fVar34) + fVar55 * fVar18;
    uVar16 = NEON_fsqrt(CONCAT44(fVar42 * fVar42 + fVar26 * fVar26 + fVar44 * fVar44,
                                 fVar45 * fVar45 + fVar38 * fVar38 + fVar11 * fVar11),4);
    fVar55 = (float)((ulong)uVar16 >> 0x20);
    fVar11 = 1.0 / (fVar55 + SQRT(fVar37) + (float)uVar16);
    fVar18 = *(float *)(lVar4 + 0x60);
    fVar34 = fVar11 * SQRT(fVar37);
    fVar20 = (float)uVar16 * fVar11;
    fVar55 = fVar55 * fVar11;
    fVar11 = *(float *)(lVar8 + 0x60);
    fVar41 = *(float *)(lVar10 + 0x60);
    fVar44 = fVar18 * fVar34 + fVar23 * fVar20 + fVar11 * fVar55;
    if ((((fVar11 <= 0.0 || fVar23 == 0.0) || 0.0 < fVar11 && 0.0 > fVar23) || fVar18 == 0.0) ||
        ((0.0 < fVar11 && fVar23 != 0.0) && (fVar11 <= 0.0 || 0.0 <= fVar23)) && fVar18 < 0.0) {
      fVar44 = 0.0;
    }
    fVar11 = fVar44 + fVar41;
    if (0.0 < fVar11) {
      lVar4 = *(long *)(this + 8);
      fVar52 = -1.0 / SQRT(fVar28);
      fVar28 = *(float *)(lVar4 + 0x1a4);
      fVar26 = *(float *)(*(long *)(this + 0x10) + 0x1a4);
      fVar23 = *(float *)(*(long *)(this + 0x10) + 0x194);
      uVar7 = *(uint *)(lVar4 + 0x434);
      fVar18 = *(float *)(lVar4 + 0x194);
      if (*(float *)(lVar4 + 0x194) <= fVar23) {
        fVar18 = fVar23;
      }
      if (uVar7 == *(uint *)(lVar4 + 0x438)) {
        uVar5 = uVar7 << 1;
        if (uVar7 == 0) {
          uVar5 = 1;
        }
        if ((int)uVar7 < (int)uVar5) {
          if (uVar5 == 0) {
            lVar6 = 0;
          }
          else {
            gNumAlignedAllocs = gNumAlignedAllocs + 1;
            lVar6 = (*(code *)PTR_FUN_01048e38)
                              (-(ulong)(uVar5 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar5 << 6,0x10
                              );
            uVar7 = *(uint *)(lVar4 + 0x434);
          }
          if (0 < (int)uVar7) {
            lVar8 = 0;
            do {
              puVar1 = (undefined8 *)(lVar6 + lVar8);
              puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x440) + lVar8);
              lVar8 = lVar8 + 0x40;
              uVar19 = puVar2[4];
              uVar17 = puVar2[7];
              uVar16 = puVar2[6];
              uVar25 = puVar2[1];
              uVar24 = *puVar2;
              uVar22 = puVar2[3];
              uVar21 = puVar2[2];
              puVar1[5] = puVar2[5];
              puVar1[4] = uVar19;
              puVar1[7] = uVar17;
              puVar1[6] = uVar16;
              puVar1[1] = uVar25;
              *puVar1 = uVar24;
              puVar1[3] = uVar22;
              puVar1[2] = uVar21;
            } while ((ulong)uVar7 * 0x40 - lVar8 != 0);
          }
          if ((*(long *)(lVar4 + 0x440) != 0) && (*(char *)(lVar4 + 0x448) != '\0')) {
            gNumAlignedFree = gNumAlignedFree + 1;
            (*(code *)PTR_FUN_01048e40)();
          }
          uVar7 = *(uint *)(lVar4 + 0x434);
          *(long *)(lVar4 + 0x440) = lVar6;
          *(uint *)(lVar4 + 0x438) = uVar5;
          *(undefined *)(lVar4 + 0x448) = 1;
        }
      }
      plVar3 = (long *)(*(long *)(lVar4 + 0x440) + (long)(int)uVar7 * 0x40);
      *plVar3 = lVar10;
      plVar3[1] = lVar9;
      *(float *)(plVar3 + 2) = fVar34;
      *(ulong *)((long)plVar3 + 0x14) = CONCAT44(fVar55,fVar20);
      *(undefined4 *)((long)plVar3 + 0x1c) = 0;
      *(float *)(plVar3 + 4) = fVar52 * fVar43;
      *(float *)((long)plVar3 + 0x24) = fVar46 * fVar52;
      *(float *)(plVar3 + 5) = fVar48 * fVar52;
      *(undefined4 *)((long)plVar3 + 0x2c) = 0;
      *(float *)(plVar3 + 6) = fVar36;
      *(float *)((long)plVar3 + 0x34) = fVar18;
      *(float *)(plVar3 + 7) = (fVar28 * fVar41) / fVar11;
      *(float *)((long)plVar3 + 0x3c) = (fVar26 * fVar44) / fVar11;
      *(int *)(lVar4 + 0x434) = *(int *)(lVar4 + 0x434) + 1;
    }
  }
  return 1;
}


