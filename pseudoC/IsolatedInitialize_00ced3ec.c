// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: IsolatedInitialize
// Entry Point: 00ced3ec
// Size: 252 bytes
// Signature: undefined __cdecl IsolatedInitialize(NameValuePairs * param_1)


/* CryptoPP::HexDecoder::IsolatedInitialize(CryptoPP::NameValuePairs const&) */

void CryptoPP::HexDecoder::IsolatedInitialize(NameValuePairs *param_1)

{
  long lVar1;
  long *plVar2;
  bool in_w3;
  undefined *local_70;
  undefined **local_68 [2];
  undefined ***local_58;
  undefined **local_50;
  long *local_48;
  undefined local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_70 = &DAT_00543da0;
  MakeParameters<int_const*>((CryptoPP *)"DecodingLookupArray",(char *)&local_70,(int **)0x0,in_w3);
                    /* try { // try from 00ced43c to 00ced443 has its CatchHandler @ 00ced4f0 */
  plVar2 = (long *)operator_new(0x28);
  *(undefined4 *)(plVar2 + 4) = 4;
  plVar2[3] = (long)local_48;
  *plVar2 = (long)&PTR__AlgorithmParametersBase_00ff0ef0;
  plVar2[1] = (long)"Log2Base";
  *(undefined2 *)(plVar2 + 2) = 1;
  local_68[0] = &PTR__NameValuePairs_00feeb30;
  local_40 = 1;
                    /* try { // try from 00ced490 to 00ced49b has its CatchHandler @ 00ced4ec */
  local_58 = &local_50;
  local_48 = plVar2;
  BaseN_Decoder::IsolatedInitialize((BaseN_Decoder *)param_1,(NameValuePairs *)local_68);
  local_50 = &PTR__AlgorithmParameters_00feeb08;
  if (local_48 != (long *)0x0) {
                    /* try { // try from 00ced4bc to 00ced4bf has its CatchHandler @ 00ced4e8 */
    (**(code **)(*local_48 + 8))();
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


