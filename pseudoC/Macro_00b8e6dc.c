// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Macro
// Entry Point: 00b8e6dc
// Size: 152 bytes
// Signature: undefined __thiscall ~Macro(Macro * this)


/* Preprocessor::Macro::~Macro() */

void __thiscall Preprocessor::Macro::~Macro(Macro *this)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(this + 0x38);
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar2 + -8);
    if (lVar1 != 0) {
      lVar1 = lVar1 * 0x18;
      do {
        if ((*(byte *)(lVar2 + lVar1 + -0x18) & 1) != 0) {
          operator_delete(*(void **)(lVar2 + lVar1 + -8));
        }
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
    operator_delete__((long *)(lVar2 + -8));
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


