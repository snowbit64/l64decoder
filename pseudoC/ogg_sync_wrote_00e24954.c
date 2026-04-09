// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_wrote
// Entry Point: 00e24954
// Size: 44 bytes
// Signature: undefined ogg_sync_wrote(void)


undefined8 ogg_sync_wrote(long param_1,long param_2)

{
  if ((-1 < (int)*(uint *)(param_1 + 8)) &&
     (param_2 = *(int *)(param_1 + 0xc) + param_2, param_2 <= (long)(ulong)*(uint *)(param_1 + 8)))
  {
    *(int *)(param_1 + 0xc) = (int)param_2;
    return 0;
  }
  return 0xffffffff;
}


