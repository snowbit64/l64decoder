// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9580
// Entry Point: 007a9580
// Size: 60 bytes
// Signature: undefined FUN_007a9580(void)


void FUN_007a9580(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)Camera::getProjectionOffset();
  *(undefined4 *)(param_2 + 0x100) = *puVar1;
  uVar2 = puVar1[1];
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar2;
  return;
}


