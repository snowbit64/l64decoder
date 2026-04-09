// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getInternalManifoldPointer
// Entry Point: 009b0660
// Size: 20 bytes
// Signature: undefined getInternalManifoldPointer(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCollisionDispatcher::getInternalManifoldPointer() */

undefined8 btCollisionDispatcher::getInternalManifoldPointer(void)

{
  undefined8 uVar1;
  long in_x0;
  
  uVar1 = 0;
  if (*(int *)(in_x0 + 0x14) != 0) {
    uVar1 = *(undefined8 *)(in_x0 + 0x20);
  }
  return uVar1;
}


