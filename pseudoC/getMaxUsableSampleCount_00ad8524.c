// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxUsableSampleCount
// Entry Point: 00ad8524
// Size: 172 bytes
// Signature: undefined __cdecl getMaxUsableSampleCount(VkPhysicalDevice_T * * param_1)


/* VulkanUtil::getMaxUsableSampleCount(VkPhysicalDevice_T* const&) */

void VulkanUtil::getMaxUsableSampleCount(VkPhysicalDevice_T **param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined auStack_360 [672];
  uint local_c0;
  uint local_bc;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  (*vkGetPhysicalDeviceProperties)(*param_1,auStack_360);
  local_bc = local_bc & local_c0;
  if ((local_bc >> 6 & 1) == 0) {
    if ((local_bc >> 5 & 1) == 0) {
      if ((local_bc >> 4 & 1) == 0) {
        if ((local_bc >> 3 & 1) == 0) {
          if ((local_bc >> 2 & 1) == 0) {
            uVar2 = 1;
            if ((local_bc & 2) != 0) {
              uVar2 = 2;
            }
          }
          else {
            uVar2 = 4;
          }
        }
        else {
          uVar2 = 8;
        }
      }
      else {
        uVar2 = 0x10;
      }
    }
    else {
      uVar2 = 0x20;
    }
  }
  else {
    uVar2 = 0x40;
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}


