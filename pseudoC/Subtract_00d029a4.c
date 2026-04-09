// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Subtract
// Entry Point: 00d029a4
// Size: 496 bytes
// Signature: undefined __thiscall Subtract(ModularArithmetic * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Subtract(CryptoPP::Integer const&, CryptoPP::Integer const&) const
    */

Integer * __thiscall
CryptoPP::ModularArithmetic::Subtract(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  ulong uVar2;
  long lVar3;
  Integer *pIVar4;
  Integer *pIVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  Integer *this_00;
  undefined **local_68 [2];
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  uVar6 = *(ulong *)(param_1 + 0x18);
  if ((uVar6 == *(ulong *)(this + 0x30)) && (*(ulong *)(param_2 + 0x18) == *(ulong *)(this + 0x30)))
  {
    this_00 = (Integer *)(this + 0x48);
    if (uVar6 != 0) {
      lVar7 = *(long *)(this + 0x68);
      uVar8 = 0;
      lVar14 = 0;
      puVar9 = (undefined4 *)(lVar7 + 4);
      puVar10 = (uint *)(*(long *)(param_2 + 0x20) + 4);
      puVar12 = (uint *)(*(long *)(param_1 + 0x20) + 4);
      do {
        uVar8 = uVar8 + 2;
        lVar14 = (lVar14 + (ulong)puVar12[-1]) - (ulong)puVar10[-1];
        puVar9[-1] = (int)lVar14;
        lVar13 = ((ulong)*puVar12 - (ulong)*puVar10) + (lVar14 >> 0x3f);
        lVar14 = lVar13 >> 0x3f;
        *puVar9 = (int)lVar13;
        puVar9 = puVar9 + 2;
        puVar10 = puVar10 + 2;
        puVar12 = puVar12 + 2;
      } while (uVar8 < uVar6);
      if (lVar13 < 0) {
        uVar8 = 0;
        uVar11 = 0;
        lVar14 = *(long *)(this + 0x38);
        do {
          lVar13 = uVar8 * 4;
          uVar8 = uVar8 + 2;
          puVar10 = (uint *)(lVar7 + lVar13);
          puVar12 = (uint *)(lVar14 + lVar13);
          uVar11 = uVar11 + *puVar10 + (ulong)*puVar12;
          *puVar10 = (uint)uVar11;
          uVar2 = (ulong)puVar10[1] + (uVar11 >> 0x20) + (ulong)puVar12[1];
          uVar11 = uVar2 >> 0x20;
          puVar10[1] = (uint)uVar2;
        } while (uVar8 < uVar6);
      }
    }
  }
  else {
    Integer::Minus(param_1);
    this_00 = (Integer *)(this + 0x78);
                    /* try { // try from 00d02aac to 00d02ab7 has its CatchHandler @ 00d02b98 */
    Integer::operator=(this_00,(Integer *)local_68);
    if (uStack_50 <= local_58) {
      local_58 = uStack_50;
    }
    local_68[0] = &PTR__Integer_0100c890;
    for (; local_58 != 0; local_58 = local_58 - 1) {
      *(undefined4 *)((long)local_48 + local_58 * 4 + -4) = 0;
    }
                    /* try { // try from 00d02af0 to 00d02af3 has its CatchHandler @ 00d02b94 */
    UnalignedDeallocate(local_48);
    if (*(int *)(this + 0xa0) == 1) {
      pIVar1 = (Integer *)(this + 0x18);
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                 (this + 0x80),*(ulong *)(this + 0x30));
      if (*(int *)(this + 0xa0) == 1) {
        pIVar4 = pIVar1;
        pIVar5 = this_00;
        if (*(int *)(this + 0x40) == 1) {
          PositiveAdd(this_00,this_00,pIVar1);
          *(undefined4 *)(this + 0xa0) = 1;
          goto LAB_00d02b68;
        }
      }
      else {
        pIVar4 = this_00;
        pIVar5 = pIVar1;
        if (*(int *)(this + 0x40) != 1) {
          PositiveAdd(this_00,this_00,pIVar1);
          goto LAB_00d02b68;
        }
      }
      PositiveSubtract(this_00,pIVar4,pIVar5);
    }
  }
LAB_00d02b68:
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_00;
}


