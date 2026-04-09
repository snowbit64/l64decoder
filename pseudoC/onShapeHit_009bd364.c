// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onShapeHit
// Entry Point: 009bd364
// Size: 196 bytes
// Signature: undefined __thiscall onShapeHit(Bt2KinematicCharacterController * this, btRigidBody * param_1, int param_2, btVector3 * param_3, btVector3 * param_4)


/* Bt2KinematicCharacterController::onShapeHit(btRigidBody*, int, btVector3 const&, btVector3
   const&) */

void __thiscall
Bt2KinematicCharacterController::onShapeHit
          (Bt2KinematicCharacterController *this,btRigidBody *param_1,int param_2,btVector3 *param_3
          ,btVector3 *param_4)

{
  long lVar1;
  undefined8 local_48;
  float local_40;
  undefined4 local_3c;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 == 1) && ((*(uint *)(param_1 + 0xe0) & 3) == 0)) {
    local_2c = 0;
    local_3c = 0;
    local_38 = CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) -
                        (float)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20),
                        (float)*(undefined8 *)param_3 - (float)*(undefined8 *)(param_1 + 0x38));
    local_40 = *(float *)(this + 0x50) * -*(float *)(this + 0xcc);
    local_30 = *(float *)(param_3 + 8) - *(float *)(param_1 + 0x40);
    local_48 = CONCAT44((float)((ulong)*(undefined8 *)param_4 >> 0x20) * local_40,
                        (float)*(undefined8 *)param_4 * local_40);
    local_40 = local_40 * *(float *)(param_4 + 8);
    btRigidBody::applyImpulse(param_1,(btVector3 *)&local_48,(btVector3 *)&local_38);
    btCollisionObject::activate((btCollisionObject *)param_1,false);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


