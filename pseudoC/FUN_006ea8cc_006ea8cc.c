// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006ea8cc
// Entry Point: 006ea8cc
// Size: 44 bytes
// Signature: undefined FUN_006ea8cc(void)


void FUN_006ea8cc(void)

{
  long *plVar1;
  
  EngineManager::getInstance();
  plVar1 = (long *)EngineManager::getRenderWindow();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006ea8ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb0))();
    return;
  }
  return;
}


