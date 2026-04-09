// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFreePolyMeshDetail
// Entry Point: 00dd9cdc
// Size: 64 bytes
// Signature: undefined __cdecl rcFreePolyMeshDetail(rcPolyMeshDetail * param_1)


/* rcFreePolyMeshDetail(rcPolyMeshDetail*) */

void rcFreePolyMeshDetail(rcPolyMeshDetail *param_1)

{
  if (param_1 != (rcPolyMeshDetail *)0x0) {
    rcFree(*(void **)param_1);
    rcFree(*(void **)(param_1 + 8));
    rcFree(*(void **)(param_1 + 0x10));
    rcFree(param_1);
    return;
  }
  return;
}


