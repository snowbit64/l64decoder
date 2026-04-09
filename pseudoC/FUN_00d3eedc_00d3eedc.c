// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3eedc
// Entry Point: 00d3eedc
// Size: 52 bytes
// Signature: undefined FUN_00d3eedc(void)


bool FUN_00d3eedc(undefined8 param_1,byte *param_2)

{
  if (*param_2 < 0xc2) {
    return true;
  }
  if (-1 < (char)param_2[1]) {
    return true;
  }
  return ((param_2[1] ^ 0xff) & 0xc0) == 0;
}


