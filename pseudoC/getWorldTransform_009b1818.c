// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWorldTransform
// Entry Point: 009b1818
// Size: 320 bytes
// Signature: undefined __thiscall getWorldTransform(DynamicMotionState * this, btTransform * param_1)


/* Bt2ScenegraphPhysicsContext::DynamicMotionState::getWorldTransform(btTransform&) const */

void __thiscall
Bt2ScenegraphPhysicsContext::DynamicMotionState::getWorldTransform
          (DynamicMotionState *this,btTransform *param_1)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  
  uVar3 = *(undefined4 *)(this + 0x88);
  fVar5 = *(float *)(this + 0x68);
  fVar6 = *(float *)(this + 0x6c);
  fVar13 = *(float *)(this + 0x70);
  uVar1 = *(undefined4 *)(this + 0x58);
  fVar2 = *(float *)(this + 0x5c);
  fVar4 = -*(float *)(this + 0x8c);
  uVar23 = *(undefined4 *)(this + 0x60);
  uVar7 = *(undefined4 *)(this + 0x78);
  fVar8 = *(float *)(this + 0x7c);
  uVar11 = *(undefined4 *)(this + 0x18);
  fVar12 = *(float *)(this + 0x1c);
  uVar17 = *(undefined4 *)(this + 0x28);
  fVar19 = *(float *)(this + 0x2c);
  uVar25 = *(undefined4 *)(this + 0x80);
  uVar28 = *(undefined4 *)(this + 0x38);
  fVar29 = *(float *)(this + 0x3c);
  uVar26 = *(undefined4 *)(this + 0x90);
  uVar14 = NEON_fmsub(uVar1,uVar3,fVar5 * fVar4);
  uVar16 = NEON_fmsub(fVar2,uVar3,fVar6 * fVar4);
  uVar3 = NEON_fmsub(uVar23,uVar3,fVar13 * fVar4);
  uVar18 = NEON_fmadd(uVar1,uVar11,fVar2 * fVar12);
  uVar15 = NEON_fmsub(uVar7,uVar26,uVar14);
  fVar4 = (float)NEON_fmsub(fVar8,uVar26,uVar16);
  uVar14 = NEON_fmsub(uVar25,uVar26,uVar3);
  uVar20 = NEON_fmadd(fVar5,uVar11,fVar6 * fVar12);
  uVar24 = NEON_fmadd(uVar1,uVar17,fVar2 * fVar19);
  uVar1 = NEON_fmadd(uVar1,uVar28,fVar2 * fVar29);
  uVar16 = *(undefined4 *)(this + 0x20);
  uVar27 = NEON_fmadd(fVar5,uVar17,fVar6 * fVar19);
  uVar10 = *(undefined4 *)(this + 0x30);
  uVar3 = NEON_fmadd(fVar5,uVar28,fVar6 * fVar29);
  uVar26 = *(undefined4 *)(this + 0x40);
  uVar22 = NEON_fmadd(uVar7,uVar11,fVar8 * fVar12);
  uVar21 = NEON_fmadd(fVar13,uVar16,uVar20);
  uVar9 = NEON_fmadd(uVar7,uVar17,fVar8 * fVar19);
  uVar20 = NEON_fmadd(uVar23,uVar10,uVar24);
  uVar27 = NEON_fmadd(fVar13,uVar10,uVar27);
  uVar3 = NEON_fmadd(fVar13,uVar26,uVar3);
  uVar7 = NEON_fmadd(uVar7,uVar28,fVar8 * fVar29);
  uVar24 = NEON_fmadd(uVar23,uVar16,uVar18);
  uVar22 = NEON_fmadd(uVar25,uVar16,uVar22);
  uVar1 = NEON_fmadd(uVar23,uVar26,uVar1);
  uVar18 = NEON_fmadd(uVar15,uVar11,fVar4 * fVar12);
  fVar12 = *(float *)(this + 0x50);
  uVar11 = NEON_fmadd(uVar15,uVar17,fVar4 * fVar19);
  uVar17 = NEON_fmadd(uVar25,uVar10,uVar9);
  uVar9 = NEON_fmadd(uVar15,uVar28,fVar4 * fVar29);
  uVar7 = NEON_fmadd(uVar25,uVar26,uVar7);
  fVar8 = *(float *)(this + 0x48);
  fVar6 = *(float *)(this + 0x4c);
  fVar4 = (float)NEON_fmadd(uVar14,uVar16,uVar18);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  fVar5 = (float)NEON_fmadd(uVar14,uVar10,uVar11);
  *(undefined4 *)param_1 = uVar24;
  *(undefined4 *)(param_1 + 4) = uVar21;
  fVar2 = (float)NEON_fmadd(uVar14,uVar26,uVar9);
  *(undefined4 *)(param_1 + 8) = uVar22;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = uVar20;
  *(undefined4 *)(param_1 + 0x14) = uVar27;
  *(undefined4 *)(param_1 + 0x18) = uVar17;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x28) = uVar7;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(float *)(param_1 + 0x30) = fVar4 + fVar8;
  *(float *)(param_1 + 0x34) = fVar5 + fVar6;
  *(float *)(param_1 + 0x38) = fVar2 + fVar12;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


