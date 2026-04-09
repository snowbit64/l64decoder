// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BitVector
// Entry Point: 00b83130
// Size: 132 bytes
// Signature: undefined __thiscall ~BitVector(BitVector * this)


/* BitVector::~BitVector() */

void __thiscall BitVector::~BitVector(BitVector *this)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(this + 8);
  if (7 < iVar1 + 7U) {
    lVar2 = 0;
    do {
      if (*(void **)(*(long *)this + lVar2) != (void *)0x0) {
        operator_delete__(*(void **)(*(long *)this + lVar2));
      }
      lVar2 = lVar2 + 8;
    } while ((ulong)((iVar1 + 7U >> 3) + 0xffff >> 0x10) * 8 - lVar2 != 0);
  }
  if (*(void **)this != (void *)0x0) {
    operator_delete__(*(void **)this);
    return;
  }
  return;
}


