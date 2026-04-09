// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildAngularJacobian
// Entry Point: 00f3e4b4
// Size: 244 bytes
// Signature: undefined __thiscall buildAngularJacobian(btGeneric6DofConstraint * this, btJacobianEntry * param_1, btVector3 * param_2)


/* btGeneric6DofConstraint::buildAngularJacobian(btJacobianEntry&, btVector3 const&) */

void __thiscall
btGeneric6DofConstraint::buildAngularJacobian
          (btGeneric6DofConstraint *this,btJacobianEntry *param_1,btVector3 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  lVar1 = *(long *)(this + 0x28);
  lVar2 = *(long *)(this + 0x30);
  uVar3 = *(undefined8 *)(lVar1 + 8);
  uVar4 = *(undefined8 *)(lVar1 + 0x18);
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  fVar6 = *(float *)(lVar1 + 0x10);
  uVar9 = *(undefined4 *)(lVar1 + 0x20);
  uVar14 = *(undefined4 *)(lVar1 + 0x30);
  uVar16 = *(undefined8 *)(lVar2 + 8);
  uVar17 = *(undefined8 *)(lVar2 + 0x18);
  uVar18 = *(undefined8 *)(lVar2 + 0x28);
  uVar19 = *(undefined4 *)(lVar2 + 0x10);
  uVar20 = *(undefined4 *)(lVar2 + 0x20);
  fVar21 = *(float *)(lVar2 + 0x30);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  fVar22 = *(float *)param_2;
  fVar23 = *(float *)(param_2 + 4);
  uVar9 = NEON_fmadd(fVar23,uVar9,fVar22 * fVar6);
  fVar7 = *(float *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  fVar6 = (float)uVar3 * fVar22 + (float)uVar4 * fVar23 + (float)uVar5 * fVar7;
  fVar22 = (float)((ulong)uVar3 >> 0x20) * fVar22 + (float)((ulong)uVar4 >> 0x20) * fVar23 +
           (float)((ulong)uVar5 >> 0x20) * fVar7;
  fVar7 = (float)NEON_fmadd(fVar7,uVar14,uVar9);
  *(ulong *)(param_1 + 0x10) = CONCAT44(fVar22,fVar6);
  *(float *)(param_1 + 0x18) = fVar7;
  fVar10 = *(float *)(param_2 + 4);
  fVar23 = *(float *)(param_2 + 8);
  fVar21 = (float)NEON_fmadd(fVar10,uVar20,fVar23 * fVar21);
  fVar11 = *(float *)param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  fVar21 = (float)NEON_fnmadd(fVar11,uVar19,-fVar21);
  fVar8 = -((float)uVar18 * fVar23 + (float)uVar17 * fVar10) - (float)uVar16 * fVar11;
  fVar23 = -((float)((ulong)uVar18 >> 0x20) * fVar23 + (float)((ulong)uVar17 >> 0x20) * fVar10) -
           (float)((ulong)uVar16 >> 0x20) * fVar11;
  *(float *)(param_1 + 0x28) = fVar21;
  *(ulong *)(param_1 + 0x20) = CONCAT44(fVar23,fVar8);
  uVar3 = *(undefined8 *)(lVar1 + 0x1d0);
  fVar15 = *(float *)(lVar1 + 0x1d8);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  fVar10 = (float)uVar3 * fVar6;
  fVar12 = (float)((ulong)uVar3 >> 0x20) * fVar22;
  fVar15 = fVar15 * fVar7;
  *(ulong *)(param_1 + 0x30) = CONCAT44(fVar12,fVar10);
  *(float *)(param_1 + 0x38) = fVar15;
  fVar11 = (float)*(undefined8 *)(lVar2 + 0x1d0) * fVar8;
  fVar13 = (float)((ulong)*(undefined8 *)(lVar2 + 0x1d0) >> 0x20) * fVar23;
  fVar6 = (float)NEON_fmadd(fVar15,fVar7,fVar10 * fVar6 + fVar12 * fVar22);
  fVar22 = *(float *)(lVar2 + 0x1d8);
  *(ulong *)(param_1 + 0x40) = CONCAT44(fVar13,fVar11);
  *(undefined4 *)(param_1 + 0x4c) = 0;
  fVar22 = fVar22 * fVar21;
  uVar9 = NEON_fmadd(fVar22,fVar21,fVar6 + fVar11 * fVar8 + fVar13 * fVar23);
  *(float *)(param_1 + 0x48) = fVar22;
  *(undefined4 *)(param_1 + 0x50) = uVar9;
  return;
}


