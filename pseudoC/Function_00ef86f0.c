// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Function
// Entry Point: 00ef86f0
// Size: 100 bytes
// Signature: undefined __thiscall ~Function(Function * this)


/* Luau::BytecodeBuilder::Function::~Function() */

void __thiscall Luau::BytecodeBuilder::Function::~Function(Function *this)

{
  Function FVar1;
  
  if (((byte)this[0x40] & 1) == 0) {
    FVar1 = this[0x28];
  }
  else {
    operator_delete(*(void **)(this + 0x50));
    FVar1 = this[0x28];
  }
  if (((byte)FVar1 & 1) == 0) {
    FVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x38));
    FVar1 = *this;
  }
  if (((byte)FVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


