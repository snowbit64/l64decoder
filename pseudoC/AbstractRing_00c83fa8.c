// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AbstractRing
// Entry Point: 00c83fa8
// Size: 36 bytes
// Signature: undefined __cdecl AbstractRing(AbstractRing * param_1)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::AbstractRing(CryptoPP::AbstractRing<CryptoPP::Integer>
   const&) */

void CryptoPP::AbstractRing<CryptoPP::Integer>::AbstractRing(AbstractRing *param_1)

{
  *(AbstractRing **)(param_1 + 0x10) = param_1;
  *(undefined ***)param_1 = &PTR__AbstractRing_00ff2190;
  *(undefined ***)(param_1 + 8) = &PTR__AbstractGroup_010009d8;
  return;
}


