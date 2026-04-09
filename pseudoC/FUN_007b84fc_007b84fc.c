// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b84fc
// Entry Point: 007b84fc
// Size: 48 bytes
// Signature: undefined FUN_007b84fc(void)


void FUN_007b84fc(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  NetworkStream::getWriteStream();
  uVar1 = GsBitStream::getWriteOffset();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


