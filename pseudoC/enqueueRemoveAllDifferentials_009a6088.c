// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveAllDifferentials
// Entry Point: 009a6088
// Size: 256 bytes
// Signature: undefined __thiscall enqueueRemoveAllDifferentials(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveAllDifferentials(TransformGroup*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueRemoveAllDifferentials
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  Bt2ScenegraphPhysicsContext *pBVar5;
  Bt2ScenegraphPhysicsContext *pBVar6;
  TransformGroup *local_88;
  undefined4 local_80;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((((param_1 != (TransformGroup *)0x0) &&
       (lVar3 = RawTransformGroup::getPhysicsObject(), lVar3 != 0)) &&
      (uVar1 = *(uint *)(lVar3 + 8), ((uVar1 ^ 0xffffffff) & 0x88) == 0)) && ((uVar1 & 3) != 0)) {
    local_80 = 0xd;
    local_88 = param_1;
    if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
      lVar3 = RawTransformGroup::getPhysicsObject();
      uVar4 = *(ulong *)(lVar3 + 0x30);
      if (((uVar4 != 0) && ((*(byte *)(uVar4 + 0xe0) & 3) == 0)) &&
         (pBVar6 = *(Bt2ScenegraphPhysicsContext **)(this + 400),
         pBVar6 != (Bt2ScenegraphPhysicsContext *)0x0)) {
        pBVar5 = this + 400;
        do {
          if (*(ulong *)(pBVar6 + 0x20) >= uVar4) {
            pBVar5 = pBVar6;
          }
          pBVar6 = *(Bt2ScenegraphPhysicsContext **)
                    (pBVar6 + (ulong)(*(ulong *)(pBVar6 + 0x20) < uVar4) * 8);
        } while (pBVar6 != (Bt2ScenegraphPhysicsContext *)0x0);
        if ((pBVar5 != this + 400) && (*(ulong *)(pBVar5 + 0x20) <= uVar4)) {
          Bt2RaycastVehicle::removeAllDifferentials();
        }
      }
    }
    else {
      SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                 (this + 0x170),(TransformCommand *)&local_88);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


