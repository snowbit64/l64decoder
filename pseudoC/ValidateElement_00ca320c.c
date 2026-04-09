// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateElement
// Entry Point: 00ca320c
// Size: 628 bytes
// Signature: undefined __thiscall ValidateElement(DL_GroupParameters_EC<CryptoPP::EC2N> * this, uint param_1, EC2NPoint * param_2, DL_FixedBasePrecomputation * param_3)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::ValidateElement(unsigned int,
   CryptoPP::EC2NPoint const&, CryptoPP::DL_FixedBasePrecomputation<CryptoPP::EC2NPoint> const*)
   const */

uint __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::EC2N>::ValidateElement
          (DL_GroupParameters_EC<CryptoPP::EC2N> *this,uint param_1,EC2NPoint *param_2,
          DL_FixedBasePrecomputation *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined **local_98;
  PolynomialMod2 aPStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  PolynomialMod2 aPStack_70 [8];
  ulong local_68;
  ulong uStack_60;
  void *local_58;
  byte local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (**(code **)(*(long *)this + 0xf8))(this,param_2);
  if ((uVar3 & 1) == 0) {
    uVar2 = (**(code **)(*(long *)(this + 0x18) + 0x70))(this + 0x18,param_2);
    if ((param_1 != 0) && (param_3 != (DL_FixedBasePrecomputation *)0x0)) {
      if ((uVar2 & 1) == 0) goto LAB_00ca3254;
      uVar4 = (**(code **)(*(long *)this + 0x88))(this);
      uVar5 = Integer::One();
      (**(code **)(*(long *)param_3 + 0x40))(&local_98,param_3,uVar4,uVar5);
      if ((local_50 == 0) || (param_2[0x48] == (EC2NPoint)0x0)) {
                    /* try { // try from 00ca32e0 to 00ca32f7 has its CatchHandler @ 00ca3480 */
        if (((local_50 | (byte)param_2[0x48]) == 0) &&
           (uVar3 = PolynomialMod2::Equals(aPStack_90,(PolynomialMod2 *)(param_2 + 8)),
           (uVar3 & 1) != 0)) {
          uVar2 = PolynomialMod2::Equals(aPStack_70,(PolynomialMod2 *)(param_2 + 0x28));
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 1;
      }
      uVar3 = local_68;
      if (uStack_60 <= local_68) {
        uVar3 = uStack_60;
      }
      local_98 = &PTR__EC2NPoint_010026a8;
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)((long)local_58 + uVar3 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca333c to 00ca333f has its CatchHandler @ 00ca3488 */
      UnalignedDeallocate(local_58);
      uVar3 = local_88;
      if (uStack_80 <= local_88) {
        uVar3 = uStack_80;
      }
      for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined4 *)((long)local_78 + uVar3 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca3368 to 00ca336b has its CatchHandler @ 00ca3484 */
      UnalignedDeallocate(local_78);
    }
    if ((1 < param_1) && ((uVar2 & 1) != 0)) {
      uVar4 = (**(code **)(*(long *)this + 0xa0))(this);
      if (param_3 == (DL_FixedBasePrecomputation *)0x0) {
        pcVar6 = *(code **)(*(long *)this + 0x80);
        param_3 = (DL_FixedBasePrecomputation *)this;
      }
      else {
        param_2 = (EC2NPoint *)(**(code **)(*(long *)this + 0x88))(this);
        pcVar6 = *(code **)(*(long *)param_3 + 0x40);
      }
      (*pcVar6)(&local_98,param_3,param_2,uVar4);
                    /* try { // try from 00ca33d8 to 00ca33e3 has its CatchHandler @ 00ca3494 */
      uVar2 = (**(code **)(*(long *)this + 0xf8))(this,&local_98);
      if (uStack_60 <= local_68) {
        local_68 = uStack_60;
      }
      local_98 = &PTR__EC2NPoint_010026a8;
      for (; local_68 != 0; local_68 = local_68 - 1) {
        *(undefined4 *)((long)local_58 + local_68 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca3420 to 00ca3423 has its CatchHandler @ 00ca3490 */
      UnalignedDeallocate(local_58);
      if (uStack_80 <= local_88) {
        local_88 = uStack_80;
      }
      for (; local_88 != 0; local_88 = local_88 - 1) {
        *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
      }
                    /* try { // try from 00ca344c to 00ca344f has its CatchHandler @ 00ca348c */
      UnalignedDeallocate(local_78);
    }
  }
  else {
LAB_00ca3254:
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2 & 1;
}


