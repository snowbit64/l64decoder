// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeGroupOrder
// Entry Point: 00cb344c
// Size: 188 bytes
// Signature: undefined __thiscall ComputeGroupOrder(DL_GroupParameters_IntegerBased * this, Integer * param_1)


/* CryptoPP::DL_GroupParameters_IntegerBased::ComputeGroupOrder(CryptoPP::Integer const&) const */

void __thiscall
CryptoPP::DL_GroupParameters_IntegerBased::ComputeGroupOrder
          (DL_GroupParameters_IntegerBased *this,Integer *param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = (**(code **)(*(long *)this + 0xb0))();
  lVar1 = -1;
  if (iVar3 == 1) {
    lVar1 = 1;
  }
  Integer::Integer((Integer *)local_68,lVar1);
                    /* try { // try from 00cb3494 to 00cb34a3 has its CatchHandler @ 00cb350c */
  Integer::Minus(param_1);
  if (uStack_50 <= local_58) {
    local_58 = uStack_50;
  }
  local_68[0] = &PTR__Integer_0100c890;
  for (; local_58 != 0; local_58 = local_58 - 1) {
    *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
  }
                    /* try { // try from 00cb34dc to 00cb34df has its CatchHandler @ 00cb3508 */
  UnalignedDeallocate(local_48);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


