// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetWheelShapeAutoHoldBrakeForce
// Entry Point: 009a6b10
// Size: 188 bytes
// Signature: undefined __thiscall enqueueSetWheelShapeAutoHoldBrakeForce(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, float param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeAutoHoldBrakeForce(TransformGroup*, unsigned
   int, float) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeAutoHoldBrakeForce
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,float param_3)

{
  long lVar1;
  long lVar2;
  TransformGroup *local_98;
  undefined4 local_90;
  uint local_88;
  float local_84;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    lVar2 = RawTransformGroup::getPhysicsObject();
    if ((*(uint *)(lVar2 + 8) & 3) != 0) {
      local_90 = 10;
      local_98 = param_1;
      local_88 = param_2;
      local_84 = param_3;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((*(uint *)(lVar2 + 8) & 1) != 0)) {
        setWheelShapeAutoHoldBrakeForce(this,param_1,(SetWheelAutoHoldBrakeForce *)&local_88);
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_98);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


