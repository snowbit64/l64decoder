// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortCachedPoints
// Entry Point: 00f700b0
// Size: 1752 bytes
// Signature: undefined __thiscall sortCachedPoints(btPersistentManifold * this, btManifoldPoint * param_1)


/* btPersistentManifold::sortCachedPoints(btManifoldPoint const&) */

int __thiscall
btPersistentManifold::sortCachedPoints(btPersistentManifold *this,btManifoldPoint *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  float local_88;
  float fStack_84;
  float local_8;
  float local_4;
  
  fVar22 = *(float *)(this + 0x298);
  fVar9 = (float)NEON_fminnm(*(float *)(this + 0x58),*(float *)(param_1 + 0x50));
  iVar2 = -(uint)(*(float *)(param_1 + 0x50) <= *(float *)(this + 0x58));
  fVar4 = (float)NEON_fminnm(*(float *)(this + 0x118),fVar9);
  if (*(float *)(this + 0x118) < fVar9) {
    iVar2 = 1;
  }
  fVar9 = *(float *)param_1;
  fVar44 = (float)NEON_fminnm(*(float *)(this + 0x1d8),fVar4);
  iVar1 = 2;
  if (fVar4 <= *(float *)(this + 0x1d8)) {
    iVar1 = iVar2;
  }
  iVar2 = 3;
  if (fVar44 <= fVar22) {
    iVar2 = iVar1;
  }
  if (gContactCalcArea3Points == '\0') {
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    if (iVar2 == 0) {
      fVar13 = *(float *)(this + 200);
      fVar18 = *(float *)(this + 0x188);
      fVar24 = *(float *)(this + 0x18c);
      fVar27 = fVar9 - fVar18;
      fVar25 = *(float *)(this + 400);
      fVar41 = *(float *)(this + 0x248);
      fVar10 = fVar4 - fVar24;
      fVar32 = *(float *)(this + 0x24c);
      fVar36 = *(float *)(this + 0x250);
      local_4 = 0.0;
      fVar15 = *(float *)(this + 0xcc);
      fVar20 = *(float *)(this + 0xd0);
      fVar7 = fVar5 - fVar25;
      local_88 = fVar9 - fVar41;
      local_8 = fVar4 - fVar32;
      fStack_84 = fVar5 - fVar36;
      fVar30 = fVar18 - fVar41;
      fVar29 = fVar24 - fVar32;
      fVar28 = fVar25 - fVar36;
LAB_00f70484:
      fVar37 = *(float *)(this + 8);
      fVar17 = *(float *)(this + 0xc);
      fVar16 = *(float *)(this + 0x10);
      fVar40 = fVar4 - fVar17;
      fVar43 = fVar37 - fVar41;
      fVar8 = fVar9 - fVar37;
      fVar23 = fVar5 - fVar16;
      fVar12 = fVar17 - fVar32;
      fVar31 = fVar37 - fVar18;
      fVar11 = fVar16 - fVar36;
      fVar6 = fVar17 - fVar24;
      fVar3 = (float)NEON_fnmsub(fVar29,fVar8,fVar30 * fVar40);
      fVar33 = (float)NEON_fnmsub(fVar12,fVar27,fVar43 * fVar10);
      fVar19 = fVar16 - fVar25;
      uVar34 = NEON_fnmsub(fVar28,fVar40,fVar29 * fVar23);
      uVar21 = NEON_fnmsub(fVar11,fVar10,fVar12 * fVar7);
      fVar29 = (float)NEON_fnmsub(local_88,fVar6,local_8 * fVar31);
      uVar14 = NEON_fnmsub(fVar30,fVar23,fVar28 * fVar8);
      uVar34 = NEON_fmadd(uVar34,uVar34,fVar3 * fVar3);
      uVar38 = NEON_fnmsub(local_8,fVar19,fStack_84 * fVar6);
      uVar21 = NEON_fmadd(uVar21,uVar21,fVar33 * fVar33);
      uVar26 = NEON_fnmsub(fVar43,fVar7,fVar11 * fVar27);
      uVar38 = NEON_fmadd(uVar38,uVar38,fVar29 * fVar29);
      fVar29 = (float)NEON_fmadd(uVar14,uVar14,uVar34);
      fVar28 = (float)NEON_fmadd(uVar26,uVar26,uVar21);
      uVar34 = NEON_fnmsub(fStack_84,fVar31,local_88 * fVar19);
      if (fVar29 <= fVar28) {
        fVar29 = fVar28;
      }
      fVar28 = (float)NEON_fmadd(uVar34,uVar34,uVar38);
      fVar39 = fVar9 - fVar13;
      if (fVar29 <= fVar28) {
        fVar29 = fVar28;
      }
      fVar33 = fVar5 - fVar20;
      fVar35 = fVar4 - fVar15;
      if (iVar2 != 2) {
        fVar3 = fVar15 - fVar32;
        fVar19 = fVar20 - fVar36;
        fVar31 = fVar13 - fVar41;
        goto LAB_00f705c4;
      }
      fVar28 = fVar37 - fVar13;
      fVar36 = fVar17 - fVar15;
      fVar32 = fVar16 - fVar20;
      fVar41 = 0.0;
    }
    else {
      fVar13 = *(float *)(this + 200);
      fVar15 = *(float *)(this + 0xcc);
      fVar18 = *(float *)(this + 0x188);
      fVar20 = *(float *)(this + 0xd0);
      fVar24 = *(float *)(this + 0x18c);
      fVar41 = *(float *)(this + 0x248);
      fVar25 = *(float *)(this + 400);
      fVar32 = *(float *)(this + 0x24c);
      fVar36 = *(float *)(this + 0x250);
      fVar35 = fVar4 - fVar15;
      fVar10 = fVar4 - fVar24;
      fVar30 = fVar18 - fVar41;
      fVar31 = fVar13 - fVar41;
      fVar33 = fVar5 - fVar20;
      fVar7 = fVar5 - fVar25;
      fVar29 = fVar24 - fVar32;
      fVar3 = fVar15 - fVar32;
      fVar39 = fVar9 - fVar13;
      fVar27 = fVar9 - fVar18;
      local_8 = fVar4 - fVar32;
      local_88 = fVar9 - fVar41;
      fStack_84 = fVar5 - fVar36;
      fVar28 = fVar25 - fVar36;
      fVar19 = fVar20 - fVar36;
      fVar11 = -(fVar30 * fVar35) + fVar39 * fVar29;
      fVar12 = -(fVar31 * fVar10) + fVar27 * fVar3;
      fVar37 = (float)NEON_fnmsub(local_88,fVar15 - fVar24,local_8 * (fVar13 - fVar18));
      fVar6 = -(fVar29 * fVar33) + fVar35 * fVar28;
      fVar8 = -(fVar3 * fVar7) + fVar10 * fVar19;
      fVar16 = -(fVar28 * fVar39) + fVar33 * fVar30;
      fVar17 = -(fVar19 * fVar27) + fVar7 * fVar31;
      uVar34 = NEON_fnmsub(local_8,fVar20 - fVar25,fStack_84 * (fVar15 - fVar24));
      local_4 = fVar11 * fVar11 + fVar6 * fVar6 + fVar16 * fVar16;
      fVar6 = fVar12 * fVar12 + fVar8 * fVar8 + fVar17 * fVar17;
      uVar38 = NEON_fnmsub(fStack_84,fVar13 - fVar18,local_88 * (fVar20 - fVar25));
      uVar34 = NEON_fmadd(uVar34,uVar34,fVar37 * fVar37);
      NEON_fmadd(uVar38,uVar38,uVar34);
      if (local_4 <= fVar6) {
        local_4 = fVar6;
      }
      if (iVar2 != 1) goto LAB_00f70484;
      fVar16 = *(float *)(this + 0x10);
      fVar11 = fVar16 - fVar36;
      fVar37 = *(float *)(this + 8);
      fVar17 = *(float *)(this + 0xc);
      fVar8 = fVar9 - fVar37;
      fVar40 = fVar4 - fVar17;
      fVar23 = fVar5 - fVar16;
      fVar43 = fVar37 - fVar41;
      fVar12 = fVar17 - fVar32;
      fVar29 = 0.0;
LAB_00f705c4:
      fVar28 = fVar37 - fVar13;
      fVar36 = fVar17 - fVar15;
      fVar41 = (float)NEON_fnmsub(fVar3,fVar8,fVar31 * fVar40);
      fVar10 = (float)NEON_fnmsub(fVar12,fVar39,fVar43 * fVar35);
      fVar32 = fVar16 - fVar20;
      uVar34 = NEON_fnmsub(fVar19,fVar40,fVar3 * fVar23);
      uVar14 = NEON_fnmsub(fVar11,fVar35,fVar12 * fVar33);
      fVar27 = (float)NEON_fnmsub(local_88,fVar36,local_8 * fVar28);
      uVar38 = NEON_fnmsub(fVar31,fVar23,fVar19 * fVar8);
      uVar26 = NEON_fnmsub(fVar43,fVar33,fVar11 * fVar39);
      uVar34 = NEON_fmadd(uVar34,uVar34,fVar41 * fVar41);
      uVar42 = NEON_fnmsub(local_8,fVar32,fStack_84 * fVar36);
      uVar14 = NEON_fmadd(uVar14,uVar14,fVar10 * fVar10);
      uVar21 = NEON_fnmsub(fStack_84,fVar28,local_88 * fVar32);
      fVar41 = (float)NEON_fmadd(uVar38,uVar38,uVar34);
      fVar10 = (float)NEON_fmadd(uVar26,uVar26,uVar14);
      uVar34 = NEON_fmadd(uVar42,uVar42,fVar27 * fVar27);
      fVar27 = (float)NEON_fmadd(uVar21,uVar21,uVar34);
      if (fVar41 <= fVar10) {
        fVar41 = fVar10;
      }
      if (fVar41 <= fVar27) {
        fVar41 = fVar27;
      }
      fVar10 = 0.0;
      if (fVar22 < fVar44) goto LAB_00f7071c;
      fVar27 = fVar9 - fVar18;
      fVar31 = fVar37 - fVar18;
      fVar10 = fVar4 - fVar24;
      fVar19 = fVar16 - fVar25;
      fVar7 = fVar5 - fVar25;
      fVar6 = fVar17 - fVar24;
    }
    fVar4 = (float)NEON_fnmsub(fVar6,fVar39,fVar31 * fVar35);
    uVar34 = NEON_fnmsub(fVar19,fVar35,fVar6 * fVar33);
    uVar42 = NEON_fnmsub(fVar31,fVar33,fVar19 * fVar39);
    fVar9 = (float)NEON_fnmsub(fVar15 - fVar24,fVar8,(fVar13 - fVar18) * fVar40);
    fVar22 = (float)NEON_fnmsub(fVar27,fVar36,fVar10 * fVar28);
    uVar14 = NEON_fnmsub(fVar13 - fVar18,fVar23,(fVar20 - fVar25) * fVar8);
    uVar21 = NEON_fnmsub(fVar20 - fVar25,fVar40,(fVar15 - fVar24) * fVar23);
    uVar26 = NEON_fnmsub(fVar10,fVar32,fVar7 * fVar36);
    uVar38 = NEON_fmadd(uVar34,uVar34,fVar4 * fVar4);
    uVar21 = NEON_fmadd(uVar21,uVar21,fVar9 * fVar9);
    uVar34 = NEON_fnmsub(fVar7,fVar28,fVar27 * fVar32);
    NEON_fmadd(uVar42,uVar42,uVar38);
    fVar10 = (float)NEON_fmadd(uVar14,uVar14,uVar21);
    uVar38 = NEON_fmadd(uVar26,uVar26,fVar22 * fVar22);
    fVar4 = (float)NEON_fmadd(uVar34,uVar34,uVar38);
    if (fVar10 <= fVar4) {
      fVar10 = fVar4;
    }
    goto LAB_00f7071c;
  }
  if (iVar2 == 0) {
    fVar27 = *(float *)(this + 0x248);
    local_4 = 0.0;
    fVar15 = *(float *)(this + 0x188);
    fVar32 = *(float *)(this + 0x24c);
    fVar20 = *(float *)(this + 0x18c);
    fVar28 = *(float *)(this + 0x250);
    fVar10 = fVar27 - fVar15;
    fVar25 = *(float *)(this + 400);
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    fVar29 = fVar32 - fVar20;
    fVar24 = *(float *)(this + 0xd0);
    fVar36 = fVar28 - fVar25;
    fVar13 = *(float *)(this + 200);
    fVar18 = *(float *)(this + 0xcc);
LAB_00f70348:
    fVar41 = 0.0;
    fVar4 = fVar4 - *(float *)(this + 0xc);
    fVar9 = fVar9 - *(float *)(this + 8);
    fVar5 = fVar5 - *(float *)(this + 0x10);
    fVar7 = (float)NEON_fnmsub(fVar29,fVar9,fVar10 * fVar4);
    uVar34 = NEON_fnmsub(fVar36,fVar4,fVar29 * fVar5);
    uVar38 = NEON_fnmsub(fVar10,fVar5,fVar36 * fVar9);
    uVar34 = NEON_fmadd(uVar34,uVar34,fVar7 * fVar7);
    fVar29 = (float)NEON_fmadd(uVar38,uVar38,uVar34);
    if (iVar2 != 2) goto LAB_00f7038c;
  }
  else {
    fVar13 = *(float *)(this + 200);
    fVar18 = *(float *)(this + 0xcc);
    fVar4 = *(float *)(param_1 + 4);
    fVar5 = *(float *)(param_1 + 8);
    fVar27 = *(float *)(this + 0x248);
    fVar15 = *(float *)(this + 0x188);
    fVar24 = *(float *)(this + 0xd0);
    fVar32 = *(float *)(this + 0x24c);
    fVar10 = fVar27 - fVar15;
    fVar20 = *(float *)(this + 0x18c);
    fVar28 = *(float *)(this + 0x250);
    fVar25 = *(float *)(this + 400);
    fVar29 = fVar32 - fVar20;
    fVar36 = fVar28 - fVar25;
    fVar41 = (float)NEON_fnmsub(fVar29,fVar9 - fVar13,fVar10 * (fVar4 - fVar18));
    uVar34 = NEON_fnmsub(fVar36,fVar4 - fVar18,fVar29 * (fVar5 - fVar24));
    uVar38 = NEON_fnmsub(fVar10,fVar5 - fVar24,fVar36 * (fVar9 - fVar13));
    uVar34 = NEON_fmadd(uVar34,uVar34,fVar41 * fVar41);
    local_4 = (float)NEON_fmadd(uVar38,uVar38,uVar34);
    if (iVar2 != 1) goto LAB_00f70348;
    fVar9 = fVar9 - *(float *)(this + 8);
    fVar4 = fVar4 - *(float *)(this + 0xc);
    fVar5 = fVar5 - *(float *)(this + 0x10);
    fVar29 = 0.0;
LAB_00f7038c:
    fVar10 = (float)NEON_fnmsub(fVar32 - fVar18,fVar9,(fVar27 - fVar13) * fVar4);
    uVar38 = NEON_fnmsub(fVar28 - fVar24,fVar4,(fVar32 - fVar18) * fVar5);
    uVar34 = NEON_fnmsub(fVar27 - fVar13,fVar5,(fVar28 - fVar24) * fVar9);
    uVar38 = NEON_fmadd(uVar38,uVar38,fVar10 * fVar10);
    fVar41 = (float)NEON_fmadd(uVar34,uVar34,uVar38);
    fVar10 = 0.0;
    if (fVar22 < fVar44) goto LAB_00f7071c;
  }
  fVar22 = (float)NEON_fnmsub(fVar20 - fVar18,fVar9,(fVar15 - fVar13) * fVar4);
  uVar34 = NEON_fnmsub(fVar25 - fVar24,fVar4,(fVar20 - fVar18) * fVar5);
  uVar38 = NEON_fnmsub(fVar15 - fVar13,fVar5,(fVar25 - fVar24) * fVar9);
  uVar34 = NEON_fmadd(uVar34,uVar34,fVar22 * fVar22);
  fVar10 = (float)NEON_fmadd(uVar38,uVar38,uVar34);
LAB_00f7071c:
  local_4 = ABS(local_4);
  fVar29 = ABS(fVar29);
  fVar4 = local_4;
  if (local_4 <= -1e+18) {
    fVar4 = -1e+18;
  }
  fVar41 = ABS(fVar41);
  iVar2 = -(uint)(local_4 <= -1e+18);
  fVar9 = fVar29;
  if (fVar29 <= fVar4) {
    fVar9 = fVar4;
  }
  if (fVar4 < fVar29) {
    iVar2 = 1;
  }
  fVar4 = fVar41;
  if (fVar41 <= fVar9) {
    fVar4 = fVar9;
  }
  iVar1 = 2;
  if (fVar41 <= fVar9) {
    iVar1 = iVar2;
  }
  iVar2 = 3;
  if (ABS(fVar10) <= fVar4) {
    iVar2 = iVar1;
  }
  return iVar2;
}


