// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enterFrame
// Entry Point: 00b00bac
// Size: 116 bytes
// Signature: undefined enterFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ProfilerManager::enterFrame() */

void ProfilerManager::enterFrame(void)

{
  long *in_x0;
  ulong uVar1;
  
  if (in_x0[1] - *in_x0 != 0x140) {
    uVar1 = 0;
    do {
      ProfiledSection::reset();
      uVar1 = (ulong)((int)uVar1 + 1);
    } while (uVar1 < (in_x0[1] - *in_x0 >> 6) * -0x3333333333333333 - 1U);
  }
  in_x0[6] = in_x0[3];
  in_x0[7] = 0;
  return;
}


