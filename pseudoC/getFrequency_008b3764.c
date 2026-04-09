// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFrequency
// Entry Point: 008b3764
// Size: 32 bytes
// Signature: undefined getFrequency(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::getFrequency() const */

undefined8 StaticSample::getFrequency(void)

{
  long in_x0;
  undefined8 uVar1;
  
  if (*(long *)(in_x0 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x008b3778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(long **)(*(long *)(in_x0 + 0x70) + 0x48) + 0x28))();
    return uVar1;
  }
  return 0;
}


