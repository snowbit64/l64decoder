// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EcRecommendedParameters
// Entry Point: 00cb66a4
// Size: 232 bytes
// Signature: undefined __thiscall EcRecommendedParameters(EcRecommendedParameters<CryptoPP::ECP> * this, OID * param_1, char * param_2, char * param_3, char * param_4, char * param_5, char * param_6, uint param_7)


/* CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters(CryptoPP::OID const&,
   char const*, char const*, char const*, char const*, char const*, unsigned int) */

void __thiscall
CryptoPP::EcRecommendedParameters<CryptoPP::ECP>::EcRecommendedParameters
          (EcRecommendedParameters<CryptoPP::ECP> *this,OID *param_1,char *param_2,char *param_3,
          char *param_4,char *param_5,char *param_6,uint param_7)

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
                    /* try { // try from 00cb6784 to 00cb678b has its CatchHandler @ 00cb678c */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 00cb6710 to 00cb6717 has its CatchHandler @ 00cb678c */
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
  *(char **)(this + 0x20) = param_2;
  *(char **)(this + 0x28) = param_3;
  *(char **)(this + 0x30) = param_4;
  *(char **)(this + 0x38) = param_5;
  *(char **)(this + 0x40) = param_6;
  *(uint *)(this + 0x48) = param_7;
  return;
}


