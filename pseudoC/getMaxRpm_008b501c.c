// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMaxRpm
// Entry Point: 008b501c
// Size: 44 bytes
// Signature: undefined getMaxRpm(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LoopSynthesisGenerator::getMaxRpm() const */

undefined  [16] LoopSynthesisGenerator::getMaxRpm(void)

{
  long **pplVar1;
  long **in_x0;
  undefined auVar2 [16];
  
  pplVar1 = in_x0 + 1;
  if (*(char *)((long)in_x0 + 0x3c) != '\0') {
    pplVar1 = in_x0;
  }
  if (*pplVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008b503c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    auVar2 = (**(code **)(**pplVar1 + 0x30))();
    return auVar2;
  }
  return ZEXT816(0);
}


