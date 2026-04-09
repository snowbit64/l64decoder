// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<CryptoPP::ConstByteArrayParameter>
// Entry Point: 00bbe334
// Size: 172 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<CryptoPP::ConstByteArrayParameter>(CryptoPP * this, char * param_1, ConstByteArrayParameter * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters CryptoPP::MakeParameters<CryptoPP::ConstByteArrayParameter>(char
   const*, CryptoPP::ConstByteArrayParameter const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<CryptoPP::ConstByteArrayParameter>
          (CryptoPP *this,char *param_1,ConstByteArrayParameter *param_2,bool param_3)

{
  long lVar1;
  AlgorithmParameters *pAVar2;
  AlgorithmParameters *in_x8;
  undefined **local_60;
  long *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  AlgorithmParameters::AlgorithmParameters((AlgorithmParameters *)&local_60);
                    /* try { // try from 00bbe370 to 00bbe38f has its CatchHandler @ 00bbe3e4 */
  pAVar2 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_60,(char *)this,
                      (ConstByteArrayParameter *)param_1,SUB81(param_2,0));
  AlgorithmParameters::AlgorithmParameters(in_x8,pAVar2);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00bbe3b0 to 00bbe3b3 has its CatchHandler @ 00bbe3e0 */
    local_58 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (AlgorithmParameters)local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


