// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VerifyPrime
// Entry Point: 00d12aa8
// Size: 128 bytes
// Signature: undefined __cdecl VerifyPrime(RandomNumberGenerator * param_1, Integer * param_2, uint param_3)


/* CryptoPP::VerifyPrime(CryptoPP::RandomNumberGenerator&, CryptoPP::Integer const&, unsigned int)
    */

ulong CryptoPP::VerifyPrime(RandomNumberGenerator *param_1,Integer *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = IsPrime(param_2);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = RabinMillerTest(param_1,param_2,1);
    uVar2 = (ulong)(param_3 == 0 & uVar1);
    if ((param_3 != 0) && ((uVar1 & 1) != 0)) {
      uVar2 = RabinMillerTest(param_1,param_2,10);
      return uVar2;
    }
  }
  return uVar2;
}


