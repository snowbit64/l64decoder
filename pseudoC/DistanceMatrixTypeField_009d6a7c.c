// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DistanceMatrixTypeField
// Entry Point: 009d6a7c
// Size: 68 bytes
// Signature: undefined __thiscall ~DistanceMatrixTypeField(DistanceMatrixTypeField * this)


/* ProceduralPlacementCacheManager::DistanceMatrixTypeField::~DistanceMatrixTypeField() */

void __thiscall
ProceduralPlacementCacheManager::DistanceMatrixTypeField::~DistanceMatrixTypeField
          (DistanceMatrixTypeField *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x10);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


