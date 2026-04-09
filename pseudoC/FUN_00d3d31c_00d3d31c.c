// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d31c
// Entry Point: 00d3d31c
// Size: 232 bytes
// Signature: undefined FUN_00d3d31c(void)


undefined4 FUN_00d3d31c(undefined8 param_1,char *param_2,long param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  param_3 = param_3 - (long)param_2;
  if (param_3 == 4) {
    if (*param_2 == 'a') {
      if (((param_2[1] == 'p') && (param_2[2] == 'o')) && (param_2[3] == 's')) {
        return 0x27;
      }
    }
    else if (((*param_2 == 'q') && (param_2[1] == 'u')) &&
            ((param_2[2] == 'o' && (param_2[3] == 't')))) {
      return 0x22;
    }
  }
  else if (param_3 == 3) {
    if (((*param_2 == 'a') && (param_2[1] == 'm')) && (param_2[2] == 'p')) {
      return 0x26;
    }
  }
  else if ((param_3 == 2) && (param_2[1] == 't')) {
    uVar2 = 0x3e;
    if (*param_2 != 'g') {
      uVar2 = 0;
    }
    uVar1 = 0x3c;
    if (*param_2 != 'l') {
      uVar1 = uVar2;
    }
    return uVar1;
  }
  return 0;
}


