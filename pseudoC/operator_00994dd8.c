// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator*
// Entry Point: 00994dd8
// Size: 272 bytes
// Signature: undefined __thiscall operator*(btTransform * this, btTransform * param_1)


/* btTransform::TEMPNAMEPLACEHOLDERVALUE(btTransform const&) const */

void __thiscall btTransform::operator*(btTransform *this,btTransform *param_1)

{
  undefined4 *in_x8;
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  uVar1 = *(undefined4 *)this;
  fVar2 = *(float *)(this + 4);
  fVar4 = *(float *)(param_1 + 0x10);
  fVar6 = *(float *)(param_1 + 0x14);
  uVar14 = *(undefined4 *)(this + 0x10);
  fVar15 = *(float *)(this + 0x14);
  uVar16 = *(undefined4 *)(this + 0x20);
  fVar18 = *(float *)(this + 0x24);
  uVar7 = *(undefined4 *)param_1;
  uVar8 = *(undefined4 *)(param_1 + 4);
  fVar13 = *(float *)(param_1 + 0x18);
  uVar10 = *(undefined4 *)(param_1 + 8);
  uVar9 = NEON_fmadd(uVar7,uVar1,fVar4 * fVar2);
  uVar19 = NEON_fmadd(uVar7,uVar14,fVar4 * fVar15);
  uVar5 = NEON_fmadd(uVar7,uVar16,fVar4 * fVar18);
  uVar25 = *(undefined4 *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x34);
  uVar12 = NEON_fmadd(uVar8,uVar1,fVar2 * fVar6);
  uVar3 = *(undefined4 *)(this + 8);
  uVar20 = *(undefined4 *)(param_1 + 0x20);
  uVar22 = *(undefined4 *)(param_1 + 0x24);
  uVar17 = NEON_fmadd(uVar10,uVar1,fVar2 * fVar13);
  uVar21 = NEON_fmadd(uVar8,uVar14,fVar6 * fVar15);
  uVar24 = NEON_fmadd(uVar10,uVar14,fVar13 * fVar15);
  uVar11 = NEON_fmadd(uVar10,uVar16,fVar13 * fVar18);
  uVar7 = NEON_fmadd(uVar20,uVar3,uVar9);
  uVar12 = NEON_fmadd(uVar22,uVar3,uVar12);
  uVar23 = *(undefined4 *)(param_1 + 0x28);
  uVar1 = NEON_fmadd(uVar25,uVar1,fVar4 * fVar2);
  uVar14 = NEON_fmadd(uVar25,uVar14,fVar4 * fVar15);
  uVar9 = NEON_fmadd(uVar25,uVar16,fVar4 * fVar18);
  uVar8 = NEON_fmadd(uVar8,uVar16,fVar6 * fVar18);
  uVar10 = *(undefined4 *)(this + 0x18);
  uVar16 = NEON_fmadd(uVar23,uVar3,uVar17);
  uVar17 = *(undefined4 *)(this + 0x28);
  *in_x8 = uVar7;
  in_x8[1] = uVar12;
  uVar7 = *(undefined4 *)(param_1 + 0x38);
  in_x8[3] = 0;
  uVar12 = NEON_fmadd(uVar20,uVar10,uVar19);
  uVar19 = NEON_fmadd(uVar22,uVar10,uVar21);
  uVar21 = NEON_fmadd(uVar23,uVar10,uVar24);
  uVar11 = NEON_fmadd(uVar23,uVar17,uVar11);
  fVar2 = (float)NEON_fmadd(uVar7,uVar3,uVar1);
  fVar6 = (float)NEON_fmadd(uVar7,uVar10,uVar14);
  fVar4 = (float)NEON_fmadd(uVar7,uVar17,uVar9);
  fVar18 = *(float *)(this + 0x38);
  fVar13 = *(float *)(this + 0x30);
  fVar15 = *(float *)(this + 0x34);
  uVar1 = NEON_fmadd(uVar20,uVar17,uVar5);
  uVar7 = NEON_fmadd(uVar22,uVar17,uVar8);
  in_x8[2] = uVar16;
  in_x8[4] = uVar12;
  in_x8[5] = uVar19;
  in_x8[6] = uVar21;
  in_x8[7] = 0;
  in_x8[8] = uVar1;
  in_x8[9] = uVar7;
  in_x8[10] = uVar11;
  in_x8[0xb] = 0;
  in_x8[0xc] = fVar2 + fVar13;
  in_x8[0xd] = fVar6 + fVar15;
  in_x8[0xe] = fVar4 + fVar18;
  in_x8[0xf] = 0;
  return;
}


