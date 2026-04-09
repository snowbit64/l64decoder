// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullDescriptorForUsage
// Entry Point: 00b240e4
// Size: 176 bytes
// Signature: undefined __cdecl getFullDescriptorForUsage(uint param_1, char * param_2)


/* USBUtil::getFullDescriptorForUsage(unsigned int, char*) */

char * USBUtil::getFullDescriptorForUsage(uint param_1,char *param_2)

{
  size_t sVar1;
  long lVar2;
  
  if (param_1 >> 0x10 == 0) {
    *(undefined2 *)(param_2 + 8) = 100;
    *(undefined8 *)param_2 = 0x656e696665646e55;
  }
  else {
    lVar2 = 0;
    do {
      if ((uint)*(ushort *)((long)&DAT_00fe8d30 + lVar2) == param_1 >> 0x10) {
        strcpy(param_2,*(char **)((long)&s_usagePages + lVar2));
        goto LAB_00b24168;
      }
      lVar2 = lVar2 + 0x20;
    } while (lVar2 != 0x3e0);
    FUN_00b23f74(param_2,0xffffffffffffffff,"Page 0x%4.4X");
  }
LAB_00b24168:
  sVar1 = strlen(param_2);
  param_2[sVar1] = '.';
  getShortDescriptorForUsage(param_1,param_2 + sVar1 + 1);
  return param_2;
}


