// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3912c
// Entry Point: 00d3912c
// Size: 88 bytes
// Signature: undefined FUN_00d3912c(void)


undefined8 FUN_00d3912c(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 0xb;
  }
  if (param_2 == 0x1b) {
    uVar1 = 0xe;
    pcVar2 = FUN_00d390d4;
  }
  else {
    uVar1 = 0xffffffff;
    pcVar2 = FUN_00d383e8;
    if ((param_2 == 0x1c) && (pcVar2 = FUN_00d383e8, *(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = pcVar2;
  return uVar1;
}


