// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveTransformGroup
// Entry Point: 0099d8f8
// Size: 212 bytes
// Signature: undefined __thiscall enqueueRemoveTransformGroup(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, bool param_2)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup(TransformGroup*, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,bool param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  TransformGroup *pTVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(param_1 + 0x30);
  if ((int)((ulong)(lVar4 - lVar5) >> 3) != 0) {
    uVar6 = 0;
    do {
      pTVar3 = *(TransformGroup **)(lVar5 + uVar6 * 8);
      if (((byte)pTVar3[0x10] >> 5 & 1) != 0) {
        enqueueRemoveTransformGroup(this,pTVar3,param_2);
        lVar5 = *(long *)(param_1 + 0x28);
        lVar4 = *(long *)(param_1 + 0x30);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < ((ulong)(lVar4 - lVar5) >> 3 & 0xffffffff));
  }
  plVar1 = (long *)RawTransformGroup::getPhysicsObject();
  if (plVar1 != (long *)0x0) {
    if (param_2) {
                    /* WARNING: Could not recover jumptable at 0x0099d984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x28))();
      return;
    }
    puVar2 = (undefined8 *)operator_new(0x10);
    *(undefined4 *)(puVar2 + 1) = 0;
    *puVar2 = &PTR__PhysicsObject_00fe0d88;
    RawTransformGroup::setPhysicsObject((RawTransformGroup *)param_1,(PhysicsObject *)puVar2);
    return;
  }
  return;
}


