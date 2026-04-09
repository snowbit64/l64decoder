// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updatePose
// Entry Point: 00f875b0
// Size: 924 bytes
// Signature: undefined updatePose(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btSoftBody::updatePose() */

void btSoftBody::updatePose(void)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  ulong uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar19;
  undefined8 uVar18;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  btMatrix3x3 abStack_c8 [48];
  undefined8 local_98;
  float fStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  float fStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(in_x0 + 0x259) != '\0') {
    uVar1 = *(uint *)(in_x0 + 0x374);
    uVar4 = (ulong)uVar1;
    if ((int)uVar1 < 1) {
      uVar10 = 0;
      fVar11 = 0.0;
    }
    else {
      uVar10 = 0;
      fVar11 = 0.0;
      puVar7 = (undefined4 *)(*(long *)(in_x0 + 0x380) + 0x18);
      pfVar5 = *(float **)(in_x0 + 0x290);
      uVar9 = uVar4;
      do {
        fVar12 = *pfVar5;
        uVar9 = uVar9 - 1;
        uVar10 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                          (float)((ulong)*(undefined8 *)(puVar7 + -2) >> 0x20) * fVar12,
                          (float)uVar10 + (float)*(undefined8 *)(puVar7 + -2) * fVar12);
        fVar11 = (float)NEON_fmadd(*puVar7,fVar12,fVar11);
        puVar7 = puVar7 + 0x1e;
        pfVar5 = pfVar5 + 1;
      } while (uVar9 != 0);
    }
    *(undefined8 *)(in_x0 + 0x2a0) = uVar10;
    *(float *)(in_x0 + 0x2a8) = fVar11;
    *(undefined4 *)(in_x0 + 0x2ac) = 0;
    uStack_4c = 0;
    fStack_50 = 0.0;
    uStack_3c = 0;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    uStack_5c = 0;
    fStack_58 = 0.0;
    fStack_64 = 0.0;
    fStack_60 = 0.0;
    local_68 = 1.192093e-07;
    fStack_54 = 2.384186e-07;
    local_40 = 3.576279e-07;
    if (0 < (int)uVar1) {
      fStack_48 = 0.0;
      fStack_44 = 0.0;
      fStack_60 = 0.0;
      fStack_50 = 0.0;
      fStack_58 = 0.0;
      fStack_54 = 2.384186e-07;
      local_40 = 3.576279e-07;
      local_68 = 1.192093e-07;
      fStack_64 = 0.0;
      pfVar5 = *(float **)(in_x0 + 0x290);
      pfVar6 = (float *)(*(long *)(in_x0 + 0x380) + 0x18);
      pfVar8 = (float *)(*(long *)(in_x0 + 0x270) + 8);
      do {
        uVar4 = uVar4 - 1;
        fVar21 = *pfVar5;
        fVar12 = ((float)*(undefined8 *)(pfVar6 + -2) - (float)uVar10) * fVar21;
        fVar19 = ((float)((ulong)*(undefined8 *)(pfVar6 + -2) >> 0x20) -
                 (float)((ulong)uVar10 >> 0x20)) * fVar21;
        fVar21 = (*pfVar6 - fVar11) * fVar21;
        fVar22 = *pfVar8;
        fVar20 = (float)*(undefined8 *)(pfVar8 + -2);
        fVar13 = (float)((ulong)*(undefined8 *)(pfVar8 + -2) >> 0x20);
        local_68 = local_68 + fVar20 * fVar12;
        fStack_64 = fStack_64 + fVar13 * fVar12;
        fStack_58 = fStack_58 + fVar20 * fVar19;
        fStack_54 = fStack_54 + fVar13 * fVar19;
        fStack_60 = fStack_60 + fVar12 * fVar22;
        fStack_50 = fStack_50 + fVar19 * fVar22;
        fStack_48 = fStack_48 + fVar20 * fVar21;
        fStack_44 = fStack_44 + fVar13 * fVar21;
        local_40 = (float)NEON_fmadd(fVar22,fVar21,local_40);
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 0x1e;
        pfVar8 = pfVar8 + 4;
      } while (uVar4 != 0);
    }
    if (((DAT_021257c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_021257c0), iVar3 != 0)) {
      DAT_021257b8 = 0x1038d1b717;
      __cxa_guard_release(&DAT_021257c0);
    }
    btPolarDecomposition::decompose
              ((btPolarDecomposition *)&DAT_021257b8,(btMatrix3x3 *)&local_68,
               (btMatrix3x3 *)&local_98,abStack_c8);
    uVar10 = NEON_rev64(local_98,4);
    fVar12 = (float)*(undefined8 *)(in_x0 + 0x334);
    fVar21 = *(float *)(in_x0 + 800);
    uVar18 = NEON_rev64(local_88,4);
    fVar22 = *(float *)(in_x0 + 0x310);
    fVar13 = (float)*(undefined8 *)(in_x0 + 0x330);
    fVar16 = *(float *)(in_x0 + 0x324);
    *(undefined4 *)(in_x0 + 0x2ec) = 0;
    *(undefined4 *)(in_x0 + 0x2fc) = 0;
    uVar14 = NEON_rev64(local_78,4);
    fVar26 = (float)*(undefined8 *)(in_x0 + 0x338);
    fVar27 = *(float *)(in_x0 + 0x328);
    fVar11 = (float)((ulong)local_98 >> 0x20);
    fVar23 = *(float *)(in_x0 + 0x314);
    *(undefined4 *)(in_x0 + 0x30c) = 0;
    fVar20 = (float)((ulong)local_88 >> 0x20);
    fVar24 = fVar12 * (float)uVar10 + (float)local_98 * fVar13 + fVar26 * fStack_90;
    fVar25 = fVar21 * (float)((ulong)uVar10 >> 0x20) + fVar11 * fVar16 + fVar27 * fStack_90;
    uVar28 = *(undefined4 *)(in_x0 + 0x318);
    fVar29 = (float)((ulong)local_78 >> 0x20);
    fVar19 = (float)NEON_fmadd(uVar28,fStack_90,fVar22 * (float)local_98 + fVar23 * fVar11);
    fVar15 = (float)NEON_fmadd(uVar28,fStack_80,fVar22 * (float)local_88 + fVar23 * fVar20);
    fVar17 = fVar12 * (float)uVar18 + (float)local_88 * fVar13 + fVar26 * fStack_80;
    fVar20 = fVar21 * (float)((ulong)uVar18 >> 0x20) + fVar20 * fVar16 + fVar27 * fStack_80;
    fVar22 = (float)NEON_fmadd(uVar28,fStack_70,fVar22 * (float)local_78 + fVar23 * fVar29);
    fVar23 = fVar12 * (float)uVar14 + (float)local_78 * fVar13 + fVar26 * fStack_70;
    fVar29 = fVar21 * (float)((ulong)uVar14 >> 0x20) + fVar29 * fVar16 + fVar27 * fStack_70;
    uVar10 = NEON_rev64(CONCAT44(fStack_60,fStack_64),4);
    uVar28 = NEON_fmadd(fStack_58,fVar15,local_68 * fVar19);
    uVar14 = NEON_rev64(CONCAT44(fStack_50,fStack_54),4);
    fVar11 = fVar24 * local_68 + fVar17 * fStack_58 + fVar23 * fStack_48;
    fVar12 = fVar25 * local_68 + fVar20 * fStack_58 + fVar29 * fStack_48;
    fVar13 = (float)NEON_fmadd(fStack_48,fVar22,uVar28);
    uVar18 = NEON_rev64(CONCAT44(local_40,fStack_44),4);
    fVar21 = fStack_64 * fVar19 + fStack_54 * fVar15 + fStack_44 * fVar22;
    fVar19 = fStack_60 * fVar19 + fStack_50 * fVar15 + local_40 * fVar22;
    fVar15 = fStack_64 * fVar24 + fVar17 * fStack_54 + fVar23 * fStack_44;
    fVar16 = fStack_60 * fVar25 + fVar20 * fStack_50 + fVar29 * local_40;
    *(ulong *)(in_x0 + 0x2b8) = CONCAT44(uStack_8c,fStack_90);
    *(undefined8 *)(in_x0 + 0x2b0) = local_98;
    *(ulong *)(in_x0 + 0x2c8) = CONCAT44(uStack_7c,fStack_80);
    *(undefined8 *)(in_x0 + 0x2c0) = local_88;
    *(float *)(in_x0 + 0x2e0) = fVar13;
    fVar22 = (float)uVar10 * fVar24 + fVar17 * (float)uVar14 + fVar23 * (float)uVar18;
    fVar20 = (float)((ulong)uVar10 >> 0x20) * fVar25 + fVar20 * (float)((ulong)uVar14 >> 0x20) +
             fVar29 * (float)((ulong)uVar18 >> 0x20);
    *(ulong *)(in_x0 + 0x2d8) = CONCAT44(uStack_6c,fStack_70);
    *(undefined8 *)(in_x0 + 0x2d0) = local_78;
    *(undefined8 *)(in_x0 + 0x2e4) = CONCAT44(fVar19,fVar21);
    *(float *)(in_x0 + 0x2f8) = fVar16;
    *(float *)(in_x0 + 0x308) = fVar22;
    *(ulong *)(in_x0 + 0x300) = CONCAT44(fVar15,fVar11);
    *(ulong *)(in_x0 + 0x2f0) = CONCAT44(fVar20,fVar12);
    if (1.0 < *(float *)(in_x0 + 0x1c4)) {
      uVar10 = NEON_rev64(CONCAT44(fVar16,fVar15),4);
      fVar17 = (float)NEON_fmadd(-(fVar15 * fVar16) + fVar22 * fVar20,fVar13,
                                 (-(fVar12 * fVar22) + (float)uVar10 * fVar11) * fVar21);
      fVar29 = 1.0 / (fVar17 + (-(fVar11 * fVar20) + (float)((ulong)uVar10 >> 0x20) * fVar12) *
                               fVar19);
      fVar23 = (float)NEON_fminnm(fVar29,*(float *)(in_x0 + 0x1c4));
      fVar17 = 1.0;
      if (1.0 <= fVar29) {
        fVar17 = fVar23;
      }
      *(float *)(in_x0 + 0x2e0) = fVar17 * fVar13;
      *(undefined8 *)(in_x0 + 0x2e4) = CONCAT44(fVar19 * fVar17,fVar21 * fVar17);
      *(ulong *)(in_x0 + 0x2f0) = CONCAT44(fVar20 * fVar17,fVar12 * fVar17);
      *(float *)(in_x0 + 0x2f8) = fVar17 * fVar16;
      *(ulong *)(in_x0 + 0x300) = CONCAT44(fVar15 * fVar17,fVar11 * fVar17);
      *(float *)(in_x0 + 0x308) = fVar17 * fVar22;
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


