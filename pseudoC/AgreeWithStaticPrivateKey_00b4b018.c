// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AgreeWithStaticPrivateKey
// Entry Point: 00b4b018
// Size: 272 bytes
// Signature: undefined __cdecl AgreeWithStaticPrivateKey(DL_GroupParameters * param_1, ECPPoint * param_2, bool param_3, Integer * param_4)


/* CryptoPP::DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,
   CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption, 2>
   >::AgreeWithStaticPrivateKey(CryptoPP::DL_GroupParameters<CryptoPP::ECPPoint> const&,
   CryptoPP::ECPPoint const&, bool, CryptoPP::Integer const&) const */

void CryptoPP::
     DL_KeyAgreementAlgorithm_DH<CryptoPP::ECPPoint,CryptoPP::EnumToType<CryptoPP::CofactorMultiplicationOption,2>>
     ::AgreeWithStaticPrivateKey
               (DL_GroupParameters *param_1,ECPPoint *param_2,bool param_3,Integer *param_4)

{
  long lVar1;
  Integer *in_x4;
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
  (**(code **)(*(long *)param_2 + 0xb8))(local_a8,param_2);
                    /* try { // try from 00b4b060 to 00b4b06f has its CatchHandler @ 00b4b140 */
  Integer::Times(in_x4);
                    /* try { // try from 00b4b078 to 00b4b08b has its CatchHandler @ 00b4b130 */
  (**(code **)(*(long *)param_2 + 0x80))(param_2,param_3,local_78);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4b0c4 to 00b4b0c7 has its CatchHandler @ 00b4b12c */
  UnalignedDeallocate(local_58);
  local_a8[0] = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00b4b0f8 to 00b4b0fb has its CatchHandler @ 00b4b128 */
  UnalignedDeallocate(local_88);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


