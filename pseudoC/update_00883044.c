// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00883044
// Size: 36 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementStop::update() */

undefined8 BTMovementStop::update(void)

{
  long in_x0;
  
  if ((*(char *)(in_x0 + 0x30) != '\0') && (**(int **)(in_x0 + 0x28) != 0)) {
    return 3;
  }
  return 1;
}


