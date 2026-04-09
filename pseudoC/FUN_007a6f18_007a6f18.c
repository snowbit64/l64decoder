// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6f18
// Entry Point: 007a6f18
// Size: 44 bytes
// Signature: undefined FUN_007a6f18(void)


void FUN_007a6f18(TransformGroup *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = PhysicsObjectUtil::getCollisionMask(param_1);
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 2;
  return;
}


