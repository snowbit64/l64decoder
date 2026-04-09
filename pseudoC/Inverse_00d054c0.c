// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Inverse
// Entry Point: 00d054c0
// Size: 232 bytes
// Signature: undefined __thiscall Inverse(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Inverse(CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::Inverse
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **local_58 [2];
  ulong local_48;
  ulong local_40;
  int *local_38;
  int local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_58,param_1);
  if ((local_30 != 1) && (uVar3 = local_40, *local_38 == 0)) {
    do {
      if (uVar3 == 0) goto LAB_00d0550c;
      uVar4 = uVar3 - 1;
      lVar2 = uVar3 - 1;
      uVar3 = uVar4;
    } while (local_38[lVar2] == 0);
    if ((int)uVar4 == -1) goto LAB_00d0550c;
  }
  local_30 = 1 - local_30;
LAB_00d0550c:
                    /* try { // try from 00d05510 to 00d0551b has its CatchHandler @ 00d055ac */
  Integer::operator=((Integer *)(this + 0x48),(Integer *)local_58);
  if (local_40 <= local_48) {
    local_48 = local_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    local_38[local_48 - 1] = 0;
  }
                    /* try { // try from 00d05554 to 00d05557 has its CatchHandler @ 00d055a8 */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (Integer *)(this + 0x48);
}


