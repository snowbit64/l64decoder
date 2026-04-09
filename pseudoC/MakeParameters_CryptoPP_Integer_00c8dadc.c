// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<CryptoPP::Integer>
// Entry Point: 00c8dadc
// Size: 172 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<CryptoPP::Integer>(CryptoPP * this, char * param_1, Integer * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters CryptoPP::MakeParameters<CryptoPP::Integer>(char const*,
   CryptoPP::Integer const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<CryptoPP::Integer>
          (CryptoPP *this,char *param_1,Integer *param_2,bool param_3)

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
                    /* try { // try from 00c8db18 to 00c8db37 has its CatchHandler @ 00c8db8c */
  pAVar2 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_60,(char *)this,(Integer *)param_1,
                      SUB81(param_2,0));
  AlgorithmParameters::AlgorithmParameters(in_x8,pAVar2);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00c8db58 to 00c8db5b has its CatchHandler @ 00c8db88 */
    local_58 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (AlgorithmParameters)local_58;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


