// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef670c
// Size: 36 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstExprTable::Item> * this)


/* Luau::TempVector<Luau::AstExprTable::Item>::~TempVector() */

void __thiscall
Luau::TempVector<Luau::AstExprTable::Item>::~TempVector(TempVector<Luau::AstExprTable::Item> *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)this;
  lVar2 = *plVar1 + *(long *)(this + 8) * 0x18;
  if (lVar2 != plVar1[1]) {
    plVar1[1] = lVar2;
  }
  return;
}


