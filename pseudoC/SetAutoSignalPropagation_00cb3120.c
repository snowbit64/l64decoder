// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetAutoSignalPropagation
// Entry Point: 00cb3120
// Size: 8 bytes
// Signature: undefined __thiscall SetAutoSignalPropagation(AutoSignaling<CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>> * this, int param_1)


/* CryptoPP::AutoSignaling<CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>
   >::SetAutoSignalPropagation(int) */

void __thiscall
CryptoPP::AutoSignaling<CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>>::
SetAutoSignalPropagation
          (AutoSignaling<CryptoPP::InputRejecting<CryptoPP::BufferedTransformation>> *this,
          int param_1)

{
  *(int *)(this + 0x14) = param_1;
  return;
}


