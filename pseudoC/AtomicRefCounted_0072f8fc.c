// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AtomicRefCounted
// Entry Point: 0072f8fc
// Size: 4 bytes
// Signature: undefined __thiscall ~AtomicRefCounted(AtomicRefCounted * this)


/* AtomicRefCounted::~AtomicRefCounted() */

void __thiscall AtomicRefCounted::~AtomicRefCounted(AtomicRefCounted *this)

{
  operator_delete(this);
  return;
}


