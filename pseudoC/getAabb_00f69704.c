// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f69704
// Size: 408 bytes
// Signature: undefined __thiscall getAabb(btScaledBvhTriangleMeshShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btScaledBvhTriangleMeshShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btScaledBvhTriangleMeshShape::getAabb
          (btScaledBvhTriangleMeshShape *this,btTransform *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  long *plVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  
  plVar1 = *(long **)(this + 0x30);
  fVar2 = *(float *)(this + 0x20);
  fVar5 = *(float *)(this + 0x24);
  fVar13 = *(float *)(this + 0x28);
  fVar11 = fVar5 * *(float *)((long)plVar1 + 0x34);
  fVar9 = fVar5 * *(float *)((long)plVar1 + 0x24);
  fVar4 = fVar2 * *(float *)(plVar1 + 6);
  if (0.0 <= fVar2) {
    fVar4 = fVar2 * *(float *)(plVar1 + 4);
  }
  fVar10 = fVar2 * *(float *)(plVar1 + 6);
  if (fVar2 <= 0.0) {
    fVar10 = fVar2 * *(float *)(plVar1 + 4);
  }
  fVar2 = fVar11;
  if (0.0 <= fVar5) {
    fVar2 = fVar9;
  }
  if (fVar5 <= 0.0) {
    fVar11 = fVar9;
  }
  fVar5 = fVar13 * *(float *)(plVar1 + 7);
  if (0.0 <= fVar13) {
    fVar5 = fVar13 * *(float *)(plVar1 + 5);
  }
  fVar9 = fVar13 * *(float *)(plVar1 + 7);
  if (fVar13 <= 0.0) {
    fVar9 = fVar13 * *(float *)(plVar1 + 5);
  }
  uVar3 = (**(code **)(*plVar1 + 0x60))(plVar1);
  uVar7 = *(undefined8 *)param_1;
  uVar20 = *(undefined8 *)(param_1 + 8);
  fVar13 = (fVar10 + fVar4) * 0.5;
  uVar16 = *(undefined8 *)(param_1 + 4);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar12 = (float)NEON_fmadd(fVar10 - fVar4,0x3f000000,uVar3);
  fVar10 = (fVar11 + fVar2) * 0.5;
  fVar14 = (float)NEON_fmadd(fVar11 - fVar2,0x3f000000,uVar3);
  fVar17 = *(float *)(param_1 + 0x14);
  fVar18 = (fVar9 + fVar5) * 0.5;
  fVar21 = *(float *)(param_1 + 0x18);
  fVar22 = *(float *)(param_1 + 0x28);
  uVar6 = NEON_fmadd(*(float *)(param_1 + 0x24),fVar10,*(float *)(param_1 + 0x20) * fVar13);
  fVar4 = (float)NEON_fmadd(fVar9 - fVar5,0x3f000000,uVar3);
  fVar11 = (float)NEON_fmadd(fVar22,fVar18,uVar6);
  uVar3 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar14,ABS(*(float *)(param_1 + 0x20)) * fVar12
                    );
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  fVar15 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar2 = (float)uVar7 * fVar13 + (float)uVar16 * fVar10 + (float)uVar20 * fVar18 + (float)uVar19;
  fVar5 = fVar8 * fVar13 + fVar17 * fVar10 + fVar21 * fVar18 + (float)((ulong)uVar19 >> 0x20);
  fVar9 = ABS((float)uVar7) * fVar12 + ABS((float)uVar16) * fVar14 + ABS((float)uVar20) * fVar4;
  fVar13 = ABS(fVar8) * fVar12 + ABS(fVar17) * fVar14 + ABS(fVar21) * fVar4;
  fVar4 = (float)NEON_fmadd(ABS(fVar22),fVar4,uVar3);
  *(ulong *)param_2 = CONCAT44(fVar5 - fVar13,fVar2 - fVar9);
  *(float *)(param_2 + 8) = (fVar11 + fVar15) - fVar4;
  *(ulong *)param_3 = CONCAT44(fVar5 + fVar13,fVar2 + fVar9);
  *(float *)(param_3 + 8) = fVar11 + fVar15 + fVar4;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}


