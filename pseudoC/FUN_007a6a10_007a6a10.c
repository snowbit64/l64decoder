// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a6a10
// Entry Point: 007a6a10
// Size: 104 bytes
// Signature: undefined FUN_007a6a10(void)


void FUN_007a6a10(undefined8 param_1,float *param_2)

{
  TransformGroup *pTVar1;
  
  ScenegraphPhysicsContextManager::getInstance();
  pTVar1 = (TransformGroup *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueControlVehicle
            (pTVar1,*param_2,param_2[4],param_2[8],param_2[0xc],param_2[0x10],param_2[0x14],
             param_2[0x18],param_2[0x1c],param_2[0x20],param_2[0x24]);
  return;
}


