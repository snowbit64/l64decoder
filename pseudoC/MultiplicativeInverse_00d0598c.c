// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00d0598c
// Size: 208 bytes
// Signature: undefined __thiscall MultiplicativeInverse(EuclideanDomainOf<CryptoPP::Integer> * this, Integer * param_1)


/* CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::MultiplicativeInverse(CryptoPP::Integer const&)
   const */

Integer * __thiscall
CryptoPP::EuclideanDomainOf<CryptoPP::Integer>::MultiplicativeInverse
          (EuclideanDomainOf<CryptoPP::Integer> *this,Integer *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **local_58 [2];
  ulong local_48;
  ulong uStack_40;
  void *local_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_1 + 0x18);
  do {
    if (lVar3 == 0) goto LAB_00d059d8;
    lVar4 = lVar3 + -1;
    lVar2 = lVar3 + -1;
    lVar3 = lVar4;
  } while ((*(int **)(param_1 + 0x20))[lVar2] == 0);
  if (((int)lVar4 != 0) || (**(int **)(param_1 + 0x20) != 1)) {
LAB_00d059d8:
    param_1 = (Integer *)&DAT_02120810;
  }
  Integer::Integer((Integer *)local_58,param_1);
                    /* try { // try from 00d059ec to 00d059f7 has its CatchHandler @ 00d05a60 */
  Integer::operator=((Integer *)(this + 0x48),(Integer *)local_58);
  if (uStack_40 <= local_48) {
    local_48 = uStack_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    *(undefined4 *)((long)local_38 + local_48 * 4 + -4) = 0;
  }
                    /* try { // try from 00d05a30 to 00d05a33 has its CatchHandler @ 00d05a5c */
  UnalignedDeallocate(local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (Integer *)(this + 0x48);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


