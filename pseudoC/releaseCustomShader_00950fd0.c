// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseCustomShader
// Entry Point: 00950fd0
// Size: 76 bytes
// Signature: undefined __thiscall releaseCustomShader(MaterialManager * this, CustomShader * param_1)


/* MaterialManager::releaseCustomShader(CustomShader*) */

MaterialManager * __thiscall
MaterialManager::releaseCustomShader(MaterialManager *this,CustomShader *param_1)

{
  MaterialManager *pMVar1;
  
  if ((param_1 != (CustomShader *)0x0) &&
     (this = (MaterialManager *)FUN_00f27700(0xffffffff,param_1 + 8), (int)this < 2)) {
                    /* WARNING: Could not recover jumptable at 0x0095100c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pMVar1 = (MaterialManager *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    return pMVar1;
  }
  return this;
}


