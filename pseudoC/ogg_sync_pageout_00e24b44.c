// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_sync_pageout
// Entry Point: 00e24b44
// Size: 116 bytes
// Signature: undefined ogg_sync_pageout(void)


undefined8 ogg_sync_pageout(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (*(int *)(param_1 + 8) < 0) {
    return 0;
  }
  while( true ) {
    lVar1 = ogg_sync_pageseek(param_1,param_2);
    if (0 < lVar1) {
      return 1;
    }
    if (lVar1 == 0) break;
    if (*(int *)(param_1 + 0x14) == 0) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      return 0xffffffff;
    }
  }
  return 0;
}


