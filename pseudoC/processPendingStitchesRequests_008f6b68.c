// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processPendingStitchesRequests
// Entry Point: 008f6b68
// Size: 172 bytes
// Signature: undefined processPendingStitchesRequests(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TerrainPatchOccluderManager::processPendingStitchesRequests() */

void TerrainPatchOccluderManager::processPendingStitchesRequests(void)

{
  size_t __n;
  TerrainPatchOccluderManager *in_x0;
  RequestDesc *pRVar1;
  RequestDesc *__dest;
  
  __dest = *(RequestDesc **)(in_x0 + 0x158);
  pRVar1 = *(RequestDesc **)(in_x0 + 0x160);
  if (__dest != pRVar1) {
    do {
      while (*(char *)(*(long *)(in_x0 + 0x118) +
                       (ulong)(uint)(*(int *)(__dest + 0xc) +
                                    *(int *)(in_x0 + 0xf8) * *(int *)(__dest + 0x10)) * 0x380 +
                       (ulong)*(uint *)(__dest + 8) * 0x80 + (ulong)*(uint *)(__dest + 0x14) * 0x20)
             != '\0') {
        __dest = __dest + 0x18;
        if (__dest == pRVar1) {
          return;
        }
      }
      sendRequestToWorker(in_x0,__dest);
      __n = *(long *)(in_x0 + 0x160) - (long)(__dest + 0x18);
      if (__n != 0) {
        memmove(__dest,__dest + 0x18,__n);
      }
      pRVar1 = __dest + __n;
      *(RequestDesc **)(in_x0 + 0x160) = pRVar1;
    } while (__dest != pRVar1);
  }
  return;
}


