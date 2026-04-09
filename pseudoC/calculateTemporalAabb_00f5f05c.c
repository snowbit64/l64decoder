// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: calculateTemporalAabb
// Entry Point: 00f5f05c
// Size: 320 bytes
// Signature: undefined __thiscall calculateTemporalAabb(btCollisionShape * this, btTransform * param_1, btVector3 * param_2, btVector3 * param_3, float param_4, btVector3 * param_5, btVector3 * param_6)


/* btCollisionShape::calculateTemporalAabb(btTransform const&, btVector3 const&, btVector3 const&,
   float, btVector3&, btVector3&) const */

void __thiscall
btCollisionShape::calculateTemporalAabb
          (btCollisionShape *this,btTransform *param_1,btVector3 *param_2,btVector3 *param_3,
          float param_4,btVector3 *param_5,btVector3 *param_6)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  (**(code **)(*(long *)this + 0x10))(this,param_1,param_5,param_6);
  uVar6 = *(undefined8 *)param_6;
  fVar9 = *(float *)(param_6 + 8);
  uVar10 = *(undefined8 *)param_5;
  uVar1 = NEON_fmadd(*(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 4),
                     *(float *)param_3 * *(float *)param_3);
  fVar2 = (float)NEON_fmadd(*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 8),uVar1);
  fVar5 = *(float *)(param_2 + 8) * param_4;
  uVar4 = CONCAT44((float)((ulong)*(undefined8 *)param_2 >> 0x20) * param_4,
                   (float)*(undefined8 *)param_2 * param_4);
  uVar11 = NEON_fminnm(uVar4,0x8000000080000000,4);
  uVar4 = NEON_fmaxnm(uVar4,0x8000000080000000,4);
  fVar7 = (float)NEON_fminnm(fVar5,0x80000000);
  if (fVar5 <= -0.0) {
    fVar5 = -0.0;
  }
  fVar8 = *(float *)(param_5 + 8);
  fVar3 = (float)(**(code **)(*(long *)this + 0x20))(this);
  *(ulong *)param_5 =
       CONCAT44((float)((ulong)uVar11 >> 0x20) + (float)((ulong)uVar10 >> 0x20),
                (float)uVar11 + (float)uVar10);
  *(float *)(param_5 + 8) = fVar7 + fVar8;
  *(undefined4 *)(param_5 + 0xc) = 0;
  *(ulong *)param_6 =
       CONCAT44((float)((ulong)uVar4 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                (float)uVar4 + (float)uVar6);
  *(float *)(param_6 + 8) = fVar5 + fVar9;
  *(undefined4 *)(param_6 + 0xc) = 0;
  fVar2 = fVar3 * param_4 * SQRT(fVar2);
  *(float *)(param_5 + 8) = *(float *)(param_5 + 8) - fVar2;
  *(ulong *)param_5 =
       CONCAT44((float)((ulong)*(undefined8 *)param_5 >> 0x20) - fVar2,
                (float)*(undefined8 *)param_5 - fVar2);
  *(ulong *)param_6 =
       CONCAT44((float)((ulong)*(undefined8 *)param_6 >> 0x20) + fVar2,
                (float)*(undefined8 *)param_6 + fVar2);
  *(float *)(param_6 + 8) = *(float *)(param_6 + 8) + fVar2;
  return;
}


