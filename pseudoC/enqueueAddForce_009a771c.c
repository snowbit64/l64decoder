// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddForce
// Entry Point: 009a771c
// Size: 248 bytes
// Signature: undefined __thiscall enqueueAddForce(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, Vector3 * param_2, Vector3 * param_3, bool param_4, bool param_5)


/* Bt2ScenegraphPhysicsContext::enqueueAddForce(TransformGroup*, Vector3 const&, Vector3 const&,
   bool, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddForce
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,Vector3 *param_2,
          Vector3 *param_3,bool param_4,bool param_5)

{
  uint uVar1;
  long lVar2;
  Bt2ScenegraphPhysicsContext *this_00;
  TransformGroup *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined local_80;
  undefined local_7f;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    this_00 = (Bt2ScenegraphPhysicsContext *)RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(this_00 + 8);
    if ((((uVar1 ^ 0xffffffff) & 0x88) == 0) && ((uVar1 & 3) != 0)) {
      local_98 = *(undefined8 *)param_2;
      local_90 = *(undefined4 *)(param_2 + 8);
      local_8c = *(undefined8 *)param_3;
      local_84 = *(undefined4 *)(param_3 + 8);
      local_a0 = 0;
      local_a8 = param_1;
      local_80 = param_4;
      local_7f = param_5;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
        addForce(this_00,param_1,(AddForce *)&local_98);
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_a8);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


