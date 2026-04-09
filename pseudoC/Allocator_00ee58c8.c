// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Allocator
// Entry Point: 00ee58c8
// Size: 48 bytes
// Signature: undefined __thiscall ~Allocator(Allocator * this)


/* Luau::Allocator::~Allocator() */

void __thiscall Luau::Allocator::~Allocator(Allocator *this)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)*(void **)this;
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  return;
}


