// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setInt
// Entry Point: 00a5d144
// Size: 16 bytes
// Signature: undefined __thiscall setInt(UserAttribute * this, int param_1)


/* UserAttribute::setInt(int) */

void __thiscall UserAttribute::setInt(UserAttribute *this,int param_1)

{
  *(int *)this = param_1;
  *(undefined4 *)(this + 8) = 1;
  return;
}


