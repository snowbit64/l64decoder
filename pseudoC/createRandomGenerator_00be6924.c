// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRandomGenerator
// Entry Point: 00be6924
// Size: 80 bytes
// Signature: undefined __thiscall createRandomGenerator(SecureRandomGeneratorManager * this, bool param_1)


/* SecureRandomGeneratorManager::createRandomGenerator(bool) */

SecureRandomGenerator * __thiscall
SecureRandomGeneratorManager::createRandomGenerator(SecureRandomGeneratorManager *this,bool param_1)

{
  SecureRandomGenerator *this_00;
  
  if (*(int *)(this + 0x1bf8) == 0) {
    this_00 = (SecureRandomGenerator *)0x0;
  }
  else {
    if (param_1) {
      reseed();
    }
    this_00 = (SecureRandomGenerator *)operator_new(0x2a8);
                    /* try { // try from 00be6954 to 00be695b has its CatchHandler @ 00be6974 */
    SecureRandomGenerator::SecureRandomGenerator(this_00,this);
  }
  return this_00;
}


