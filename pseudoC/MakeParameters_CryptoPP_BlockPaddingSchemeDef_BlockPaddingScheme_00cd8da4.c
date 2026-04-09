// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MakeParameters<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>
// Entry Point: 00cd8da4
// Size: 212 bytes
// Signature: AlgorithmParameters __thiscall MakeParameters<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>(CryptoPP * this, char * param_1, BlockPaddingScheme * param_2, bool param_3)


/* CryptoPP::AlgorithmParameters
   CryptoPP::MakeParameters<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>(char const*,
   CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme const&, bool) */

AlgorithmParameters __thiscall
CryptoPP::MakeParameters<CryptoPP::BlockPaddingSchemeDef::BlockPaddingScheme>
          (CryptoPP *this,char *param_1,BlockPaddingScheme *param_2,bool param_3)

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
                    /* try { // try from 00cd8de0 to 00cd8e27 has its CatchHandler @ 00cd8e7c */
  plVar3 = (long *)operator_new(0x28);
  local_50 = (byte)param_2 & 1;
  *(undefined *)((long)plVar3 + 0x11) = 0;
  uVar1 = *(undefined4 *)param_1;
  *(byte *)(plVar3 + 2) = local_50;
  *(undefined4 *)(plVar3 + 4) = uVar1;
  plVar3[3] = (long)local_58;
  *plVar3 = (long)&PTR__AlgorithmParametersBase_01008d20;
  plVar3[1] = (long)this;
  local_58 = plVar3;
  AlgorithmParameters::AlgorithmParameters(in_x8,(AlgorithmParameters *)&local_60);
  local_60 = &PTR__AlgorithmParameters_00feeb08;
  plVar3 = local_58;
  if (local_58 != (long *)0x0) {
                    /* try { // try from 00cd8e48 to 00cd8e4b has its CatchHandler @ 00cd8e78 */
    plVar3 = (long *)(**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (AlgorithmParameters)plVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


