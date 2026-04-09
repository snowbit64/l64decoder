// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Gcd
// Entry Point: 00d00cc8
// Size: 264 bytes
// Signature: undefined __thiscall Gcd(Integer * this, Integer * param_1, Integer * param_2)


/* CryptoPP::Integer::Gcd(CryptoPP::Integer const&, CryptoPP::Integer const&) */

void __thiscall CryptoPP::Integer::Gcd(Integer *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  Integer *pIVar2;
  Integer *in_x8;
  undefined **local_b0 [3];
  undefined **local_98;
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  undefined **local_68;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  EuclideanDomainOf<CryptoPP::Integer>::EuclideanDomainOf();
                    /* try { // try from 00d00cfc to 00d00d17 has its CatchHandler @ 00d00dd8 */
  pIVar2 = (Integer *)
           AbstractEuclideanDomain<CryptoPP::Integer>::Gcd
                     ((AbstractEuclideanDomain<CryptoPP::Integer> *)local_b0,this,param_1);
  Integer(in_x8,pIVar2);
  local_b0[0] = &PTR__EuclideanDomainOf_0100cc70;
  local_68 = &PTR__Integer_0100c890;
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00d00d60 to 00d00d63 has its CatchHandler @ 00d00dd4 */
  UnalignedDeallocate(local_48);
  local_98 = &PTR__Integer_0100c890;
  local_b0[0] = &PTR__AbstractEuclideanDomain_00ff6440;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00d00da4 to 00d00da7 has its CatchHandler @ 00d00dd0 */
  UnalignedDeallocate(local_78);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


