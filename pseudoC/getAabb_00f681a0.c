// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f681a0
// Size: 300 bytes
// Signature: undefined __thiscall getAabb(btPolyhedralConvexAabbCachingShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3)


/* btPolyhedralConvexAabbCachingShape::getAabb(btTransform const&, btVector3&, btVector3&) const */

void __thiscall
btPolyhedralConvexAabbCachingShape::getAabb
          (btPolyhedralConvexAabbCachingShape *this,btTransform *param_1,btVector3 *param_2,
          btVector3 *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  
  uVar1 = (**(code **)(*(long *)this + 0x60))();
  uVar8 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)(param_1 + 4);
  fVar3 = (*(float *)(this + 0x50) + *(float *)(this + 0x60)) * 0.5;
  fVar9 = *(float *)(param_1 + 0x10);
  fVar12 = (float)NEON_fmadd(*(float *)(this + 0x60) - *(float *)(this + 0x50),0x3f000000,uVar1);
  fVar6 = (*(float *)(this + 0x54) + *(float *)(this + 100)) * 0.5;
  uVar17 = *(undefined8 *)(param_1 + 8);
  fVar11 = *(float *)(param_1 + 0x14);
  fVar16 = (float)NEON_fmadd(*(float *)(this + 100) - *(float *)(this + 0x54),0x3f000000,uVar1);
  fVar14 = (*(float *)(this + 0x58) + *(float *)(this + 0x68)) * 0.5;
  fVar19 = *(float *)(param_1 + 0x28);
  fVar18 = *(float *)(param_1 + 0x18);
  uVar4 = NEON_fmadd(*(float *)(param_1 + 0x24),fVar6,*(float *)(param_1 + 0x20) * fVar3);
  fVar2 = (float)NEON_fmadd(*(float *)(this + 0x68) - *(float *)(this + 0x58),0x3f000000,uVar1);
  fVar5 = (float)NEON_fmadd(fVar19,fVar14,uVar4);
  uVar1 = NEON_fmadd(ABS(*(float *)(param_1 + 0x24)),fVar16,ABS(*(float *)(param_1 + 0x20)) * fVar12
                    );
  uVar15 = *(undefined8 *)(param_1 + 0x30);
  fVar13 = *(float *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0xc) = 0;
  fVar7 = (float)uVar8 * fVar3 + (float)uVar10 * fVar6 + (float)uVar17 * fVar14 + (float)uVar15;
  fVar14 = fVar9 * fVar3 + fVar11 * fVar6 + fVar18 * fVar14 + (float)((ulong)uVar15 >> 0x20);
  fVar3 = ABS((float)uVar8) * fVar12 + ABS((float)uVar10) * fVar16 + ABS((float)uVar17) * fVar2;
  fVar6 = ABS(fVar9) * fVar12 + ABS(fVar11) * fVar16 + ABS(fVar18) * fVar2;
  fVar2 = (float)NEON_fmadd(ABS(fVar19),fVar2,uVar1);
  *(ulong *)param_2 = CONCAT44(fVar14 - fVar6,fVar7 - fVar3);
  *(float *)(param_2 + 8) = (fVar5 + fVar13) - fVar2;
  *(ulong *)param_3 = CONCAT44(fVar14 + fVar6,fVar7 + fVar3);
  *(float *)(param_3 + 8) = fVar5 + fVar13 + fVar2;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return;
}


