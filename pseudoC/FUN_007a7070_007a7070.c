// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a7070
// Entry Point: 007a7070
// Size: 44 bytes
// Signature: undefined FUN_007a7070(void)


void FUN_007a7070(TransformGroup *param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = PhysicsObjectUtil::getMass(param_1);
  *(undefined4 *)(param_2 + 0x100) = uVar1;
  *(undefined4 *)(param_2 + 0x108) = 4;
  return;
}


