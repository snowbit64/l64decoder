// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00f938f0
// Size: 268 bytes
// Signature: undefined __thiscall processCollision(btConvexConcaveCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* btConvexConcaveCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
btConvexConcaveCollisionAlgorithm::processCollision
          (btConvexConcaveCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  btPersistentManifold *this_00;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  
  pbVar1 = param_1;
  if (this[0x10] != (btConvexConcaveCollisionAlgorithm)0x0) {
    pbVar1 = param_2;
    param_2 = param_1;
  }
  plVar5 = *(long **)(param_2 + 8);
  if ((*(int *)(plVar5 + 1) - 0x15U < 9) && (*(int *)(*(long *)(pbVar1 + 8) + 8) < 0x14)) {
    fVar6 = (float)(**(code **)(*plVar5 + 0x60))(plVar5);
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(this + 0x70);
    btConvexTriangleCallback::setTimeStepAndCounters
              ((btConvexTriangleCallback *)(this + 0x18),fVar6,param_3,pbVar1,param_2,param_4);
    lVar2 = *(long *)(this + 0x70);
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    lVar4 = *plVar5;
    *(undefined8 *)(lVar2 + 0x308) = *(undefined8 *)(pbVar1 + 0x10);
    *(undefined8 *)(lVar2 + 0x310) = uVar3;
    (**(code **)(lVar4 + 0x80))
              (plVar5,(btConvexTriangleCallback *)(this + 0x18),this + 0x30,this + 0x40);
    this_00 = *(btPersistentManifold **)(param_4 + 8);
    if (*(int *)(this_00 + 0x318) != 0) {
      lVar2 = *(long *)(this_00 + 0x308);
      lVar4 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
      if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
        lVar2 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        lVar4 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
      }
      btPersistentManifold::refreshContactPoints
                (this_00,(btTransform *)(lVar2 + 8),(btTransform *)(lVar4 + 8));
    }
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  return;
}


