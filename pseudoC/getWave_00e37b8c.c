// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWave
// Entry Point: 00e37b8c
// Size: 96 bytes
// Signature: undefined getWave(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SoLoud::Soloud::getWave() */

long SoLoud::Soloud::getWave(void)

{
  long in_x0;
  undefined8 *puVar1;
  long lVar2;
  
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::lockMutex(*(void **)(in_x0 + 8));
  }
  lVar2 = 0x100;
  puVar1 = (undefined8 *)(in_x0 + 0x2848);
  do {
    lVar2 = lVar2 + -4;
    puVar1[0x101] = puVar1[1];
    puVar1[0x100] = *puVar1;
    puVar1 = puVar1 + 2;
  } while (lVar2 != 0);
  *(undefined *)(in_x0 + 0x10) = 0;
  if (*(void **)(in_x0 + 8) != (void *)0x0) {
    Thread::unlockMutex(*(void **)(in_x0 + 8));
  }
  return in_x0 + 0x3048;
}


