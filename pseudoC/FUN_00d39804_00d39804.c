// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d39804
// Entry Point: 00d39804
// Size: 96 bytes
// Signature: undefined FUN_00d39804(void)


undefined8 FUN_00d39804(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  uVar1 = 0x1f;
  pcVar2 = FUN_00d39980;
  if (1 < param_2 - 0x12U) {
    if (param_2 == 0xf) {
      return 0x21;
    }
    if (param_2 != 0x29) {
      uVar1 = 0xffffffff;
      pcVar2 = FUN_00d383e8;
      if ((param_2 == 0x1c) && (*(int *)((long)param_1 + 0x14) == 0)) {
        return 0x3b;
      }
    }
  }
  *param_1 = pcVar2;
  return uVar1;
}


