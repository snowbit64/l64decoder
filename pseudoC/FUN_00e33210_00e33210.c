// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e33210
// Entry Point: 00e33210
// Size: 104 bytes
// Signature: undefined FUN_00e33210(void)


FILE * FUN_00e33210(undefined8 param_1,char *param_2,uint param_3)

{
  uint uVar1;
  FILE *pFVar2;
  char *__modes;
  
  if ((param_3 & 3) == 1) {
    __modes = "rb";
  }
  else {
    if ((param_3 >> 2 & 1) == 0) {
      uVar1 = (param_3 & 8) >> 3;
      __modes = (char *)0x0;
      if ((param_3 & 8) != 0) {
        __modes = "wb";
      }
      goto joined_r0x00e33248;
    }
    __modes = "r+b";
  }
  uVar1 = 1;
joined_r0x00e33248:
  if ((param_2 != (char *)0x0) && (uVar1 != 0)) {
    pFVar2 = fopen(param_2,__modes);
    return pFVar2;
  }
  return (FILE *)0x0;
}


