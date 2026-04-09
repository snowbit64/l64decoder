// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Gcd
// Entry Point: 00c90b64
// Size: 420 bytes
// Signature: undefined __thiscall Gcd(AbstractEuclideanDomain<CryptoPP::PolynomialMod2> * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::Gcd(CryptoPP::PolynomialMod2 const&,
   CryptoPP::PolynomialMod2 const&) const */

undefined8 __thiscall
CryptoPP::AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::Gcd
          (AbstractEuclideanDomain<CryptoPP::PolynomialMod2> *this,PolynomialMod2 *param_1,
          PolynomialMod2 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  PolynomialMod2 *pPVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  PolynomialMod2 aPStack_b8 [8];
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  PolynomialMod2 aPStack_98 [8];
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  PolynomialMod2 aPStack_78 [8];
  ulong local_70;
  ulong uStack_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::PolynomialMod2(aPStack_b8,param_2);
                    /* try { // try from 00c90ba8 to 00c90bb3 has its CatchHandler @ 00c90d10 */
  PolynomialMod2::PolynomialMod2(aPStack_98,param_1);
                    /* try { // try from 00c90bb8 to 00c90bbf has its CatchHandler @ 00c90d0c */
  PolynomialMod2::PolynomialMod2(aPStack_78);
  uVar6 = 0;
  uVar8 = 2;
  uVar7 = 1;
  while( true ) {
    uVar5 = uVar8;
    uVar8 = (ulong)uVar6;
                    /* try { // try from 00c90bdc to 00c90c33 has its CatchHandler @ 00c90d38 */
    uVar2 = (**(code **)(*(long *)this + 0x18))(this);
    uVar3 = (**(code **)(*(long *)this + 0x10))(this,aPStack_b8 + uVar7 * 0x20,uVar2);
    if ((uVar3 & 1) != 0) break;
    pPVar4 = (PolynomialMod2 *)
             (**(code **)(*(long *)this + 200))
                       (this,aPStack_b8 + uVar8 * 0x20,aPStack_b8 + uVar7 * 0x20);
    PolynomialMod2::operator=(aPStack_b8 + uVar5 * 0x20,pPVar4);
    uVar6 = (uint)uVar7;
    uVar7 = uVar5;
  }
                    /* try { // try from 00c90c48 to 00c90c4b has its CatchHandler @ 00c90d08 */
  uVar2 = PolynomialMod2::operator=((PolynomialMod2 *)(this + 0x18),aPStack_b8 + uVar8 * 0x20);
  if (uStack_68 <= local_70) {
    local_70 = uStack_68;
  }
  for (; local_70 != 0; local_70 = local_70 - 1) {
    *(undefined4 *)((long)local_60 + local_70 * 4 + -4) = 0;
  }
                    /* try { // try from 00c90c78 to 00c90cd3 has its CatchHandler @ 00c90d34 */
  UnalignedDeallocate(local_60);
  if (uStack_88 <= local_90) {
    local_90 = uStack_88;
  }
  for (; local_90 != 0; local_90 = local_90 - 1) {
    *(undefined4 *)((long)local_80 + local_90 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_80);
  if (uStack_a8 <= local_b0) {
    local_b0 = uStack_a8;
  }
  for (; local_b0 != 0; local_b0 = local_b0 - 1) {
    *(undefined4 *)((long)local_a0 + local_b0 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_a0);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


