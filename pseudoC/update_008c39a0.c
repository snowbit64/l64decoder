// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008c39a0
// Size: 196 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* OcclusionCullingManager::update() */

void OcclusionCullingManager::update(void)

{
  void *__dest;
  size_t __n;
  long *in_x0;
  long lVar1;
  long lVar2;
  long lVar3;
  GsMaskedOcclusionCulling *this;
  ulong uVar4;
  ulong uVar5;
  
  lVar2 = *in_x0;
  lVar1 = in_x0[1];
  lVar3 = in_x0[3] + 1;
  in_x0[3] = lVar3;
  if ((lVar2 != lVar1) && (0 < (int)((ulong)(lVar1 - lVar2) >> 4))) {
    uVar5 = (ulong)(lVar1 - lVar2) >> 4 & 0xffffffff;
    while( true ) {
      uVar4 = (ulong)((int)uVar5 - 1);
      if (5 < (ulong)(lVar3 - *(long *)(lVar2 + uVar4 * 0x10))) {
        this = *(GsMaskedOcclusionCulling **)(lVar2 + uVar4 * 0x10 + 8);
        if (this != (GsMaskedOcclusionCulling *)0x0) {
          GsMaskedOcclusionCulling::~GsMaskedOcclusionCulling(this);
          operator_delete(this);
          lVar2 = *in_x0;
          lVar1 = in_x0[1];
        }
        __dest = (void *)(lVar2 + uVar4 * 0x10);
        __n = lVar1 - (long)(void *)((long)__dest + 0x10);
        if (__n != 0) {
          memmove(__dest,(void *)((long)__dest + 0x10),__n);
        }
        lVar1 = (long)__dest + __n;
        in_x0[1] = lVar1;
      }
      if (uVar5 < 2) break;
      lVar2 = *in_x0;
      uVar5 = uVar5 - 1;
      lVar3 = in_x0[3];
    }
  }
  return;
}


