// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4592c
// Entry Point: 00d4592c
// Size: 172 bytes
// Signature: undefined FUN_00d4592c(void)


undefined8 FUN_00d4592c(char *param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  
  *param_3 = 0xb;
  if ((param_2 - (long)param_1 == 6) && (*param_1 == '\0')) {
    if (param_1[1] == 'x') {
      bVar2 = false;
      cVar1 = param_1[2];
    }
    else {
      if (param_1[1] != 'X') {
        return 1;
      }
      bVar2 = true;
      cVar1 = param_1[2];
    }
    if (cVar1 == '\0') {
      if (param_1[3] != 'm') {
        if (param_1[3] != 'M') {
          return 1;
        }
        bVar2 = true;
      }
      if (param_1[4] == '\0') {
        if (param_1[5] == 'l') {
          if (!bVar2) {
            *param_3 = 0xc;
            return 1;
          }
          return 0;
        }
        if (param_1[5] == 'L') {
          return 0;
        }
      }
    }
  }
  return 1;
}


