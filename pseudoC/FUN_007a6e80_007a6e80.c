// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6e80
// Entry Point: 007a6e80
// Size: 60 bytes
// Signature: undefined FUN_007a6e80(void)


void FUN_007a6e80(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = RawTransformGroup::getPhysicsObject();
  uVar1 = *(uint *)(lVar2 + 8);
  *(undefined4 *)(param_2 + 0x108) = 3;
  *(bool *)(param_2 + 0x100) = ((uVar1 ^ 0xffffffff) & 0x408) == 0;
  return;
}


