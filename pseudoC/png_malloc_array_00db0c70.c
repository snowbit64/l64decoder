// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_malloc_array
// Entry Point: 00db0c70
// Size: 100 bytes
// Signature: undefined png_malloc_array(void)


void * png_malloc_array(long param_1,uint param_2,ulong param_3)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  void *pvVar3;
  size_t __size;
  
  if (((int)param_2 < 1) || (param_3 == 0)) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array alloc");
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = CONCAT44(0,param_2);
  if ((SUB168(auVar1 * auVar2,8) == 0) && (__size = CONCAT44(0,param_2) * param_3, __size != 0)) {
    if ((param_1 != 0) && (*(code **)(param_1 + 0x428) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00db0cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar3 = (void *)(**(code **)(param_1 + 0x428))();
      return pvVar3;
    }
    pvVar3 = malloc(__size);
    return pvVar3;
  }
  return (void *)0x0;
}


