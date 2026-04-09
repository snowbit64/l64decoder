// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCenterOfMassTransform
// Entry Point: 00f403ac
// Size: 364 bytes
// Signature: undefined __thiscall setCenterOfMassTransform(btRigidBody * this, btTransform * param_1)


/* btRigidBody::setCenterOfMassTransform(btTransform const&) */

void __thiscall btRigidBody::setCenterOfMassTransform(btRigidBody *this,btTransform *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  
  if (((byte)this[0xe0] >> 1 & 1) == 0) {
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x48) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 0x58) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x68) = uVar3;
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x78) = uVar3;
  }
  else {
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x30);
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x40);
    *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x38);
  }
  fVar6 = *(float *)(this + 0x1d4);
  fVar7 = *(float *)(this + 0x1d8);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x184);
  *(undefined8 *)(this + 0x88) = *(undefined8 *)(this + 0x17c);
  *(undefined8 *)(this + 0xa0) = *(undefined8 *)(this + 0x194);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x18c);
  fVar4 = *(float *)(this + 0x1d0);
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  fVar8 = *(float *)(this + 8);
  fVar10 = *(float *)(this + 0xc);
  fVar11 = *(float *)(this + 0x10);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x18) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  fVar12 = fVar4 * fVar8;
  fVar16 = fVar6 * fVar10;
  fVar14 = *(float *)(this + 0x18);
  fVar18 = *(float *)(this + 0x1c);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x28) = uVar3;
  fVar20 = *(float *)(this + 0x20);
  fVar22 = *(float *)(this + 0x28);
  fVar28 = *(float *)(this + 0x2c);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  fVar1 = fVar14 * fVar4;
  fVar21 = fVar18 * fVar6;
  fVar29 = *(float *)(this + 0x30);
  fVar4 = fVar22 * fVar4;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x38) = uVar3;
  uVar23 = NEON_fmadd(fVar16,fVar10,fVar12 * fVar8);
  uVar25 = NEON_fmadd(fVar18,fVar16,fVar14 * fVar12);
  fVar6 = fVar28 * fVar6;
  fVar19 = fVar7 * fVar11;
  uVar13 = NEON_fmadd(fVar28,fVar16,fVar22 * fVar12);
  fVar12 = fVar20 * fVar7;
  uVar27 = NEON_fmadd(fVar21,fVar10,fVar1 * fVar8);
  fVar7 = fVar29 * fVar7;
  uVar17 = NEON_fmadd(fVar21,fVar18,fVar1 * fVar14);
  uVar2 = NEON_fmadd(fVar28,fVar21,fVar22 * fVar1);
  uVar9 = NEON_fmadd(fVar6,fVar10,fVar4 * fVar8);
  uVar15 = NEON_fmadd(fVar6,fVar18,fVar4 * fVar14);
  uVar5 = NEON_fmadd(fVar6,fVar28,fVar4 * fVar22);
  uVar24 = NEON_fmadd(fVar19,fVar11,uVar23);
  uVar26 = NEON_fmadd(fVar20,fVar19,uVar25);
  uVar23 = NEON_fmadd(fVar29,fVar19,uVar13);
  uVar25 = NEON_fmadd(fVar12,fVar11,uVar27);
  uVar17 = NEON_fmadd(fVar12,fVar20,uVar17);
  uVar2 = NEON_fmadd(fVar29,fVar12,uVar2);
  uVar9 = NEON_fmadd(fVar7,fVar11,uVar9);
  uVar13 = NEON_fmadd(fVar7,fVar20,uVar15);
  uVar5 = NEON_fmadd(fVar7,fVar29,uVar5);
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x14c) = uVar24;
  *(undefined4 *)(this + 0x150) = uVar26;
  *(undefined4 *)(this + 0x154) = uVar23;
  *(undefined4 *)(this + 0x15c) = uVar25;
  *(undefined4 *)(this + 0x160) = uVar17;
  *(undefined4 *)(this + 0x164) = uVar2;
  *(undefined4 *)(this + 0x16c) = uVar9;
  *(undefined4 *)(this + 0x170) = uVar13;
  *(undefined4 *)(this + 0x174) = uVar5;
  *(undefined4 *)(this + 0x178) = 0;
  return;
}


