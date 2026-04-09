// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AutoSeededX917RNG
// Entry Point: 00caddb8
// Size: 92 bytes
// Signature: undefined __thiscall AutoSeededX917RNG(AutoSeededX917RNG<CryptoPP::Rijndael> * this, bool param_1, bool param_2)


/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::AutoSeededX917RNG(bool, bool) */

void __thiscall
CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::AutoSeededX917RNG
          (AutoSeededX917RNG<CryptoPP::Rijndael> *this,bool param_1,bool param_2)

{
  Algorithm::Algorithm((Algorithm *)this,true);
  *(undefined ***)this = &PTR__AutoSeededX917RNG_00ff57a8;
  *(undefined8 *)(this + 8) = 0;
  if (param_2) {
                    /* try { // try from 00caddf0 to 00cade03 has its CatchHandler @ 00cade14 */
    Reseed(this,param_1,(uchar *)0x0,0);
  }
  return;
}


