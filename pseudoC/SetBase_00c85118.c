// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetBase
// Entry Point: 00c85118
// Size: 452 bytes
// Signature: undefined __thiscall SetBase(DL_FixedBasePrecomputationImpl<CryptoPP::Integer> * this, DL_GroupPrecomputation * param_1, Integer * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::SetBase(CryptoPP::DL_GroupPrecomputation<CryptoPP::Integer>
   const&, CryptoPP::Integer const&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::Integer>::SetBase
          (DL_FixedBasePrecomputationImpl<CryptoPP::Integer> *this,DL_GroupPrecomputation *param_1,
          Integer *param_2)

{
  Integer *this_00;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  Integer **this_01;
  undefined8 *puVar6;
  undefined **local_98 [2];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar5 & 1) == 0) {
    Integer::Integer((Integer *)local_98,param_2);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(local_98,param_1,param_2);
  }
  this_00 = (Integer *)(this + 8);
                    /* try { // try from 00c85190 to 00c8519b has its CatchHandler @ 00c852e0 */
  Integer::operator=(this_00,(Integer *)local_98);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  local_98[0] = &PTR__Integer_0100c890;
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c851d4 to 00c851d7 has its CatchHandler @ 00c852dc */
  UnalignedDeallocate(local_78);
  this_01 = (Integer **)(this + 0x70);
  if (*this_01 == *(Integer **)(this + 0x78)) {
    uVar5 = 0;
LAB_00c8526c:
    std::__ndk1::vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>>::__append
              ((vector<CryptoPP::Integer,std::__ndk1::allocator<CryptoPP::Integer>> *)this_01,
               1 - uVar5);
  }
  else {
    iVar4 = Integer::Compare(this_00,*this_01);
    if (iVar4 == 0) goto LAB_00c85288;
    puVar6 = *(undefined8 **)(this + 0x78);
    lVar2 = (long)puVar6 - *(long *)(this + 0x70);
    uVar5 = (lVar2 >> 4) * -0x5555555555555555;
    if (lVar2 == 0) goto LAB_00c8526c;
    if (1 < uVar5) {
      puVar1 = (undefined8 *)(*(long *)(this + 0x70) + 0x30);
      while (puVar6 != puVar1) {
        puVar6 = puVar6 + -6;
        (**(code **)*puVar6)(puVar6);
      }
      *(undefined8 **)(this + 0x78) = puVar1;
    }
  }
  Integer::operator=(*this_01,this_00);
LAB_00c85288:
  uVar5 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar5 & 1) != 0) {
    Integer::operator=(this_00,param_2);
  }
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


