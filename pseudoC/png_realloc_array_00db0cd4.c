// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_realloc_array
// Entry Point: 00db0cd4
// Size: 296 bytes
// Signature: undefined png_realloc_array(void)


void * png_realloc_array(long param_1,void *param_2,uint param_3,uint param_4,ulong param_5)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  size_t sVar3;
  ulong uVar4;
  void *__dest;
  
  if (((((int)param_3 < 0) || ((int)param_4 < 1)) || (param_5 == 0)) ||
     ((param_2 == (void *)0x0 && (param_3 != 0)))) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"internal error: array realloc");
  }
  if (0x7fffffff - param_3 < param_4) {
    __dest = (void *)0x0;
  }
  else {
    uVar4 = CONCAT44(0,param_4 + param_3);
    __dest = (void *)0x0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_5;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar4;
    if (SUB168(auVar1 * auVar2,8) == 0) {
      sVar3 = uVar4 * param_5;
      if (sVar3 == 0) {
        return (void *)0x0;
      }
      if ((param_1 == 0) || (*(code **)(param_1 + 0x428) == (code *)0x0)) {
        __dest = malloc(sVar3);
        if (__dest != (void *)0x0) goto LAB_00db0d84;
      }
      else {
        __dest = (void *)(**(code **)(param_1 + 0x428))();
        if (__dest != (void *)0x0) {
LAB_00db0d84:
          if (param_3 == 0) {
            sVar3 = 0;
          }
          else {
            sVar3 = param_3 * param_5;
            memcpy(__dest,param_2,sVar3);
          }
          memset((void *)((long)__dest + sVar3),0,param_4 * param_5);
          return __dest;
        }
        __dest = (void *)0x0;
      }
    }
  }
  return __dest;
}


