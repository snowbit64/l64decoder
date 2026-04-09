// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SHC_PoolAllocator
// Entry Point: 00c55a0c
// Size: 56 bytes
// Signature: undefined __thiscall ~SHC_PoolAllocator(SHC_PoolAllocator * this)


/* SHC_PoolAllocator::~SHC_PoolAllocator() */

void __thiscall SHC_PoolAllocator::~SHC_PoolAllocator(SHC_PoolAllocator *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)*(void **)(this + 0x30);
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete__(ppvVar1);
    *(void **)(this + 0x30) = pvVar2;
    ppvVar1 = (void **)pvVar2;
  }
  return;
}


