// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: UserAttribute
// Entry Point: 00a5d048
// Size: 12 bytes
// Signature: undefined __thiscall UserAttribute(UserAttribute * this, TYPE param_1)


/* UserAttribute::UserAttribute(UserAttribute::TYPE) */

void __thiscall UserAttribute::UserAttribute(UserAttribute *this,TYPE param_1)

{
  *(TYPE *)(this + 8) = param_1;
  *(undefined8 *)this = 0;
  return;
}


