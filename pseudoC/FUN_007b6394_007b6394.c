// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b6394
// Entry Point: 007b6394
// Size: 96 bytes
// Signature: undefined FUN_007b6394(void)


void FUN_007b6394(long *param_1,undefined4 *param_2)

{
  EntityRegistryManager *this;
  long lVar1;
  long lVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,param_2[0x10]);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = 0;
    if ((*(byte *)(lVar1 + 0x14) & 0x20) != 0) {
      lVar2 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x007b63f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_2[4],param_2[8],param_2[0xc],param_1,*param_2,lVar2);
  return;
}


