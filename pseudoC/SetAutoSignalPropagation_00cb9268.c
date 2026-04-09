// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetAutoSignalPropagation
// Entry Point: 00cb9268
// Size: 8 bytes
// Signature: undefined __thiscall SetAutoSignalPropagation(SourceTemplate<CryptoPP::StringStore> * this, int param_1)


/* CryptoPP::SourceTemplate<CryptoPP::StringStore>::SetAutoSignalPropagation(int) */

void __thiscall
CryptoPP::SourceTemplate<CryptoPP::StringStore>::SetAutoSignalPropagation
          (SourceTemplate<CryptoPP::StringStore> *this,int param_1)

{
  *(int *)(this + 0x44) = param_1;
  return;
}


