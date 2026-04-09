// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3907c
// Entry Point: 00d3907c
// Size: 88 bytes
// Signature: undefined FUN_00d3907c(void)


undefined8 FUN_00d3907c(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 0;
  }
  if (param_2 == 0x19) {
    uVar1 = 0x3a;
    pcVar2 = FUN_00d38e90;
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


