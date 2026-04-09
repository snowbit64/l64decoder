// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Add
// Entry Point: 00d024b8
// Size: 588 bytes
// Signature: undefined __thiscall Add(ModularArithmetic * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Add(CryptoPP::Integer const&, CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::ModularArithmetic::Add(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  Integer *pIVar7;
  Integer *pIVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  ulong uVar18;
  Integer *this_00;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar5 = tpidr_el0;
  local_38 = *(long *)(lVar5 + 0x28);
  uVar9 = *(ulong *)(param_1 + 0x18);
  if ((uVar9 == *(ulong *)(this + 0x30)) && (*(ulong *)(param_2 + 0x18) == *(ulong *)(this + 0x30)))
  {
    this_00 = (Integer *)(this + 0x48);
    lVar10 = *(long *)(this + 0x68);
    if (uVar9 != 0) {
      uVar11 = 0;
      uVar18 = 0;
      puVar13 = (undefined4 *)(lVar10 + 4);
      puVar14 = (uint *)(*(long *)(param_2 + 0x20) + 4);
      puVar16 = (uint *)(*(long *)(param_1 + 0x20) + 4);
      do {
        uVar11 = uVar11 + 2;
        uVar18 = uVar18 + puVar16[-1] + (ulong)puVar14[-1];
        puVar13[-1] = (int)uVar18;
        uVar2 = (ulong)*puVar16 + (uVar18 >> 0x20) + (ulong)*puVar14;
        uVar18 = uVar2 >> 0x20;
        *puVar13 = (int)uVar2;
        puVar13 = puVar13 + 2;
        puVar14 = puVar14 + 2;
        puVar16 = puVar16 + 2;
      } while (uVar11 < uVar9);
      if (uVar18 != 0) {
        lVar12 = *(long *)(this + 0x38);
LAB_00d02638:
        if (uVar9 != 0) {
          uVar11 = 0;
          lVar15 = 0;
          do {
            lVar17 = uVar11 * 4;
            uVar11 = uVar11 + 2;
            puVar14 = (uint *)(lVar10 + lVar17);
            puVar16 = (uint *)(lVar12 + lVar17);
            lVar15 = (lVar15 + (ulong)*puVar14) - (ulong)*puVar16;
            *puVar14 = (uint)lVar15;
            lVar17 = ((ulong)puVar14[1] - (ulong)puVar16[1]) + (lVar15 >> 0x3f);
            lVar15 = lVar17 >> 0x3f;
            puVar14[1] = (uint)lVar17;
          } while (uVar11 < uVar9);
        }
        goto LAB_00d026b4;
      }
    }
    lVar12 = *(long *)(this + 0x38);
    uVar11 = uVar9;
    do {
      uVar11 = uVar11 - 1;
      if (uVar11 == 0xffffffffffffffff) goto LAB_00d02638;
      uVar3 = *(uint *)(lVar10 + uVar11 * 4);
      uVar4 = *(uint *)(lVar12 + uVar11 * 4);
      if (uVar4 < uVar3) goto LAB_00d02638;
    } while (uVar4 <= uVar3);
  }
  else {
    Integer::Plus(param_1);
    this_00 = (Integer *)(this + 0x78);
                    /* try { // try from 00d025a4 to 00d025af has its CatchHandler @ 00d02708 */
    Integer::operator=(this_00,(Integer *)local_68);
    if (uStack_50 <= local_58) {
      local_58 = uStack_50;
    }
    local_68[0] = &PTR__Integer_0100c890;
    for (; local_58 != 0; local_58 = local_58 - 1) {
      *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
    }
                    /* try { // try from 00d025e8 to 00d025eb has its CatchHandler @ 00d02704 */
    UnalignedDeallocate(local_48);
    pIVar1 = (Integer *)(this + 0x18);
    iVar6 = Integer::Compare(this_00,pIVar1);
    if (-1 < iVar6) {
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                 (this + 0x80),*(ulong *)(this + 0x30));
      if (*(int *)(this + 0xa0) == 1) {
        pIVar7 = pIVar1;
        pIVar8 = this_00;
        if (*(int *)(this + 0x40) != 1) {
          PositiveAdd(this_00,this_00,pIVar1);
          *(undefined4 *)(this + 0xa0) = 1;
          if (*(long *)(lVar5 + 0x28) == local_38) {
            return this_00;
          }
          goto LAB_00d02700;
        }
      }
      else {
        pIVar7 = this_00;
        pIVar8 = pIVar1;
        if (*(int *)(this + 0x40) == 1) {
          PositiveAdd(this_00,this_00,pIVar1);
          if (*(long *)(lVar5 + 0x28) == local_38) {
            return this_00;
          }
          goto LAB_00d02700;
        }
      }
      PositiveSubtract(this_00,pIVar7,pIVar8);
    }
  }
LAB_00d026b4:
  if (*(long *)(lVar5 + 0x28) == local_38) {
    return this_00;
  }
LAB_00d02700:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


