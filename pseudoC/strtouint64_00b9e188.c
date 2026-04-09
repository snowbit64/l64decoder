// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: strtouint64
// Entry Point: 00b9e188
// Size: 68 bytes
// Signature: undefined __cdecl strtouint64(char * param_1, ulonglong * param_2)


/* StringUtil::strtouint64(char const*, unsigned long long&) */

void StringUtil::strtouint64(char *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  
  if ((byte)*param_1 - 0x30 < 10) {
    uVar1 = 0;
    uVar2 = (uint)(byte)*param_1;
    do {
      param_1 = (char *)((byte *)param_1 + 1);
      uVar1 = (ulong)(uVar2 - 0x30) + uVar1 * 10;
      uVar2 = (uint)(byte)*param_1;
    } while ((byte)*param_1 - 0x30 < 10);
    *param_2 = uVar1;
    return;
  }
  *param_2 = 0;
  return;
}


