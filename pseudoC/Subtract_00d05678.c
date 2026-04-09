// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Subtract
// Entry Point: 00d05678
// Size: 164 bytes
// Signature: undefined __cdecl Subtract(Integer * param_1, Integer * param_2)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Subtract(CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

Integer * CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Subtract
                    (Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Integer::Minus(param_2);
                    /* try { // try from 00d056ac to 00d056b7 has its CatchHandler @ 00d05720 */
  Integer::operator=(param_1 + 0x48,(Integer *)local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d056f0 to 00d056f3 has its CatchHandler @ 00d0571c */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1 + 0x48;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


