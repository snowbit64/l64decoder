// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRpm
// Entry Point: 008b5a24
// Size: 44 bytes
// Signature: undefined getRpm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getRpm() const */

undefined  [16] LoopSynthesisGenerator::getRpm(void)

{
  long **pplVar1;
  long **in_x0;
  undefined auVar2 [16];
  
  pplVar1 = in_x0 + 1;
  if (*(char *)((long)in_x0 + 0x3c) != '\0') {
    pplVar1 = in_x0;
  }
  if (*pplVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b5a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(**pplVar1 + 0x38))();
    return auVar2;
  }
  return ZEXT816(0);
}


