// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getConstraint
// Entry Point: 00f340b0
// Size: 12 bytes
// Signature: undefined __thiscall getConstraint(btDiscreteDynamicsWorld * this, int param_1)


/* btDiscreteDynamicsWorld::getConstraint(int) const */

undefined8 __thiscall
btDiscreteDynamicsWorld::getConstraint(btDiscreteDynamicsWorld *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x130) + (long)param_1 * 8);
}


