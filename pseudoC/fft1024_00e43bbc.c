// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fft1024
// Entry Point: 00e43bbc
// Size: 60 bytes
// Signature: undefined __cdecl fft1024(float * param_1)


/* SoLoud::FFT::fft1024(float*) */

void SoLoud::FFT::fft1024(float *param_1)

{
  fftimpl::cftb1st(0x400,param_1);
  fftimpl::cftrec4(0x400,param_1);
  fftimpl::bitrv2conj(0x400,param_1);
  return;
}


