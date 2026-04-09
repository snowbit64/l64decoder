// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef3670
// Size: 28 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstTableProp> * this)


/* Luau::TempVector<Luau::AstTableProp>::~TempVector() */

void __thiscall
Luau::TempVector<Luau::AstTableProp>::~TempVector(TempVector<Luau::AstTableProp> *this)

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


