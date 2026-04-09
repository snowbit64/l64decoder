// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GF2NT
// Entry Point: 00ce6f18
// Size: 292 bytes
// Signature: undefined __thiscall GF2NT(GF2NT * this, uint param_1, uint param_2, uint param_3)


/* CryptoPP::GF2NT::GF2NT(unsigned int, unsigned int, unsigned int) */

void __thiscall CryptoPP::GF2NT::GF2NT(GF2NT *this,uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  long lVar4;
  ulong uVar5;
  PolynomialMod2 aPStack_68 [8];
  ulong local_60;
  ulong uStack_58;
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  PolynomialMod2::Trinomial
            ((PolynomialMod2 *)(ulong)param_1,(ulong)param_2,(ulong)param_3,(ulong)param_3);
                    /* try { // try from 00ce6f5c to 00ce6f67 has its CatchHandler @ 00ce7040 */
  GF2NP::GF2NP((GF2NP *)this,aPStack_68);
  if (uStack_58 <= local_60) {
    local_60 = uStack_58;
  }
  for (; local_60 != 0; local_60 = local_60 - 1) {
    *(undefined4 *)((long)local_50 + local_60 * 4 + -4) = 0;
  }
                    /* try { // try from 00ce6f90 to 00ce6f93 has its CatchHandler @ 00ce703c */
  UnalignedDeallocate(local_50);
  *(uint *)(this + 0x94) = param_1;
  *(uint *)(this + 0x98) = param_2;
  uVar1 = *(uint *)(this + 0x90);
  uVar5 = (ulong)uVar1 + 0x1f >> 5;
  *(undefined ***)this = &PTR__GF2NT_01009488;
  *(undefined8 *)(this + 0xa8) = 0x3fffffffffffffff;
  *(ulong *)(this + 0xb0) = uVar5;
                    /* try { // try from 00ce6fbc to 00ce6fcf has its CatchHandler @ 00ce7054 */
  AllocatorBase<unsigned_int>::CheckSize(uVar5);
  if (uVar1 == 0) {
    puVar3 = (undefined4 *)0x0;
    lVar4 = *(long *)(this + 0xb0);
    *(undefined8 *)(this + 0xb8) = 0;
  }
  else {
    puVar3 = (undefined4 *)UnalignedAllocate(uVar5 << 2);
    lVar4 = *(long *)(this + 0xb0);
    *(undefined4 **)(this + 0xb8) = puVar3;
  }
  if ((lVar4 != 0) && (*puVar3 = 0, lVar4 != 1)) {
    memset(puVar3 + 1,0,lVar4 * 4 - 4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


