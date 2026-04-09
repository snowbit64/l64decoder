// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8b64
// Entry Point: 006e8b64
// Size: 48 bytes
// Signature: undefined FUN_006e8b64(void)


void FUN_006e8b64(undefined8 *param_1)

{
  long *plVar1;
  
  EngineManager::getInstance();
  plVar1 = (long *)EngineManager::getRenderWindow();
                    /* WARNING: Could not recover jumptable at 0x006e8b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x70))(plVar1,*param_1);
  return;
}


