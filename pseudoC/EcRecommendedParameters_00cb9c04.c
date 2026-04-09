// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EcRecommendedParameters
// Entry Point: 00cb9c04
// Size: 252 bytes
// Signature: undefined __thiscall EcRecommendedParameters(EcRecommendedParameters<CryptoPP::EC2N> * this, OID * param_1, uint param_2, uint param_3, uint param_4, uint param_5, uint param_6, char * param_7, char * param_8, char * param_9, char * param_10, uint param_11)


/* CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters(CryptoPP::OID const&,
   unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, char const*, char const*,
   char const*, char const*, unsigned int) */

void __thiscall
CryptoPP::EcRecommendedParameters<CryptoPP::EC2N>::EcRecommendedParameters
          (EcRecommendedParameters<CryptoPP::EC2N> *this,OID *param_1,uint param_2,uint param_3,
          uint param_4,uint param_5,uint param_6,char *param_7,char *param_8,char *param_9,
          char *param_10,uint param_11)

{
  ulong uVar1;
  void *__dest;
  size_t __n;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  *(undefined ***)this = &PTR__OID_00fecd98;
  if (uVar1 != 0) {
    if ((long)uVar1 < 0) {
                    /* try { // try from 00cb9cf8 to 00cb9cff has its CatchHandler @ 00cb9d00 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00cb9c70 to 00cb9c77 has its CatchHandler @ 00cb9d00 */
    __dest = operator_new(uVar1);
    *(void **)(this + 8) = __dest;
    *(void **)(this + 0x10) = __dest;
    *(void **)(this + 0x18) = (void *)((long)__dest + ((long)uVar1 >> 2) * 4);
    __n = *(long *)(param_1 + 0x10) - (long)*(void **)(param_1 + 8);
    if (0 < (long)__n) {
      memcpy(__dest,*(void **)(param_1 + 8),__n);
      __dest = (void *)((long)__dest + __n);
    }
    *(void **)(this + 0x10) = __dest;
  }
  *(char **)(this + 0x20) = param_7;
  *(uint *)(this + 0x48) = param_3;
  *(uint *)(this + 0x4c) = param_4;
  *(char **)(this + 0x28) = param_8;
  *(char **)(this + 0x30) = param_9;
  *(char **)(this + 0x38) = param_10;
  *(uint *)(this + 0x40) = param_11;
  *(uint *)(this + 0x44) = param_2;
  *(uint *)(this + 0x50) = param_5;
  *(uint *)(this + 0x54) = param_6;
  return;
}


