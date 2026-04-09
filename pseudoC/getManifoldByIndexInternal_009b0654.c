// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getManifoldByIndexInternal
// Entry Point: 009b0654
// Size: 12 bytes
// Signature: undefined __thiscall getManifoldByIndexInternal(btCollisionDispatcher * this, int param_1)


/* btCollisionDispatcher::getManifoldByIndexInternal(int) */

undefined8 __thiscall
btCollisionDispatcher::getManifoldByIndexInternal(btCollisionDispatcher *this,int param_1)

{
  return *(undefined8 *)(*(long *)(this + 0x20) + (long)param_1 * 8);
}


