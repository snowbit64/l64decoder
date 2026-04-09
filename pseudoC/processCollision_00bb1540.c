// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00bb1540
// Size: 176 bytes
// Signature: undefined __thiscall processCollision(Bt2SoftBodyHeightfieldCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* Bt2SoftBodyHeightfieldCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
Bt2SoftBodyHeightfieldCollisionAlgorithm::processCollision
          (Bt2SoftBodyHeightfieldCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  long *plVar1;
  float fVar2;
  
  if (this[0x10] != (Bt2SoftBodyHeightfieldCollisionAlgorithm)0x0) {
    param_2 = param_1;
  }
  if (*(int *)(*(long *)(param_2 + 8) + 8) - 0x15U < 9) {
    plVar1 = *(long **)(*(long *)(param_2 + 0x10) + 200);
    fVar2 = (float)(**(code **)(*plVar1 + 0x60))(plVar1);
    Bt2SoftBodyHeightfieldTriangleCallback::setTimeStepAndCounters
              ((Bt2SoftBodyHeightfieldTriangleCallback *)(this + 0x18),fVar2,param_2,param_3,param_4
              );
                    /* WARNING: Could not recover jumptable at 0x00bb15d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x80))
              (plVar1,(Bt2SoftBodyHeightfieldTriangleCallback *)(this + 0x18),this + 0x30,
               this + 0x40);
    return;
  }
  return;
}


