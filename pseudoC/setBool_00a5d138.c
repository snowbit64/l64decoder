// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setBool
// Entry Point: 00a5d138
// Size: 12 bytes
// Signature: undefined __thiscall setBool(UserAttribute * this, bool param_1)


/* UserAttribute::setBool(bool) */

void __thiscall UserAttribute::setBool(UserAttribute *this,bool param_1)

{
  *(undefined4 *)(this + 8) = 0;
  *this = (UserAttribute)param_1;
  return;
}


