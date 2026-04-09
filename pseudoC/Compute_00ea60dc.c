// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compute
// Entry Point: 00ea60dc
// Size: 4 bytes
// Signature: undefined __cdecl Compute(double * param_1, uint param_2, uint * param_3, uint param_4, Parameters * param_5)


/* VHACD::VHACD::Compute(double const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

void VHACD::VHACD::Compute
               (double *param_1,uint param_2,uint *param_3,uint param_4,Parameters *param_5)

{
  Parameters *in_x5;
  
  ComputeACD((VHACD *)param_1,(double *)(ulong)param_2,(uint)param_3,(uint *)(ulong)param_4,
             (uint)param_5,in_x5);
  return;
}


