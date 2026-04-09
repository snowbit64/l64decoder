// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reloadConfiguration
// Entry Point: 006fcfd8
// Size: 132 bytes
// Signature: undefined reloadConfiguration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalHusbandry::reloadConfiguration() */

void AnimalHusbandry::reloadConfiguration(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(int *)(in_x0 + 0x54) != 0) {
    uVar1 = 0;
    do {
      AnimalLocomotionSystemSource::reload();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_x0 + 0x54));
  }
  if (*(int *)(in_x0 + 0x5c) != 0) {
    uVar1 = 0;
    do {
      AnimalLocomotionSystem::reload();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_x0 + 0x5c));
  }
  return;
}


