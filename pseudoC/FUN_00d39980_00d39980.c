// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39980
// Entry Point: 00d39980
// Size: 108 bytes
// Signature: undefined FUN_00d39980(void)


undefined8 FUN_00d39980(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 != 0x18) {
    if (param_2 == 0x15) {
      uVar1 = 0x21;
      pcVar2 = FUN_00d39804;
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
  *param_1 = FUN_00d39638;
  return 0x21;
}


