// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: isTriggerReadyToRegister
// Entry Point: 00873c48
// Size: 32 bytes
// Signature: undefined isTriggerReadyToRegister(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalCompanionManager::AnimalData::isTriggerReadyToRegister() const */

bool AnimalCompanionManager::AnimalData::isTriggerReadyToRegister(void)

{
  long in_x0;
  
  return *(char *)(in_x0 + 0x48) != '\0' && *(int *)(in_x0 + 0x4c) == 0;
}


