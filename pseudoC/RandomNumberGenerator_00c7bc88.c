// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RandomNumberGenerator
// Entry Point: 00c7bc88
// Size: 4 bytes
// Signature: undefined __thiscall ~RandomNumberGenerator(RandomNumberGenerator * this)


/* CryptoPP::RandomNumberGenerator::~RandomNumberGenerator() */

void __thiscall CryptoPP::RandomNumberGenerator::~RandomNumberGenerator(RandomNumberGenerator *this)

{
  operator_delete(this);
  return;
}


