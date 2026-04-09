// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortUsedPagesByFreeSpace
// Entry Point: 00abf8d8
// Size: 108 bytes
// Signature: undefined sortUsedPagesByFreeSpace(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanMemoryAllocator::sortUsedPagesByFreeSpace() */

void VulkanMemoryAllocator::sortUsedPagesByFreeSpace(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(in_x0 + 0x220);
  for (lVar4 = *(long *)(in_x0 + 0x218); lVar4 != lVar5; lVar4 = lVar4 + 0x38) {
    lVar3 = *(long *)(lVar4 + 8);
    lVar1 = *(long *)(lVar4 + 0x10);
    lVar2 = lVar3;
    if (lVar3 != lVar1) {
      do {
        lVar3 = lVar3 + 8;
        SubAllocator::updateFreeSize();
      } while (lVar3 != lVar1);
      lVar3 = *(long *)(lVar4 + 8);
      lVar2 = *(long *)(lVar4 + 0x10);
    }
    FUN_00abfd3c(lVar3,lVar2);
  }
  return;
}


