// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddTransformGroup
// Entry Point: 0099d73c
// Size: 300 bytes
// Signature: undefined __thiscall enqueueAddTransformGroup(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1)


/* Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(TransformGroup*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1)

{
  long lVar1;
  RawTransformGroup *this_00;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  TransformGroup *pTVar5;
  TransformGroup *pTVar6;
  ulong uVar7;
  TransformGroup *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1;
  if (this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) {
    addTransformGroup(this,param_1);
  }
  else {
    lVar2 = RawTransformGroup::getPhysicsObject();
    if ((*(byte *)(lVar2 + 8) & 3) == 0) {
      SimpleArray<TransformGroup*,true,32u>::push_back
                ((SimpleArray<TransformGroup*,true,32u> *)(this + 0x130),&local_40);
      lVar2 = RawTransformGroup::getPhysicsObject();
      this_00 = (RawTransformGroup *)local_40;
      if ((*(byte *)(lVar2 + 8) >> 2 & 1) == 0) {
        puVar3 = (undefined8 *)operator_new(0x18);
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 1) = 4;
        *puVar3 = &PTR__Bt2ContextPhysicsObject_00fe0d30;
        RawTransformGroup::setPhysicsObject(this_00,(PhysicsObject *)puVar3);
      }
      plVar4 = (long *)RawTransformGroup::getPhysicsObject();
      (**(code **)(*plVar4 + 0x18))(plVar4,this);
      lVar2 = *(long *)(local_40 + 0x28);
      if ((int)((ulong)(*(long *)(local_40 + 0x30) - lVar2) >> 3) != 0) {
        uVar7 = 0;
        pTVar6 = local_40;
        do {
          pTVar5 = *(TransformGroup **)(lVar2 + uVar7 * 8);
          if (((byte)pTVar5[0x10] >> 5 & 1) != 0) {
            enqueueAddTransformGroup(this,pTVar5);
            pTVar6 = local_40;
          }
          lVar2 = *(long *)(pTVar6 + 0x28);
          uVar7 = uVar7 + 1;
        } while (uVar7 < ((ulong)(*(long *)(pTVar6 + 0x30) - lVar2) >> 3 & 0xffffffff));
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


