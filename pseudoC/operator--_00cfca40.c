// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator--
// Entry Point: 00cfca40
// Size: 412 bytes
// Signature: undefined __thiscall operator--(Integer * this)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE() */

Integer * __thiscall CryptoPP::Integer::operator--(Integer *this)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined **local_58 [2];
  ulong local_48;
  ulong local_40;
  int *local_38;
  int local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  if (*(int *)(this + 0x28) == 1) {
    uVar5 = *(ulong *)(this + 0x18);
    piVar1 = *(int **)(this + 0x20);
    iVar2 = *piVar1;
    *piVar1 = iVar2 + 1;
    if (iVar2 == -1) {
      if (1 < uVar5) {
        uVar6 = 1;
        do {
          iVar2 = piVar1[uVar6];
          piVar1[uVar6] = iVar2 + 1;
          if (iVar2 != -1) goto LAB_00cfcb8c;
          uVar6 = (ulong)((int)uVar6 + 1);
        } while (uVar6 < uVar5);
      }
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                 (this + 8),uVar5 << 1);
      *(undefined4 *)(*(long *)(this + 0x20) + (*(ulong *)(this + 0x18) & 0x7ffffffffffffffe) * 2) =
           1;
    }
    goto LAB_00cfcb8c;
  }
  uVar5 = *(ulong *)(this + 0x18);
  piVar1 = *(int **)(this + 0x20);
  iVar2 = *piVar1;
  *piVar1 = iVar2 + -1;
  if (iVar2 != 0) goto LAB_00cfcb8c;
  if (1 < uVar5) {
    uVar6 = 1;
    do {
      iVar2 = piVar1[uVar6];
      piVar1[uVar6] = iVar2 + -1;
      if (iVar2 != 0) goto LAB_00cfcb8c;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < uVar5);
  }
  Integer((Integer *)local_58,(Integer *)&DAT_02120840);
  if ((local_30 == 1) || (uVar5 = local_40, *local_38 != 0)) {
LAB_00cfcb38:
    local_30 = 1 - local_30;
  }
  else {
    do {
      if (uVar5 == 0) goto LAB_00cfcb44;
      uVar6 = uVar5 - 1;
      lVar4 = uVar5 - 1;
      uVar5 = uVar6;
    } while (local_38[lVar4] == 0);
    if ((int)uVar6 != -1) goto LAB_00cfcb38;
  }
LAB_00cfcb44:
                    /* try { // try from 00cfcb44 to 00cfcb4f has its CatchHandler @ 00cfcbe0 */
  operator=(this,(Integer *)local_58);
  if (local_40 <= local_48) {
    local_48 = local_40;
  }
  local_58[0] = &PTR__Integer_0100c890;
  for (; local_48 != 0; local_48 = local_48 - 1) {
    local_38[local_48 - 1] = 0;
  }
                    /* try { // try from 00cfcb88 to 00cfcb8b has its CatchHandler @ 00cfcbdc */
  UnalignedDeallocate(local_38);
LAB_00cfcb8c:
  if (*(long *)(lVar3 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


