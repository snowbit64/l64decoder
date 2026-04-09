// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addConstant
// Entry Point: 00ef9154
// Size: 740 bytes
// Signature: undefined __thiscall addConstant(BytecodeBuilder * this, ConstantKey * param_1, Constant * param_2)


/* Luau::BytecodeBuilder::addConstant(Luau::BytecodeBuilder::ConstantKey const&,
   Luau::BytecodeBuilder::Constant const&) */

ulong __thiscall
Luau::BytecodeBuilder::addConstant(BytecodeBuilder *this,ConstantKey *param_1,Constant *param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  void *__dest;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  void *__src;
  undefined8 uVar18;
  
  if (*(ulong *)(this + 200) != 0) {
    iVar7 = *(int *)param_1;
    iVar4 = *(int *)(this + 0xd0);
    lVar12 = *(long *)(param_1 + 8);
    lVar13 = *(long *)(this + 0xd8);
    if ((iVar7 != iVar4) || (lVar12 != lVar13)) {
      uVar2 = iVar7 * 0x5bd1e995 ^ (uint)((ulong)lVar12 >> 0x20);
      uVar6 = ((uint)lVar12 ^ uVar2 >> 0x12) * 0x5bd1e995;
      uVar2 = (uVar2 ^ uVar6 >> 0x16) * 0x5bd1e995;
      uVar16 = (ulong)((uVar2 ^ (uVar6 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995);
      uVar14 = *(long *)(this + 0xc0) - 1;
      uVar11 = 0;
      do {
        uVar16 = uVar14 & uVar16;
        piVar8 = (int *)(*(long *)(this + 0xb8) + uVar16 * 0x18);
        iVar5 = *piVar8;
        lVar9 = *(long *)(piVar8 + 2);
        if (iVar5 == iVar7 && lVar9 == lVar12) {
          uVar16 = (ulong)*(uint *)(*(long *)(this + 0xb8) + uVar16 * 0x18 + 0x10);
          goto LAB_00ef9408;
        }
        uVar1 = uVar11 + 1;
        uVar16 = uVar16 + uVar11 + 1;
        uVar11 = uVar1;
      } while ((iVar5 != iVar4 || lVar9 != lVar13) && uVar1 < uVar14 ||
               (iVar5 != iVar4 || lVar9 != lVar13) && uVar1 == uVar14);
    }
  }
  uVar11 = *(long *)(this + 0x58) - (long)*(void **)(this + 0x50);
  uVar16 = uVar11 >> 4;
  if ((uVar11 >> 0x1b & 0x1ff) == 0) {
    lVar12 = *(long *)(this + 0xc0);
    if ((ulong)(lVar12 * 3) >> 2 <= *(ulong *)(this + 200)) {
      detail::
      DenseHashTable<Luau::BytecodeBuilder::ConstantKey,std::__ndk1::pair<Luau::BytecodeBuilder::ConstantKey,int>,std::__ndk1::pair<Luau::BytecodeBuilder::ConstantKey_const,int>,Luau::detail::ItemInterfaceMap<Luau::BytecodeBuilder::ConstantKey,int>,Luau::BytecodeBuilder::ConstantKeyHash,std::__ndk1::equal_to<Luau::BytecodeBuilder::ConstantKey>>
      ::rehash();
      lVar12 = *(long *)(this + 0xc0);
    }
    lVar9 = *(long *)(param_1 + 8);
    uVar2 = *(int *)param_1 * 0x5bd1e995 ^ (uint)((ulong)lVar9 >> 0x20);
    uVar6 = ((uint)lVar9 ^ uVar2 >> 0x12) * 0x5bd1e995;
    uVar2 = (uVar2 ^ uVar6 >> 0x16) * 0x5bd1e995;
    lVar13 = *(long *)(this + 0xb8);
    uVar11 = lVar12 - 1U &
             (ulong)((uVar2 ^ (uVar6 ^ uVar2 >> 0x11) * 0x5bd1e995 >> 0x13) * 0x5bd1e995);
    puVar10 = (undefined8 *)(lVar13 + uVar11 * 0x18);
    iVar7 = *(int *)puVar10;
    lVar17 = puVar10[1];
    if (iVar7 != *(int *)(this + 0xd0) || lVar17 != *(long *)(this + 0xd8)) {
      lVar15 = 1;
      do {
        if ((iVar7 == *(int *)param_1) && (lVar17 == lVar9)) {
          puVar10 = *(undefined8 **)(this + 0x58);
          puVar3 = *(undefined8 **)(this + 0x60);
          *(int *)(lVar13 + uVar11 * 0x18 + 0x10) = (int)uVar16;
          if (puVar10 != puVar3) goto LAB_00ef9324;
          goto LAB_00ef9364;
        }
        uVar11 = uVar11 + lVar15;
        lVar15 = lVar15 + 1;
        uVar11 = uVar11 & lVar12 - 1U;
        puVar10 = (undefined8 *)(lVar13 + uVar11 * 0x18);
        iVar7 = *(int *)puVar10;
        lVar17 = puVar10[1];
      } while (iVar7 != *(int *)(this + 0xd0) || lVar17 != *(long *)(this + 0xd8));
    }
    uVar18 = *(undefined8 *)param_1;
    puVar10[1] = *(undefined8 *)(param_1 + 8);
    *puVar10 = uVar18;
    *(long *)(this + 200) = *(long *)(this + 200) + 1;
    puVar10 = *(undefined8 **)(this + 0x58);
    puVar3 = *(undefined8 **)(this + 0x60);
    *(int *)(lVar13 + uVar11 * 0x18 + 0x10) = (int)uVar16;
    if (puVar10 == puVar3) {
LAB_00ef9364:
      __src = *(void **)(this + 0x50);
      uVar14 = (long)puVar10 - (long)__src;
      uVar11 = ((long)uVar14 >> 4) + 1;
      if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__vector_base_common<true>::__throw_length_error();
      }
      if (uVar11 <= (ulong)((long)uVar14 >> 3)) {
        uVar11 = (long)uVar14 >> 3;
      }
      if (0x7fffffffffffffef < uVar14) {
        uVar11 = 0xfffffffffffffff;
      }
      if (uVar11 == 0) {
        __dest = (void *)0x0;
      }
      else {
        if (uVar11 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
        }
        __dest = operator_new(uVar11 << 4);
      }
      puVar10 = (undefined8 *)((long)__dest + ((long)uVar14 >> 4) * 0x10);
      uVar18 = *(undefined8 *)param_2;
      puVar10[1] = *(undefined8 *)(param_2 + 8);
      *puVar10 = uVar18;
      if (0 < (long)uVar14) {
        memcpy(__dest,__src,uVar14);
      }
      *(void **)(this + 0x50) = __dest;
      *(undefined8 **)(this + 0x58) = puVar10 + 2;
      *(void **)(this + 0x60) = (void *)((long)__dest + uVar11 * 0x10);
      if (__src != (void *)0x0) {
        operator_delete(__src);
      }
    }
    else {
LAB_00ef9324:
      uVar18 = *(undefined8 *)param_2;
      puVar10[1] = *(undefined8 *)(param_2 + 8);
      *puVar10 = uVar18;
      *(undefined8 **)(this + 0x58) = puVar10 + 2;
    }
  }
  else {
    uVar16 = 0xffffffff;
  }
LAB_00ef9408:
  return uVar16 & 0xffffffff;
}


