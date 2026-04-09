// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftfx41
// Entry Point: 00e43380
// Size: 104 bytes
// Signature: undefined __cdecl cftfx41(int param_1, float * param_2)


/* fftimpl::cftfx41(int, float*) */

void fftimpl::cftfx41(int param_1,float *param_2)

{
  if (param_1 == 0x80) {
    cftf161(param_2);
    cftf162(param_2 + 0x20);
    cftf161(param_2 + 0x40);
    cftf161(param_2 + 0x60);
    return;
  }
  cftf081(param_2);
  cftf082(param_2 + 0x10);
  cftf081(param_2 + 0x20);
  cftf081(param_2 + 0x30);
  return;
}


