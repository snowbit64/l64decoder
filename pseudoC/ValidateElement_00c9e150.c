// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ValidateElement
// Entry Point: 00c9e150
// Size: 688 bytes
// Signature: undefined __thiscall ValidateElement(DL_GroupParameters_EC<CryptoPP::ECP> * this, uint param_1, ECPPoint * param_2, DL_FixedBasePrecomputation * param_3)


/* CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::ValidateElement(unsigned int, CryptoPP::ECPPoint
   const&, CryptoPP::DL_FixedBasePrecomputation<CryptoPP::ECPPoint> const*) const */

byte __thiscall
CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>::ValidateElement
          (DL_GroupParameters_EC<CryptoPP::ECP> *this,uint param_1,ECPPoint *param_2,
          DL_FixedBasePrecomputation *param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined **local_c8;
  undefined **local_c0 [2];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined **local_90 [2];
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  byte local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = (**(code **)(*(long *)this + 0xf8))(this,param_2);
  if ((uVar4 & 1) == 0) {
    bVar2 = (**(code **)(**(long **)(this + 0x20) + 0x70))(*(long **)(this + 0x20),param_2);
    if ((param_1 != 0) && (param_3 != (DL_FixedBasePrecomputation *)0x0)) {
      if ((bVar2 & 1) == 0) goto LAB_00c9e19c;
      uVar5 = (**(code **)(*(long *)this + 0x88))(this);
      uVar6 = Integer::One();
      (**(code **)(*(long *)param_3 + 0x40))(&local_c8,param_3,uVar5,uVar6);
      if ((local_60 == 0) || (param_2[0x68] == (ECPPoint)0x0)) {
                    /* try { // try from 00c9e228 to 00c9e22b has its CatchHandler @ 00c9e400 */
        if (((local_60 | (byte)param_2[0x68]) == 0) &&
           (iVar3 = Integer::Compare((Integer *)local_c0,(Integer *)(param_2 + 8)), iVar3 == 0)) {
                    /* try { // try from 00c9e3ec to 00c9e3ef has its CatchHandler @ 00c9e400 */
          iVar3 = Integer::Compare((Integer *)local_90,(Integer *)(param_2 + 0x38));
          bVar2 = iVar3 == 0;
        }
        else {
          bVar2 = false;
        }
      }
      else {
        bVar2 = true;
      }
      local_c8 = &PTR__ECPPoint_00fe9fd8;
      local_90[0] = &PTR__Integer_0100c890;
      uVar4 = local_80;
      if (uStack_78 <= local_80) {
        uVar4 = uStack_78;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_70 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9e27c to 00c9e27f has its CatchHandler @ 00c9e408 */
      UnalignedDeallocate(local_70);
      local_c0[0] = &PTR__Integer_0100c890;
      uVar4 = local_b0;
      if (uStack_a8 <= local_b0) {
        uVar4 = uStack_a8;
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined4 *)((long)local_a0 + uVar4 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9e2b0 to 00c9e2b3 has its CatchHandler @ 00c9e404 */
      UnalignedDeallocate(local_a0);
    }
    if ((1 < param_1) && ((bVar2 & 1) != 0)) {
      uVar5 = (**(code **)(*(long *)this + 0xa0))(this);
      if (param_3 == (DL_FixedBasePrecomputation *)0x0) {
        pcVar7 = *(code **)(*(long *)this + 0x80);
        param_3 = (DL_FixedBasePrecomputation *)this;
      }
      else {
        param_2 = (ECPPoint *)(**(code **)(*(long *)this + 0x88))(this);
        pcVar7 = *(code **)(*(long *)param_3 + 0x40);
      }
      (*pcVar7)(&local_c8,param_3,param_2,uVar5);
                    /* try { // try from 00c9e320 to 00c9e32b has its CatchHandler @ 00c9e414 */
      bVar2 = (**(code **)(*(long *)this + 0xf8))(this,&local_c8);
      local_c8 = &PTR__ECPPoint_00fe9fd8;
      local_90[0] = &PTR__Integer_0100c890;
      if (uStack_78 <= local_80) {
        local_80 = uStack_78;
      }
      for (; local_80 != 0; local_80 = local_80 - 1) {
        *(undefined4 *)((long)local_70 + local_80 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9e378 to 00c9e37b has its CatchHandler @ 00c9e410 */
      UnalignedDeallocate(local_70);
      local_c0[0] = &PTR__Integer_0100c890;
      if (uStack_a8 <= local_b0) {
        local_b0 = uStack_a8;
      }
      for (; local_b0 != 0; local_b0 = local_b0 - 1) {
        *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
      }
                    /* try { // try from 00c9e3ac to 00c9e3af has its CatchHandler @ 00c9e40c */
      UnalignedDeallocate(local_a0);
    }
  }
  else {
LAB_00c9e19c:
    bVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2 & 1;
}


