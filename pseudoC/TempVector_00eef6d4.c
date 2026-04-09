// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00eef6d4
// Size: 28 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstExpr*> * this)


/* Luau::TempVector<Luau::AstExpr*>::~TempVector() */

void __thiscall Luau::TempVector<Luau::AstExpr*>::~TempVector(TempVector<Luau::AstExpr*> *this)

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


