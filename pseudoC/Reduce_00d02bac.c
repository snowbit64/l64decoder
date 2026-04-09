// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Reduce
// Entry Point: 00d02bac
// Size: 552 bytes
// Signature: undefined __thiscall Reduce(ModularArithmetic * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Reduce(CryptoPP::Integer&, CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::ModularArithmetic::Reduce(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  int iVar4;
  Integer *pIVar5;
  Integer *pIVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  uVar7 = *(ulong *)(param_1 + 0x18);
  if ((uVar7 == *(ulong *)(this + 0x30)) && (*(ulong *)(param_2 + 0x18) == *(ulong *)(this + 0x30)))
  {
    if (uVar7 == 0) {
      return param_1;
    }
    uVar9 = 0;
    lVar11 = 0;
    lVar8 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(param_2 + 0x20);
    do {
      lVar13 = uVar9 * 4;
      uVar9 = uVar9 + 2;
      puVar1 = (uint *)(lVar8 + lVar13);
      puVar2 = (uint *)(lVar10 + lVar13);
      lVar11 = (lVar11 + (ulong)*puVar1) - (ulong)*puVar2;
      *puVar1 = (uint)lVar11;
      lVar13 = ((ulong)puVar1[1] - (ulong)puVar2[1]) + (lVar11 >> 0x3f);
      lVar11 = lVar13 >> 0x3f;
      puVar1[1] = (uint)lVar13;
    } while (uVar9 < uVar7);
    if (-1 < lVar13) {
      return param_1;
    }
    uVar9 = 0;
    uVar12 = 0;
    lVar10 = *(long *)(this + 0x38);
    do {
      lVar11 = uVar9 * 4;
      uVar9 = uVar9 + 2;
      puVar1 = (uint *)(lVar8 + lVar11);
      puVar2 = (uint *)(lVar10 + lVar11);
      uVar12 = uVar12 + *puVar1 + (ulong)*puVar2;
      *puVar1 = (uint)uVar12;
      uVar3 = (ulong)puVar1[1] + (uVar12 >> 0x20) + (ulong)puVar2[1];
      uVar12 = uVar3 >> 0x20;
      puVar1[1] = (uint)uVar3;
    } while (uVar9 < uVar7);
    return param_1;
  }
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (param_1 + 8),*(ulong *)(param_2 + 0x18));
  if (*(int *)(param_1 + 0x28) == 1) {
    pIVar5 = param_2;
    pIVar6 = param_1;
    if (*(int *)(param_2 + 0x28) != 1) {
      PositiveAdd(param_1,param_1,param_2);
      *(undefined4 *)(param_1 + 0x28) = 1;
      goto LAB_00d02cd0;
    }
LAB_00d02ca8:
    PositiveSubtract(param_1,pIVar5,pIVar6);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  else {
    pIVar5 = param_1;
    pIVar6 = param_2;
    if (*(int *)(param_2 + 0x28) != 1) goto LAB_00d02ca8;
    PositiveAdd(param_1,param_1,param_2);
    iVar4 = *(int *)(param_1 + 0x28);
  }
  if (iVar4 != 1) {
    return param_1;
  }
LAB_00d02cd0:
  pIVar5 = (Integer *)(this + 0x18);
  SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
            ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
             (param_1 + 8),*(ulong *)(this + 0x30));
  if (*(int *)(param_1 + 0x28) != 1) {
    if (*(int *)(this + 0x40) != 1) {
      PositiveAdd(param_1,param_1,pIVar5);
      return param_1;
    }
    PositiveSubtract(param_1,param_1,pIVar5);
    return param_1;
  }
  if (*(int *)(this + 0x40) != 1) {
    PositiveSubtract(param_1,pIVar5,param_1);
    return param_1;
  }
  PositiveAdd(param_1,param_1,pIVar5);
  *(undefined4 *)(param_1 + 0x28) = 1;
  return param_1;
}


