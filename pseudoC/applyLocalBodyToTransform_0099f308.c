// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyLocalBodyToTransform
// Entry Point: 0099f308
// Size: 280 bytes
// Signature: undefined __cdecl applyLocalBodyToTransform(btTransform * param_1, btTransform * param_2)


/* Bt2ScenegraphPhysicsContext::DynamicMotionState::applyLocalBodyToTransform(btTransform const&,
   btTransform&) */

void Bt2ScenegraphPhysicsContext::DynamicMotionState::applyLocalBodyToTransform
               (btTransform *param_1,btTransform *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
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
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  
  fVar8 = *(float *)(param_1 + 0x10);
  fVar13 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_2 + 0x10);
  fVar12 = *(float *)(param_2 + 0x14);
  fVar19 = *(float *)(param_2 + 0x18);
  fVar25 = *(float *)(param_1 + 0x18);
  fVar1 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  uVar16 = *(undefined4 *)param_2;
  uVar17 = *(undefined4 *)(param_2 + 4);
  uVar7 = *(undefined4 *)param_1;
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar27 = *(undefined4 *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0x34) - *(float *)(param_1 + 0x34);
  uVar9 = *(undefined4 *)(param_1 + 8);
  uVar21 = NEON_fmadd(uVar7,uVar17,fVar8 * fVar12);
  uVar15 = *(undefined4 *)(param_1 + 0x20);
  uVar22 = *(undefined4 *)(param_1 + 0x24);
  fVar5 = *(float *)(param_2 + 0x38) - *(float *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  uVar23 = NEON_fmadd(uVar7,uVar27,fVar8 * fVar19);
  uVar24 = NEON_fmadd(uVar3,uVar16,fVar11 * fVar13);
  uVar26 = NEON_fmadd(uVar3,uVar17,fVar12 * fVar13);
  uVar17 = NEON_fmadd(uVar9,uVar17,fVar12 * fVar25);
  uVar10 = *(undefined4 *)(param_2 + 0x28);
  uVar14 = NEON_fmadd(uVar7,uVar16,fVar8 * fVar11);
  uVar18 = *(undefined4 *)(param_1 + 0x28);
  uVar16 = NEON_fmadd(uVar9,uVar16,fVar11 * fVar25);
  uVar20 = NEON_fmadd(uVar15,uVar6,uVar21);
  uVar23 = NEON_fmadd(uVar15,uVar10,uVar23);
  uVar24 = NEON_fmadd(uVar22,uVar4,uVar24);
  uVar26 = NEON_fmadd(uVar22,uVar6,uVar26);
  uVar17 = NEON_fmadd(uVar18,uVar6,uVar17);
  uVar21 = NEON_fmadd(uVar15,uVar4,uVar14);
  uVar28 = NEON_fmadd(uVar3,uVar27,fVar19 * fVar13);
  uVar16 = NEON_fmadd(uVar18,uVar4,uVar16);
  uVar14 = NEON_fmadd(uVar9,uVar27,fVar19 * fVar25);
  uVar4 = NEON_fmadd(uVar7,fVar1,fVar2 * fVar8);
  *(undefined4 *)(param_2 + 8) = uVar23;
  uVar6 = NEON_fmadd(uVar3,fVar1,fVar2 * fVar13);
  uVar3 = NEON_fmadd(uVar9,fVar1,fVar2 * fVar25);
  uVar9 = NEON_fmadd(uVar22,uVar10,uVar28);
  *(undefined4 *)param_2 = uVar21;
  *(undefined4 *)(param_2 + 4) = uVar20;
  uVar7 = NEON_fmadd(uVar18,uVar10,uVar14);
  *(undefined4 *)(param_2 + 0xc) = 0;
  uVar4 = NEON_fmadd(uVar15,fVar5,uVar4);
  *(undefined4 *)(param_2 + 0x10) = uVar24;
  *(undefined4 *)(param_2 + 0x14) = uVar26;
  uVar6 = NEON_fmadd(uVar22,fVar5,uVar6);
  uVar3 = NEON_fmadd(uVar18,fVar5,uVar3);
  *(undefined4 *)(param_2 + 0x18) = uVar9;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  *(undefined4 *)(param_2 + 0x20) = uVar16;
  *(undefined4 *)(param_2 + 0x24) = uVar17;
  *(undefined4 *)(param_2 + 0x28) = uVar7;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x30) = uVar4;
  *(undefined4 *)(param_2 + 0x34) = uVar6;
  *(undefined4 *)(param_2 + 0x38) = uVar3;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  return;
}


