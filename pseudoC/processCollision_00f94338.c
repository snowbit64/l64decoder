// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f94338
// Size: 332 bytes
// Signature: undefined __thiscall processCollision(btSphereSphereCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btSphereSphereCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btSphereSphereCollisionAlgorithm::processCollision
          (btSphereSphereCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  btPersistentManifold *this_00;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this_00 = *(btPersistentManifold **)(this + 0x18);
  if (this_00 != (btPersistentManifold *)0x0) {
    *(btPersistentManifold **)(param_4 + 8) = this_00;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30);
    uVar8 = *(undefined8 *)(*(long *)(param_2 + 0x18) + 0x30);
    fVar10 = *(float *)(*(long *)(param_2 + 0x18) + 0x38);
    fVar7 = (float)uVar8;
    fVar12 = (float)uVar6 - fVar7;
    fVar9 = (float)((ulong)uVar8 >> 0x20);
    fVar13 = (float)((ulong)uVar6 >> 0x20) - fVar9;
    fVar14 = *(float *)(*(long *)(param_1 + 0x18) + 0x38) - fVar10;
    fVar4 = (float)NEON_fmadd(fVar14,fVar14,fVar12 * fVar12 + fVar13 * fVar13);
    fVar4 = SQRT(fVar4);
    fVar11 = *(float *)(*(long *)(param_2 + 8) + 0x1c) * *(float *)(*(long *)(param_2 + 8) + 0x2c);
    fVar5 = (float)NEON_fmadd(*(undefined4 *)(*(long *)(param_1 + 8) + 0x1c),
                              *(undefined4 *)(*(long *)(param_1 + 8) + 0x2c),fVar11);
    if (fVar4 <= fVar5) {
      uStack_48 = 0;
      local_50 = 0x3f800000;
      if (fVar4 <= 1.192093e-07) {
        fVar15 = 0.0;
      }
      else {
        fVar15 = 1.0 / fVar4;
        local_50 = CONCAT44(fVar13 * fVar15,fVar12 * fVar15);
        fVar15 = fVar15 * fVar14;
        uStack_48 = (ulong)(uint)fVar15;
      }
      local_38 = CONCAT44(fVar9 + (float)((ulong)local_50 >> 0x20) * fVar11,
                          fVar7 + (float)local_50 * fVar11);
      local_30 = NEON_fmadd(fVar15,fVar11,fVar10);
      local_2c = 0;
      (**(code **)(*(long *)param_4 + 0x20))(fVar4 - fVar5,param_4,&local_50,&local_38);
      this_00 = *(btPersistentManifold **)(param_4 + 8);
    }
    if (*(int *)(this_00 + 0x318) != 0) {
      lVar1 = *(long *)(this_00 + 0x308);
      lVar3 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        lVar1 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      }
      btPersistentManifold::refreshContactPoints
                (this_00,(btTransform *)(lVar1 + 8),(btTransform *)(lVar3 + 8));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


