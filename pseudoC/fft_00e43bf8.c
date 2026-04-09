// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fft
// Entry Point: 00e43bf8
// Size: 16 bytes
// Signature: undefined __thiscall fft(FFT * this, float * param_1, uint param_2)


/* SoLoud::FFT::fft(float*, unsigned int) */

void __thiscall SoLoud::FFT::fft(FFT *this,float *param_1,uint param_2)

{
  fftimpl::cftbsub((fftimpl *)((ulong)param_1 & 0xffffffff),(int)this,(float *)(ulong)param_2);
  return;
}


