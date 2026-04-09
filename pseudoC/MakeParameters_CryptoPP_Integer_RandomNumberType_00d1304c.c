// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<CryptoPP::Integer::RandomNumberType>
// Entry Point: 00d1304c
// Size: 212 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<CryptoPP::Integer::RandomNumberType>(CryptoPP * this, char * param_1, RandomNumberType * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters CryptoPP::MakeParameters<CryptoPP::Integer::RandomNumberType>(char
   const*, CryptoPP::Integer::RandomNumberType const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<CryptoPP::Integer::RandomNumberType>
          (CryptoPP *this,char *param_1,RandomNumberType *param_2,bool param_3)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  AlgorithmParameters *in_x8;
  undefined **local_60;
  long *local_58;
  byte local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  AlgorithmParameters::AlgorithmParameters((AlgorithmParameters *)&local_60);
                    /* try { // try from 00d13088 to 00d130cf has its CatchHandler @ 00d13124 */
  plVar3 = (long *)operator_new(0x28);
  local_50 = (byte)param_2 & 1;
  *(undefined *)((long)plVar3 + 0x11) = 0;
  uVar1 = *(undefined4 *)param_1;
  *(byte *)(plVar3 + 2) = local_50;
  *(undefined4 *)(plVar3 + 4) = uVar1;
  plVar3[3] = (long)local_58;
  *plVar3 = (long)&PTR__AlgorithmParametersBase_0100cd70;
  plVar3[1] = (long)this;
  local_58 = plVar3;
  AlgorithmParameters::AlgorithmParameters(in_x8,(AlgorithmParameters *)&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00d130f0 to 00d130f3 has its CatchHandler @ 00d13120 */
    plVar3 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (AlgorithmParameters)plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


