// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetAutoSignalPropagation
// Entry Point: 00d0d5c8
// Size: 8 bytes
// Signature: undefined __thiscall SetAutoSignalPropagation(AutoSignaling<CryptoPP::BufferedTransformation> * this, int param_1)


/* CryptoPP::AutoSignaling<CryptoPP::BufferedTransformation>::SetAutoSignalPropagation(int) */

void __thiscall
CryptoPP::AutoSignaling<CryptoPP::BufferedTransformation>::SetAutoSignalPropagation
          (AutoSignaling<CryptoPP::BufferedTransformation> *this,int param_1)

{
  *(int *)(this + 0x14) = param_1;
  return;
}


