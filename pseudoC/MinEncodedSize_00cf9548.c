// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MinEncodedSize
// Entry Point: 00cf9548
// Size: 696 bytes
// Signature: undefined __thiscall MinEncodedSize(Integer * this, Signedness param_1)


/* CryptoPP::Integer::MinEncodedSize(CryptoPP::Integer::Signedness) const */

uint __thiscall CryptoPP::Integer::MinEncodedSize(Integer *this,Signedness param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  undefined **local_a8;
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> aSStack_a0 [8];
  ulong local_98;
  ulong uStack_90;
  void *local_88;
  undefined **local_78 [2];
  ulong local_68;
  ulong local_60;
  int *local_58;
  int local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar12 = *(ulong *)(this + 0x18);
  lVar3 = *(long *)(this + 0x20);
  iVar6 = (int)uVar12 * -4;
  uVar8 = uVar12;
  do {
    if (uVar8 == 0) goto LAB_00cf95ec;
    uVar10 = uVar8 - 1;
    lVar1 = uVar8 * 4;
    iVar6 = iVar6 + 4;
    uVar8 = uVar10;
  } while (*(int *)(lVar3 + -4 + lVar1) == 0);
  if ((int)uVar10 == -1) {
LAB_00cf95ec:
    uVar7 = 1;
  }
  else {
    uVar7 = *(uint *)(lVar3 + (uVar10 & 0xffffffff) * 4);
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar11 = 0x20;
      do {
        uVar4 = uVar9 + uVar11 >> 1;
        uVar2 = uVar4;
        if (uVar7 >> (ulong)(uVar4 & 0x1f) != 0) {
          uVar2 = uVar11;
          uVar9 = uVar4;
        }
        uVar11 = uVar2;
      } while (8 < uVar2 - uVar9);
      uVar7 = uVar2 >> 3;
    }
    uVar7 = uVar7 - iVar6;
    if (uVar7 < 2) {
      uVar7 = 1;
    }
  }
  if (param_1 == 0) goto LAB_00cf97a8;
  if (*(int *)(this + 0x28) != 1) {
    uVar8 = (ulong)(uVar7 - 1 >> 2);
    if ((uVar8 < uVar12) &&
       (((*(uint *)(lVar3 + uVar8 * 4) >> (ulong)((uVar7 - 1 & 3) << 3)) >> 7 & 1) != 0)) {
      uVar7 = uVar7 + 1;
    }
    goto LAB_00cf97a8;
  }
  uVar9 = uVar7 * 8 - 1;
  uVar12 = (ulong)uVar9 + 0x20 >> 5;
  Integer((Integer *)&local_a8,0,uVar12);
  if (uVar9 < 0x100) {
    uVar12 = (ulong)(uint)(&DAT_005443f4)[uVar12];
  }
  else if (uVar9 < 0x200) {
    uVar12 = 0x10;
  }
  else if (uVar9 < 0x400) {
    uVar12 = 0x20;
  }
  else if (uVar9 < 0x800) {
    uVar12 = 0x40;
  }
  else {
    uVar11 = 0;
    uVar8 = 0x40;
    do {
      uVar4 = uVar11 + (uint)uVar8 >> 1;
      uVar2 = uVar4;
      if (uVar12 - 1 >> ((ulong)uVar4 & 0x3f) != 0) {
        uVar2 = (uint)uVar8;
        uVar11 = uVar4;
      }
      uVar8 = (ulong)uVar2;
    } while (1 < uVar2 - uVar11);
    uVar12 = 1L << (uVar8 & 0x3f);
  }
                    /* try { // try from 00cf96d0 to 00cf96d3 has its CatchHandler @ 00cf980c */
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            (aSStack_a0,uVar12);
  uVar12 = (ulong)(uVar9 >> 3) & 0x1ffffffc;
  *(uint *)((long)local_88 + uVar12) =
       *(uint *)((long)local_88 + uVar12) | 1 << (ulong)(uVar9 & 0x1f);
                    /* try { // try from 00cf96f4 to 00cf96ff has its CatchHandler @ 00cf9808 */
  Integer((Integer *)local_78,(Integer *)&local_a8);
  if ((local_50 == 1) || (uVar12 = local_60, *local_58 != 0)) {
LAB_00cf9718:
    local_50 = 1 - local_50;
  }
  else {
    do {
      if (uVar12 == 0) goto LAB_00cf9724;
      uVar8 = uVar12 - 1;
      lVar3 = uVar12 - 1;
      uVar12 = uVar8;
    } while (local_58[lVar3] == 0);
    if ((int)uVar8 != -1) goto LAB_00cf9718;
  }
LAB_00cf9724:
  iVar6 = Compare(this,(Integer *)local_78);
  if (local_60 <= local_68) {
    local_68 = local_60;
  }
  local_78[0] = &PTR__Integer_0100c890;
  for (; local_68 != 0; local_68 = local_68 - 1) {
    local_58[local_68 - 1] = 0;
  }
                    /* try { // try from 00cf976c to 00cf976f has its CatchHandler @ 00cf9804 */
  UnalignedDeallocate(local_58);
  local_a8 = &PTR__Integer_0100c890;
  if (uStack_90 <= local_98) {
    local_98 = uStack_90;
  }
  for (; local_98 != 0; local_98 = local_98 - 1) {
    *(undefined4 *)((long)local_88 + local_98 * 4 + -4) = 0;
  }
                    /* try { // try from 00cf97a0 to 00cf97a3 has its CatchHandler @ 00cf9800 */
  UnalignedDeallocate(local_88);
  uVar7 = uVar7 - (iVar6 >> 0x1f);
LAB_00cf97a8:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


