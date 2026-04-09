// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reseed
// Entry Point: 00cae1a0
// Size: 232 bytes
// Signature: undefined __thiscall Reseed(AutoSeededX917RNG<CryptoPP::Rijndael> * this, uchar * param_1, ulong param_2, uchar * param_3, uchar * param_4)


/* CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::Reseed(unsigned char const*, unsigned long,
   unsigned char const*, unsigned char const*) */

void __thiscall
CryptoPP::AutoSeededX917RNG<CryptoPP::Rijndael>::Reseed
          (AutoSeededX917RNG<CryptoPP::Rijndael> *this,uchar *param_1,ulong param_2,uchar *param_3,
          uchar *param_4)

{
  X917RNG *this_00;
  undefined8 *this_01;
  
  this_00 = (X917RNG *)operator_new(0x98);
                    /* try { // try from 00cae1d8 to 00cae1df has its CatchHandler @ 00cae2a8 */
  this_01 = (undefined8 *)operator_new(0x58);
  *this_01 = &PTR__SimpleKeyingInterface_00fef588;
                    /* try { // try from 00cae1f4 to 00cae1fb has its CatchHandler @ 00cae298 */
  Algorithm::Algorithm((Algorithm *)(this_01 + 1),true);
  this_01[6] = 0;
  this_01[4] = 0x3fffffffffffffff;
  this_01[5] = 0;
  this_01[9] = 0;
  this_01[10] = 0;
  this_01[8] = 0xffffffffffffffff;
  *this_01 = &PTR__Base_00feb820;
  this_01[1] = &PTR__BlockCipherFinal_00feb8f0;
                    /* try { // try from 00cae234 to 00cae243 has its CatchHandler @ 00cae288 */
  SimpleKeyingInterface::SetKey
            ((SimpleKeyingInterface *)this_01,param_1,param_2,(NameValuePairs *)&DAT_0211f5e0);
                    /* try { // try from 00cae248 to 00cae257 has its CatchHandler @ 00cae2a8 */
  X917RNG::X917RNG(this_00,(BlockTransformation *)(this_01 + 1),param_3,param_4);
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(X917RNG **)(this + 8) = this_00;
  return;
}


