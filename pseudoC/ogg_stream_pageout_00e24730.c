// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ogg_stream_pageout
// Entry Point: 00e24730
// Size: 72 bytes
// Signature: undefined ogg_stream_pageout(void)


undefined8 ogg_stream_pageout(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x2e) == 0) {
    if ((param_1[7] == 0) || (*(int *)((long)param_1 + 0x174) != 0)) goto LAB_00e2476c;
  }
  else if (param_1[7] == 0) {
LAB_00e2476c:
    uVar1 = FUN_00e242b8(param_1,param_2,0,0x1000);
    return uVar1;
  }
  uVar1 = FUN_00e242b8(param_1,param_2,1,0x1000);
  return uVar1;
}


