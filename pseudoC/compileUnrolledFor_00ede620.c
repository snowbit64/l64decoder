// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileUnrolledFor
// Entry Point: 00ede620
// Size: 1160 bytes
// Signature: undefined __thiscall compileUnrolledFor(Compiler * this, AstStatFor * param_1, int param_2, double param_3, double param_4)


/* Luau::Compiler::compileUnrolledFor(Luau::AstStatFor*, int, double, double) */

void __thiscall
Luau::Compiler::compileUnrolledFor
          (Compiler *this,AstStatFor *param_1,int param_2,double param_3,double param_4)

{
  long *plVar1;
  void *__dest;
  DenseHashMap *pDVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  void *__src;
  size_t __n;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  undefined8 uVar15;
  
  plVar1 = *(long **)(this + 0x1d8);
  lVar4 = *(long *)(this + 0x1b8);
  lVar6 = *(long *)(this + 0x1c0);
  uVar12 = *(ulong *)(param_1 + 0x20);
  lVar11 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if (plVar1 < *(long **)(this + 0x1e0)) {
    *plVar1 = lVar11;
    plVar1[1] = 0;
    *(long **)(this + 0x1d8) = plVar1 + 2;
  }
  else {
    __src = *(void **)(this + 0x1d0);
    __n = (long)plVar1 - (long)__src;
    uVar13 = ((long)__n >> 4) + 1;
    if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar8 = (long)*(long **)(this + 0x1e0) - (long)__src;
    uVar3 = (long)uVar8 >> 3;
    if (uVar13 <= uVar3) {
      uVar13 = uVar3;
    }
    if (0x7fffffffffffffef < uVar8) {
      uVar13 = 0xfffffffffffffff;
    }
    if (uVar13 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar13 * 0x10);
    plVar1 = (long *)((long)__dest + ((long)__n >> 4) * 0x10);
    *plVar1 = lVar11;
    plVar1[1] = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x1d0) = __dest;
    *(long **)(this + 0x1d8) = plVar1 + 2;
    *(void **)(this + 0x1e0) = (void *)((long)__dest + uVar13 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar13 = uVar12 >> 4 ^ uVar12 >> 9;
  if (0 < param_2) {
    iVar14 = 0;
    do {
      lVar11 = *(long *)(this + 0x100);
      if ((ulong)(lVar11 * 3) >> 2 <= *(ulong *)(this + 0x108)) {
        detail::
        DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
        ::rehash();
        lVar11 = *(long *)(this + 0x100);
      }
      uVar5 = lVar11 - 1;
      lVar7 = *(long *)(this + 0xf8);
      uVar3 = uVar5 & uVar13;
      uVar10 = *(ulong *)(lVar7 + uVar3 * 0x18);
      uVar8 = uVar3;
      if (uVar10 != *(ulong *)(this + 0x110)) {
        lVar9 = 1;
        do {
          if (uVar10 == uVar12) {
            uVar10 = *(ulong *)(this + 0x108);
            *(undefined4 *)(lVar7 + uVar8 * 0x18 + 8) = 3;
            if (uVar10 < (ulong)(lVar11 * 3) >> 2) goto LAB_00ede808;
            goto LAB_00ede7f4;
          }
          uVar8 = uVar8 + lVar9;
          lVar9 = lVar9 + 1;
          uVar8 = uVar8 & uVar5;
          uVar10 = *(ulong *)(lVar7 + uVar8 * 0x18);
        } while (uVar10 != *(ulong *)(this + 0x110));
      }
      lVar9 = *(long *)(this + 0x108);
      *(ulong *)(lVar7 + uVar8 * 0x18) = uVar12;
      *(ulong *)(this + 0x108) = lVar9 + 1U;
      *(undefined4 *)(lVar7 + uVar8 * 0x18 + 8) = 3;
      if ((ulong)(lVar11 * 3) >> 2 <= lVar9 + 1U) {
LAB_00ede7f4:
        detail::
        DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
        ::rehash();
        uVar5 = *(long *)(this + 0x100) - 1;
        uVar3 = uVar5 & uVar13;
      }
LAB_00ede808:
      lVar11 = *(long *)(this + 0xf8);
      uVar8 = *(ulong *)(lVar11 + uVar3 * 0x18);
      if (uVar8 != *(ulong *)(this + 0x110)) {
        lVar7 = 1;
        do {
          if (uVar8 == uVar12) goto LAB_00ede85c;
          uVar3 = uVar3 + lVar7;
          lVar7 = lVar7 + 1;
          uVar3 = uVar3 & uVar5;
          uVar8 = *(ulong *)(lVar11 + uVar3 * 0x18);
        } while (uVar8 != *(ulong *)(this + 0x110));
      }
      lVar7 = *(long *)(this + 0x108);
      *(ulong *)(lVar11 + uVar3 * 0x18) = uVar12;
      *(long *)(this + 0x108) = lVar7 + 1;
LAB_00ede85c:
      uVar15 = NEON_fmadd((double)iVar14,param_4,param_3);
      *(undefined8 *)(lVar11 + uVar3 * 0x18 + 0x10) = uVar15;
      Compile::foldConstants
                ((DenseHashMap *)(this + 0xd0),(DenseHashMap *)(this + 0xa8),
                 (DenseHashMap *)(this + 0xf8),*(DenseHashMap **)(this + 0x170),(AstNode *)param_1);
      uVar8 = *(long *)(this + 0x1c0) - *(long *)(this + 0x1b8) >> 4;
      compileStat(this,*(AstStat **)(param_1 + 0x40));
      uVar3 = BytecodeBuilder::emitLabel();
      lVar11 = *(long *)(this + 0x1b8);
      lVar7 = *(long *)(this + 0x1c0);
      if (uVar8 < (ulong)(lVar7 - lVar11 >> 4)) {
        lVar9 = uVar8 << 4;
        do {
          if (*(int *)(lVar11 + lVar9) == 1) {
            uVar5 = BytecodeBuilder::patchJumpD
                              (*(BytecodeBuilder **)this,*(ulong *)(lVar11 + lVar9 + 8),uVar3);
            if ((uVar5 & 1) == 0) goto LAB_00edea88;
            lVar11 = *(long *)(this + 0x1b8);
            lVar7 = *(long *)(this + 0x1c0);
          }
          uVar8 = uVar8 + 1;
          lVar9 = lVar9 + 0x10;
        } while (uVar8 < (ulong)(lVar7 - lVar11 >> 4));
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != param_2);
  }
  uVar5 = lVar6 - lVar4 >> 4;
  uVar8 = BytecodeBuilder::emitLabel();
  lVar4 = *(long *)(this + 0x1b8);
  lVar6 = *(long *)(this + 0x1c0);
  uVar3 = lVar6 - lVar4 >> 4;
  if (uVar5 < uVar3) {
    lVar11 = uVar5 << 4;
    uVar10 = uVar5;
    do {
      if (*(int *)(lVar4 + lVar11) == 0) {
        uVar3 = BytecodeBuilder::patchJumpD
                          (*(BytecodeBuilder **)this,*(ulong *)(lVar4 + lVar11 + 8),uVar8);
        if ((uVar3 & 1) == 0) {
LAB_00edea88:
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)(param_1 + 0xc),
                              "Exceeded jump distance limit; simplify the code to compile");
        }
        lVar4 = *(long *)(this + 0x1b8);
        lVar6 = *(long *)(this + 0x1c0);
      }
      uVar10 = uVar10 + 1;
      uVar3 = lVar6 - lVar4 >> 4;
      lVar11 = lVar11 + 0x10;
    } while (uVar10 < uVar3);
  }
  if (uVar5 < uVar3 || uVar5 - uVar3 == 0) {
    if (uVar5 < uVar3) {
      *(ulong *)(this + 0x1c0) = lVar4 + uVar5 * 0x10;
    }
  }
  else {
    std::__ndk1::vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>>::
    __append((vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>> *)
             (this + 0x1b8),uVar5 - uVar3);
  }
  lVar4 = *(long *)(this + 0x100);
  *(long *)(this + 0x1d8) = *(long *)(this + 0x1d8) + -0x10;
  if ((ulong)(lVar4 * 3) >> 2 <= *(ulong *)(this + 0x108)) {
    detail::
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar4 = *(long *)(this + 0x100);
  }
  uVar13 = lVar4 - 1U & uVar13;
  lVar6 = *(long *)(this + 0xf8);
  uVar8 = *(ulong *)(lVar6 + uVar13 * 0x18);
  if (uVar8 != *(ulong *)(this + 0x110)) {
    lVar11 = 1;
    do {
      if (uVar8 == uVar12) goto LAB_00edea44;
      uVar13 = uVar13 + lVar11;
      lVar11 = lVar11 + 1;
      uVar13 = uVar13 & lVar4 - 1U;
      uVar8 = *(ulong *)(lVar6 + uVar13 * 0x18);
    } while (uVar8 != *(ulong *)(this + 0x110));
  }
  lVar4 = *(long *)(this + 0x108);
  *(ulong *)(lVar6 + uVar13 * 0x18) = uVar12;
  *(long *)(this + 0x108) = lVar4 + 1;
LAB_00edea44:
  pDVar2 = *(DenseHashMap **)(this + 0x170);
  *(undefined4 *)(lVar6 + uVar13 * 0x18 + 8) = 0;
  Compile::foldConstants
            ((DenseHashMap *)(this + 0xd0),(DenseHashMap *)(this + 0xa8),
             (DenseHashMap *)(this + 0xf8),pDVar2,(AstNode *)param_1);
  return;
}


