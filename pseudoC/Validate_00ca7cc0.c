// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Validate
// Entry Point: 00ca7cc0
// Size: 364 bytes
// Signature: undefined __thiscall Validate(DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> * this, RandomNumberGenerator * param_1, uint param_2)


/* CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >::Validate(CryptoPP::RandomNumberGenerator&, unsigned int) const */

bool __thiscall
CryptoPP::DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>::Validate
          (DL_PrivateKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>> *this,
          RandomNumberGenerator *param_1,uint param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  Integer *pIVar6;
  Integer *this_00;
  Integer *pIVar7;
  undefined **local_78 [2];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  long local_48;
  
  pIVar7 = (Integer *)(ulong)param_2;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar4 = (long *)(**(code **)(*(long *)this + 0x10))();
  uVar5 = (**(code **)(*plVar4 + 0x20))(plVar4,param_1);
  plVar4 = (long *)(**(code **)(*(long *)this + 0x10))(this);
  pIVar6 = (Integer *)(**(code **)(*plVar4 + 0xa0))();
  this_00 = (Integer *)(**(code **)(*(long *)this + 0x20))(this);
  bVar2 = false;
  if (((uVar5 & 1) != 0) && (*(int *)(this_00 + 0x28) != 1)) {
    uVar5 = Integer::operator!(this_00);
    if ((uVar5 & 1) == 0) {
      iVar3 = Integer::Compare(this_00,pIVar6);
      bVar2 = param_2 == 0 && iVar3 < 0;
      if ((param_2 != 0) && (iVar3 < 0)) {
        Integer::Gcd(this_00,pIVar6,pIVar7);
                    /* try { // try from 00ca7da8 to 00ca7db7 has its CatchHandler @ 00ca7e30 */
        pIVar6 = (Integer *)Integer::One();
        iVar3 = Integer::Compare((Integer *)local_78,pIVar6);
        bVar2 = iVar3 == 0;
        if (uStack_60 <= local_68) {
          local_68 = uStack_60;
        }
        local_78[0] = &PTR__Integer_0100c890;
        for (; local_68 != 0; local_68 = local_68 - 1) {
          *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
        }
                    /* try { // try from 00ca7df8 to 00ca7dfb has its CatchHandler @ 00ca7e2c */
        UnalignedDeallocate(local_58);
      }
    }
    else {
      bVar2 = false;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


