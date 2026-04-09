// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ef7f74
// Size: 60 bytes
// Signature: undefined __thiscall operator()(ConstantKeyHash * this, ConstantKey * param_1)


/* Luau::BytecodeBuilder::ConstantKeyHash::TEMPNAMEPLACEHOLDERVALUE(Luau::BytecodeBuilder::ConstantKey
   const&) const */

int __thiscall
Luau::BytecodeBuilder::ConstantKeyHash::operator()(ConstantKeyHash *this,ConstantKey *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)param_1 * 0x5bd1e995 ^ *(uint *)(param_1 + 0xc);
  uVar2 = (*(uint *)(param_1 + 8) ^ uVar1 >> 0x12) * 0x5bd1e995;
  uVar1 = (uVar1 ^ uVar2 >> 0x16) * 0x5bd1e995;
  return (uVar1 ^ (uVar2 ^ uVar1 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995;
}


