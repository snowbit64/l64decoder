// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: applyAnisotropicFriction
// Entry Point: 00f31740
// Size: 160 bytes
// Signature: undefined __cdecl applyAnisotropicFriction(btCollisionObject * param_1, btVector3 * param_2, int param_3)


/* btSequentialImpulseConstraintSolver::applyAnisotropicFriction(btCollisionObject*, btVector3&,
   int) */

void btSequentialImpulseConstraintSolver::applyAnisotropicFriction
               (btCollisionObject *param_1,btVector3 *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if ((param_1 != (btCollisionObject *)0x0) && ((*(uint *)(param_1 + 0xb8) & param_3) != 0)) {
    fVar1 = *(float *)(param_1 + 8);
    fVar4 = *(float *)(param_1 + 0xc);
    fVar2 = *(float *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 4);
    fVar7 = *(float *)(param_1 + 0x18);
    uVar10 = *(undefined4 *)(param_1 + 0x1c);
    fVar11 = *(float *)(param_1 + 0x10);
    fVar14 = *(float *)(param_1 + 0x28);
    uVar15 = *(undefined4 *)(param_1 + 0x2c);
    uVar8 = *(undefined4 *)(param_2 + 8);
    uVar16 = *(undefined4 *)(param_1 + 0x20);
    uVar5 = NEON_fmadd(uVar3,fVar7,fVar2 * fVar1);
    uVar12 = NEON_fmadd(uVar10,uVar3,fVar4 * fVar2);
    uVar3 = NEON_fmadd(uVar16,uVar3,fVar11 * fVar2);
    fVar6 = (float)NEON_fmadd(uVar8,fVar14,uVar5);
    fVar13 = (float)NEON_fmadd(uVar15,uVar8,uVar12);
    fVar6 = *(float *)(param_1 + 0xa8) * fVar6;
    uVar12 = *(undefined4 *)(param_1 + 0x30);
    fVar13 = *(float *)(param_1 + 0xac) * fVar13;
    fVar2 = (float)NEON_fmadd(uVar12,uVar8,uVar3);
    fVar9 = *(float *)(param_1 + 0xb0);
    *(undefined4 *)(param_2 + 0xc) = 0;
    fVar9 = fVar9 * fVar2;
    uVar3 = NEON_fmadd(fVar13,fVar4,fVar6 * fVar1);
    uVar8 = NEON_fmadd(fVar13,uVar10,fVar6 * fVar7);
    uVar5 = NEON_fmadd(fVar13,uVar15,fVar6 * fVar14);
    uVar3 = NEON_fmadd(fVar9,fVar11,uVar3);
    uVar8 = NEON_fmadd(fVar9,uVar16,uVar8);
    uVar5 = NEON_fmadd(fVar9,uVar12,uVar5);
    *(undefined4 *)param_2 = uVar3;
    *(undefined4 *)(param_2 + 4) = uVar8;
    *(undefined4 *)(param_2 + 8) = uVar5;
  }
  return;
}


