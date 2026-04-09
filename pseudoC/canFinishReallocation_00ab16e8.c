// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: canFinishReallocation
// Entry Point: 00ab16e8
// Size: 92 bytes
// Signature: undefined canFinishReallocation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanTextureObject::canFinishReallocation() */

undefined8 VulkanTextureObject::canFinishReallocation(void)

{
  long in_x0;
  ulong uVar1;
  long lVar2;
  
  uVar1 = VulkanRenderDevice::hasCopyQueue();
  if ((uVar1 & 1) != 0) {
    lVar2 = *(long *)(in_x0 + 0x58);
    if (lVar2 != 0) {
      if (*(ulong *)(lVar2 + 8) < *(ulong *)(in_x0 + 0x60)) {
        return 0;
      }
      *(long *)(in_x0 + 0x58) = 0;
      *(undefined8 *)(in_x0 + 0x60) = 0;
      return 1;
    }
  }
  return 1;
}


