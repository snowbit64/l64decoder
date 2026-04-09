// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c97054
// Entry Point: 00c97054
// Size: 124 bytes
// Signature: undefined FUN_00c97054(void)


void FUN_00c97054(BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> **param_1)

{
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *this;
  BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *pBVar1;
  
  pBVar1 = *param_1;
  if (pBVar1 == (BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer> *)0x0) {
    return;
  }
  this = param_1[1];
  if (this != pBVar1) {
    do {
      this = this + -0x80;
      CryptoPP::BaseAndExponent<CryptoPP::EC2NPoint,CryptoPP::Integer>::~BaseAndExponent(this);
    } while (this != pBVar1);
    param_1[1] = pBVar1;
    operator_delete(*param_1);
    return;
  }
  param_1[1] = pBVar1;
  operator_delete(pBVar1);
  return;
}


