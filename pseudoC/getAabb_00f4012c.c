// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAabb
// Entry Point: 00f4012c
// Size: 36 bytes
// Signature: undefined __thiscall getAabb(btRigidBody * this, btVector3 * param_1, btVector3 * param_2)


/* btRigidBody::getAabb(btVector3&, btVector3&) const */

void __thiscall btRigidBody::getAabb(btRigidBody *this,btVector3 *param_1,btVector3 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00f4014c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 200) + 0x10))(*(long **)(this + 200),this + 8,param_1,param_2);
  return;
}


