// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btJacobianEntry
// Entry Point: 00f3b258
// Size: 324 bytes
// Signature: undefined __thiscall btJacobianEntry(btJacobianEntry * this, btMatrix3x3 * param_1, btMatrix3x3 * param_2, btVector3 * param_3, btVector3 * param_4, btVector3 * param_5, btVector3 * param_6, float param_7, btVector3 * param_8, float param_9)


/* btJacobianEntry::btJacobianEntry(btMatrix3x3 const&, btMatrix3x3 const&, btVector3 const&,
   btVector3 const&, btVector3 const&, btVector3 const&, float, btVector3 const&, float) */

void __thiscall
btJacobianEntry::btJacobianEntry
          (btJacobianEntry *this,btMatrix3x3 *param_1,btMatrix3x3 *param_2,btVector3 *param_3,
          btVector3 *param_4,btVector3 *param_5,btVector3 *param_6,float param_7,btVector3 *param_8,
          float param_9)

{
  undefined4 uVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  
  uVar3 = *(undefined8 *)param_5;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)this = uVar3;
  fVar2 = *(float *)(this + 4);
  fVar4 = *(float *)(this + 8);
  fVar5 = *(float *)this;
  fVar8 = (float)NEON_fnmsub(fVar4,*(float *)(param_3 + 4),fVar2 * *(float *)(param_3 + 8));
  uVar1 = NEON_fnmsub(fVar5,*(float *)(param_3 + 8),*(float *)param_3 * fVar4);
  uVar6 = NEON_fnmsub(*(float *)param_3,fVar2,fVar5 * *(float *)(param_3 + 4));
  uVar10 = NEON_fmadd(uVar1,*(undefined4 *)(param_1 + 4),*(float *)param_1 * fVar8);
  uVar15 = *(undefined4 *)(param_1 + 0x18);
  fVar11 = (float)NEON_fmadd(*(undefined4 *)(param_1 + 8),uVar6,uVar10);
  uVar13 = NEON_fmadd(*(undefined4 *)(param_1 + 0x14),uVar1,*(float *)(param_1 + 0x10) * fVar8);
  uVar1 = NEON_fmadd(*(undefined4 *)(param_1 + 0x24),uVar1,*(float *)(param_1 + 0x20) * fVar8);
  uVar10 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x1c) = 0;
  fVar12 = (float)NEON_fmadd(uVar15,uVar6,uVar13);
  fVar8 = (float)NEON_fmadd(uVar10,uVar6,uVar1);
  *(float *)(this + 0x10) = fVar11;
  *(float *)(this + 0x14) = fVar12;
  *(float *)(this + 0x18) = fVar8;
  fVar9 = (float)NEON_fnmsub(*(float *)(param_4 + 8),fVar2,*(float *)(param_4 + 4) * fVar4);
  uVar6 = NEON_fnmsub(*(float *)param_4,fVar4,*(float *)(param_4 + 8) * fVar5);
  uVar1 = NEON_fnmsub(*(float *)(param_4 + 4),fVar5,*(float *)param_4 * fVar2);
  uVar10 = NEON_fmadd(uVar6,*(undefined4 *)(param_2 + 4),fVar9 * *(float *)param_2);
  fVar5 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 8),uVar1,uVar10);
  uVar10 = NEON_fmadd(*(undefined4 *)(param_2 + 0x14),uVar6,*(float *)(param_2 + 0x10) * fVar9);
  fVar7 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x18),uVar1,uVar10);
  uVar6 = NEON_fmadd(*(undefined4 *)(param_2 + 0x24),uVar6,*(float *)(param_2 + 0x20) * fVar9);
  uVar10 = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(this + 0x2c) = 0;
  *(float *)(this + 0x20) = fVar5;
  *(float *)(this + 0x24) = fVar7;
  fVar2 = (float)NEON_fmadd(uVar10,uVar1,uVar6);
  *(float *)(this + 0x28) = fVar2;
  fVar4 = *(float *)param_6;
  fVar9 = *(float *)(param_6 + 4);
  fVar14 = *(float *)(param_6 + 8);
  *(undefined4 *)(this + 0x3c) = 0;
  uVar1 = NEON_fmadd(fVar11 * fVar4,fVar11,param_9 + param_7);
  *(float *)(this + 0x30) = fVar11 * fVar4;
  *(float *)(this + 0x34) = fVar12 * fVar9;
  *(float *)(this + 0x38) = fVar8 * fVar14;
  uVar1 = NEON_fmadd(fVar12 * fVar9,fVar12,uVar1);
  fVar4 = *(float *)(param_8 + 4);
  uVar1 = NEON_fmadd(fVar8 * fVar14,fVar8,uVar1);
  uVar1 = NEON_fmadd(fVar5 * *(float *)param_8,fVar5,uVar1);
  fVar8 = *(float *)(param_8 + 8);
  *(float *)(this + 0x40) = fVar5 * *(float *)param_8;
  *(float *)(this + 0x44) = fVar7 * fVar4;
  *(undefined4 *)(this + 0x4c) = 0;
  uVar1 = NEON_fmadd(fVar7 * fVar4,fVar7,uVar1);
  *(float *)(this + 0x48) = fVar2 * fVar8;
  uVar1 = NEON_fmadd(fVar2 * fVar8,fVar2,uVar1);
  *(undefined4 *)(this + 0x50) = uVar1;
  return;
}


