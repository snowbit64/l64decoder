// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextAnimalId
// Entry Point: 006fd05c
// Size: 20 bytes
// Signature: undefined getNextAnimalId(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalHusbandry::getNextAnimalId() */

void AnimalHusbandry::getNextAnimalId(void)

{
  long in_x0;
  
  *(int *)(in_x0 + 0x58) = *(int *)(in_x0 + 0x58) + 1;
  return;
}


