// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef6a54
// Size: 28 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstGenericTypePack> * this)


/* Luau::TempVector<Luau::AstGenericTypePack>::~TempVector() */

void __thiscall
Luau::TempVector<Luau::AstGenericTypePack>::~TempVector(TempVector<Luau::AstGenericTypePack> *this)

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


