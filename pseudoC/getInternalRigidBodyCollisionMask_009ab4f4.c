// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInternalRigidBodyCollisionMask
// Entry Point: 009ab4f4
// Size: 20 bytes
// Signature: undefined __thiscall getInternalRigidBodyCollisionMask(Bt2ScenegraphPhysicsContext * this, btCollisionObject * param_1)


/* Bt2ScenegraphPhysicsContext::getInternalRigidBodyCollisionMask(btCollisionObject const*) */

uint __thiscall
Bt2ScenegraphPhysicsContext::getInternalRigidBodyCollisionMask
          (Bt2ScenegraphPhysicsContext *this,btCollisionObject *param_1)

{
  return (int)*(short *)(*(long *)(param_1 + 0xc0) + 8) |
         (uint)*(ushort *)(*(long *)(param_1 + 0xc0) + 10) << 0x10;
}


