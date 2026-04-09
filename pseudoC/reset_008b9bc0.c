// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 008b9bc0
// Size: 36 bytes
// Signature: undefined reset(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisSoundGenerator::reset() */

void GranularSynthesisSoundGenerator::reset(void)

{
  long *in_x0;
  long lVar1;
  
  lVar1 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(in_x0 + 3) = 0xffffffff;
  in_x0[1] = lVar1;
  in_x0[2] = -1;
                    /* WARNING: Could not recover jumptable at 0x008b9be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_x0 + 0x50))();
  return;
}


