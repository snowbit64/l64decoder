// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~BaseTerrainSyncer
// Entry Point: 008ede84
// Size: 236 bytes
// Signature: undefined __thiscall ~BaseTerrainSyncer(BaseTerrainSyncer * this)


/* BaseTerrainSyncer::~BaseTerrainSyncer() */

void __thiscall BaseTerrainSyncer::~BaseTerrainSyncer(BaseTerrainSyncer *this)

{
  void *pvVar1;
  long lVar2;
  void **ppvVar3;
  ulong uVar4;
  
  lVar2 = *(long *)this;
  if (*(long *)(this + 8) != lVar2) {
    uVar4 = 0;
    do {
      ppvVar3 = *(void ***)(lVar2 + uVar4 * 0x20 + 0x10);
      if (ppvVar3 != (void **)0x0) {
        if (*ppvVar3 != (void *)0x0) {
          operator_delete__(*ppvVar3);
        }
        operator_delete(ppvVar3);
        lVar2 = *(long *)this;
      }
      ppvVar3 = *(void ***)(lVar2 + uVar4 * 0x20 + 0x18);
      if (ppvVar3 != (void **)0x0) {
        if (*ppvVar3 != (void *)0x0) {
          operator_delete__(*ppvVar3);
        }
        operator_delete(ppvVar3);
        lVar2 = *(long *)this;
      }
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(*(long *)(this + 8) - lVar2 >> 5));
  }
  ppvVar3 = *(void ***)(this + 0x18);
  if (ppvVar3 != (void **)0x0) {
    if (*ppvVar3 != (void *)0x0) {
      operator_delete__(*ppvVar3);
    }
    operator_delete(ppvVar3);
  }
  ppvVar3 = *(void ***)(this + 0x20);
  if (ppvVar3 != (void **)0x0) {
    if (*ppvVar3 != (void *)0x0) {
      operator_delete__(*ppvVar3);
    }
    operator_delete(ppvVar3);
  }
  pvVar1 = *(void **)this;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 8) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


