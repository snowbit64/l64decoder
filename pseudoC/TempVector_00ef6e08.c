// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef6e08
// Size: 28 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstArray<char>> * this)


/* Luau::TempVector<Luau::AstArray<char> >::~TempVector() */

void __thiscall
Luau::TempVector<Luau::AstArray<char>>::~TempVector(TempVector<Luau::AstArray<char>> *this)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = *(long **)this;
  lVar1 = *plVar2 + *(long *)(this + 8) * 0x10;
  if (lVar1 != plVar2[1]) {
    plVar2[1] = lVar1;
  }
  return;
}


