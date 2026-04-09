// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00796ab4
// Entry Point: 00796ab4
// Size: 56 bytes
// Signature: undefined FUN_00796ab4(void)


void FUN_00796ab4(char **param_1)

{
  long *plVar1;
  
  EngineManager::getInstance();
  plVar1 = (long *)EngineManager::getRenderWindow();
  (**(code **)(*plVar1 + 0xc0))();
  WebUtil::openWebFile(*param_1,param_1[2]);
  return;
}


