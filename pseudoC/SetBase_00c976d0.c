// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetBase
// Entry Point: 00c976d0
// Size: 652 bytes
// Signature: undefined __thiscall SetBase(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> * this, DL_GroupPrecomputation * param_1, ECPPoint * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::SetBase(CryptoPP::DL_GroupPrecomputation<CryptoPP::ECPPoint>
   const&, CryptoPP::ECPPoint const&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>::SetBase
          (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *this,DL_GroupPrecomputation *param_1,
          ECPPoint *param_2)

{
  Integer *this_00;
  Integer *this_01;
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined **local_d8;
  undefined **local_d0 [2];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined **local_a0 [2];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar4 & 1) == 0) {
    local_d8 = &PTR__ECPPoint_00fe9fd8;
    Integer::Integer((Integer *)local_d0,(Integer *)(param_2 + 8));
                    /* try { // try from 00c97764 to 00c97767 has its CatchHandler @ 00c9795c */
    Integer::Integer((Integer *)local_a0,(Integer *)(param_2 + 0x38));
    local_70 = *(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(param_2 + 0x68);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(&local_d8,param_1,param_2);
  }
  this_00 = (Integer *)(this + 0x10);
                    /* try { // try from 00c9777c to 00c97793 has its CatchHandler @ 00c97978 */
  Integer::operator=(this_00,(Integer *)local_d0);
  this_01 = (Integer *)(this + 0x40);
  Integer::operator=(this_01,(Integer *)local_a0);
  local_d8 = &PTR__ECPPoint_00fe9fd8;
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  local_a0[0] = &PTR__Integer_0100c890;
  this[0x70] = local_70;
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
                    /* try { // try from 00c977dc to 00c977df has its CatchHandler @ 00c97974 */
  UnalignedDeallocate(local_80);
  local_d0[0] = &PTR__Integer_0100c890;
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00c97810 to 00c97813 has its CatchHandler @ 00c97970 */
  UnalignedDeallocate(local_b0);
  lVar6 = *(long *)(this + 0xb0);
  if (lVar6 != *(long *)(this + 0xb8)) {
    if (((this[0x70] != (DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint>)0x0) &&
        (*(byte *)(lVar6 + 0x68) != 0)) ||
       ((((byte)this[0x70] | *(byte *)(lVar6 + 0x68)) == 0 &&
        ((iVar3 = Integer::Compare(this_00,(Integer *)(lVar6 + 8)), iVar3 == 0 &&
         (iVar3 = Integer::Compare(this_01,(Integer *)(lVar6 + 0x38)), iVar3 == 0))))))
    goto LAB_00c978f4;
  }
  puVar7 = *(undefined8 **)(this + 0xb8);
  lVar6 = (long)puVar7 - *(long *)(this + 0xb0);
  lVar5 = lVar6 >> 4;
  if (lVar6 == 0) {
    std::__ndk1::vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>>::__append
              ((vector<CryptoPP::ECPPoint,std::__ndk1::allocator<CryptoPP::ECPPoint>> *)
               (this + 0xb0),lVar5 * -0x6db6db6db6db6db7 + 1);
  }
  else if (1 < (ulong)(lVar5 * 0x6db6db6db6db6db7)) {
    puVar1 = (undefined8 *)(*(long *)(this + 0xb0) + 0x70);
    while (puVar7 != puVar1) {
      puVar7 = puVar7 + -0xe;
      (**(code **)*puVar7)(puVar7);
    }
    *(undefined8 **)(this + 0xb8) = puVar1;
  }
  lVar6 = *(long *)(this + 0xb0);
  Integer::operator=((Integer *)(lVar6 + 8),this_00);
  Integer::operator=((Integer *)(lVar6 + 0x38),this_01);
  *(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(lVar6 + 0x68) = this[0x70];
LAB_00c978f4:
  uVar4 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar4 & 1) != 0) {
    Integer::operator=(this_00,(Integer *)(param_2 + 8));
    Integer::operator=(this_01,(Integer *)(param_2 + 0x38));
    this[0x70] = *(DL_FixedBasePrecomputationImpl<CryptoPP::ECPPoint> *)(param_2 + 0x68);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


