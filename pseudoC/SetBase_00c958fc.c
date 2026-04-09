// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetBase
// Entry Point: 00c958fc
// Size: 620 bytes
// Signature: undefined __thiscall SetBase(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> * this, DL_GroupPrecomputation * param_1, EC2NPoint * param_2)


/* CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::SetBase(CryptoPP::DL_GroupPrecomputation<CryptoPP::EC2NPoint>
   const&, CryptoPP::EC2NPoint const&) */

void __thiscall
CryptoPP::DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>::SetBase
          (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *this,DL_GroupPrecomputation *param_1
          ,EC2NPoint *param_2)

{
  PolynomialMod2 *this_00;
  PolynomialMod2 *this_01;
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined **local_b8;
  PolynomialMod2 aPStack_b0 [8];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  PolynomialMod2 aPStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar3 & 1) == 0) {
    local_b8 = &PTR__EC2NPoint_010026a8;
    PolynomialMod2::PolynomialMod2(aPStack_b0,(PolynomialMod2 *)(param_2 + 8));
                    /* try { // try from 00c95990 to 00c95993 has its CatchHandler @ 00c95b68 */
    PolynomialMod2::PolynomialMod2(aPStack_90,(PolynomialMod2 *)(param_2 + 0x28));
    local_70 = *(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(param_2 + 0x48);
  }
  else {
    (**(code **)(*(long *)param_1 + 0x18))(&local_b8,param_1,param_2);
  }
  this_00 = (PolynomialMod2 *)(this + 0x10);
                    /* try { // try from 00c959a8 to 00c959bf has its CatchHandler @ 00c95b84 */
  PolynomialMod2::operator=(this_00,aPStack_b0);
  this_01 = (PolynomialMod2 *)(this + 0x30);
  PolynomialMod2::operator=(this_01,aPStack_90);
  local_b8 = &PTR__EC2NPoint_010026a8;
  this[0x50] = local_70;
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c959f8 to 00c959fb has its CatchHandler @ 00c95b80 */
  UnalignedDeallocate(local_78);
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
                    /* try { // try from 00c95a24 to 00c95a27 has its CatchHandler @ 00c95b7c */
  UnalignedDeallocate(local_98);
  lVar5 = *(long *)(this + 0x90);
  if (lVar5 != *(long *)(this + 0x98)) {
    if (((this[0x50] != (DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint>)0x0) &&
        (*(byte *)(lVar5 + 0x48) != 0)) ||
       ((((byte)this[0x50] | *(byte *)(lVar5 + 0x48)) == 0 &&
        ((uVar3 = PolynomialMod2::Equals(this_00,(PolynomialMod2 *)(lVar5 + 8)), (uVar3 & 1) != 0 &&
         (uVar3 = PolynomialMod2::Equals(this_01,(PolynomialMod2 *)(lVar5 + 0x28)), (uVar3 & 1) != 0
         )))))) goto LAB_00c95b00;
  }
  puVar6 = *(undefined8 **)(this + 0x98);
  lVar5 = (long)puVar6 - *(long *)(this + 0x90);
  lVar4 = lVar5 >> 4;
  if (lVar5 == 0) {
    std::__ndk1::vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>>::__append
              ((vector<CryptoPP::EC2NPoint,std::__ndk1::allocator<CryptoPP::EC2NPoint>> *)
               (this + 0x90),lVar4 * 0x3333333333333333 + 1);
  }
  else if (1 < (ulong)(lVar4 * -0x3333333333333333)) {
    puVar1 = (undefined8 *)(*(long *)(this + 0x90) + 0x50);
    while (puVar6 != puVar1) {
      puVar6 = puVar6 + -10;
      (**(code **)*puVar6)(puVar6);
    }
    *(undefined8 **)(this + 0x98) = puVar1;
  }
  lVar5 = *(long *)(this + 0x90);
  PolynomialMod2::operator=((PolynomialMod2 *)(lVar5 + 8),this_00);
  PolynomialMod2::operator=((PolynomialMod2 *)(lVar5 + 0x28),this_01);
  *(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(lVar5 + 0x48) = this[0x50];
LAB_00c95b00:
  uVar3 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if ((uVar3 & 1) != 0) {
    PolynomialMod2::operator=(this_00,(PolynomialMod2 *)(param_2 + 8));
    PolynomialMod2::operator=(this_01,(PolynomialMod2 *)(param_2 + 0x28));
    this[0x50] = *(DL_FixedBasePrecomputationImpl<CryptoPP::EC2NPoint> *)(param_2 + 0x48);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


