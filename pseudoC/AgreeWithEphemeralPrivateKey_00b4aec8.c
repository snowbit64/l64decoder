// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AgreeWithEphemeralPrivateKey
// Entry Point: 00b4aec8
// Size: 292 bytes
// Signature: undefined __cdecl AgreeWithEphemeralPrivateKey(DL_GroupParameters * param_1, DL_FixedBasePrecomputation * param_2, Integer * param_3)


/* CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2>
   >::AgreeWithEphemeralPrivateKey(CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> const&,
   CryptoPP::DL_FixedBasePrecomputation<CryptoPP::ECPPoint> const&, CryptoPP::Integer const&) const
    */

void CryptoPP::
     DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
     ::AgreeWithEphemeralPrivateKey
               (DL_GroupParameters *param_1,DL_FixedBasePrecomputation *param_2,Integer *param_3)

{
  long lVar1;
  undefined8 uVar2;
  Integer *in_x3;
  undefined **local_a8 [2];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*(long *)param_2 + 0x88))(param_2);
  (**(code **)(*(long *)param_2 + 0xb8))(local_a8,param_2);
                    /* try { // try from 00b4af24 to 00b4af33 has its CatchHandler @ 00b4b004 */
  Integer::Times(in_x3);
                    /* try { // try from 00b4af3c to 00b4af4f has its CatchHandler @ 00b4aff4 */
  (**(code **)(*(long *)param_3 + 0x40))(param_3,uVar2,local_78);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4af88 to 00b4af8b has its CatchHandler @ 00b4aff0 */
  UnalignedDeallocate(local_58);
  local_a8[0] = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4afbc to 00b4afbf has its CatchHandler @ 00b4afec */
  UnalignedDeallocate(local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


