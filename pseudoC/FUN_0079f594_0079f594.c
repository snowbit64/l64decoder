// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079f594
// Entry Point: 0079f594
// Size: 88 bytes
// Signature: undefined FUN_0079f594(void)


void FUN_0079f594(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x41) >> 3 & 1) != 0) {
    TransformGroup::updateEulerFromMatrix();
  }
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x130);
  uVar1 = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_1 + 0x138);
  return;
}


