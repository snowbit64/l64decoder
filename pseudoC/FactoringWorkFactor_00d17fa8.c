// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FactoringWorkFactor
// Entry Point: 00d17fa8
// Size: 116 bytes
// Signature: undefined __cdecl FactoringWorkFactor(uint param_1)


/* CryptoPP::FactoringWorkFactor(unsigned int) */

int CryptoPP::FactoringWorkFactor(uint param_1)

{
  double dVar1;
  double dVar2;
  
  if (param_1 < 5) {
    return 0;
  }
  dVar1 = pow((double)(ulong)param_1,0.3333333333333333);
  dVar2 = log((double)(ulong)param_1);
  dVar2 = pow(dVar2,0.6666666666666666);
  dVar1 = (double)NEON_fmadd(dVar1 * 2.4,dVar2,0xc014000000000000);
  return (int)dVar1;
}


