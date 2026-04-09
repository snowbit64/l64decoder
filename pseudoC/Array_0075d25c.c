// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Array
// Entry Point: 0075d25c
// Size: 124 bytes
// Signature: undefined __thiscall ~Array(Array * this)


/* JSONUtil::Array::~Array() */

void __thiscall JSONUtil::Array::~Array(Array *this)

{
  void **ppvVar1;
  void **ppvVar2;
  void *pvVar3;
  
  ppvVar2 = *(void ***)this;
  ppvVar1 = *(void ***)(this + 8);
  if (ppvVar2 != ppvVar1) {
    do {
      pvVar3 = *ppvVar2;
      if (pvVar3 != (void *)0x0) {
        Atom::clear();
        operator_delete(pvVar3);
      }
      ppvVar2 = ppvVar2 + 1;
    } while (ppvVar2 != ppvVar1);
    ppvVar2 = *(void ***)this;
  }
  if (ppvVar2 == (void **)0x0) {
    return;
  }
  *(void ***)(this + 8) = ppvVar2;
  operator_delete(ppvVar2);
  return;
}


