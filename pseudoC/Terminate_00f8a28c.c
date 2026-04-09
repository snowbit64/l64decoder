// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Terminate
// Entry Point: 00f8a28c
// Size: 140 bytes
// Signature: undefined __cdecl Terminate(float param_1)


/* btSoftBody::CJoint::Terminate(float) */

void btSoftBody::CJoint::Terminate(float param_1)

{
  long lVar1;
  long in_x0;
  undefined8 uVar2;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (0.0 < *(float *)(in_x0 + 0x60)) {
    local_2c = 0;
    uVar2 = *(undefined8 *)(in_x0 + 0x74);
    local_38 = CONCAT44(-(float)((ulong)uVar2 >> 0x20),-(float)uVar2);
    local_30 = -*(float *)(in_x0 + 0x7c);
    Body::applyDImpulse((Body *)(in_x0 + 8),(btVector3 *)&local_38,(btVector3 *)(in_x0 + 0xc0));
    Body::applyDImpulse((Body *)(in_x0 + 0x20),(btVector3 *)(undefined8 *)(in_x0 + 0x74),
                        (btVector3 *)(in_x0 + 0xd0));
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


