// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<unsigned_char_const*>
// Entry Point: 00ced2e0
// Size: 208 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<unsigned_char_const*>(CryptoPP * this, char * param_1, uchar * * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters CryptoPP::MakeParameters<unsigned char const*>(char const*,
   unsigned char const* const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<unsigned_char_const*>
          (CryptoPP *this,char *param_1,uchar **param_2,bool param_3)

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
                    /* try { // try from 00ced31c to 00ced35f has its CatchHandler @ 00ced3b4 */
  plVar2 = (long *)operator_new(0x28);
  local_50 = (byte)param_2 & 1;
  *(undefined *)((long)plVar2 + 0x11) = 0;
  lVar3 = *(long *)param_1;
  *(byte *)(plVar2 + 2) = local_50;
  plVar2[3] = (long)local_58;
  plVar2[4] = lVar3;
  *plVar2 = (long)&PTR__AlgorithmParametersBase_0100c610;
  plVar2[1] = (long)this;
  local_58 = plVar2;
  AlgorithmParameters::AlgorithmParameters(in_x8,(AlgorithmParameters *)&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  plVar2 = local_58;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00ced380 to 00ced383 has its CatchHandler @ 00ced3b0 */
    plVar2 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (AlgorithmParameters)plVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


