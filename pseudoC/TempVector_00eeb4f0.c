// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00eeb4f0
// Size: 28 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstStat*> * this)


/* Luau::TempVector<Luau::AstStat*>::~TempVector() */

void __thiscall Luau::TempVector<Luau::AstStat*>::~TempVector(TempVector<Luau::AstStat*> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  lVar1 = *plVar2 + *(long *)(this + 8) * 8;
  if (lVar1 != plVar2[1]) {
    plVar2[1] = lVar1;
  }
  return;
}


