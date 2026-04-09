// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SecureRandomGenerator
// Entry Point: 00be6050
// Size: 48 bytes
// Signature: undefined __thiscall SecureRandomGenerator(SecureRandomGenerator * this, SecureRandomGeneratorManager * param_1)


/* SecureRandomGenerator::SecureRandomGenerator(SecureRandomGeneratorManager*) */

void __thiscall
SecureRandomGenerator::SecureRandomGenerator
          (SecureRandomGenerator *this,SecureRandomGeneratorManager *param_1)

{
  CryptoPP::RandomPool::RandomPool((RandomPool *)this);
  *(SecureRandomGeneratorManager **)(this + 0x2a0) = param_1;
                    /* try { // try from 00be606c to 00be6073 has its CatchHandler @ 00be6080 */
  reseed();
  return;
}


