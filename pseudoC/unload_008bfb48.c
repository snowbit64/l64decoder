// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unload
// Entry Point: 008bfb48
// Size: 112 bytes
// Signature: undefined unload(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StreamedSample::unload() */

undefined8 StreamedSample::unload(void)

{
  long in_x0;
  long *plVar1;
  
  if (*(long **)(in_x0 + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x38) + 8))();
  }
  *(undefined8 *)(in_x0 + 0x38) = 0;
  if (*(long **)(in_x0 + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x30) + 8))();
  }
  plVar1 = *(long **)(in_x0 + 0x40);
  *(undefined8 *)(in_x0 + 0x30) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined *)(in_x0 + 0x28) = 0;
  *(long **)(in_x0 + 0x40) = (long *)0x0;
  *(undefined8 *)(in_x0 + 0x48) = 0;
  return 1;
}


