// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079f9f8
// Entry Point: 0079f9f8
// Size: 72 bytes
// Signature: undefined FUN_0079f9f8(void)


void FUN_0079f9f8(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  RawTransformGroup::updateWorldTransformation();
  uVar1 = *(undefined4 *)(param_1 + 0xec);
  uVar2 = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x120) = uVar2;
  *(undefined4 *)(param_2 + 0x128) = 4;
  return;
}


