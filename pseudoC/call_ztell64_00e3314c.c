// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: call_ztell64
// Entry Point: 00e3314c
// Size: 68 bytes
// Signature: undefined call_ztell64(void)


long call_ztell64(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00e3316c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar1 = (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x38));
    return lVar1;
  }
  lVar1 = (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x38));
  if (lVar1 == 0xffffffff) {
    lVar1 = -1;
  }
  return lVar1;
}


