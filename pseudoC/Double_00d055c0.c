// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Double
// Entry Point: 00d055c0
// Size: 160 bytes
// Signature: undefined __thiscall Double(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Double(CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Double
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1)

{
  long lVar1;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Integer::Plus(param_1);
                    /* try { // try from 00d055f0 to 00d055fb has its CatchHandler @ 00d05664 */
  Integer::operator=((Integer *)(this + 0x48),(Integer *)local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d05634 to 00d05637 has its CatchHandler @ 00d05660 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (Integer *)(this + 0x48);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


