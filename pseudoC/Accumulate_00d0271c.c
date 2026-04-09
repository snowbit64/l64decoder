// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Accumulate
// Entry Point: 00d0271c
// Size: 648 bytes
// Signature: undefined __thiscall Accumulate(ModularArithmetic * this, Integer * param_1, Integer * param_2)


/* CryptoPP::ModularArithmetic::Accumulate(CryptoPP::Integer&, CryptoPP::Integer const&) const */

Integer * __thiscall
CryptoPP::ModularArithmetic::Accumulate(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *pIVar1;
  uint *puVar2;
  uint *puVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  Integer *pIVar8;
  Integer *pIVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  uVar10 = *(ulong *)(param_1 + 0x18);
  if ((uVar10 == *(ulong *)(this + 0x30)) && (*(ulong *)(param_2 + 0x18) == *(ulong *)(this + 0x30))
     ) {
    lVar11 = *(long *)(param_1 + 0x20);
    if (uVar10 != 0) {
      uVar12 = 0;
      uVar14 = 0;
      lVar13 = *(long *)(param_2 + 0x20);
      do {
        lVar15 = uVar12 * 4;
        uVar12 = uVar12 + 2;
        puVar2 = (uint *)(lVar11 + lVar15);
        puVar3 = (uint *)(lVar13 + lVar15);
        uVar14 = uVar14 + *puVar2 + (ulong)*puVar3;
        *puVar2 = (uint)uVar14;
        uVar4 = (ulong)puVar2[1] + (uVar14 >> 0x20) + (ulong)puVar3[1];
        uVar14 = uVar4 >> 0x20;
        puVar2[1] = (uint)uVar4;
      } while (uVar12 < uVar10);
      if (uVar14 != 0) {
        lVar13 = *(long *)(this + 0x38);
LAB_00d02878:
        if (uVar10 == 0) {
          return param_1;
        }
        uVar12 = 0;
        lVar15 = 0;
        do {
          lVar16 = uVar12 * 4;
          uVar12 = uVar12 + 2;
          puVar2 = (uint *)(lVar11 + lVar16);
          puVar3 = (uint *)(lVar13 + lVar16);
          lVar15 = (lVar15 + (ulong)*puVar2) - (ulong)*puVar3;
          *puVar2 = (uint)lVar15;
          lVar16 = ((ulong)puVar2[1] - (ulong)puVar3[1]) + (lVar15 >> 0x3f);
          lVar15 = lVar16 >> 0x3f;
          puVar2[1] = (uint)lVar16;
        } while (uVar12 < uVar10);
        return param_1;
      }
    }
    lVar13 = *(long *)(this + 0x38);
    uVar12 = uVar10;
    do {
      uVar12 = uVar12 - 1;
      if (uVar12 == 0xffffffffffffffff) goto LAB_00d02878;
      uVar5 = *(uint *)(lVar11 + uVar12 * 4);
      uVar6 = *(uint *)(lVar13 + uVar12 * 4);
      if (uVar6 < uVar5) goto LAB_00d02878;
    } while (uVar6 <= uVar5);
  }
  else {
    pIVar1 = (Integer *)(this + 0x18);
    SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
              ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
               (param_1 + 8),*(ulong *)(param_2 + 0x18));
    if (*(int *)(param_1 + 0x28) == 1) {
      if (*(int *)(param_2 + 0x28) == 1) {
        PositiveAdd(param_1,param_1,param_2);
        *(undefined4 *)(param_1 + 0x28) = 1;
        iVar7 = Integer::Compare(param_1,pIVar1);
      }
      else {
        PositiveSubtract(param_1,param_2,param_1);
        iVar7 = Integer::Compare(param_1,pIVar1);
      }
    }
    else if (*(int *)(param_2 + 0x28) == 1) {
      PositiveSubtract(param_1,param_1,param_2);
      iVar7 = Integer::Compare(param_1,pIVar1);
    }
    else {
      PositiveAdd(param_1,param_1,param_2);
      iVar7 = Integer::Compare(param_1,pIVar1);
    }
    if (-1 < iVar7) {
      SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>>::CleanGrow
                ((SecBlock<unsigned_int,CryptoPP::AllocatorWithCleanup<unsigned_int,true>> *)
                 (param_1 + 8),*(ulong *)(this + 0x30));
      if (*(int *)(param_1 + 0x28) == 1) {
        pIVar8 = pIVar1;
        pIVar9 = param_1;
        if (*(int *)(this + 0x40) != 1) {
          PositiveAdd(param_1,param_1,pIVar1);
          *(undefined4 *)(param_1 + 0x28) = 1;
          return param_1;
        }
      }
      else {
        pIVar8 = param_1;
        pIVar9 = pIVar1;
        if (*(int *)(this + 0x40) == 1) {
          PositiveAdd(param_1,param_1,pIVar1);
          return param_1;
        }
      }
      PositiveSubtract(param_1,pIVar8,pIVar9);
      return param_1;
    }
  }
  return param_1;
}


