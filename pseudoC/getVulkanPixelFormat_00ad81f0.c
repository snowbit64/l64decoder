// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVulkanPixelFormat
// Entry Point: 00ad81f0
// Size: 808 bytes
// Signature: undefined __cdecl getVulkanPixelFormat(VkPhysicalDevice_T * param_1, PIXEL_FORMAT param_2, PIXEL_FORMAT_USAGE param_3, bool param_4)


/* VulkanUtil::getVulkanPixelFormat(VkPhysicalDevice_T*, PixelFormat::PIXEL_FORMAT,
   VulkanUtil::PIXEL_FORMAT_USAGE, bool) */

VkFormat VulkanUtil::getVulkanPixelFormat
                   (VkPhysicalDevice_T *param_1,PIXEL_FORMAT param_2,PIXEL_FORMAT_USAGE param_3,
                   bool param_4)

{
  ulong uVar1;
  uint uVar2;
  VkFormat VVar3;
  VkFormat VVar4;
  
  VVar3 = 0;
  switch(param_2) {
  case 1:
    VVar3 = 0xf;
    if (!param_4) {
      VVar3 = 9;
    }
    break;
  case 2:
    VVar3 = 0x16;
    if (!param_4) {
      VVar3 = 0x10;
    }
    break;
  case 3:
    VVar3 = 0x1d;
    if (!param_4) {
      VVar3 = 0x17;
    }
    VVar4 = 0x2b;
    if (!param_4) {
      VVar4 = 0x25;
    }
    uVar1 = isFormatSupported(param_1,VVar3,param_3);
    if ((uVar1 & 1) == 0) {
      VVar3 = VVar4;
    }
    break;
  case 4:
    VVar3 = 0x24;
    if (!param_4) {
      VVar3 = 0x1e;
    }
    break;
  case 5:
    VVar3 = 0x2b;
    if (!param_4) {
      VVar3 = 0x25;
    }
    break;
  case 6:
    VVar3 = 0x32;
    if (!param_4) {
      VVar3 = 0x2c;
    }
    break;
  case 7:
    VVar3 = 0x46;
    break;
  case 0x14:
    VVar3 = 0x4c;
    break;
  case 0x15:
    VVar3 = 0x61;
    break;
  case 0x16:
    VVar3 = 0x7a;
    uVar1 = isFormatSupported(param_1,0x7a,param_3);
    VVar4 = 0x25;
    goto LAB_00ad84ec;
  case 0x17:
    VVar3 = 100;
    break;
  case 0x18:
    VVar3 = 0x53;
    break;
  case 0x19:
    VVar3 = 0x67;
    break;
  case 0x1a:
    VVar3 = 0x6a;
    break;
  case 0x1b:
    VVar3 = 0x6d;
    break;
  case 0x1c:
    VVar3 = 0x7c;
    break;
  case 0x1d:
    uVar1 = isFormatSupported(param_1,0x7d,param_3);
    if ((uVar1 & 1) != 0) {
      return 0x7d;
    }
    VVar3 = 0x81;
    uVar1 = isFormatSupported(param_1,0x81,param_3);
    VVar4 = 0x7e;
LAB_00ad84ec:
    if ((uVar1 & 1) == 0) {
      VVar3 = VVar4;
    }
    break;
  case 0x1e:
    VVar3 = 0x7e;
    break;
  case 0x1f:
    VVar3 = 8;
    break;
  case 0x20:
    VVar3 = 0x40;
    break;
  case 0x21:
    VVar3 = 0xd;
    break;
  case 0x22:
    VVar3 = 0x14;
    break;
  case 0x23:
    VVar3 = 0x29;
    break;
  case 0x24:
    VVar3 = 0x4a;
    break;
  case 0x25:
    VVar3 = 0x51;
    break;
  case 0x27:
    VVar3 = 0x5f;
    break;
  case 0x28:
    VVar3 = 99;
    break;
  case 0x29:
    VVar3 = 0x62;
    break;
  case 0x2a:
    VVar3 = 0x66;
    break;
  case 0x2b:
    VVar3 = 0x65;
    break;
  case 0x2c:
    VVar3 = 0x6c;
    break;
  case 0x2d:
    VVar3 = 0x6b;
    break;
  case 0x2e:
  case 0x2f:
    VVar3 = 0x3b9b9cf4;
    if (!param_4) {
      VVar3 = 0x3b9b9cf0;
    }
    break;
  case 0x30:
  case 0x31:
    uVar2 = 5;
    if (!param_4) {
      uVar2 = 1;
    }
    VVar3 = uVar2 | 0x3b9b9cf0;
    break;
  case 0x32:
    VVar3 = 0x99;
    break;
  case 0x33:
    VVar3 = 0x9a;
    break;
  case 0x34:
    VVar3 = 0x9b;
    break;
  case 0x35:
    VVar3 = 0x9c;
    break;
  case 0x36:
    VVar3 = 0x93;
    goto LAB_00ad8494;
  case 0x37:
    VVar3 = 0x97;
    goto LAB_00ad8494;
  case 0x38:
    VVar3 = 6;
    break;
  case 0x39:
    VVar3 = 4;
    break;
  case 0x3a:
    VVar3 = 2;
    break;
  case 0x3b:
  case 0x48:
    VVar3 = 0x9d;
    goto LAB_00ad8494;
  case 0x3c:
  case 0x49:
    VVar3 = 0x9f;
    goto LAB_00ad8494;
  case 0x3d:
  case 0x4a:
    VVar3 = 0xa1;
    goto LAB_00ad8494;
  case 0x3e:
  case 0x4b:
    VVar3 = 0xa3;
    goto LAB_00ad8494;
  case 0x3f:
  case 0x4c:
    VVar3 = 0xa5;
    goto LAB_00ad8494;
  case 0x40:
  case 0x4d:
    VVar3 = 0xa9;
    goto LAB_00ad8494;
  case 0x41:
  case 0x4e:
    VVar3 = 0xad;
    goto LAB_00ad8494;
  case 0x42:
  case 0x4f:
    VVar3 = 0xaf;
    goto LAB_00ad8494;
  case 0x43:
  case 0x50:
    VVar3 = 0xab;
    goto LAB_00ad8494;
  case 0x44:
  case 0x51:
    VVar3 = 0xb1;
    goto LAB_00ad8494;
  case 0x45:
  case 0x52:
    VVar3 = 0xb3;
    goto LAB_00ad8494;
  case 0x46:
  case 0x53:
    VVar3 = 0xb5;
    goto LAB_00ad8494;
  case 0x47:
  case 0x54:
    VVar3 = 0xb7;
LAB_00ad8494:
    if (param_4) {
      VVar3 = VVar3 + 1;
    }
  }
  return VVar3;
}


