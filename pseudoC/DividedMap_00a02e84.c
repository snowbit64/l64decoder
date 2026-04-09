// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DividedMap
// Entry Point: 00a02e84
// Size: 16 bytes
// Signature: undefined __thiscall ~DividedMap(DividedMap * this)


/* PersistentShadowMap::DividedMap::~DividedMap() */

void __thiscall PersistentShadowMap::DividedMap::~DividedMap(DividedMap *this)

{
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
    return;
  }
  return;
}


