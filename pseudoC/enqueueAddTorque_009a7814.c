// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddTorque
// Entry Point: 009a7814
// Size: 212 bytes
// Signature: undefined __thiscall enqueueAddTorque(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, Vector3 * param_2, bool param_3)


/* Bt2ScenegraphPhysicsContext::enqueueAddTorque(TransformGroup*, Vector3 const&, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddTorque
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,Vector3 *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *this_00;
  TransformGroup *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined local_7c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    this_00 = (Bt2ScenegraphPhysicsContext *)RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(this_00 + 8);
    if ((((uVar1 ^ 0xffffffff) & 0x88) == 0) && ((uVar1 & 3) != 0)) {
      local_88 = *(undefined8 *)param_2;
      local_80 = *(undefined4 *)(param_2 + 8);
      local_90 = 1;
      local_98 = param_1;
      local_7c = param_3;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
        addTorque(this_00,param_1,(AddTorque *)&local_88);
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_98);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


