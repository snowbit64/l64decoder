// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unloadImpl
// Entry Point: 00a4edfc
// Size: 100 bytes
// Signature: undefined unloadImpl(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AudioSourceSample::unloadImpl() */

void AudioSourceSample::unloadImpl(void)

{
  long in_x0;
  ulong uVar1;
  
  if (*(int *)(in_x0 + 0xb0) != 0) {
    uVar1 = 0;
    do {
      Element::destroy();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_x0 + 0xb0));
  }
  return;
}


