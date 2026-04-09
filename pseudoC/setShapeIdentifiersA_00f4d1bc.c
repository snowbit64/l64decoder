// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setShapeIdentifiersA
// Entry Point: 00f4d1bc
// Size: 12 bytes
// Signature: undefined __thiscall setShapeIdentifiersA(btManifoldResult * this, int param_1, int param_2)


/* btManifoldResult::setShapeIdentifiersA(int, int) */

void __thiscall
btManifoldResult::setShapeIdentifiersA(btManifoldResult *this,int param_1,int param_2)

{
  *(int *)(this + 0x20) = param_1;
  *(int *)(this + 0x28) = param_2;
  return;
}


