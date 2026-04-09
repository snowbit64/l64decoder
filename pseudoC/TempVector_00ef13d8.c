// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~TempVector
// Entry Point: 00ef13d8
// Size: 36 bytes
// Signature: undefined __thiscall ~TempVector(TempVector<Luau::AstDeclaredClassProp> * this)


/* Luau::TempVector<Luau::AstDeclaredClassProp>::~TempVector() */

void __thiscall
Luau::TempVector<Luau::AstDeclaredClassProp>::~TempVector
          (TempVector<Luau::AstDeclaredClassProp> *this)

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


