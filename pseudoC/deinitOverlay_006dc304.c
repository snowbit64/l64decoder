// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinitOverlay
// Entry Point: 006dc304
// Size: 100 bytes
// Signature: undefined deinitOverlay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::deinitOverlay() */

void EngineApplication::deinitOverlay(void)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x278) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x278) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x278) = 0;
  if (*(long **)(in_x0 + 0x270) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x270) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x270) = 0;
  if (*(long **)(in_x0 + 600) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 600) + 8))();
  }
  *(undefined8 *)(in_x0 + 600) = 0;
  return;
}


