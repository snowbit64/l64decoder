// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMainFunction
// Entry Point: 00ef914c
// Size: 8 bytes
// Signature: undefined __thiscall setMainFunction(BytecodeBuilder * this, uint param_1)


/* Luau::BytecodeBuilder::setMainFunction(unsigned int) */

void __thiscall Luau::BytecodeBuilder::setMainFunction(BytecodeBuilder *this,uint param_1)

{
  *(uint *)(this + 0x1c) = param_1;
  return;
}


