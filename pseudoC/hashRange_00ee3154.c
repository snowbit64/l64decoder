// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hashRange
// Entry Point: 00ee3154
// Size: 60 bytes
// Signature: undefined __cdecl hashRange(char * param_1, ulong param_2)


/* Luau::hashRange(char const*, unsigned long) */

uint Luau::hashRange(char *param_1,ulong param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0x811c9dc5;
    do {
      param_2 = param_2 - 1;
      uVar1 = (uVar1 ^ (byte)*param_1) * 0x1000193;
      param_1 = (char *)((byte *)param_1 + 1);
    } while (param_2 != 0);
    return uVar1;
  }
  return 0x811c9dc5;
}


