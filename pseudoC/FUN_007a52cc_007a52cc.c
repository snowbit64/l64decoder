// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a52cc
// Entry Point: 007a52cc
// Size: 88 bytes
// Signature: undefined FUN_007a52cc(void)


void FUN_007a52cc(long param_1,long param_2)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 0x41) >> 3 & 1) != 0) {
    TransformGroup::updateEulerFromMatrix();
  }
  *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(param_1 + 0x148);
  uVar1 = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)(param_2 + 0x108) = 4;
  *(undefined4 *)(param_2 + 0x118) = 4;
  *(undefined4 *)(param_2 + 0x128) = 4;
  *(undefined4 *)(param_2 + 0x110) = uVar1;
  *(undefined4 *)(param_2 + 0x120) = *(undefined4 *)(param_1 + 0x150);
  return;
}


