// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetWheelShapeForcePoint
// Entry Point: 009a67dc
// Size: 200 bytes
// Signature: undefined __thiscall enqueueSetWheelShapeForcePoint(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, uint param_2, Vector3 * param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeForcePoint(TransformGroup*, unsigned int,
   Vector3 const&) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetWheelShapeForcePoint
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,uint param_2,Vector3 *param_3)

{
  long lVar1;
  long lVar2;
  TransformGroup *local_98;
  undefined4 local_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    lVar2 = RawTransformGroup::getPhysicsObject();
    if ((*(uint *)(lVar2 + 8) & 3) != 0) {
      local_84 = *(undefined8 *)param_3;
      local_7c = *(undefined4 *)(param_3 + 8);
      local_90 = 6;
      local_98 = param_1;
      local_88 = param_2;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((*(uint *)(lVar2 + 8) & 1) != 0)) {
        setWheelShapeForcePoint(this,param_1,(SetWheelForcePoint *)&local_88);
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


