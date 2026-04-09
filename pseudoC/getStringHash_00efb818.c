// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStringHash
// Entry Point: 00efb818
// Size: 52 bytes
// Signature: undefined __thiscall getStringHash(BytecodeBuilder * this, StringRef param_1)


/* Luau::BytecodeBuilder::getStringHash(Luau::BytecodeBuilder::StringRef) */

ulong __thiscall Luau::BytecodeBuilder::getStringHash(BytecodeBuilder *this,ulong param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 != 0) {
    uVar3 = param_2 & 0xffffffff;
    do {
      lVar1 = param_2 - 1;
      uVar2 = (uint)uVar3;
      param_2 = param_2 - 1;
      uVar3 = (ulong)(uVar2 * 0x20 + (uVar2 >> 2) + (uint)(byte)this[lVar1] ^ uVar2);
    } while (param_2 != 0);
    return uVar3;
  }
  return 0;
}


