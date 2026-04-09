// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: InverseMod
// Entry Point: 00ce6004
// Size: 652 bytes
// Signature: undefined __cdecl InverseMod(PolynomialMod2 * param_1)


/* CryptoPP::PolynomialMod2::InverseMod(CryptoPP::PolynomialMod2 const&) const */

void CryptoPP::PolynomialMod2::InverseMod(PolynomialMod2 *param_1)

{
  long lVar1;
  long lVar2;
  long in_x1;
  void *pvVar3;
  void *__src;
  long in_x8;
  ulong uVar4;
  undefined **local_150;
  undefined **local_148;
  undefined ***pppuStack_140;
  ulong local_130;
  ulong uStack_128;
  void *local_120;
  ulong local_110;
  ulong local_108;
  void *local_100;
  undefined **local_f8;
  undefined **local_f0;
  undefined ***pppuStack_e8;
  undefined **local_e0 [4];
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  ulong local_a0;
  ulong uStack_98;
  void *local_90;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  pppuStack_140 = &local_150;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_120 = (void *)0x0;
  local_130 = 0x3fffffffffffffff;
  uStack_128 = 0;
  local_148 = &PTR__AbstractGroup_01002610;
  local_150 = &PTR__EuclideanDomainOf_00ff3220;
  pppuStack_e8 = &local_f8;
  local_108 = 0;
  local_100 = (void *)0x0;
  local_110 = 0x3fffffffffffffff;
  local_f8 = &PTR__QuotientRing_00ff3308;
  local_f0 = local_148;
                    /* try { // try from 00ce6090 to 00ce609b has its CatchHandler @ 00ce62a4 */
  EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf
            ((EuclideanDomainOf<CryptoPP::PolynomialMod2> *)local_e0,(EuclideanDomainOf *)&local_150
            );
  uVar4 = *(ulong *)(in_x1 + 0x10);
  local_80 = 0x3fffffffffffffff;
  local_78 = uVar4;
                    /* try { // try from 00ce60a4 to 00ce60b7 has its CatchHandler @ 00ce62ac */
  AllocatorBase<unsigned_int>::CheckSize(uVar4);
  if (uVar4 == 0) {
    pvVar3 = *(void **)(in_x1 + 0x18);
    local_70 = (void *)0x0;
    if (pvVar3 != (void *)0x0) goto LAB_00ce60c8;
  }
  else {
    local_70 = (void *)UnalignedAllocate(uVar4 << 2);
    pvVar3 = *(void **)(in_x1 + 0x18);
    if (local_70 != pvVar3) {
LAB_00ce60c8:
      memcpy(local_70,pvVar3,local_78 << 2);
    }
  }
                    /* try { // try from 00ce60d4 to 00ce6107 has its CatchHandler @ 00ce62bc */
  lVar2 = QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>>::MultiplicativeInverse
                    ((QuotientRing<CryptoPP::EuclideanDomainOf<CryptoPP::PolynomialMod2>> *)
                     &local_f8,param_1);
  uVar4 = *(ulong *)(lVar2 + 0x10);
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar4;
  AllocatorBase<unsigned_int>::CheckSize(uVar4);
  if (uVar4 == 0) {
    pvVar3 = (void *)0x0;
    __src = *(void **)(lVar2 + 0x18);
    *(undefined8 *)(in_x8 + 0x18) = 0;
    if (__src == (void *)0x0) goto LAB_00ce6120;
  }
  else {
    pvVar3 = (void *)UnalignedAllocate(uVar4 << 2);
    __src = *(void **)(lVar2 + 0x18);
    *(void **)(in_x8 + 0x18) = pvVar3;
    if (pvVar3 == __src) goto LAB_00ce6120;
  }
  memcpy(pvVar3,__src,uVar4 << 2);
LAB_00ce6120:
  local_f8 = &PTR__QuotientRing_00ff3308;
  uVar4 = local_80;
  if (local_78 <= local_80) {
    uVar4 = local_78;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)((long)local_70 + uVar4 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce6150 to 00ce6153 has its CatchHandler @ 00ce62a0 */
  UnalignedDeallocate(local_70);
  local_e0[0] = &PTR__EuclideanDomainOf_00ff3220;
  if (uStack_98 <= local_a0) {
    local_a0 = uStack_98;
  }
  for (; local_a0 != 0; local_a0 = local_a0 - 1) {
    *(undefined4 *)((long)local_90 + local_a0 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce6184 to 00ce6187 has its CatchHandler @ 00ce629c */
  UnalignedDeallocate(local_90);
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  local_e0[0] = &PTR__AbstractEuclideanDomain_00ff9230;
  for (; local_c0 != 0; local_c0 = local_c0 - 1) {
    *(undefined4 *)((long)local_b0 + local_c0 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce61c0 to 00ce61c3 has its CatchHandler @ 00ce6298 */
  UnalignedDeallocate(local_b0);
  local_150 = &PTR__EuclideanDomainOf_00ff3220;
  uVar4 = local_110;
  if (local_108 <= local_110) {
    uVar4 = local_108;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)((long)local_100 + uVar4 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce61f4 to 00ce61f7 has its CatchHandler @ 00ce6294 */
  UnalignedDeallocate(local_100);
  local_150 = &PTR__AbstractEuclideanDomain_00ff9230;
  uVar4 = local_130;
  if (uStack_128 <= local_130) {
    uVar4 = uStack_128;
  }
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)((long)local_120 + uVar4 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce6228 to 00ce622b has its CatchHandler @ 00ce6290 */
  UnalignedDeallocate(local_120);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


