// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextKey
// Entry Point: 00be63bc
// Size: 80 bytes
// Signature: undefined __thiscall getNextKey(SecureRandomGeneratorManager * this, uchar * param_1, uint param_2, uint * param_3)


/* SecureRandomGeneratorManager::getNextKey(unsigned char*, unsigned int, unsigned int&) */

void __thiscall
SecureRandomGeneratorManager::getNextKey
          (SecureRandomGeneratorManager *this,uchar *param_1,uint param_2,uint *param_3)

{
  Mutex::enterCriticalSection();
  CryptoPP::RandomNumberGenerator::GenerateBlock
            ((RandomNumberGenerator *)(this + 0x60),param_1,(ulong)param_2);
  *param_3 = *(uint *)(this + 0x58);
  Mutex::leaveCriticalSection();
  return;
}


