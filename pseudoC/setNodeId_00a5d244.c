// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNodeId
// Entry Point: 00a5d244
// Size: 16 bytes
// Signature: undefined __thiscall setNodeId(UserAttribute * this, uint param_1)


/* UserAttribute::setNodeId(unsigned int) */

void __thiscall UserAttribute::setNodeId(UserAttribute *this,uint param_1)

{
  *(uint *)this = param_1;
  *(undefined4 *)(this + 8) = 5;
  return;
}


