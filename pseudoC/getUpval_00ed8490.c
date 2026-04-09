// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getUpval
// Entry Point: 00ed8490
// Size: 612 bytes
// Signature: undefined __thiscall getUpval(Compiler * this, AstLocal * param_1)


/* Luau::Compiler::getUpval(Luau::AstLocal*) */

ulong __thiscall Luau::Compiler::getUpval(Compiler *this,AstLocal *param_1)

{
  void *pvVar1;
  ulong uVar2;
  void *__dest;
  AstLocal *pAVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  AstLocal *pAVar9;
  void *__src;
  AstLocal **ppAVar10;
  long lVar11;
  AstLocal **ppAVar12;
  
  ppAVar10 = *(AstLocal ***)(this + 0x1a8);
  uVar4 = (long)ppAVar10 - *(long *)(this + 0x1a0);
  if (uVar4 != 0) {
    uVar6 = (long)uVar4 >> 3;
    uVar2 = 0;
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    do {
      if (*(AstLocal **)(*(long *)(this + 0x1a0) + uVar2 * 8) == param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while (uVar6 != uVar2);
    if (0x638 < uVar4) {
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 8),
                          "Out of upvalue registers when trying to allocate %s: exceeded limit %d",
                          *(undefined8 *)param_1,200);
    }
  }
  if ((*(long *)(this + 0xb8) != 0) && (pAVar3 = *(AstLocal **)(this + 0xc0), pAVar3 != param_1)) {
    uVar4 = 0;
    uVar6 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
    uVar7 = *(long *)(this + 0xb0) - 1;
    uVar2 = uVar6;
    do {
      uVar2 = uVar2 & uVar7;
      pAVar9 = *(AstLocal **)(*(long *)(this + 0xa8) + uVar2 * 0x18);
      if (pAVar9 == param_1) {
        if (*(char *)(*(long *)(this + 0xa8) + uVar2 * 0x18 + 0x10) != '\0') {
          lVar11 = *(long *)(this + 0x60);
          if ((ulong)(lVar11 * 3) >> 2 <= *(ulong *)(this + 0x68)) {
            detail::
            DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compiler::Local>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compiler::Local>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compiler::Local>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
            ::rehash();
            lVar11 = *(long *)(this + 0x60);
          }
          lVar5 = *(long *)(this + 0x58);
          uVar6 = uVar6 & lVar11 - 1U;
          pAVar3 = *(AstLocal **)(lVar5 + uVar6 * 0x10);
          if (pAVar3 == *(AstLocal **)(this + 0x70)) goto LAB_00ed85bc;
          lVar8 = 1;
          goto LAB_00ed8598;
        }
        break;
      }
      uVar4 = uVar4 + 1;
      uVar2 = uVar4 + uVar2;
    } while (pAVar9 != pAVar3 && uVar4 < uVar7 || pAVar9 != pAVar3 && uVar4 == uVar7);
  }
  goto LAB_00ed85e0;
  while( true ) {
    uVar6 = uVar6 + lVar8;
    lVar8 = lVar8 + 1;
    uVar6 = uVar6 & lVar11 - 1U;
    pAVar3 = *(AstLocal **)(lVar5 + uVar6 * 0x10);
    if (pAVar3 == *(AstLocal **)(this + 0x70)) break;
LAB_00ed8598:
    if (pAVar3 == param_1) goto LAB_00ed85d0;
  }
LAB_00ed85bc:
  lVar11 = *(long *)(this + 0x68);
  *(AstLocal **)(lVar5 + uVar6 * 0x10) = param_1;
  *(long *)(this + 0x68) = lVar11 + 1;
LAB_00ed85d0:
  ppAVar10 = *(AstLocal ***)(this + 0x1a8);
  *(undefined *)(lVar5 + uVar6 * 0x10 + 10) = 1;
LAB_00ed85e0:
  if (ppAVar10 == *(AstLocal ***)(this + 0x1b0)) {
    __src = *(void **)(this + 0x1a0);
    uVar2 = (long)ppAVar10 - (long)__src;
    lVar11 = (long)uVar2 >> 3;
    uVar4 = lVar11 + 1;
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar4 <= (ulong)((long)uVar2 >> 2)) {
      uVar4 = (long)uVar2 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar2) {
      uVar4 = 0x1fffffffffffffff;
    }
    if (uVar4 == 0) {
      __dest = (void *)0x0;
      ppAVar12 = (AstLocal **)(lVar11 * 8);
      pvVar1 = (void *)0x0;
      *ppAVar12 = param_1;
    }
    else {
      if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar4 << 3);
      ppAVar12 = (AstLocal **)((long)__dest + lVar11 * 8);
      pvVar1 = (void *)((long)__dest + uVar4 * 8);
      *ppAVar12 = param_1;
    }
    ppAVar12 = ppAVar12 + 1;
    if (0 < (long)uVar2) {
      memcpy(__dest,__src,uVar2);
    }
    *(void **)(this + 0x1a0) = __dest;
    *(AstLocal ***)(this + 0x1a8) = ppAVar12;
    *(void **)(this + 0x1b0) = pvVar1;
    if (__src != (void *)0x0) {
      operator_delete(__src);
      ppAVar12 = *(AstLocal ***)(this + 0x1a8);
    }
  }
  else {
    ppAVar12 = ppAVar10 + 1;
    *ppAVar10 = param_1;
    *(AstLocal ***)(this + 0x1a8) = ppAVar12;
  }
  return (ulong)(((uint)((int)ppAVar12 - *(int *)(this + 0x1a0)) >> 3) - 1);
}


