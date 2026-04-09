// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3e0e0
// Entry Point: 00d3e0e0
// Size: 160 bytes
// Signature: undefined FUN_00d3e0e0(void)


undefined8 FUN_00d3e0e0(char *param_1,long param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  
  *param_3 = 0xb;
  if (param_2 - (long)param_1 != 3) {
    return 1;
  }
  if (*param_1 == 'x') {
    bVar2 = false;
    cVar1 = param_1[1];
  }
  else {
    if (*param_1 != 'X') {
      return 1;
    }
    bVar2 = true;
    cVar1 = param_1[1];
  }
  if (cVar1 == 'm') {
    cVar1 = param_1[2];
  }
  else {
    if (cVar1 != 'M') {
      return 1;
    }
    bVar2 = true;
    cVar1 = param_1[2];
  }
  if (cVar1 != 'l') {
    if (cVar1 == 'L') {
      return 0;
    }
    return 1;
  }
  if (!bVar2) {
    *param_3 = 0xc;
    return 1;
  }
  return 0;
}


