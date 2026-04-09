// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39f24
// Entry Point: 00d39f24
// Size: 92 bytes
// Signature: undefined FUN_00d39f24(void)


undefined8 FUN_00d39f24(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 0x27;
  }
  uVar1 = 0x33;
  pcVar2 = FUN_00d39f80;
  if ((param_2 != 0x12) && (param_2 != 0x29)) {
    uVar1 = 0xffffffff;
    pcVar2 = FUN_00d383e8;
    if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
      return 0x3b;
    }
  }
  *param_1 = pcVar2;
  return uVar1;
}


