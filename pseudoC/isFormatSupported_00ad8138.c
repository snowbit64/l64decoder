// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isFormatSupported
// Entry Point: 00ad8138
// Size: 184 bytes
// Signature: undefined __cdecl isFormatSupported(VkPhysicalDevice_T * param_1, VkFormat param_2, PIXEL_FORMAT_USAGE param_3)


/* VulkanUtil::isFormatSupported(VkPhysicalDevice_T*, VkFormat, VulkanUtil::PIXEL_FORMAT_USAGE) */

void VulkanUtil::isFormatSupported
               (VkPhysicalDevice_T *param_1,VkFormat param_2,PIXEL_FORMAT_USAGE param_3)

{
  long lVar1;
  uint uVar2;
  undefined auStack_38 [4];
  uint local_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (*vkGetPhysicalDeviceFormatProperties)(param_1,param_2,auStack_38);
  switch(param_3) {
  case 0:
    uVar2 = 1;
    break;
  case 1:
    uVar2 = 0x1001;
    break;
  case 2:
    uVar2 = 8;
    local_34 = local_30;
    break;
  case 3:
    uVar2 = 0x80;
    break;
  case 4:
    uVar2 = 0x200;
    break;
  default:
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((uVar2 & (local_34 ^ 0xffffffff)) == 0);
  }
  return;
}


