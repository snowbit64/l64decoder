// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUsagePageInfo
// Entry Point: 00b23eb0
// Size: 52 bytes
// Signature: undefined __cdecl getUsagePageInfo(ushort param_1)


/* USBUtil::getUsagePageInfo(unsigned short) */

long USBUtil::getUsagePageInfo(ushort param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(ushort *)((long)&DAT_00fe8d30 + lVar1) == param_1) {
      return (long)&s_usagePages + lVar1;
    }
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x3e0);
  return 0;
}


