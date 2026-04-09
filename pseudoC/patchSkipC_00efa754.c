// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: patchSkipC
// Entry Point: 00efa754
// Size: 48 bytes
// Signature: undefined __thiscall patchSkipC(BytecodeBuilder * this, ulong param_1, ulong param_2)


/* Luau::BytecodeBuilder::patchSkipC(unsigned long, unsigned long) */

bool __thiscall Luau::BytecodeBuilder::patchSkipC(BytecodeBuilder *this,ulong param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (int)param_2 + ~(uint)param_1;
  if (uVar1 < 0x100) {
    *(uint *)(*(long *)(this + 0x20) + param_1 * 4) =
         *(uint *)(*(long *)(this + 0x20) + param_1 * 4) | uVar1 * 0x1000000;
  }
  return uVar1 < 0x100;
}


