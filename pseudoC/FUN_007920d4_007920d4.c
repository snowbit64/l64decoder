// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007920d4
// Entry Point: 007920d4
// Size: 108 bytes
// Signature: undefined FUN_007920d4(void)


void FUN_007920d4(uint *param_1)

{
  int iVar1;
  uint uVar2;
  Bt2ScenegraphPhysicsContext *this;
  byte bVar3;
  
  uVar2 = *param_1;
  iVar1 = 0;
  if (0xfffe < uVar2) {
    iVar1 = uVar2 - 0xffff;
  }
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  bVar3 = Bt2ScenegraphPhysicsContext::getIsUpdateIndexSimulated
                    (this,(short)((iVar1 + 0xfffeU) / 0xffff) + (short)uVar2);
  param_1[0x42] = 3;
  *(byte *)(param_1 + 0x40) = bVar3 & 1;
  return;
}


