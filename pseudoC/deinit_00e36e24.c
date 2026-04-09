// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deinit
// Entry Point: 00e36e24
// Size: 84 bytes
// Signature: undefined deinit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::deinit() */

void SoLoud::Soloud::deinit(void)

{
  long in_x0;
  
  if (*(code **)(in_x0 + 0x18) != (code *)0x0) {
    (**(code **)(in_x0 + 0x18))();
  }
  *(undefined8 *)(in_x0 + 0x18) = 0;
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::destroyMutex(*(void **)(in_x0 + 8));
  }
  *(undefined8 *)(in_x0 + 8) = 0;
  if (*(void **)(in_x0 + 0x20) != (void *)0x0) {
    Thread::destroyMutex(*(void **)(in_x0 + 0x20));
    return;
  }
  return;
}


