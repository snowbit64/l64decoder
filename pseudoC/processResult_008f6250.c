// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processResult
// Entry Point: 008f6250
// Size: 164 bytes
// Signature: undefined __thiscall processResult(TerrainPatchOccluderManager * this, Result * param_1)


/* TerrainPatchOccluderManager::processResult(TerrainPatchOccluderManager::Result&) */

void __thiscall
TerrainPatchOccluderManager::processResult(TerrainPatchOccluderManager *this,Result *param_1)

{
  void *pvVar1;
  
  if (*(long *)param_1 != *(long *)(this + 0x68)) {
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 8))();
    }
    pvVar1 = *(void **)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (pvVar1 != (void *)0x0) {
      if (*(void **)((long)pvVar1 + 8) != (void *)0x0) {
        operator_delete__(*(void **)((long)pvVar1 + 8));
      }
      operator_delete(pvVar1);
    }
    *(undefined8 *)(param_1 + 0x28) = 0;
    if (*(long **)(param_1 + 0x30) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x30) + 8))();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    processResultTypeStitch(this,param_1);
    return;
  }
  processResultTypeOccluder(this,param_1);
  return;
}


