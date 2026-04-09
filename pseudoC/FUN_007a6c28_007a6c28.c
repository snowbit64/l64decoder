// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6c28
// Entry Point: 007a6c28
// Size: 44 bytes
// Signature: undefined FUN_007a6c28(void)


void FUN_007a6c28(TransformGroup *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = PhysicsObjectUtil::getRigidBodyType(param_1);
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 1;
  return;
}


