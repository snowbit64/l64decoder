// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~MeshDecimator
// Entry Point: 00d561bc
// Size: 188 bytes
// Signature: undefined __thiscall ~MeshDecimator(MeshDecimator * this)


/* HACD::MeshDecimator::~MeshDecimator() */

void __thiscall HACD::MeshDecimator::~MeshDecimator(MeshDecimator *this)

{
  void *pvVar1;
  void **ppvVar2;
  void *pvVar3;
  
  ReleaseMemory();
  pvVar1 = *(void **)(this + 0x70);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x40);
  if (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)(this + 0x48);
    if (pvVar3 == pvVar1) {
      *(void **)(this + 0x48) = pvVar1;
      operator_delete(pvVar1);
      return;
    }
    do {
      if (*(void **)((long)pvVar3 + -0x70) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar3 + -0x70));
      }
      ppvVar2 = (void **)((long)pvVar3 + -0x108);
      pvVar3 = (void *)((long)pvVar3 + -0x188);
      if (*ppvVar2 != (void *)0x0) {
        operator_delete__(*ppvVar2);
      }
    } while (pvVar3 != pvVar1);
    *(void **)(this + 0x48) = pvVar1;
    operator_delete(*(void **)(this + 0x40));
    return;
  }
  return;
}


