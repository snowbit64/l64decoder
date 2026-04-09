// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btPolarDecomposition
// Entry Point: 00fa72c0
// Size: 12 bytes
// Signature: undefined __thiscall btPolarDecomposition(btPolarDecomposition * this, float param_1, uint param_2)


/* btPolarDecomposition::btPolarDecomposition(float, unsigned int) */

void __thiscall
btPolarDecomposition::btPolarDecomposition(btPolarDecomposition *this,float param_1,uint param_2)

{
  *(float *)this = param_1;
  *(uint *)(this + 4) = param_2;
  return;
}


