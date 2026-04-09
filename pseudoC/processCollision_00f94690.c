// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f94690
// Size: 292 bytes
// Signature: undefined __thiscall processCollision(btSphereTriangleCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btSphereTriangleCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btSphereTriangleCollisionAlgorithm::processCollision
          (btSphereTriangleCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  btSphereTriangleCollisionAlgorithm bVar2;
  long lVar3;
  long lVar4;
  btPersistentManifold *this_00;
  long lVar5;
  undefined8 *puVar6;
  undefined **local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar5 = *(long *)(this + 0x18);
  if (lVar5 != 0) {
    bVar2 = this[0x20];
    pbVar1 = param_2;
    if (bVar2 != (btSphereTriangleCollisionAlgorithm)0x0) {
      pbVar1 = param_1;
      param_1 = param_2;
    }
    local_40 = 0x5d5e0b6b;
    uStack_d8 = *(undefined8 *)(param_1 + 8);
    local_d0 = *(undefined8 *)(pbVar1 + 8);
    *(long *)(param_4 + 8) = lVar5;
    puVar6 = *(undefined8 **)(param_1 + 0x18);
    uStack_b8 = puVar6[1];
    local_c0 = *puVar6;
    uStack_a8 = puVar6[3];
    uStack_b0 = puVar6[2];
    uStack_98 = puVar6[5];
    local_a0 = puVar6[4];
    uStack_88 = puVar6[7];
    uStack_90 = puVar6[6];
    puVar6 = *(undefined8 **)(pbVar1 + 0x18);
    uStack_78 = puVar6[1];
    local_80 = *puVar6;
    uStack_68 = puVar6[3];
    local_70 = puVar6[2];
    local_c8 = *(undefined4 *)(lVar5 + 0x31c);
    uStack_58 = puVar6[5];
    local_60 = puVar6[4];
    local_e0 = &PTR__btDiscreteCollisionDetectorInterface_0101c2c0;
    uStack_48 = puVar6[7];
    local_50 = puVar6[6];
    SphereTriangleDetector::getClosestPoints
              ((ClosestPointInput *)&local_e0,(Result *)&local_c0,(btIDebugDraw *)param_4,
               SUB81(param_3,0),(bool)bVar2);
    if ((this[0x10] != (btSphereTriangleCollisionAlgorithm)0x0) &&
       (this_00 = *(btPersistentManifold **)(param_4 + 8), *(int *)(this_00 + 0x318) != 0)) {
      lVar5 = *(long *)(this_00 + 0x308);
      lVar4 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        lVar5 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        lVar4 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      }
      btPersistentManifold::refreshContactPoints
                (this_00,(btTransform *)(lVar5 + 8),(btTransform *)(lVar4 + 8));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


