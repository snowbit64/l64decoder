// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Divide
// Entry Point: 00c83fe0
// Size: 200 bytes
// Signature: undefined __thiscall Divide(AbstractRing<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractRing<CryptoPP::Integer>::Divide(CryptoPP::Integer const&, CryptoPP::Integer
   const&) const */

undefined8 __thiscall
CryptoPP::AbstractRing<CryptoPP::Integer>::Divide
          (AbstractRing<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_68,param_1);
                    /* try { // try from 00c84018 to 00c8403b has its CatchHandler @ 00c840ac */
  uVar2 = (**(code **)(*(long *)this + 0x88))(this,param_2);
  uVar2 = (**(code **)(*(long *)this + 0x80))(this,local_68,uVar2);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00c84078 to 00c8407b has its CatchHandler @ 00c840a8 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


