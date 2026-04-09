// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initSolverBody
// Entry Point: 00f2ea48
// Size: 352 bytes
// Signature: undefined __thiscall initSolverBody(btSequentialImpulseConstraintSolver * this, btSolverBody * param_1, btCollisionObject * param_2, float param_3)


/* btSequentialImpulseConstraintSolver::initSolverBody(btSolverBody*, btCollisionObject*, float) */

void __thiscall
btSequentialImpulseConstraintSolver::initSolverBody
          (btSequentialImpulseConstraintSolver *this,btSolverBody *param_1,
          btCollisionObject *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  
  if ((param_2 != (btCollisionObject *)0x0) && (((byte)param_2[0x100] >> 1 & 1) != 0)) {
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    uVar3 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)param_1 = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    uVar5 = *(undefined8 *)(param_2 + 0x40);
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(btCollisionObject **)(param_1 + 0xf0) = param_2;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    fVar1 = *(float *)(param_2 + 0x19c);
    uVar3 = *(undefined8 *)(param_2 + 0x1a0);
    fVar4 = *(float *)(param_2 + 0x1a8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(ulong *)(param_1 + 0x80) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar1,(float)uVar3 * fVar1);
    *(float *)(param_1 + 0x88) = fVar4 * fVar1;
    uVar3 = *(undefined8 *)(param_2 + 0x278);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x280);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x1a0);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x1a8);
    *(undefined8 *)(param_1 + 0x70) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x17c);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x184);
    *(undefined8 *)(param_1 + 0xb0) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x18c);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 0x194);
    *(undefined8 *)(param_1 + 0xc0) = uVar3;
    fVar1 = *(float *)(param_2 + 0x19c);
    uVar3 = *(undefined8 *)(param_2 + 0x1e0);
    fVar4 = *(float *)(param_2 + 0x1e8);
    *(undefined4 *)(param_1 + 0xdc) = 0;
    fVar1 = fVar1 * param_3;
    *(ulong *)(param_1 + 0xd0) =
         CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar1,(float)uVar3 * fVar1);
    *(float *)(param_1 + 0xd8) = fVar1 * fVar4;
    fVar1 = *(float *)(param_2 + 0x1f0);
    uVar3 = *(undefined8 *)(param_2 + 0x14c);
    fVar6 = *(float *)(param_2 + 500);
    uVar9 = *(undefined8 *)(param_2 + 0x15c);
    fVar8 = *(float *)(param_2 + 0x1f8);
    uVar2 = NEON_fmadd(*(undefined4 *)(param_2 + 0x164),fVar6,*(float *)(param_2 + 0x154) * fVar1);
    uVar5 = *(undefined8 *)(param_2 + 0x16c);
    uVar7 = *(undefined4 *)(param_2 + 0x174);
    *(undefined4 *)(param_1 + 0xec) = 0;
    fVar4 = (float)NEON_fmadd(uVar7,fVar8,uVar2);
    *(ulong *)(param_1 + 0xe0) =
         CONCAT44(((float)((ulong)uVar3 >> 0x20) * fVar1 + (float)((ulong)uVar9 >> 0x20) * fVar6 +
                  (float)((ulong)uVar5 >> 0x20) * fVar8) * param_3,
                  ((float)uVar3 * fVar1 + (float)uVar9 * fVar6 + (float)uVar5 * fVar8) * param_3);
    *(float *)(param_1 + 0xe8) = fVar4 * param_3;
    return;
  }
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x60) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x70) = 0x3f8000003f800000;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  return;
}


