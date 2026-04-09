// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b84a8
// Entry Point: 007b84a8
// Size: 48 bytes
// Signature: undefined FUN_007b84a8(void)


void FUN_007b84a8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  NetworkStream::getReadStream();
  uVar1 = GsBitStream::getReadOffset();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


