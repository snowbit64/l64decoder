// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a718c
// Entry Point: 007a718c
// Size: 56 bytes
// Signature: undefined FUN_007a718c(void)


void FUN_007a718c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = RawTransformGroup::getPhysicsObject();
  if ((*(byte *)(lVar1 + 8) >> 3 & 1) != 0) {
    *(undefined4 *)(param_2 + 0x100) = *(undefined4 *)(lVar1 + 0x70);
    *(undefined4 *)(param_2 + 0x108) = 4;
  }
  return;
}


