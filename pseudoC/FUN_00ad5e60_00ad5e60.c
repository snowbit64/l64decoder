// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00ad5e60
// Entry Point: 00ad5e60
// Size: 172 bytes
// Signature: undefined FUN_00ad5e60(void)


void FUN_00ad5e60(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - lVar3;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = (lVar2 >> 3) * 0x66 - 1;
  }
  uVar5 = *(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x20);
  if (uVar1 == uVar5) {
    std::__ndk1::
    deque<VulkanRenderWindow::ReleasedSwapChain,std::__ndk1::allocator<VulkanRenderWindow::ReleasedSwapChain>>
    ::__add_back_capacity();
    lVar3 = *(long *)(param_1 + 8);
    uVar5 = *(long *)(param_1 + 0x20) + *(long *)(param_1 + 0x28);
  }
  uVar6 = *param_2;
  puVar4 = (undefined8 *)(*(long *)(lVar3 + (uVar5 / 0x66) * 8) + (uVar5 % 0x66) * 0x28);
  puVar4[1] = param_2[1];
  *puVar4 = uVar6;
  std::__ndk1::vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>>::vector
            ((vector<VkImageView_T*,std::__ndk1::allocator<VkImageView_T*>> *)(puVar4 + 2),
             (vector *)(param_2 + 2));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  return;
}


