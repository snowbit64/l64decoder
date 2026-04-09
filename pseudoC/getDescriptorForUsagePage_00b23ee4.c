// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDescriptorForUsagePage
// Entry Point: 00b23ee4
// Size: 144 bytes
// Signature: undefined __cdecl getDescriptorForUsagePage(ushort param_1, char * param_2)


/* USBUtil::getDescriptorForUsagePage(unsigned short, char*) */

char * USBUtil::getDescriptorForUsagePage(ushort param_1,char *param_2)

{
  long lVar1;
  
  if (param_1 == 0) {
    *(undefined2 *)(param_2 + 8) = 100;
    *(undefined8 *)param_2 = 0x656e696665646e55;
  }
  else {
    lVar1 = 0;
    do {
      if (*(ushort *)((long)&DAT_00fe8d30 + lVar1) == param_1) {
        strcpy(param_2,*(char **)((long)&s_usagePages + lVar1));
        return param_2;
      }
      lVar1 = lVar1 + 0x20;
    } while (lVar1 != 0x3e0);
    FUN_00b23f74(param_2,0xffffffffffffffff,"Page 0x%4.4X");
  }
  return param_2;
}


