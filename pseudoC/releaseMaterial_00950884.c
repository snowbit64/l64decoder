// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseMaterial
// Entry Point: 00950884
// Size: 76 bytes
// Signature: undefined __thiscall releaseMaterial(MaterialManager * this, GsMaterial * param_1)


/* MaterialManager::releaseMaterial(GsMaterial*) */

MaterialManager * __thiscall
MaterialManager::releaseMaterial(MaterialManager *this,GsMaterial *param_1)

{
  MaterialManager *pMVar1;
  
  if ((param_1 != (GsMaterial *)0x0) &&
     (this = (MaterialManager *)FUN_00f27700(0xffffffff,param_1 + 0x28), (int)this < 2)) {
                    /* WARNING: Could not recover jumptable at 0x009508c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pMVar1 = (MaterialManager *)(**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return pMVar1;
  }
  return this;
}


