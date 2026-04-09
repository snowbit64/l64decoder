// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createOcclusionCulling
// Entry Point: 008c3a64
// Size: 208 bytes
// Signature: undefined __thiscall createOcclusionCulling(OcclusionCullingManager * this, uint param_1, uint param_2)


/* OcclusionCullingManager::createOcclusionCulling(unsigned int, unsigned int) */

uint * __thiscall
OcclusionCullingManager::createOcclusionCulling
          (OcclusionCullingManager *this,uint param_1,uint param_2)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  size_t __n;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  
  lVar3 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  uVar1 = param_1 + 7 & 0xfffffff8;
  uVar2 = param_2 + 3 & 0xfffffffc;
  if ((lVar3 != lVar4) && (0 < (int)((ulong)(lVar4 - lVar3) >> 4))) {
    uVar5 = ((ulong)(lVar4 - lVar3) >> 4 & 0xffffffff) + 1;
    do {
      uVar6 = (ulong)((int)uVar5 - 2);
      puVar7 = *(uint **)(lVar3 + uVar6 * 0x10 + 8);
      if ((*puVar7 == uVar1) && (puVar7[1] == uVar2)) {
        __dest = (void *)(lVar3 + uVar6 * 0x10);
        __n = lVar4 - (long)(void *)((long)__dest + 0x10);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x10),__n);
        }
        *(size_t *)(this + 8) = (long)__dest + __n;
        return puVar7;
      }
      uVar5 = uVar5 - 1;
    } while (1 < uVar5);
  }
  puVar7 = (uint *)operator_new(0x18);
                    /* try { // try from 008c3b14 to 008c3b1f has its CatchHandler @ 008c3b34 */
  GsMaskedOcclusionCulling::GsMaskedOcclusionCulling((GsMaskedOcclusionCulling *)puVar7,uVar1,uVar2)
  ;
  return puVar7;
}


