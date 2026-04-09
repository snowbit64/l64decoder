// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f5f5d0
// Size: 444 bytes
// Signature: undefined __thiscall getAabb(btCompoundShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btCompoundShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btCompoundShape::getAabb
          (btCompoundShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar11;
  undefined8 uVar10;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if (*(int *)(this + 0x24) == 0) {
    fVar18 = 0.0;
    fVar17 = 0.0;
    fVar16 = 0.0;
    fVar8 = 0.0;
    fVar1 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar18 = (*(float *)(this + 0x50) - *(float *)(this + 0x40)) * 0.5;
    fVar17 = (*(float *)(this + 0x54) - *(float *)(this + 0x44)) * 0.5;
    fVar8 = (*(float *)(this + 0x40) + *(float *)(this + 0x50)) * 0.5;
    fVar1 = (*(float *)(this + 0x44) + *(float *)(this + 0x54)) * 0.5;
    fVar16 = (*(float *)(this + 0x58) - *(float *)(this + 0x48)) * 0.5;
    fVar2 = (*(float *)(this + 0x48) + *(float *)(this + 0x58)) * 0.5;
  }
  fVar3 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar4 = (float)(**(code **)(*(long *)this + 0x60))(this);
  fVar5 = (float)(**(code **)(*(long *)this + 0x60))(this);
  uVar6 = *(undefined8 *)param_1;
  uVar9 = *(undefined8 *)(param_1 + 8);
  fVar3 = fVar3 + fVar18;
  fVar4 = fVar4 + fVar17;
  fVar5 = fVar5 + fVar16;
  fVar17 = *(float *)(param_1 + 0x10);
  uVar7 = *(undefined8 *)(param_1 + 4);
  uVar13 = NEON_fmadd(*(float *)(param_1 + 0x24),fVar1,*(float *)(param_1 + 0x20) * fVar8);
  fVar18 = *(float *)(param_1 + 0x14);
  fVar11 = *(float *)(param_1 + 0x18);
  uVar15 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar4,ABS(*(float *)(param_1 + 0x20)) * fVar3)
  ;
  fVar19 = *(float *)(param_1 + 0x38);
  fVar14 = (float)NEON_fmadd(*(float *)(param_1 + 0x28),fVar2,uVar13);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  fVar12 = (float)NEON_fmadd(ABS(*(float *)(param_1 + 0x28)),fVar5,uVar15);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar16 = (float)uVar6 * fVar8 + (float)uVar7 * fVar1 + (float)uVar9 * fVar2 + (float)uVar10;
  fVar8 = fVar17 * fVar8 + fVar18 * fVar1 + fVar11 * fVar2 + (float)((ulong)uVar10 >> 0x20);
  fVar1 = ABS((float)uVar6) * fVar3 + ABS((float)uVar7) * fVar4 + ABS((float)uVar9) * fVar5;
  fVar2 = ABS(fVar17) * fVar3 + ABS(fVar18) * fVar4 + ABS(fVar11) * fVar5;
  *(float *)(param_2 + 8) = (fVar14 + fVar19) - fVar12;
  *(ulong *)param_2 = CONCAT44(fVar8 - fVar2,fVar16 - fVar1);
  *(ulong *)param_3 = CONCAT44(fVar8 + fVar2,fVar16 + fVar1);
  *(float *)(param_3 + 8) = fVar14 + fVar19 + fVar12;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}


