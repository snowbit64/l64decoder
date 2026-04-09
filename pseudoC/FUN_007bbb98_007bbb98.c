// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bbb98
// Entry Point: 007bbb98
// Size: 36 bytes
// Signature: undefined FUN_007bbb98(void)


void FUN_007bbb98(AnimalCompanionManager *param_1,uint *param_2)

{
  if (param_2[10] == 8) {
    AnimalCompanionManager::setTriggerFromScript
              (param_1,*param_2,*(void **)(param_2 + 8),*(char **)(param_2 + 4));
    return;
  }
  return;
}


