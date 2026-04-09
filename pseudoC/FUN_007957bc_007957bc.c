// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007957bc
// Entry Point: 007957bc
// Size: 60 bytes
// Signature: undefined FUN_007957bc(void)


void FUN_007957bc(uint *param_1)

{
  ScenegraphPhysicsContextManager *this;
  
  this = (ScenegraphPhysicsContextManager *)ScenegraphPhysicsContextManager::getInstance();
  ScenegraphPhysicsContextManager::createLowResCollisionHandler
            (this,*param_1,param_1[4],(float)param_1[8],param_1[0xc],param_1[0x10],param_1[0x14],
             param_1[0x18]);
  return;
}


