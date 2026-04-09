// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GF2NP
// Entry Point: 00ce67e0
// Size: 536 bytes
// Signature: undefined __thiscall GF2NP(GF2NP * this, PolynomialMod2 * param_1)


/* CryptoPP::GF2NP::GF2NP(CryptoPP::PolynomialMod2 const&) */

void __thiscall CryptoPP::GF2NP::GF2NP(GF2NP *this,PolynomialMod2 *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  void *__src;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **local_b0;
  undefined **local_a8;
  undefined ***pppuStack_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  pppuStack_a0 = &local_b0;
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  local_90 = 0x3fffffffffffffff;
  uStack_88 = 0;
  local_a8 = &PTR__AbstractGroup_01002610;
  local_80 = (void *)0x0;
  local_b0 = &PTR__EuclideanDomainOf_00ff3220;
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0x3fffffffffffffff;
  *(undefined ***)(this + 8) = &PTR__AbstractGroup_01002610;
  *(GF2NP **)(this + 0x10) = this;
  *(undefined ***)this = &PTR__QuotientRing_00ff3308;
                    /* try { // try from 00ce6860 to 00ce686b has its CatchHandler @ 00ce6a00 */
  EuclideanDomainOf<CryptoPP::PolynomialMod2>::EuclideanDomainOf
            ((EuclideanDomainOf<CryptoPP::PolynomialMod2> *)(this + 0x18),
             (EuclideanDomainOf *)&local_b0);
  uVar10 = *(ulong *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x78) = 0x3fffffffffffffff;
  *(ulong *)(this + 0x80) = uVar10;
                    /* try { // try from 00ce6874 to 00ce6887 has its CatchHandler @ 00ce6a08 */
  AllocatorBase<unsigned_int>::CheckSize(uVar10);
  if (uVar10 == 0) {
    __dest = (void *)0x0;
    *(undefined8 *)(this + 0x88) = 0;
    __src = *(void **)(param_1 + 0x18);
    if (__src == (void *)0x0) goto LAB_00ce68a4;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar10 << 2);
    *(void **)(this + 0x88) = __dest;
    __src = *(void **)(param_1 + 0x18);
    if (__dest == __src) goto LAB_00ce68a4;
  }
  memcpy(__dest,__src,*(long *)(this + 0x80) << 2);
LAB_00ce68a4:
  local_b0 = &PTR__EuclideanDomainOf_00ff3220;
  uVar10 = local_70;
  if (local_68 <= local_70) {
    uVar10 = local_68;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)((long)local_60 + uVar10 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce68d4 to 00ce68d7 has its CatchHandler @ 00ce69fc */
  UnalignedDeallocate(local_60);
  uVar10 = local_90;
  if (uStack_88 <= local_90) {
    uVar10 = uStack_88;
  }
  local_b0 = &PTR__AbstractEuclideanDomain_00ff9230;
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)((long)local_80 + uVar10 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce6910 to 00ce6913 has its CatchHandler @ 00ce69f8 */
  UnalignedDeallocate(local_80);
  *(undefined ***)this = &PTR__QuotientRing_010093a8;
  iVar4 = (int)*(ulong *)(param_1 + 0x10) * -0x20 + 1;
  uVar10 = *(ulong *)(param_1 + 0x10);
  do {
    if (uVar10 == 0) goto LAB_00ce698c;
    uVar9 = uVar10 - 1;
    lVar1 = uVar10 * 4;
    iVar4 = iVar4 + 0x20;
    uVar10 = uVar9;
  } while (*(int *)(*(long *)(param_1 + 0x18) + -4 + lVar1) == 0);
  if ((int)uVar9 == -1) {
LAB_00ce698c:
    *(undefined4 *)(this + 0x90) = 0xffffffff;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  else {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x18) + (uVar9 & 0xffffffff) * 4);
    if (uVar2 == 0) {
      uVar7 = 0;
    }
    else {
      uVar8 = 0;
      uVar6 = 0x20;
      do {
        uVar3 = uVar8 + uVar6 >> 1;
        uVar7 = uVar3;
        if (uVar2 >> (ulong)(uVar3 & 0x1f) != 0) {
          uVar7 = uVar6;
          uVar8 = uVar3;
        }
        uVar6 = uVar7;
      } while (1 < uVar7 - uVar8);
    }
    *(uint *)(this + 0x90) = uVar7 - iVar4;
    lVar5 = *(long *)(lVar5 + 0x28);
  }
  if (lVar5 != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


