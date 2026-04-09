// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rcFreePolyMesh
// Entry Point: 00dd9c64
// Size: 80 bytes
// Signature: undefined __cdecl rcFreePolyMesh(rcPolyMesh * param_1)


/* rcFreePolyMesh(rcPolyMesh*) */

void rcFreePolyMesh(rcPolyMesh *param_1)

{
  if (param_1 != (rcPolyMesh *)0x0) {
    rcFree(*(void **)param_1);
    rcFree(*(void **)(param_1 + 8));
    rcFree(*(void **)(param_1 + 0x10));
    rcFree(*(void **)(param_1 + 0x18));
    rcFree(*(void **)(param_1 + 0x20));
    rcFree(param_1);
    return;
  }
  return;
}


