// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c98f94
// Entry Point: 00c98f94
// Size: 124 bytes
// Signature: undefined FUN_00c98f94(void)


void FUN_00c98f94(BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> **param_1)

{
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *this;
  BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *pBVar1;
  
  pBVar1 = *param_1;
  if (pBVar1 == (BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer> *)0x0) {
    return;
  }
  this = param_1[1];
  if (this != pBVar1) {
    do {
      this = this + -0xa0;
      CryptoPP::BaseAndExponent<CryptoPP::ECPPoint,CryptoPP::Integer>::~BaseAndExponent(this);
    } while (this != pBVar1);
    param_1[1] = pBVar1;
    operator_delete(*param_1);
    return;
  }
  param_1[1] = pBVar1;
  operator_delete(pBVar1);
  return;
}


