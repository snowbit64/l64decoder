// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00c8dbc4
// Size: 224 bytes
// Signature: undefined __thiscall Initialize(DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> * this, RandomNumberGenerator * param_1, Integer * param_2, Integer * param_3, Integer * param_4)


/* CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize(CryptoPP::RandomNumberGenerator&,
   CryptoPP::Integer const&, CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA>::Initialize
          (DL_PrivateKey_GFP<CryptoPP::DL_GroupParameters_DSA> *this,RandomNumberGenerator *param_1,
          Integer *param_2,Integer *param_3,Integer *param_4)

{
  long lVar1;
  AlgorithmParameters *pAVar2;
  undefined **local_60;
  long *local_58;
  undefined local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  MakeParameters<CryptoPP::Integer>
            ((CryptoPP *)"Modulus",(char *)param_2,(Integer *)0x1,SUB81(param_3,0));
                    /* try { // try from 00c8dc14 to 00c8dc53 has its CatchHandler @ 00c8dca8 */
  pAVar2 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)&local_60,"SubgroupOrder",param_3,(bool)local_50);
  pAVar2 = AlgorithmParameters::operator()
                     ((AlgorithmParameters *)pAVar2,"SubgroupGenerator",param_4,
                      *(bool *)(pAVar2 + 4));
  (**(code **)(*(long *)this + 0x48))(this,param_1,pAVar2);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00c8dc74 to 00c8dc77 has its CatchHandler @ 00c8dca4 */
    (**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


