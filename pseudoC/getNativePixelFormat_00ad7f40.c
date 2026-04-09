// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNativePixelFormat
// Entry Point: 00ad7f40
// Size: 504 bytes
// Signature: undefined __cdecl getNativePixelFormat(VkPhysicalDevice_T * param_1, PIXEL_FORMAT param_2, PIXEL_FORMAT_USAGE param_3, bool param_4)


/* VulkanUtil::getNativePixelFormat(VkPhysicalDevice_T*, PixelFormat::PIXEL_FORMAT,
   VulkanUtil::PIXEL_FORMAT_USAGE, bool) */

PIXEL_FORMAT
VulkanUtil::getNativePixelFormat
          (VkPhysicalDevice_T *param_1,PIXEL_FORMAT param_2,PIXEL_FORMAT_USAGE param_3,bool param_4)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined auStack_38 [4];
  uint local_34;
  uint local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0x1a) {
    param_1 = (VkPhysicalDevice_T *)(*vkGetPhysicalDeviceFormatProperties)(param_1,0x6a,auStack_38);
    switch(param_3) {
    case 0:
      uVar3 = 1;
      break;
    case 1:
      uVar3 = 0x1001;
      break;
    case 2:
      uVar3 = 8;
      local_34 = local_30;
      break;
    case 3:
      uVar3 = 0x80;
      break;
    case 4:
      uVar3 = 0x200;
      break;
    default:
      uVar3 = 0;
    }
    param_2 = 0x1a;
    if ((uVar3 & (local_34 ^ 0xffffffff)) != 0) {
      param_2 = 0x1b;
    }
  }
  else {
    if (param_2 == 4) {
      uVar2 = 0x24;
      if (!param_4) {
        uVar2 = 0x1e;
      }
      param_1 = (VkPhysicalDevice_T *)
                (*vkGetPhysicalDeviceFormatProperties)(param_1,uVar2,auStack_38);
      switch(param_3) {
      case 0:
        uVar3 = 1;
        break;
      case 1:
        uVar3 = 0x1001;
        break;
      case 2:
        uVar3 = 8;
        local_34 = local_30;
        break;
      case 3:
        uVar3 = 0x80;
        break;
      case 4:
        uVar3 = 0x200;
        break;
      default:
        uVar3 = 0;
      }
      uVar3 = uVar3 & (local_34 ^ 0xffffffff);
      param_2 = 4;
    }
    else {
      if (param_2 != 3) goto LAB_00ad8110;
      uVar2 = 0x1d;
      if (!param_4) {
        uVar2 = 0x17;
      }
      param_1 = (VkPhysicalDevice_T *)
                (*vkGetPhysicalDeviceFormatProperties)(param_1,uVar2,auStack_38);
      switch(param_3) {
      case 0:
        uVar3 = 1;
        break;
      case 1:
        uVar3 = 0x1001;
        break;
      case 2:
        uVar3 = 8;
        local_34 = local_30;
        break;
      case 3:
        uVar3 = 0x80;
        break;
      case 4:
        uVar3 = 0x200;
        break;
      default:
        uVar3 = 0;
      }
      uVar3 = uVar3 & (local_34 ^ 0xffffffff);
      param_2 = 3;
    }
    if (uVar3 != 0) {
      param_2 = 6;
    }
  }
LAB_00ad8110:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


