// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00947598
// Entry Point: 00947598
// Size: 108 bytes
// Signature: undefined FUN_00947598(void)


void FUN_00947598(Variation **param_1)

{
  Variation *pVVar1;
  Variation *this;
  Variation *pVVar2;
  
  pVVar2 = *param_1;
  if (pVVar2 == (Variation *)0x0) {
    return;
  }
  this = param_1[1];
  pVVar1 = pVVar2;
  if (this != pVVar2) {
    do {
      this = this + -0xe0;
      CustomShader::Variation::~Variation(this);
    } while (this != pVVar2);
    pVVar1 = *param_1;
  }
  param_1[1] = pVVar2;
  operator_delete(pVVar1);
  return;
}


