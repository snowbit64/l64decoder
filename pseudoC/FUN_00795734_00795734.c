// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795734
// Entry Point: 00795734
// Size: 136 bytes
// Signature: undefined FUN_00795734(void)


void FUN_00795734(uint *param_1)

{
  uint uVar1;
  TransformGroup *pTVar2;
  Bt2ScenegraphPhysicsContext *this;
  
  uVar1 = param_1[8];
  if ((int)uVar1 < 1) {
    pTVar2 = (TransformGroup *)0x0;
  }
  else {
    pTVar2 = (TransformGroup *)ReflectionUtil::getEntity(uVar1,0x20,"setPhysicsRopeAnchor","node");
    uVar1 = param_1[8];
  }
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueSetRopeAnchor
            (this,*param_1,param_1[4],pTVar2,uVar1 != 0,(float)param_1[0xc],(float)param_1[0x10],
             (float)param_1[0x14],*(bool *)(param_1 + 0x18));
  return;
}


