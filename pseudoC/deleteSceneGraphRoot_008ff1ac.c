// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteSceneGraphRoot
// Entry Point: 008ff1ac
// Size: 52 bytes
// Signature: undefined deleteSceneGraphRoot(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* I3DLoad::deleteSceneGraphRoot() */

void I3DLoad::deleteSceneGraphRoot(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x1b8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x1b8) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x1b8) = 0;
  return;
}


