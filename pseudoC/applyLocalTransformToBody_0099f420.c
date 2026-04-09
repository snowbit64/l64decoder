// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyLocalTransformToBody
// Entry Point: 0099f420
// Size: 272 bytes
// Signature: undefined __thiscall applyLocalTransformToBody(DynamicMotionState * this, btTransform * param_1)


/* Bt2ScenegraphPhysicsContext::DynamicMotionState::applyLocalTransformToBody(btTransform&) const */

void __thiscall
Bt2ScenegraphPhysicsContext::DynamicMotionState::applyLocalTransformToBody
          (DynamicMotionState *this,btTransform *param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
  
  uVar1 = *(undefined4 *)(this + 0x58);
  fVar2 = *(float *)(this + 0x5c);
  fVar3 = *(float *)(param_1 + 0x10);
  fVar4 = *(float *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(this + 0x68);
  fVar7 = *(float *)(this + 0x6c);
  uVar16 = *(undefined4 *)(this + 0x78);
  fVar18 = *(float *)(this + 0x7c);
  uVar10 = *(undefined4 *)param_1;
  uVar13 = *(undefined4 *)(param_1 + 4);
  fVar5 = *(float *)(param_1 + 0x18);
  uVar12 = NEON_fmadd(uVar13,uVar1,fVar2 * fVar4);
  uVar23 = *(undefined4 *)(param_1 + 8);
  uVar20 = NEON_fmadd(uVar13,uVar6,fVar4 * fVar7);
  uVar13 = NEON_fmadd(uVar13,uVar16,fVar4 * fVar18);
  uVar14 = *(undefined4 *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x34);
  uVar8 = NEON_fmadd(uVar10,uVar1,fVar3 * fVar2);
  uVar17 = NEON_fmadd(uVar10,uVar6,fVar3 * fVar7);
  uVar21 = *(undefined4 *)(param_1 + 0x20);
  uVar22 = *(undefined4 *)(param_1 + 0x24);
  uVar10 = NEON_fmadd(uVar10,uVar16,fVar3 * fVar18);
  uVar19 = *(undefined4 *)(this + 0x60);
  uVar24 = *(undefined4 *)(this + 0x70);
  uVar11 = NEON_fmadd(uVar23,uVar6,fVar5 * fVar7);
  uVar25 = *(undefined4 *)(this + 0x80);
  uVar15 = NEON_fmadd(uVar23,uVar1,fVar2 * fVar5);
  uVar9 = NEON_fmadd(uVar21,uVar19,uVar8);
  uVar1 = NEON_fmadd(uVar14,uVar1,fVar2 * fVar4);
  uVar8 = NEON_fmadd(uVar14,uVar6,fVar7 * fVar4);
  uVar14 = NEON_fmadd(uVar14,uVar16,fVar18 * fVar4);
  uVar17 = NEON_fmadd(uVar21,uVar24,uVar17);
  uVar10 = NEON_fmadd(uVar21,uVar25,uVar10);
  uVar21 = *(undefined4 *)(param_1 + 0x38);
  uVar12 = NEON_fmadd(uVar22,uVar19,uVar12);
  uVar20 = NEON_fmadd(uVar22,uVar24,uVar20);
  uVar13 = NEON_fmadd(uVar22,uVar25,uVar13);
  uVar6 = NEON_fmadd(uVar23,uVar16,fVar5 * fVar18);
  fVar7 = *(float *)(this + 0x88);
  fVar3 = *(float *)(this + 0x8c);
  fVar2 = (float)NEON_fmadd(uVar21,uVar19,uVar1);
  fVar4 = (float)NEON_fmadd(uVar21,uVar24,uVar8);
  fVar5 = (float)NEON_fmadd(uVar21,uVar25,uVar14);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  fVar18 = *(float *)(this + 0x90);
  *(undefined4 *)(param_1 + 0x20) = uVar10;
  *(undefined4 *)(param_1 + 0x24) = uVar13;
  *(undefined4 *)param_1 = uVar9;
  *(undefined4 *)(param_1 + 4) = uVar12;
  uVar13 = NEON_fmadd(uVar1,uVar19,uVar15);
  uVar10 = NEON_fmadd(uVar1,uVar24,uVar11);
  uVar1 = NEON_fmadd(uVar1,uVar25,uVar6);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = uVar13;
  *(undefined4 *)(param_1 + 0x10) = uVar17;
  *(undefined4 *)(param_1 + 0x14) = uVar20;
  *(undefined4 *)(param_1 + 0x18) = uVar10;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(float *)(param_1 + 0x30) = fVar7 + fVar2;
  *(float *)(param_1 + 0x34) = fVar4 + fVar3;
  *(float *)(param_1 + 0x38) = fVar5 + fVar18;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


