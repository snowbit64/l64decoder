// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: convertIPv6ToIPv4
// Entry Point: 00b96064
// Size: 48 bytes
// Signature: undefined __cdecl convertIPv6ToIPv4(uchar * param_1, uint * param_2)


/* RelayServerUtil::convertIPv6ToIPv4(unsigned char const*, unsigned int&) */

bool RelayServerUtil::convertIPv6ToIPv4(uchar *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)param_1 | (ulong)*(uint *)(param_1 + 8) ^ 0xffff0000;
  if (uVar1 == 0) {
    *param_2 = *(uint *)(param_1 + 0xc);
  }
  return uVar1 == 0;
}


