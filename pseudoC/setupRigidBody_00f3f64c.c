// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupRigidBody
// Entry Point: 00f3f64c
// Size: 760 bytes
// Signature: undefined __thiscall setupRigidBody(btRigidBody * this, btRigidBodyConstructionInfo * param_1)


/* btRigidBody::setupRigidBody(btRigidBody::btRigidBodyConstructionInfo const&) */

void __thiscall btRigidBody::setupRigidBody(btRigidBody *this,btRigidBodyConstructionInfo *param_1)

{
  long *plVar1;
  uint uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  
  uVar9 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x1a0) = uVar9;
  *(undefined4 *)(this + 0x1a8) = 0x3f800000;
  *(undefined8 *)(this + 0x184) = 0;
  *(undefined8 *)(this + 0x17c) = 0;
  *(undefined8 *)(this + 0x194) = 0;
  *(undefined8 *)(this + 0x18c) = 0;
  *(undefined8 *)(this + 0x280) = 0x3f800000;
  *(undefined8 *)(this + 0x278) = 0x3f8000003f800000;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x1b4) = 0;
  *(undefined8 *)(this + 0x1ac) = 0;
  *(undefined8 *)(this + 0x1c4) = 0;
  *(undefined8 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x100) = 2;
  uVar4 = NEON_fminnm(uVar4,uVar9,4);
  this[0x208] = *(btRigidBody *)(param_1 + 0x84);
  uVar4 = NEON_fmaxnm(uVar4,0,4);
  *(undefined8 *)(this + 0x200) = uVar4;
  plVar1 = *(long **)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x7c);
  *(undefined8 *)(this + 0x2b8) = 0;
  *(long **)(this + 0x228) = plVar1;
  *(undefined8 *)(this + 0x21c) = uVar4;
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(this + 0x214) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(this + 0x20c) = uVar4;
  if (plVar1 == (long *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(this + 8) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(this + 0x18) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(this + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(this + 0x38) = uVar4;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,this + 8);
  }
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 8);
  *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x20);
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x70) = *(undefined8 *)(this + 0x30);
  *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x28);
  *(undefined8 *)(this + 0x80) = *(undefined8 *)(this + 0x40);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x38);
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  *(undefined4 *)(this + 0xf4) = *(undefined4 *)(param_1 + 0x70);
  uVar9 = NEON_rev64(*(undefined8 *)(param_1 + 0x74),4);
  *(undefined8 *)(this + 0xf8) = uVar9;
  (**(code **)(*(long *)this + 0x10))(this,uVar4);
  fVar5 = *(float *)param_1;
  *(int *)(this + 0x254) = DAT_02125618;
  if (fVar5 == 0.0) {
    uVar2 = *(uint *)(this + 0xe0) | 1;
    fVar3 = 0.0;
  }
  else {
    uVar2 = *(uint *)(this + 0xe0) & 0xfffffffe;
    fVar3 = 1.0 / fVar5;
  }
  DAT_02125618 = DAT_02125618 + 1;
  *(uint *)(this + 0xe0) = uVar2;
  *(float *)(this + 0x19c) = fVar3;
  fVar20 = *(float *)(this + 0x20);
  fVar23 = *(float *)(this + 0x30);
  *(undefined4 *)(this + 0x1bc) = 0;
  fVar21 = *(float *)(this + 0x28);
  fVar22 = *(float *)(this + 0x2c);
  *(ulong *)(this + 0x1b0) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1c0) >> 0x20) * fVar5,
                (float)*(undefined8 *)(this + 0x1c0) * fVar5);
  *(float *)(this + 0x1b8) = *(float *)(this + 0x1c8) * fVar5;
  fVar7 = *(float *)(param_1 + 0x58);
  fVar10 = *(float *)(param_1 + 0x5c);
  fVar13 = *(float *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x250) = 8;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x2b4) = 0;
  fVar5 = 1.0 / fVar7;
  if (fVar7 == 0.0) {
    fVar5 = fVar7;
  }
  fVar19 = *(float *)(this + 0x18);
  fVar14 = *(float *)(this + 0x1c);
  *(float *)(this + 0x1d0) = fVar5;
  fVar24 = fVar19 * fVar5;
  fVar6 = *(float *)(this + 0x10);
  fVar7 = 1.0 / fVar10;
  if (fVar10 == 0.0) {
    fVar7 = fVar10;
  }
  fVar17 = *(float *)(this + 8);
  fVar11 = *(float *)(this + 0xc);
  fVar26 = fVar14 * fVar7;
  *(float *)(this + 0x1d4) = fVar7;
  fVar18 = fVar17 * fVar5;
  fVar5 = fVar21 * fVar5;
  uVar31 = NEON_fmadd(fVar26,fVar14,fVar24 * fVar19);
  fVar10 = 1.0 / fVar13;
  if (fVar13 == 0.0) {
    fVar10 = fVar13;
  }
  fVar13 = fVar11 * fVar7;
  fVar7 = fVar22 * fVar7;
  uVar30 = NEON_fmadd(fVar26,fVar11,fVar24 * fVar17);
  uVar27 = NEON_fmadd(fVar13,fVar11,fVar18 * fVar17);
  uVar29 = NEON_fmadd(fVar14,fVar13,fVar19 * fVar18);
  uVar16 = NEON_fmadd(fVar22,fVar13,fVar21 * fVar18);
  fVar18 = fVar6 * fVar10;
  uVar12 = NEON_fmadd(fVar7,fVar11,fVar5 * fVar17);
  fVar13 = fVar20 * fVar10;
  *(float *)(this + 0x1d8) = fVar10;
  fVar10 = fVar23 * fVar10;
  uVar15 = NEON_fmadd(fVar7,fVar14,fVar5 * fVar19);
  uVar8 = NEON_fmadd(fVar7,fVar22,fVar5 * fVar21);
  uVar25 = NEON_fmadd(fVar22,fVar26,fVar21 * fVar24);
  uVar28 = NEON_fmadd(fVar18,fVar6,uVar27);
  uVar27 = NEON_fmadd(fVar13,fVar6,uVar30);
  uVar12 = NEON_fmadd(fVar10,fVar6,uVar12);
  uVar30 = NEON_fmadd(fVar20,fVar18,uVar29);
  uVar15 = NEON_fmadd(fVar10,fVar20,uVar15);
  uVar8 = NEON_fmadd(fVar10,fVar23,uVar8);
  uVar16 = NEON_fmadd(fVar23,fVar18,uVar16);
  uVar29 = NEON_fmadd(fVar13,fVar20,uVar31);
  uVar31 = NEON_fmadd(fVar23,fVar13,uVar25);
  *(undefined4 *)(this + 0x16c) = uVar12;
  *(undefined4 *)(this + 0x14c) = uVar28;
  *(undefined4 *)(this + 0x150) = uVar30;
  *(undefined4 *)(this + 0x154) = uVar16;
  *(undefined4 *)(this + 0x15c) = uVar27;
  *(undefined4 *)(this + 0x160) = uVar29;
  *(undefined4 *)(this + 0x164) = uVar31;
  *(undefined4 *)(this + 0x170) = uVar15;
  *(undefined4 *)(this + 0x174) = uVar8;
  *(ulong *)(this + 0x288) =
       CONCAT44((float)((ulong)*(undefined8 *)(this + 0x1a0) >> 0x20) * fVar3,
                (float)*(undefined8 *)(this + 0x1a0) * fVar3);
  *(float *)(this + 0x290) = *(float *)(this + 0x1a8) * fVar3;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x2ac) = 0;
  *(undefined8 *)(this + 0x2a4) = 0;
  *(undefined8 *)(this + 0x29c) = 0;
  *(undefined8 *)(this + 0x294) = 0;
  return;
}


