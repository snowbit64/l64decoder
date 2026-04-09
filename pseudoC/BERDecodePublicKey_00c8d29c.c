// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BERDecodePublicKey
// Entry Point: 00c8d29c
// Size: 156 bytes
// Signature: undefined __cdecl BERDecodePublicKey(BufferedTransformation * param_1, bool param_2, ulong param_3)


/* CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::BERDecodePublicKey(CryptoPP::BufferedTransformation&,
   bool, unsigned long) */

void CryptoPP::DL_PublicKey_GFP<CryptoPP::DL_GroupParameters_DSA>::BERDecodePublicKey
               (BufferedTransformation *param_1,bool param_2,ulong param_3)

{
  long lVar1;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_58,(BufferedTransformation *)(ulong)param_2);
                    /* try { // try from 00c8d2cc to 00c8d2d7 has its CatchHandler @ 00c8d33c */
  (**(code **)(*(long *)param_1 + 0x28))(param_1,local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00c8d310 to 00c8d313 has its CatchHandler @ 00c8d338 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


