// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbd9c4
// Entry Point: 00dbd9c4
// Size: 184 bytes
// Signature: undefined FUN_00dbd9c4(void)


void * FUN_00dbd9c4(long param_1,ulong param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(param_1 + 0x498);
  if (pvVar1 != (void *)0x0) {
    if (param_2 <= *(ulong *)(param_1 + 0x4a0)) {
      return pvVar1;
    }
    *(undefined8 *)(param_1 + 0x498) = 0;
    *(undefined8 *)(param_1 + 0x4a0) = 0;
    png_free(param_1,pvVar1);
  }
  pvVar1 = (void *)png_malloc_base(param_1,param_2);
  if (pvVar1 != (void *)0x0) {
    memset(pvVar1,0,param_2);
    *(void **)(param_1 + 0x498) = pvVar1;
    *(ulong *)(param_1 + 0x4a0) = param_2;
    return pvVar1;
  }
  if (param_3 < 2) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      png_chunk_error(param_1,"insufficient memory to read chunk");
    }
    png_chunk_warning();
  }
  return (void *)0x0;
}


