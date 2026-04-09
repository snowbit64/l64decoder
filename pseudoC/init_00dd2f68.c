// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00dd2f68
// Size: 332 bytes
// Signature: undefined __thiscall init(dtNavMeshQuery * this, dtNavMesh * param_1, int param_2)


/* dtNavMeshQuery::init(dtNavMesh const*, int) */

undefined8 __thiscall dtNavMeshQuery::init(dtNavMeshQuery *this,dtNavMesh *param_1,int param_2)

{
  uint uVar1;
  dtNodePool *pdVar2;
  long lVar3;
  dtNodeQueue *pdVar4;
  int iVar5;
  
  pdVar2 = *(dtNodePool **)(this + 0x50);
  *(dtNavMesh **)this = param_1;
  if (pdVar2 != (dtNodePool *)0x0) {
    if (param_2 <= *(int *)(pdVar2 + 0x18)) {
      dtNodePool::clear();
      lVar3 = *(long *)(this + 0x48);
      goto joined_r0x00dd3040;
    }
    dtNodePool::~dtNodePool(pdVar2);
    dtFree(*(void **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  pdVar2 = (dtNodePool *)dtAlloc(0x28,0);
  if (param_2 + 3U < 7) {
    iVar5 = 1;
  }
  else {
    uVar1 = param_2 + 3U;
    if (-1 < param_2) {
      uVar1 = param_2;
    }
    uVar1 = ((int)uVar1 >> 2) - 1;
    uVar1 = uVar1 | uVar1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    iVar5 = (uVar1 | uVar1 >> 0x10) + 1;
  }
  dtNodePool::dtNodePool(pdVar2,param_2,iVar5);
  *(dtNodePool **)(this + 0x50) = pdVar2;
  lVar3 = *(long *)(this + 0x48);
joined_r0x00dd3040:
  if (lVar3 == 0) {
    pdVar2 = (dtNodePool *)dtAlloc(0x28,0);
    dtNodePool::dtNodePool(pdVar2,0x40,0x20);
    *(dtNodePool **)(this + 0x48) = pdVar2;
    pdVar4 = *(dtNodeQueue **)(this + 0x58);
  }
  else {
    dtNodePool::clear();
    pdVar4 = *(dtNodeQueue **)(this + 0x58);
  }
  if (pdVar4 != (dtNodeQueue *)0x0) {
    if (param_2 <= *(int *)(pdVar4 + 8)) {
      *(undefined4 *)(pdVar4 + 0xc) = 0;
      return 0x40000000;
    }
    dtNodeQueue::~dtNodeQueue(pdVar4);
    dtFree(*(void **)(this + 0x58));
    *(undefined8 *)(this + 0x58) = 0;
  }
  pdVar4 = (dtNodeQueue *)dtAlloc(0x10,0);
  dtNodeQueue::dtNodeQueue(pdVar4,param_2);
  *(dtNodeQueue **)(this + 0x58) = pdVar4;
  return 0x40000000;
}


