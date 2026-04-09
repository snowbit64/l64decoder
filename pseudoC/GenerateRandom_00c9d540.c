// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GenerateRandom
// Entry Point: 00c9d540
// Size: 88 bytes
// Signature: undefined __thiscall GenerateRandom(DL_GroupParameters_EC<CryptoPP::ECP> * this, RandomNumberGenerator * param_1, NameValuePairs * param_2)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GenerateRandom(CryptoPP::RandomNumberGenerator&,
   CryptoPP::NameValuePairs const&) */

void __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GenerateRandom
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,RandomNumberGenerator *param_1,
          NameValuePairs *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00c9d56c to 00c9d56f has its CatchHandler @ 00c9d598 */
  (**(code **)(*(long *)this + 0x18))(this,param_2);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


