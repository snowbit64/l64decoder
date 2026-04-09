// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00eef6f0
// Size: 28 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::Parser::Binding> * this)


/* Luau::TempVector<Luau::Parser::Binding>::~TempVector() */

void __thiscall
Luau::TempVector<Luau::Parser::Binding>::~TempVector(TempVector<Luau::Parser::Binding> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  lVar1 = *plVar2 + *(long *)(this + 8) * 0x20;
  if (lVar1 != plVar2[1]) {
    plVar2[1] = lVar1;
  }
  return;
}


