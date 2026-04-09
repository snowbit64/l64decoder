// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deactivate
// Entry Point: 008dbe18
// Size: 120 bytes
// Signature: undefined deactivate(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Precipitation::deactivate() */

void Precipitation::deactivate(void)

{
  long in_x0;
  long *plVar1;
  
  if (*(long **)(in_x0 + 0xd0) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xd0) + 8))();
  }
  plVar1 = *(long **)(in_x0 + 200);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (*(long **)(in_x0 + 0xd8) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0xd8) + 8))();
  }
  if (*(void **)(in_x0 + 0xa8) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0xa8));
  }
  *(undefined8 *)(in_x0 + 0xa8) = 0;
  *(undefined4 *)(in_x0 + 0x60) = 0;
  *(undefined8 *)(in_x0 + 0xd0) = 0;
  *(undefined8 *)(in_x0 + 0xd8) = 0;
  *(long **)(in_x0 + 200) = (long *)0x0;
  return;
}


