// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetMaxExponent
// Entry Point: 00c9e820
// Size: 180 bytes
// Signature: undefined GetMaxExponent(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetMaxExponent() const */

void CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::GetMaxExponent(void)

{
  long lVar1;
  long *in_x0;
  Integer *pIVar2;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pIVar2 = (Integer *)(**(code **)(*in_x0 + 0xa0))();
  Integer::Integer((Integer *)local_68,1);
                    /* try { // try from 00c9e860 to 00c9e86f has its CatchHandler @ 00c9e8d8 */
  Integer::Minus(pIVar2);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9e8a8 to 00c9e8ab has its CatchHandler @ 00c9e8d4 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


