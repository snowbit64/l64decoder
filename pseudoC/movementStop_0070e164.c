// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: movementStop
// Entry Point: 0070e164
// Size: 108 bytes
// Signature: undefined movementStop(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalLocomotionSystem::movementStop() */

void AnimalLocomotionSystem::movementStop(void)

{
  long in_x0;
  undefined8 *puVar1;
  
  *(undefined4 *)(in_x0 + 0x428) = 0;
  *(undefined8 *)(in_x0 + 0x444) = 0;
  *(undefined8 *)(in_x0 + 0x43c) = 0;
  if (*(char *)(in_x0 + 0x4a4) == '\0') {
    if (*(int *)(in_x0 + 0x34) == 1) {
      puVar1 = *(undefined8 **)(in_x0 + 0x3b8);
      puVar1[3] = *puVar1;
      *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(puVar1 + 1);
    }
  }
  else {
    *(undefined *)(in_x0 + 0x4a4) = 0;
    if (*(int *)(in_x0 + 0x50) == 1) {
      *(undefined4 *)(in_x0 + 0x50) = 2;
    }
    if (*(int *)(in_x0 + 0x34) == 1) {
      *(undefined4 *)(in_x0 + 0x34) = 3;
      return;
    }
  }
  return;
}


