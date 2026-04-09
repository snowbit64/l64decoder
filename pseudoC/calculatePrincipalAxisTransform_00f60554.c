// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculatePrincipalAxisTransform
// Entry Point: 00f60554
// Size: 736 bytes
// Signature: undefined __thiscall calculatePrincipalAxisTransform(btCompoundShape * this, float * param_1, btTransform * param_2, btVector3 * param_3)


/* btCompoundShape::calculatePrincipalAxisTransform(float*, btTransform&, btVector3&) const */

void __thiscall
btCompoundShape::calculatePrincipalAxisTransform
          (btCompoundShape *this,float *param_1,btTransform *param_2,btVector3 *param_3)

{
  uint uVar1;
  long lVar2;
  float fVar3;
  long *plVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  float local_c0;
  float fStack_bc;
  float local_b8;
  undefined8 local_b0;
  float fStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(this + 0x24);
  if ((int)uVar1 < 1) {
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar9 = 0.0;
    fVar11 = 0.0;
    fVar14 = 0.0;
    fVar13 = 0.0;
    puVar5 = (undefined4 *)(*(long *)(this + 0x30) + 0x38);
    pfVar6 = param_1;
    uVar7 = (ulong)uVar1;
    do {
      fVar17 = *pfVar6;
      uVar7 = uVar7 - 1;
      fVar14 = fVar17 + fVar14;
      fVar9 = fVar9 + (float)*(undefined8 *)(puVar5 + -2) * fVar17;
      fVar11 = fVar11 + (float)((ulong)*(undefined8 *)(puVar5 + -2) >> 0x20) * fVar17;
      fVar13 = (float)NEON_fmadd(*puVar5,fVar17,fVar13);
      puVar5 = puVar5 + 0x16;
      pfVar6 = pfVar6 + 1;
    } while (uVar7 != 0);
  }
  *(undefined4 *)(param_2 + 0x3c) = 0;
  fVar14 = 1.0 / fVar14;
  fStack_98 = 0.0;
  uStack_94 = 0;
  local_a0 = 0.0;
  fStack_9c = 0.0;
  local_88 = 0.0;
  uStack_84 = 0;
  local_90 = 0.0;
  fStack_8c = 0.0;
  fStack_a8 = 0.0;
  uStack_a4 = 0;
  local_b0 = 0;
  *(ulong *)(param_2 + 0x30) = CONCAT44(fVar11 * fVar14,fVar9 * fVar14);
  *(float *)(param_2 + 0x38) = fVar14 * fVar13;
  if (0 < (int)uVar1) {
    fVar17 = 0.0;
    uVar16 = 0;
    lVar8 = 0;
    do {
      fVar3 = fStack_a8;
      plVar4 = *(long **)(*(long *)(this + 0x30) + lVar8 + 0x40);
      (**(code **)(*plVar4 + 0x40))(*param_1,plVar4,&local_c0);
      pfVar6 = (float *)(*(long *)(this + 0x30) + lVar8);
      lVar8 = lVar8 + 0x58;
      fVar18 = *pfVar6;
      fVar20 = pfVar6[1];
      fVar21 = pfVar6[4];
      fVar23 = pfVar6[5];
      fVar25 = pfVar6[8];
      fVar26 = pfVar6[9];
      fVar28 = local_c0 * fVar18;
      fVar34 = fStack_bc * fVar20;
      fVar31 = local_c0 * fVar21;
      fVar35 = fStack_bc * fVar23;
      fVar15 = local_c0 * fVar25;
      fVar10 = (float)*(undefined8 *)(pfVar6 + 0xc) - fVar9 * fVar14;
      fVar12 = (float)((ulong)*(undefined8 *)(pfVar6 + 0xc) >> 0x20) - fVar11 * fVar14;
      fVar30 = pfVar6[6];
      fVar27 = fStack_bc * fVar26;
      fVar33 = pfVar6[10];
      fVar40 = pfVar6[2];
      fVar36 = local_b8 * fVar30;
      uVar38 = NEON_fmadd(fVar35,fVar20,fVar31 * fVar18);
      uVar19 = NEON_fmadd(fVar28,fVar18,uVar16);
      uVar29 = NEON_fmadd(fVar34,fVar23,fVar28 * fVar21);
      uVar41 = NEON_fmadd(fVar35,fVar23,fVar31 * fVar21);
      uVar32 = NEON_fmadd(fVar35,fVar26,fVar31 * fVar25);
      fVar37 = local_b8 * fVar33;
      fVar35 = local_b8 * fVar40;
      uVar22 = NEON_fmadd(fVar27,fVar23,fVar15 * fVar21);
      uVar24 = NEON_fmadd(fVar34,fVar26,fVar28 * fVar25);
      fVar21 = pfVar6[0xe] - fVar14 * fVar13;
      uVar39 = NEON_fmadd(fVar27,fVar20,fVar15 * fVar18);
      fVar28 = (float)NEON_fmadd(fVar36,fVar40,uVar38);
      uVar16 = NEON_fmadd(fVar27,fVar26,fVar15 * fVar25);
      fVar27 = fVar10 * fVar10 + fVar12 * fVar12;
      fVar31 = (float)NEON_fmadd(fVar35,fVar30,uVar29);
      fVar26 = (float)NEON_fmadd(fVar36,fVar30,uVar41);
      uVar19 = NEON_fmadd(fVar34,fVar20,uVar19);
      fVar18 = (float)NEON_fmadd(fVar37,fVar30,uVar22);
      fVar20 = (float)NEON_fmadd(fVar35,fVar33,uVar24);
      fVar23 = (float)NEON_fmadd(fVar36,fVar33,uVar32);
      fVar25 = (float)NEON_fmadd(fVar21,fVar21,fVar27);
      uVar19 = NEON_fmadd(fVar35,fVar40,uVar19);
      fVar35 = (float)NEON_fmadd(fVar37,fVar40,uVar39);
      fVar15 = (float)NEON_fmadd(fVar37,fVar33,uVar16);
      fVar30 = *param_1;
      uVar16 = NEON_fmadd(fVar30,fVar25 - fVar10 * fVar10,uVar19);
      fStack_9c = (float)NEON_fmadd(fVar30,fVar25 - fVar12 * fVar12,fVar26 + fStack_9c);
      fVar17 = (fVar28 + fVar17) - fVar30 * fVar12 * fVar10;
      fStack_a8 = (fVar35 + fVar3) - fVar30 * fVar21 * fVar10;
      local_a0 = (fVar31 + local_a0) - fVar30 * fVar12 * fVar10;
      fStack_98 = (fVar18 + fStack_98) - fVar30 * fVar21 * fVar12;
      local_90 = fVar20 + local_90 + fVar30 * -fVar21 * fVar10;
      fStack_8c = fVar23 + fStack_8c + fVar30 * -fVar21 * fVar12;
      local_88 = (float)NEON_fmadd(fVar30,fVar27,fVar15 + local_88);
      local_b0 = CONCAT44(fVar17,uVar16);
      param_1 = param_1 + 1;
    } while ((ulong)uVar1 * 0x58 - lVar8 != 0);
  }
  btMatrix3x3::diagonalize((btMatrix3x3 *)&local_b0,(btMatrix3x3 *)param_2,1e-05,0x14);
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)param_3 = (undefined4)local_b0;
  *(float *)(param_3 + 4) = fStack_9c;
  *(float *)(param_3 + 8) = local_88;
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


