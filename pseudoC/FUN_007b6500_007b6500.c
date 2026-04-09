// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6500
// Entry Point: 007b6500
// Size: 72 bytes
// Signature: undefined FUN_007b6500(void)


void FUN_007b6500(undefined8 param_1,long param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)Sample::getVelocity();
  *(undefined4 *)(param_2 + 0x100) = *puVar1;
  uVar2 = puVar1[1];
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar2;
  *(undefined4 *)(param_2 + 0x120) = puVar1[2];
  return;
}


