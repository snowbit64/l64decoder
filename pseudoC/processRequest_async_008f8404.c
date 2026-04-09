// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processRequest_async
// Entry Point: 008f8404
// Size: 28 bytes
// Signature: undefined __thiscall processRequest_async(TerrainPatchOccluderManager * this, RequestDesc * param_1, Result * param_2)


/* TerrainPatchOccluderManager::processRequest_async(TerrainPatchOccluderManager::RequestDesc
   const&, TerrainPatchOccluderManager::Result&) */

void __thiscall
TerrainPatchOccluderManager::processRequest_async
          (TerrainPatchOccluderManager *this,RequestDesc *param_1,Result *param_2)

{
  if (*(long *)(this + 0xe8) == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    processRequestTypeStitch_async(this,param_1,param_2);
    return;
  }
  processRequestTypeOccluder_async(this,param_1,param_2);
  return;
}


