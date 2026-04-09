// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dtFreeNavMeshQuery
// Entry Point: 00dd2e8c
// Size: 100 bytes
// Signature: undefined __cdecl dtFreeNavMeshQuery(dtNavMeshQuery * param_1)


/* dtFreeNavMeshQuery(dtNavMeshQuery*) */

void dtFreeNavMeshQuery(dtNavMeshQuery *param_1)

{
  if (param_1 != (dtNavMeshQuery *)0x0) {
    if (*(dtNodePool **)(param_1 + 0x48) != (dtNodePool *)0x0) {
      dtNodePool::~dtNodePool(*(dtNodePool **)(param_1 + 0x48));
    }
    if (*(dtNodePool **)(param_1 + 0x50) != (dtNodePool *)0x0) {
      dtNodePool::~dtNodePool(*(dtNodePool **)(param_1 + 0x50));
    }
    if (*(dtNodeQueue **)(param_1 + 0x58) != (dtNodeQueue *)0x0) {
      dtNodeQueue::~dtNodeQueue(*(dtNodeQueue **)(param_1 + 0x58));
    }
    dtFree(*(void **)(param_1 + 0x48));
    dtFree(*(void **)(param_1 + 0x50));
    dtFree(*(void **)(param_1 + 0x58));
    dtFree(param_1);
    return;
  }
  return;
}


