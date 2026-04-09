// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: destroySwapChain
// Entry Point: 00ad5c7c
// Size: 200 bytes
// Signature: undefined destroySwapChain(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanRenderWindow::destroySwapChain() */

void VulkanRenderWindow::destroySwapChain(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(in_x0 + 0x10);
  lVar3 = *(long *)(in_x0 + 0x18);
  if (lVar3 == lVar2) {
    lVar1 = *(long *)(in_x0 + 0x30);
    lVar2 = lVar3;
  }
  else {
    uVar4 = 0;
    do {
      (*vkDestroyImageView)
                (*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x18),*(undefined8 *)(lVar2 + uVar4 * 8),
                 0);
      lVar2 = *(long *)(in_x0 + 0x10);
      lVar3 = *(long *)(in_x0 + 0x18);
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (uVar4 < (ulong)(lVar3 - lVar2 >> 3));
    lVar1 = *(long *)(in_x0 + 0x30);
  }
  if (lVar1 != 0) {
    (*vkDestroySwapchainKHR)(*(undefined8 *)(*(long *)(in_x0 + 0xb8) + 0x18),lVar1,0);
    lVar2 = *(long *)(in_x0 + 0x10);
    lVar3 = *(long *)(in_x0 + 0x18);
    *(undefined8 *)(in_x0 + 0x30) = 0;
  }
  if (lVar3 != lVar2) {
    *(long *)(in_x0 + 0x18) = lVar2;
  }
  if (*(long *)(in_x0 + 0x40) != *(long *)(in_x0 + 0x38)) {
    *(long *)(in_x0 + 0x40) = *(long *)(in_x0 + 0x38);
  }
  *(undefined *)(in_x0 + 0x56) = 0;
  return;
}


