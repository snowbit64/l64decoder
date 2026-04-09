// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SimpleCullingStructure
// Entry Point: 008c4b30
// Size: 24 bytes
// Signature: undefined __thiscall ~SimpleCullingStructure(SimpleCullingStructure * this)


/* SimpleCullingStructure::~SimpleCullingStructure() */

void __thiscall SimpleCullingStructure::~SimpleCullingStructure(SimpleCullingStructure *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


