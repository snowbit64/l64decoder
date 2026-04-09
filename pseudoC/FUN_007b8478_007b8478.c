// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b8478
// Entry Point: 007b8478
// Size: 48 bytes
// Signature: undefined FUN_007b8478(void)


void FUN_007b8478(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  
  NetworkStream::getReadStream();
  uVar1 = GsBitStream::getNumUnreadBits();
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


