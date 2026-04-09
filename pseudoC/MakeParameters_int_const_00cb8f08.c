// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<int_const*>
// Entry Point: 00cb8f08
// Size: 208 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<int_const*>(CryptoPP * this, char * param_1, int * * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters CryptoPP::MakeParameters<int const*>(char const*, int const*
   const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<int_const*>(CryptoPP *this,char *param_1,int **param_2,bool param_3)

{
  long lVar1;
  long *plVar2;
  AlgorithmParameters *in_x8;
  long lVar3;
  undefined **local_60;
  long *local_58;
  byte local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  AlgorithmParameters::AlgorithmParameters((AlgorithmParameters *)&local_60);
                    /* try { // try from 00cb8f44 to 00cb8f87 has its CatchHandler @ 00cb8fdc */
  plVar2 = (long *)operator_new(0x28);
  local_50 = (byte)param_2 & 1;
  *(undefined *)((long)plVar2 + 0x11) = 0;
  lVar3 = *(long *)param_1;
  *(byte *)(plVar2 + 2) = local_50;
  plVar2[3] = (long)local_58;
  plVar2[4] = lVar3;
  *plVar2 = (long)&PTR__AlgorithmParametersBase_01002728;
  plVar2[1] = (long)this;
  local_58 = plVar2;
  AlgorithmParameters::AlgorithmParameters(in_x8,(AlgorithmParameters *)&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  plVar2 = local_58;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00cb8fa8 to 00cb8fab has its CatchHandler @ 00cb8fd8 */
    plVar2 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (AlgorithmParameters)plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


