// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Decimator
// Entry Point: 008fa214
// Size: 128 bytes
// Signature: undefined __thiscall ~Decimator(Decimator * this)


/* Decimator::~Decimator() */

void __thiscall Decimator::~Decimator(Decimator *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  lVar3 = *(long *)(this + 8);
  if (lVar3 != 0) {
    lVar2 = *(long *)(lVar3 + -8);
    if (lVar2 != 0) {
      lVar2 = lVar2 << 5;
      do {
        pvVar1 = *(void **)(lVar3 + lVar2 + -0x20);
        if (pvVar1 != (void *)0x0) {
          *(void **)(lVar3 + lVar2 + -0x18) = pvVar1;
          operator_delete(pvVar1);
        }
        lVar2 = lVar2 + -0x20;
      } while (lVar2 != 0);
    }
    operator_delete__((long *)(lVar3 + -8));
    return;
  }
  return;
}


