// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00791f28
// Entry Point: 00791f28
// Size: 88 bytes
// Signature: undefined FUN_00791f28(void)


void FUN_00791f28(uint *param_1)

{
  Bt2ScenegraphPhysicsContext *this;
  uint uVar1;
  
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  uVar1 = Bt2ScenegraphPhysicsContext::getCharacterControllerCollisionFlags(this,*param_1);
  param_1[0x42] = 3;
  param_1[0x46] = 3;
  *(byte *)(param_1 + 0x40) = (byte)uVar1 & 1;
  *(byte *)(param_1 + 0x44) = (byte)((uVar1 & 0xff) >> 1) & 1;
  *(byte *)(param_1 + 0x48) = (byte)((uVar1 & 0xff) >> 2) & 1;
  param_1[0x4a] = 3;
  return;
}


