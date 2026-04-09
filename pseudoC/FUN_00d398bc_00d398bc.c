// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d398bc
// Entry Point: 00d398bc
// Size: 88 bytes
// Signature: undefined FUN_00d398bc(void)


undefined8 FUN_00d398bc(code **param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  if (param_2 == 0xf) {
    return 0x21;
  }
  if (param_2 == 0x12) {
    uVar1 = 0x20;
    pcVar2 = FUN_00d39914;
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


