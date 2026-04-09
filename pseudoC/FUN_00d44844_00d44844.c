// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44844
// Entry Point: 00d44844
// Size: 340 bytes
// Signature: undefined FUN_00d44844(void)


undefined4 FUN_00d44844(undefined8 param_1,char *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_3 = param_3 - (long)param_2;
  if (param_3 < 0) {
    param_3 = param_3 + 1;
  }
  param_3 = param_3 >> 1;
  if (param_3 == 4) {
    if (*param_2 == '\0') {
      if (param_2[1] == 'a') {
        if ((((param_2[2] == '\0') && (param_2[3] == 'p')) && (param_2[4] == '\0')) &&
           (((param_2[5] == 'o' && (param_2[6] == '\0')) && (param_2[7] == 's')))) {
          return 0x27;
        }
      }
      else if (((param_2[1] == 'q') && (param_2[2] == '\0')) &&
              (((param_2[3] == 'u' &&
                (((param_2[4] == '\0' && (param_2[5] == 'o')) && (param_2[6] == '\0')))) &&
               (param_2[7] == 't')))) {
        return 0x22;
      }
    }
  }
  else if (param_3 == 3) {
    if (((*param_2 == '\0') && (param_2[1] == 'a')) &&
       (((param_2[2] == '\0' && ((param_2[3] == 'm' && (param_2[4] == '\0')))) &&
        (param_2[5] == 'p')))) {
      return 0x26;
    }
  }
  else if ((((param_3 == 2) && (param_2[2] == '\0')) && (param_2[3] == 't')) && (*param_2 == '\0'))
  {
    uVar2 = 0x3c;
    if (param_2[1] != 'l') {
      uVar2 = 0;
    }
    uVar1 = 0x3e;
    if (param_2[1] != 'g') {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return 0;
}


