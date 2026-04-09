// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Gcd
// Entry Point: 00ce5e88
// Size: 352 bytes
// Signature: undefined __thiscall Gcd(PolynomialMod2 * this, PolynomialMod2 * param_1, PolynomialMod2 * param_2)


/* CryptoPP::PolynomialMod2::Gcd(CryptoPP::PolynomialMod2 const&, CryptoPP::PolynomialMod2 const&)
    */

void __thiscall
CryptoPP::PolynomialMod2::Gcd(PolynomialMod2 *this,PolynomialMod2 *param_1,PolynomialMod2 *param_2)

{
  long lVar1;
  long lVar2;
  void *__dest;
  void *__src;
  long in_x8;
  ulong uVar3;
  undefined **local_a0;
  undefined **local_98;
  undefined ***pppuStack_90;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  pppuStack_90 = &local_a0;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = (void *)0x0;
  local_98 = &PTR__AbstractGroup_01002610;
  local_58 = 0;
  local_50 = (void *)0x0;
  local_a0 = &PTR__EuclideanDomainOf_00ff3220;
  local_80 = 0x3fffffffffffffff;
  uStack_78 = 0;
  local_60 = 0x3fffffffffffffff;
                    /* try { // try from 00ce5ef0 to 00ce5f1b has its CatchHandler @ 00ce5ff0 */
  lVar2 = AbstractEuclideanDomain<CryptoPP::PolynomialMod2>::Gcd
                    ((AbstractEuclideanDomain<CryptoPP::PolynomialMod2> *)&local_a0,this,param_1);
  uVar3 = *(ulong *)(lVar2 + 0x10);
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = uVar3;
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (uVar3 == 0) {
    __dest = (void *)0x0;
    __src = *(void **)(lVar2 + 0x18);
    *(undefined8 *)(in_x8 + 0x18) = 0;
    if (__src == (void *)0x0) goto LAB_00ce5f34;
  }
  else {
    __dest = (void *)UnalignedAllocate(uVar3 << 2);
    __src = *(void **)(lVar2 + 0x18);
    *(void **)(in_x8 + 0x18) = __dest;
    if (__dest == __src) goto LAB_00ce5f34;
  }
  memcpy(__dest,__src,uVar3 << 2);
LAB_00ce5f34:
  local_a0 = &PTR__EuclideanDomainOf_00ff3220;
  uVar3 = local_60;
  if (local_58 <= local_60) {
    uVar3 = local_58;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)((long)local_50 + uVar3 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce5f64 to 00ce5f67 has its CatchHandler @ 00ce5fec */
  UnalignedDeallocate(local_50);
  uVar3 = local_80;
  if (uStack_78 <= local_80) {
    uVar3 = uStack_78;
  }
  local_a0 = &PTR__AbstractEuclideanDomain_00ff9230;
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)((long)local_70 + uVar3 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce5fa0 to 00ce5fa3 has its CatchHandler @ 00ce5fe8 */
  UnalignedDeallocate(local_70);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


