// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddVehicleLink
// Entry Point: 009a5a74
// Size: 228 bytes
// Signature: undefined __thiscall enqueueAddVehicleLink(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, TransformGroup * param_2)


/* Bt2ScenegraphPhysicsContext::enqueueAddVehicleLink(TransformGroup*, TransformGroup*) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddVehicleLink
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,TransformGroup *param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  TransformGroup *local_98;
  undefined4 local_90;
  TransformGroup *local_88;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_1 != (TransformGroup *)0x0) && (param_2 != (TransformGroup *)0x0)) {
    lVar4 = RawTransformGroup::getPhysicsObject();
    lVar5 = RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(lVar4 + 8);
    if ((((uVar1 ^ 0xffffffff) & 0x88) == 0) &&
       (((uVar2 = *(uint *)(lVar5 + 8), ((uVar2 ^ 0xffffffff) & 0x88) == 0 && ((uVar1 & 3) != 0)) &&
        ((uVar2 & 3) != 0)))) {
      if (((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) &&
         ((uVar2 & 1) != 0)) {
        addVehicleLink((TransformGroup *)this,param_1);
      }
      else {
        local_90 = 0x12;
        local_98 = param_1;
        local_88 = param_2;
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_98);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


