// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f6acc0
// Size: 380 bytes
// Signature: undefined __thiscall getAabb(btTriangleMeshShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btTriangleMeshShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btTriangleMeshShape::getAabb
          (btTriangleMeshShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = *(float *)(this + 0x30);
  fVar5 = *(float *)(this + 0x34);
  fVar6 = *(float *)(this + 0x20);
  fVar8 = *(float *)(this + 0x24);
  fVar10 = *(float *)(this + 0x38);
  fVar11 = *(float *)(this + 0x28);
  uVar2 = (**(code **)(*(long *)this + 0x60))();
  uVar3 = (**(code **)(*(long *)this + 0x60))(this);
  uVar4 = (**(code **)(*(long *)this + 0x60))(this);
  uVar14 = *(undefined8 *)param_1;
  fVar15 = *(float *)(param_1 + 0x10);
  fVar18 = (float)NEON_fmadd(fVar1 - fVar6,0x3f000000,uVar2);
  fVar19 = (float)NEON_fmadd(fVar5 - fVar8,0x3f000000,uVar3);
  fVar5 = (*(float *)(this + 0x20) + *(float *)(this + 0x30)) * 0.5;
  uVar12 = *(undefined8 *)(param_1 + 4);
  fVar9 = (*(float *)(this + 0x24) + *(float *)(this + 0x34)) * 0.5;
  uVar16 = *(undefined8 *)(param_1 + 8);
  fVar13 = *(float *)(param_1 + 0x14);
  fVar20 = *(float *)(param_1 + 0x28);
  fVar8 = (*(float *)(this + 0x28) + *(float *)(this + 0x38)) * 0.5;
  fVar17 = *(float *)(param_1 + 0x18);
  fVar1 = (float)NEON_fmadd(fVar10 - fVar11,0x3f000000,uVar4);
  uVar2 = NEON_fmadd(*(float *)(param_1 + 0x24),fVar9,*(float *)(param_1 + 0x20) * fVar5);
  fVar6 = (float)NEON_fmadd(fVar20,fVar8,uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar19,ABS(*(float *)(param_1 + 0x20)) * fVar18
                    );
  fVar11 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar10 = (float)uVar14 * fVar5 + (float)uVar12 * fVar9 + (float)uVar16 * fVar8 + (float)uVar7;
  fVar5 = fVar15 * fVar5 + fVar13 * fVar9 + fVar17 * fVar8 + (float)((ulong)uVar7 >> 0x20);
  fVar8 = ABS((float)uVar14) * fVar18 + ABS((float)uVar12) * fVar19 + ABS((float)uVar16) * fVar1;
  fVar9 = ABS(fVar15) * fVar18 + ABS(fVar13) * fVar19 + ABS(fVar17) * fVar1;
  fVar1 = (float)NEON_fmadd(ABS(fVar20),fVar1,uVar2);
  *(ulong *)param_2 = CONCAT44(fVar5 - fVar9,fVar10 - fVar8);
  *(float *)(param_2 + 8) = (fVar6 + fVar11) - fVar1;
  *(ulong *)param_3 = CONCAT44(fVar5 + fVar9,fVar10 + fVar8);
  *(float *)(param_3 + 8) = fVar6 + fVar11 + fVar1;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}


