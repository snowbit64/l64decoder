// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: release
// Entry Point: 00b2c6b0
// Size: 76 bytes
// Signature: undefined __thiscall release(ResourceManager * this, Resource * param_1)


/* ResourceManager::release(Resource*) */

ResourceManager * __thiscall ResourceManager::release(ResourceManager *this,Resource *param_1)

{
  ResourceManager *pRVar1;
  
  if ((param_1 != (Resource *)0x0) &&
     (this = (ResourceManager *)FUN_00f27700(0xffffffff,param_1 + 8), (int)this < 2)) {
                    /* WARNING: Could not recover jumptable at 0x00b2c6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pRVar1 = (ResourceManager *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    return pRVar1;
  }
  return this;
}


