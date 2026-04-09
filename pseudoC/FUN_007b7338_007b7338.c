// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7338
// Entry Point: 007b7338
// Size: 72 bytes
// Signature: undefined FUN_007b7338(void)


void FUN_007b7338(long param_1,uint *param_2)

{
  long *plVar1;
  EntityRegistryManager *this;
  undefined8 uVar2;
  
  plVar1 = (long *)0x0;
  if (param_1 != 0) {
    plVar1 = (long *)(param_1 + -0x10);
  }
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  uVar2 = EntityRegistryManager::getEntityById(this,*param_2);
                    /* WARNING: Could not recover jumptable at 0x007b737c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,uVar2,0);
  return;
}


