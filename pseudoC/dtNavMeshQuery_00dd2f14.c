// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~dtNavMeshQuery
// Entry Point: 00dd2f14
// Size: 84 bytes
// Signature: undefined __thiscall ~dtNavMeshQuery(dtNavMeshQuery * this)


/* dtNavMeshQuery::~dtNavMeshQuery() */

void __thiscall dtNavMeshQuery::~dtNavMeshQuery(dtNavMeshQuery *this)

{
  if (*(dtNodePool **)(this + 0x48) != (dtNodePool *)0x0) {
    dtNodePool::~dtNodePool(*(dtNodePool **)(this + 0x48));
  }
  if (*(dtNodePool **)(this + 0x50) != (dtNodePool *)0x0) {
    dtNodePool::~dtNodePool(*(dtNodePool **)(this + 0x50));
  }
  if (*(dtNodeQueue **)(this + 0x58) != (dtNodeQueue *)0x0) {
    dtNodeQueue::~dtNodeQueue(*(dtNodeQueue **)(this + 0x58));
  }
  dtFree(*(void **)(this + 0x48));
  dtFree(*(void **)(this + 0x50));
  dtFree(*(void **)(this + 0x58));
  return;
}


