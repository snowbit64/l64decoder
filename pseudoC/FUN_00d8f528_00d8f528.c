// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d8f528
// Entry Point: 00d8f528
// Size: 20 bytes
// Signature: undefined FUN_00d8f528(void)


void FUN_00d8f528(undefined8 *param_1)

{
  code **ppcVar1;
  
  ppcVar1 = (code **)*param_1;
  *(undefined4 *)(ppcVar1 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x00d8f538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**ppcVar1)();
  return;
}


