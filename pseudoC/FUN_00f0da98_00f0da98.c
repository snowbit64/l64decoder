// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f0da98
// Entry Point: 00f0da98
// Size: 48 bytes
// Signature: undefined FUN_00f0da98(void)


void * FUN_00f0da98(undefined8 param_1,void *param_2,undefined8 param_3,size_t param_4)

{
  void *pvVar1;
  
  if (param_4 != 0) {
    pvVar1 = realloc(param_2,param_4);
    return pvVar1;
  }
  free(param_2);
  return (void *)0x0;
}


