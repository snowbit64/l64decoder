// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_malloc_warn
// Entry Point: 00db0e3c
// Size: 100 bytes
// Signature: undefined png_malloc_warn(void)


void * png_malloc_warn(long param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if (param_2 != 0) {
    if (*(code **)(param_1 + 0x428) == (code *)0x0) {
      pvVar1 = malloc(param_2);
    }
    else {
      pvVar1 = (void *)(**(code **)(param_1 + 0x428))(param_1);
    }
    if (pvVar1 != (void *)0x0) {
      return pvVar1;
    }
  }
  png_warning(param_1,"Out of memory");
  return (void *)0x0;
}


