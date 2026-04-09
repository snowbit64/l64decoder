// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Mod
// Entry Point: 00c842dc
// Size: 200 bytes
// Signature: undefined __thiscall Mod(AbstractEuclideanDomain<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractEuclideanDomain<CryptoPP::Integer>::Mod(CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

AbstractEuclideanDomain<CryptoPP::Integer> * __thiscall
CryptoPP::AbstractEuclideanDomain<CryptoPP::Integer>::Mod
          (AbstractEuclideanDomain<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_78);
                    /* try { // try from 00c84320 to 00c84337 has its CatchHandler @ 00c843a8 */
  (**(code **)(*(long *)this + 0xc0))(this,this + 0x18,local_78,param_1,param_2);
  if (uStack_60 <= local_68) {
    local_68 = uStack_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
  }
                    /* try { // try from 00c84370 to 00c84373 has its CatchHandler @ 00c843a4 */
  UnalignedDeallocate(local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this + 0x18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


