// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeIdentifiersB
// Entry Point: 00f4d1c8
// Size: 12 bytes
// Signature: undefined __thiscall setShapeIdentifiersB(btManifoldResult * this, int param_1, int param_2)


/* btManifoldResult::setShapeIdentifiersB(int, int) */

void __thiscall
btManifoldResult::setShapeIdentifiersB(btManifoldResult *this,int param_1,int param_2)

{
  *(int *)(this + 0x24) = param_1;
  *(int *)(this + 0x2c) = param_2;
  return;
}


