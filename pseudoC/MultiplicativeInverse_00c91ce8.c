// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiplicativeInverse
// Entry Point: 00c91ce8
// Size: 972 bytes
// Signature: undefined __thiscall MultiplicativeInverse(QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> * this, PolynomialMod2 * param_1)


/* CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>
   >::MultiplicativeInverse(CryptoPP::PolynomialMod2 const&) const */

undefined8 __thiscall
CryptoPP::QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::MultiplicativeInverse
          (QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *this,
          PolynomialMod2 *param_1)

{
  long lVar1;
  PolynomialMod2 *pPVar2;
  undefined8 uVar3;
  ulong uVar4;
  PolynomialMod2 *pPVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  PolynomialMod2 aPStack_170 [8];
  ulong local_168;
  ulong uStack_160;
  void *local_158;
  PolynomialMod2 aPStack_150 [8];
  ulong local_148;
  ulong uStack_140;
  void *local_138;
  PolynomialMod2 aPStack_130 [8];
  ulong local_128;
  ulong uStack_120;
  void *local_118;
  PolynomialMod2 aPStack_110 [8];
  ulong local_108;
  ulong uStack_100;
  void *local_f8;
  PolynomialMod2 aPStack_f0 [8];
  ulong local_e8;
  ulong uStack_e0;
  void *local_d8;
  PolynomialMod2 aPStack_d0 [8];
  ulong local_c8;
  ulong uStack_c0;
  void *local_b8;
  PolynomialMod2 aPStack_b0 [8];
  ulong local_a8;
  ulong uStack_a0;
  void *local_98;
  PolynomialMod2 aPStack_90 [8];
  ulong local_88;
  ulong uStack_80;
  void *local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  PolynomialMod2::PolynomialMod2(aPStack_d0,(PolynomialMod2 *)(this + 0x70));
                    /* try { // try from 00c91d34 to 00c91d3f has its CatchHandler @ 00c920d0 */
  PolynomialMod2::PolynomialMod2(aPStack_b0,param_1);
                    /* try { // try from 00c91d44 to 00c91d4b has its CatchHandler @ 00c920cc */
  PolynomialMod2::PolynomialMod2(aPStack_90);
                    /* try { // try from 00c91d4c to 00c91d5f has its CatchHandler @ 00c92110 */
  pPVar2 = (PolynomialMod2 *)PolynomialMod2::Zero();
  PolynomialMod2::PolynomialMod2(aPStack_130,pPVar2);
                    /* try { // try from 00c91d64 to 00c91d73 has its CatchHandler @ 00c920f0 */
  pPVar2 = (PolynomialMod2 *)PolynomialMod2::One();
  PolynomialMod2::PolynomialMod2(aPStack_110,pPVar2);
                    /* try { // try from 00c91d7c to 00c91d83 has its CatchHandler @ 00c920c8 */
  PolynomialMod2::PolynomialMod2(aPStack_f0);
                    /* try { // try from 00c91d84 to 00c91d8b has its CatchHandler @ 00c920c0 */
  PolynomialMod2::PolynomialMod2(aPStack_170);
  uVar8 = 0;
  pPVar2 = (PolynomialMod2 *)(this + 0x50);
  uVar9 = 2;
  uVar6 = 1;
  while( true ) {
    uVar7 = uVar9;
    uVar9 = (ulong)uVar8;
                    /* try { // try from 00c91dac to 00c91e07 has its CatchHandler @ 00c92140 */
    uVar3 = (**(code **)(*(long *)this + 0x18))(this);
    uVar4 = (**(code **)(*(long *)this + 0x10))(this,aPStack_d0 + uVar6 * 0x20,uVar3);
    if ((uVar4 & 1) != 0) break;
    PolynomialMod2::Divide
              (aPStack_d0 + uVar7 * 0x20,aPStack_170,aPStack_d0 + uVar9 * 0x20,
               aPStack_d0 + uVar6 * 0x20);
    PolynomialMod2::Times(aPStack_130 + uVar6 * 0x20);
                    /* try { // try from 00c91e08 to 00c91e13 has its CatchHandler @ 00c92124 */
    PolynomialMod2::operator=(pPVar2,aPStack_150);
    uVar4 = local_148;
    if (uStack_140 <= local_148) {
      uVar4 = uStack_140;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_138 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c91e40 to 00c91e43 has its CatchHandler @ 00c92128 */
    UnalignedDeallocate(local_138);
                    /* try { // try from 00c91e4c to 00c91e57 has its CatchHandler @ 00c92140 */
    PolynomialMod2::Xor(aPStack_130 + uVar9 * 0x20);
                    /* try { // try from 00c91e58 to 00c91e63 has its CatchHandler @ 00c9212c */
    pPVar5 = (PolynomialMod2 *)PolynomialMod2::operator=(pPVar2,aPStack_150);
    uVar4 = local_148;
    if (uStack_140 <= local_148) {
      uVar4 = uStack_140;
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)((long)local_138 + uVar4 * 4 + -4) = 0;
    }
                    /* try { // try from 00c91e90 to 00c91e93 has its CatchHandler @ 00c9213c */
    UnalignedDeallocate(local_138);
                    /* try { // try from 00c91e9c to 00c91ea3 has its CatchHandler @ 00c92140 */
    PolynomialMod2::operator=(aPStack_130 + uVar7 * 0x20,pPVar5);
    uVar8 = (uint)uVar6;
    uVar6 = uVar7;
  }
                    /* try { // try from 00c91eb4 to 00c91ee7 has its CatchHandler @ 00c92120 */
  pPVar5 = (PolynomialMod2 *)PolynomialMod2::One();
  uVar6 = PolynomialMod2::Equals(aPStack_d0 + uVar9 * 0x20,pPVar5);
  if ((uVar6 & 1) == 0) {
                    /* try { // try from 00c91f3c to 00c91f3f has its CatchHandler @ 00c92120 */
    uVar3 = PolynomialMod2::Zero();
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
  }
  else {
    PolynomialMod2::DividedBy(aPStack_130 + uVar9 * 0x20);
                    /* try { // try from 00c91ee8 to 00c91ef3 has its CatchHandler @ 00c920b8 */
    uVar3 = PolynomialMod2::operator=(pPVar2,aPStack_150);
    if (uStack_140 <= local_148) {
      local_148 = uStack_140;
    }
    for (; local_148 != 0; local_148 = local_148 - 1) {
      *(undefined4 *)((long)local_138 + local_148 * 4 + -4) = 0;
    }
                    /* try { // try from 00c91f20 to 00c91f23 has its CatchHandler @ 00c920b4 */
    UnalignedDeallocate(local_138);
    if (uStack_160 <= local_168) {
      local_168 = uStack_160;
    }
  }
  for (; local_168 != 0; local_168 = local_168 - 1) {
    *(undefined4 *)((long)local_158 + local_168 * 4 + -4) = 0;
  }
                    /* try { // try from 00c91f6c to 00c91f6f has its CatchHandler @ 00c920bc */
  UnalignedDeallocate(local_158);
  if (uStack_e0 <= local_e8) {
    local_e8 = uStack_e0;
  }
  for (; local_e8 != 0; local_e8 = local_e8 - 1) {
    *(undefined4 *)((long)local_d8 + local_e8 * 4 + -4) = 0;
  }
                    /* try { // try from 00c91f98 to 00c91ff3 has its CatchHandler @ 00c9211c */
  UnalignedDeallocate(local_d8);
  if (uStack_100 <= local_108) {
    local_108 = uStack_100;
  }
  for (; local_108 != 0; local_108 = local_108 - 1) {
    *(undefined4 *)((long)local_f8 + local_108 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_f8);
  if (uStack_120 <= local_128) {
    local_128 = uStack_120;
  }
  for (; local_128 != 0; local_128 = local_128 - 1) {
    *(undefined4 *)((long)local_118 + local_128 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_118);
  if (uStack_80 <= local_88) {
    local_88 = uStack_80;
  }
  for (; local_88 != 0; local_88 = local_88 - 1) {
    *(undefined4 *)((long)local_78 + local_88 * 4 + -4) = 0;
  }
                    /* try { // try from 00c9201c to 00c92077 has its CatchHandler @ 00c92118 */
  UnalignedDeallocate(local_78);
  if (uStack_a0 <= local_a8) {
    local_a8 = uStack_a0;
  }
  for (; local_a8 != 0; local_a8 = local_a8 - 1) {
    *(undefined4 *)((long)local_98 + local_a8 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_98);
  if (uStack_c0 <= local_c8) {
    local_c8 = uStack_c0;
  }
  for (; local_c8 != 0; local_c8 = local_c8 - 1) {
    *(undefined4 *)((long)local_b8 + local_c8 * 4 + -4) = 0;
  }
  UnalignedDeallocate(local_b8);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3;
}


