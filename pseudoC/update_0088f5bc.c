// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 0088f5bc
// Size: 24 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* BTMovementIsMoving::update() */

undefined4 BTMovementIsMoving::update(void)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (**(int **)(in_x0 + 0x28) == 0) {
    uVar1 = 2;
  }
  return uVar1;
}


