// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Grid
// Entry Point: 009d7c8c
// Size: 128 bytes
// Signature: undefined __thiscall ~Grid(Grid * this)


/* PoissonDiskUtil::Grid::~Grid() */

void __thiscall PoissonDiskUtil::Grid::~Grid(Grid *this)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar4 = *(void ***)(this + 0x10);
  if (ppvVar4 == (void **)0x0) {
    return;
  }
  ppvVar3 = *(void ***)(this + 0x18);
  ppvVar2 = ppvVar4;
  if (ppvVar3 != ppvVar4) {
    do {
      ppvVar2 = ppvVar3 + -3;
      pvVar1 = *ppvVar2;
      if (pvVar1 != (void *)0x0) {
        ppvVar3[-2] = pvVar1;
        operator_delete(pvVar1);
      }
      ppvVar3 = ppvVar2;
    } while (ppvVar2 != ppvVar4);
    ppvVar2 = *(void ***)(this + 0x10);
  }
  *(void ***)(this + 0x18) = ppvVar4;
  operator_delete(ppvVar2);
  return;
}


