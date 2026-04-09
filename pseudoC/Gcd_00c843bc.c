// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Gcd
// Entry Point: 00c843bc
// Size: 448 bytes
// Signature: undefined __thiscall Gcd(AbstractEuclideanDomain<CryptoPP::Integer> * this, Integer * param_1, Integer * param_2)


/* CryptoPP::AbstractEuclideanDomain<CryptoPP::Integer>::Gcd(CryptoPP::Integer const&,
   CryptoPP::Integer const&) const */

undefined8 __thiscall
CryptoPP::AbstractEuclideanDomain<CryptoPP::Integer>::Gcd
          (AbstractEuclideanDomain<CryptoPP::Integer> *this,Integer *param_1,Integer *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  Integer *pIVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined **local_e8 [2];
  ulong local_d8;
  ulong uStack_d0;
  void *local_c8;
  undefined **local_b8 [2];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  undefined **local_88 [2];
  ulong local_78;
  ulong uStack_70;
  void *local_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Integer::Integer((Integer *)local_e8,param_2);
                    /* try { // try from 00c84400 to 00c8440b has its CatchHandler @ 00c84584 */
  Integer::Integer((Integer *)local_b8,param_1);
                    /* try { // try from 00c84410 to 00c84417 has its CatchHandler @ 00c84580 */
  Integer::Integer((Integer *)local_88);
  uVar6 = 0;
  uVar8 = 2;
  uVar7 = 1;
  while( true ) {
    uVar5 = uVar8;
    uVar8 = (ulong)uVar6;
                    /* try { // try from 00c84438 to 00c84487 has its CatchHandler @ 00c845ac */
    uVar2 = (**(code **)(*(long *)this + 0x18))(this);
    uVar3 = (**(code **)(*(long *)this + 0x10))(this,local_e8 + uVar7 * 6,uVar2);
    if ((uVar3 & 1) != 0) break;
    pIVar4 = (Integer *)
             (**(code **)(*(long *)this + 200))(this,local_e8 + uVar8 * 6,local_e8 + uVar7 * 6);
    Integer::operator=((Integer *)(local_e8 + uVar5 * 6),pIVar4);
    uVar6 = (uint)uVar7;
    uVar7 = uVar5;
  }
                    /* try { // try from 00c8449c to 00c8449f has its CatchHandler @ 00c8457c */
  uVar2 = Integer::operator=((Integer *)(this + 0x18),(Integer *)(local_e8 + uVar8 * 6));
  if (uStack_70 <= local_78) {
    local_78 = uStack_70;
  }
  local_88[0] = &PTR__Integer_0100c890;
  for (; local_78 != 0; local_78 = local_78 - 1) {
    *(undefined4 *)((long)local_68 + local_78 * 4 + -4) = 0;
  }
                    /* try { // try from 00c844dc to 00c84547 has its CatchHandler @ 00c845a8 */
  UnalignedDeallocate(local_68);
  local_b8[0] = &PTR__Integer_0100c890;
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_98);
  local_e8[0] = &PTR__Integer_0100c890;
  if (uStack_d0 <= local_d8) {
    local_d8 = uStack_d0;
  }
  for (; local_d8 != 0; local_d8 = local_d8 - 1) {
    *(undefined4 *)((long)local_c8 + local_d8 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_c8);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}


