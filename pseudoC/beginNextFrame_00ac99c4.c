// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginNextFrame
// Entry Point: 00ac99c4
// Size: 464 bytes
// Signature: undefined beginNextFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* VulkanCommandBuffer::beginNextFrame() */

void VulkanCommandBuffer::beginNextFrame(void)

{
  long lVar1;
  long in_x0;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = in_x0 + ((ulong)*(uint *)(*(long *)(in_x0 + 0x98) + 0x3b4) & 1) * 0x28;
  lVar2 = lVar3 + 0x5a0;
  *(long *)(in_x0 + 0x5f0) = lVar2;
  lVar3 = *(long *)(lVar3 + 0x5a0);
  uVar4 = *(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18);
  if (lVar3 != 0) {
    (*vkResetCommandBuffer)(lVar3,0);
    lVar2 = *(long *)(in_x0 + 0x5f0);
  }
  if (*(char *)(lVar2 + 0x20) == '\0') {
    (*vkDestroySemaphore)(uVar4,*(undefined8 *)(lVar2 + 8),0);
    local_58[0] = 9;
    local_50 = 0;
    local_48 = 0;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_58,0,&local_40);
    lVar2 = *(long *)(in_x0 + 0x5f0);
    *(undefined8 *)(lVar2 + 8) = local_40;
  }
  *(undefined *)(lVar2 + 0x20) = 0;
  if (*(char *)(lVar2 + 0x22) == '\0') {
    (*vkDestroySemaphore)(uVar4,*(undefined8 *)(lVar2 + 0x18),0);
    local_58[0] = 9;
    local_50 = 0;
    local_48 = 0;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_58,0,&local_40);
    lVar2 = *(long *)(in_x0 + 0x5f0);
    *(undefined8 *)(lVar2 + 0x18) = local_40;
  }
  *(undefined *)(lVar2 + 0x22) = 0;
  if (*(char *)(lVar2 + 0x21) == '\0') {
    (*vkDestroySemaphore)(uVar4,*(undefined8 *)(lVar2 + 0x10),0);
    local_58[0] = 9;
    local_50 = 0;
    local_48 = 0;
    (*vkCreateSemaphore)(*(undefined8 *)(*(long *)(in_x0 + 0x98) + 0x18),local_58,0,&local_40);
    lVar2 = *(long *)(in_x0 + 0x5f0);
    *(undefined8 *)(lVar2 + 0x10) = local_40;
  }
  *(undefined *)(lVar2 + 0x21) = 0;
  *(undefined *)(in_x0 + 0xa5a) = 0;
  *(undefined *)(in_x0 + 0xa58) = 0;
  *(undefined8 *)(in_x0 + 0xa80) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


