// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_halfrate_p
// Entry Point: 00e1e3a4
// Size: 20 bytes
// Signature: undefined ov_halfrate_p(void)


undefined8 ov_halfrate_p(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar1 = vorbis_synthesis_halfrate_p();
    return uVar1;
  }
  return 0xffffff7d;
}


