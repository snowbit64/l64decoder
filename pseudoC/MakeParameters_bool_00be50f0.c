// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<bool>
// Entry Point: 00be50f0
// Size: 212 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<bool>(CryptoPP * this, char * param_1, bool * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters CryptoPP::MakeParameters<bool>(char const*, bool const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<bool>(CryptoPP *this,char *param_1,bool *param_2,bool param_3)

{
  char cVar1;
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
                    /* try { // try from 00be512c to 00be5173 has its CatchHandler @ 00be51c8 */
  plVar3 = (long *)operator_new(0x28);
  local_50 = (byte)param_2 & 1;
  *(undefined *)((long)plVar3 + 0x11) = 0;
  cVar1 = *param_1;
  *(byte *)(plVar3 + 2) = local_50;
  *(char *)(plVar3 + 4) = cVar1;
  plVar3[3] = (long)local_58;
  *plVar3 = (long)&PTR__AlgorithmParametersBase_00ff0ec0;
  plVar3[1] = (long)this;
  local_58 = plVar3;
  AlgorithmParameters::AlgorithmParameters(in_x8,(AlgorithmParameters *)&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00be5194 to 00be5197 has its CatchHandler @ 00be51c4 */
    plVar3 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (AlgorithmParameters)plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


