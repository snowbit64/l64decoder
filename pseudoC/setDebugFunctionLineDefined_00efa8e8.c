// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setDebugFunctionLineDefined
// Entry Point: 00efa8e8
// Size: 28 bytes
// Signature: undefined __thiscall setDebugFunctionLineDefined(BytecodeBuilder * this, int param_1)


/* Luau::BytecodeBuilder::setDebugFunctionLineDefined(int) */

void __thiscall
Luau::BytecodeBuilder::setDebugFunctionLineDefined(BytecodeBuilder *this,int param_1)

{
  *(int *)(*(long *)this + (ulong)*(uint *)(this + 0x18) * 0x58 + 0x20) = param_1;
  return;
}


