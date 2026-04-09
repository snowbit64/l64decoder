// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AgreeWithEphemeralPrivateKey
// Entry Point: 00cc1fb0
// Size: 212 bytes
// Signature: undefined __cdecl AgreeWithEphemeralPrivateKey(DL_GroupParameters * param_1, DL_FixedBasePrecomputation * param_2, Integer * param_3)


/* CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::Integer,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 0>
   >::AgreeWithEphemeralPrivateKey(CryptoPP::DL_GroupParameters<CryptoPP::Integer> const&,
   CryptoPP::DL_FixedBasePrecomputation<CryptoPP::Integer> const&, CryptoPP::Integer const&) const
    */

void CryptoPP::
     DL_KeyAgreementAlgorithm_DH<CryptoPP::Integer,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,0>>
     ::AgreeWithEphemeralPrivateKey
               (DL_GroupParameters *param_1,DL_FixedBasePrecomputation *param_2,Integer *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Integer *in_x3;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_2 + 0x88))(param_2);
  Integer::Integer((Integer *)local_78,in_x3);
                    /* try { // try from 00cc2008 to 00cc201b has its CatchHandler @ 00cc2088 */
  (**(code **)(*(long *)param_3 + 0x40))(param_3,uVar2,local_78);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00cc2054 to 00cc2057 has its CatchHandler @ 00cc2084 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


