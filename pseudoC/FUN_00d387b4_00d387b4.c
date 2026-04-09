// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d387b4
// Entry Point: 00d387b4
// Size: 88 bytes
// Signature: undefined FUN_00d387b4(void)


undefined8 FUN_00d387b4(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 3;
  }
  if (param_2 == 0x1b) {
    uVar1 = 5;
    pcVar2 = FUN_00d3a26c;
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


