// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueSetVelocity
// Entry Point: 009a78e8
// Size: 320 bytes
// Signature: undefined __thiscall enqueueSetVelocity(Bt2ScenegraphPhysicsContext * this, TransformGroup * param_1, Vector3 * param_2, bool param_3)


/* Bt2ScenegraphPhysicsContext::enqueueSetVelocity(TransformGroup*, Vector3 const&, bool) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueSetVelocity
          (Bt2ScenegraphPhysicsContext *this,TransformGroup *param_1,Vector3 *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  btCollisionObject *this_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TransformGroup *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined local_8c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    lVar3 = RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(lVar3 + 8);
    if ((((uVar1 ^ 0xffffffff) & 0x88) == 0) && ((uVar1 & 3) != 0)) {
      uVar7 = *(undefined4 *)param_2;
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar6 = *(undefined4 *)(param_2 + 8);
      local_a0 = 2;
      local_a8 = param_1;
      local_98 = uVar7;
      uStack_94 = uVar5;
      local_90 = uVar6;
      local_8c = param_3;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
        lVar3 = RawTransformGroup::getPhysicsObject();
        if ((*(byte *)(lVar3 + 8) >> 3 & 1) != 0) {
          lVar3 = RawTransformGroup::getPhysicsObject();
          this_00 = *(btCollisionObject **)(lVar3 + 0x30);
          if ((this_00 != (btCollisionObject *)0x0) && (((byte)this_00[0xe0] & 3) == 0)) {
            *(int *)(this_00 + 0x148) = *(int *)(this_00 + 0x148) + 1;
            if (param_3) {
              *(undefined4 *)(this_00 + 0x17c) = uVar7;
              puVar4 = (undefined4 *)(this_00 + 0x188);
              *(undefined4 *)(this_00 + 0x180) = uVar5;
              *(undefined4 *)(this_00 + 0x184) = uVar6;
            }
            else {
              puVar4 = (undefined4 *)(this_00 + 0x198);
              *(undefined4 *)(this_00 + 0x18c) = uVar7;
              *(undefined4 *)(this_00 + 400) = uVar5;
              *(undefined4 *)(this_00 + 0x194) = uVar6;
            }
            *puVar4 = 0;
            btCollisionObject::activate(this_00,false);
          }
        }
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


