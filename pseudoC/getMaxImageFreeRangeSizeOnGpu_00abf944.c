// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxImageFreeRangeSizeOnGpu
// Entry Point: 00abf944
// Size: 264 bytes
// Signature: undefined getMaxImageFreeRangeSizeOnGpu(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanMemoryAllocator::getMaxImageFreeRangeSizeOnGpu() */

undefined4 VulkanMemoryAllocator::getMaxImageFreeRangeSizeOnGpu(void)

{
  long lVar1;
  uint uVar2;
  long in_x0;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(char *)(in_x0 + 0x27c) != '\0') {
    Mutex::enterCriticalSection();
    *(undefined4 *)(in_x0 + 0x278) = 0;
    if (*(int *)(in_x0 + 0x10) != 0) {
      uVar4 = 0;
      do {
        if ((*(byte *)(in_x0 + uVar4 * 8 + 0x14) & 1) != 0) {
          lVar5 = *(long *)(in_x0 + 0x218);
          lVar3 = lVar5 + uVar4 * 0x38;
          lVar1 = *(long *)(lVar3 + 8);
          lVar3 = *(long *)(lVar3 + 0x10);
          while (lVar1 != lVar3) {
                    /* try { // try from 00abf9c8 to 00abf9cb has its CatchHandler @ 00abfa54 */
            uVar2 = SubAllocator::getMaxFreeSize();
            lVar1 = lVar1 + 8;
            if (uVar2 <= *(uint *)(in_x0 + 0x278)) {
              uVar2 = *(uint *)(in_x0 + 0x278);
            }
            *(uint *)(in_x0 + 0x278) = uVar2;
          }
          lVar5 = lVar5 + uVar4 * 0x38;
          lVar1 = *(long *)(lVar5 + 0x20);
          lVar3 = *(long *)(lVar5 + 0x28);
          while (lVar1 != lVar3) {
                    /* try { // try from 00abfa00 to 00abfa03 has its CatchHandler @ 00abfa50 */
            uVar2 = SubAllocator::getMaxFreeSize();
            lVar1 = lVar1 + 8;
            if (uVar2 <= *(uint *)(in_x0 + 0x278)) {
              uVar2 = *(uint *)(in_x0 + 0x278);
            }
            *(uint *)(in_x0 + 0x278) = uVar2;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_x0 + 0x10));
    }
    *(undefined *)(in_x0 + 0x27c) = 0;
                    /* try { // try from 00abfa28 to 00abfa2f has its CatchHandler @ 00abfa4c */
    Mutex::leaveCriticalSection();
  }
  return *(undefined4 *)(in_x0 + 0x278);
}


