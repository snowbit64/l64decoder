// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e11570
// Entry Point: 00e11570
// Size: 36 bytes
// Signature: undefined FUN_00e11570(void)


int FUN_00e11570(float **param_1,float **param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = **param_1;
  fVar2 = **param_2;
  return (uint)(fVar1 < fVar2) - (uint)(fVar1 != fVar2 && fVar1 >= fVar2);
}


