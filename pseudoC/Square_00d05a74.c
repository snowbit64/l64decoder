// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Square
// Entry Point: 00d05a74
// Size: 160 bytes
// Signature: undefined __thiscall Square(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Square(CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Square
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
  Integer::Times(param_1);
                    /* try { // try from 00d05aa4 to 00d05aaf has its CatchHandler @ 00d05b18 */
  Integer::operator=((Integer *)(this + 0x48),(Integer *)local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d05ae8 to 00d05aeb has its CatchHandler @ 00d05b14 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (Integer *)(this + 0x48);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


