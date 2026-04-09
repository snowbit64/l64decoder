// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<<
// Entry Point: 00ce55e4
// Size: 320 bytes
// Signature: undefined __thiscall operator<<(PolynomialMod2 * this, uint param_1)


/* CryptoPP::PolynomialMod2::TEMPNAMEPLACEHOLDERVALUE(unsigned int) const */

void __thiscall CryptoPP::PolynomialMod2::operator<<(PolynomialMod2 *this,uint param_1)

{
  long lVar1;
  void *pvVar2;
  long in_x8;
  ulong __n;
  ulong uVar3;
  PolynomialMod2 aPStack_68 [8];
  ulong local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = *(ulong *)(this + 0x10);
  local_60 = 0x3fffffffffffffff;
  local_58 = uVar3;
  AllocatorBase<unsigned_int>::CheckSize(uVar3);
  if (uVar3 == 0) {
    pvVar2 = *(void **)(this + 0x18);
    local_50 = (void *)0x0;
    if (pvVar2 != (void *)0x0) goto LAB_00ce5648;
  }
  else {
    local_50 = (void *)UnalignedAllocate(uVar3 << 2);
    pvVar2 = *(void **)(this + 0x18);
    if (local_50 != pvVar2) {
LAB_00ce5648:
      memcpy(local_50,pvVar2,uVar3 << 2);
    }
  }
                    /* try { // try from 00ce5650 to 00ce567f has its CatchHandler @ 00ce5728 */
  operator<<=(aPStack_68,param_1);
  uVar3 = local_58;
  *(undefined8 *)(in_x8 + 8) = 0x3fffffffffffffff;
  *(ulong *)(in_x8 + 0x10) = local_58;
  AllocatorBase<unsigned_int>::CheckSize(local_58);
  __n = uVar3 << 2;
  if (uVar3 == 0) {
    pvVar2 = (void *)0x0;
    *(undefined8 *)(in_x8 + 0x18) = 0;
    if (local_50 == (void *)0x0) goto LAB_00ce569c;
  }
  else {
    pvVar2 = (void *)UnalignedAllocate(__n);
    *(void **)(in_x8 + 0x18) = pvVar2;
    if (pvVar2 == local_50) goto LAB_00ce569c;
  }
  memcpy(pvVar2,local_50,__n);
LAB_00ce569c:
  uVar3 = local_60;
  if (local_58 <= local_60) {
    uVar3 = local_58;
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)((long)local_50 + uVar3 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce56c0 to 00ce56c7 has its CatchHandler @ 00ce5724 */
  UnalignedDeallocate(local_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


