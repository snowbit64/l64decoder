// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertIPv4ToIPv6
// Entry Point: 00b96044
// Size: 32 bytes
// Signature: undefined __cdecl convertIPv4ToIPv6(uint param_1, uchar * param_2)


/* RelayServerUtil::convertIPv4ToIPv6(unsigned int, unsigned char*) */

void RelayServerUtil::convertIPv4ToIPv6(uint param_1,uchar *param_2)

{
  *(undefined8 *)param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(uint *)(param_2 + 0xc) = param_1;
  *(undefined2 *)(param_2 + 10) = 0xffff;
  return;
}


