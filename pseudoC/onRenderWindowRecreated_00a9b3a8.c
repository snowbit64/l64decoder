// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onRenderWindowRecreated
// Entry Point: 00a9b3a8
// Size: 52 bytes
// Signature: undefined onRenderWindowRecreated(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HeadMountedDisplayManager::onRenderWindowRecreated() */

void HeadMountedDisplayManager::onRenderWindowRecreated(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x28) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x28) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x28) = 0;
  return;
}


