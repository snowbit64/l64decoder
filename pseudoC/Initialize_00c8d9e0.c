// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8d9e0
// Size: 192 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this, RandomNumberGenerator * param_1, Integer * param_2, Integer * param_3)


/* CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize(CryptoPP::RandomNumberGenerator&,
   CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize
          (DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this,RandomNumberGenerator *param_1,
          Integer *param_2,Integer *param_3)

{
  long lVar1;
  AlgorithmParameters *pAVar2;
  undefined **local_50;
  long *local_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  MakeParameters<CryptoPP::Integer>
            ((CryptoPP *)"Modulus",(char *)param_2,(Integer *)0x1,SUB81(param_3,0));
                    /* try { // try from 00c8da28 to 00c8da53 has its CatchHandler @ 00c8daa4 */
  pAVar2 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_50,"SubgroupGenerator",param_3,(bool)local_40);
  (**(code **)(*(long *)this + 0x48))(this,param_1,pAVar2);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00c8da74 to 00c8da77 has its CatchHandler @ 00c8daa0 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


