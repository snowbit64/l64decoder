// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFormatPriority
// Entry Point: 00ad5d9c
// Size: 152 bytes
// Signature: undefined __cdecl getFormatPriority(VkFormat param_1, bool param_2, bool param_3)


/* VulkanRenderWindow::getFormatPriority(VkFormat, bool, bool) */

undefined4 VulkanRenderWindow::getFormatPriority(VkFormat param_1,bool param_2,bool param_3)

{
  undefined4 uVar1;
  
  if (param_2) {
    if (param_1 - 0x3a < 8) {
      return *(undefined4 *)(&DAT_00517600 + (long)(int)(param_1 - 0x3a) * 4);
    }
  }
  else if (param_3) {
    uVar1 = 2;
    switch(param_1) {
    case 0x1d:
    case 0x24:
switchD_00ad5de4_caseD_1d:
      return 0;
    case 0x2b:
    case 0x32:
switchD_00ad5de4_caseD_2b:
      return uVar1;
    case 0x39:
switchD_00ad5de4_caseD_39:
      return 1;
    }
  }
  else {
    uVar1 = 3;
    switch(param_1) {
    case 4:
    case 5:
      goto switchD_00ad5de4_caseD_1d;
    case 0x17:
    case 0x1e:
      goto switchD_00ad5de4_caseD_39;
    case 0x25:
    case 0x2c:
      goto switchD_00ad5de4_caseD_2b;
    case 0x33:
      return 2;
    }
  }
  return 0xffffffff;
}


