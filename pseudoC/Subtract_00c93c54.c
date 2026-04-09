// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Subtract
// Entry Point: 00c93c54
// Size: 304 bytes
// Signature: undefined __thiscall Subtract(AbstractGroup<CryptoPP::EC2NPoint> * this, EC2NPoint * param_1, EC2NPoint * param_2)


/* CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::Subtract(CryptoPP::EC2NPoint const&,
   CryptoPP::EC2NPoint const&) const */

undefined8 __thiscall
CryptoPP::AbstractGroup<CryptoPP::EC2NPoint>::Subtract
          (AbstractGroup<CryptoPP::EC2NPoint> *this,EC2NPoint *param_1,EC2NPoint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined **local_a8;
  PolynomialMod2 aPStack_a0 [8];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  PolynomialMod2 aPStack_80 [8];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  EC2NPoint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_a8 = &PTR__EC2NPoint_010026a8;
  PolynomialMod2::PolynomialMod2(aPStack_a0,(PolynomialMod2 *)(param_1 + 8));
                    /* try { // try from 00c93cb4 to 00c93cb7 has its CatchHandler @ 00c93d8c */
  PolynomialMod2::PolynomialMod2(aPStack_80,(PolynomialMod2 *)(param_1 + 0x28));
  local_60 = param_1[0x48];
                    /* try { // try from 00c93cc8 to 00c93ceb has its CatchHandler @ 00c93da0 */
  uVar2 = (**(code **)(*(long *)this + 0x28))(this,param_2);
  uVar2 = (**(code **)(*(long *)this + 0x20))(this,&local_a8,uVar2);
  local_a8 = &PTR__EC2NPoint_010026a8;
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00c93d20 to 00c93d23 has its CatchHandler @ 00c93d88 */
  UnalignedDeallocate(local_68);
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00c93d4c to 00c93d4f has its CatchHandler @ 00c93d84 */
  UnalignedDeallocate(local_88);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


