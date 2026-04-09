// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushLocal
// Entry Point: 00ed16cc
// Size: 392 bytes
// Signature: undefined __thiscall pushLocal(Compiler * this, AstLocal * param_1, uchar param_2)


/* Luau::Compiler::pushLocal(Luau::AstLocal*, unsigned char) */

void __thiscall Luau::Compiler::pushLocal(Compiler *this,AstLocal *param_1,uchar param_2)

{
  void *__src;
  undefined4 uVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  long lVar4;
  AstLocal **ppAVar5;
  ulong uVar6;
  
  __src = *(void **)(this + 0x188);
  ppAVar5 = *(AstLocal ***)(this + 400);
  uVar6 = (long)ppAVar5 - (long)__src;
  if (0x638 < uVar6) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 8),
                        "Out of local registers when trying to allocate %s: exceeded limit %d",
                        *(undefined8 *)param_1,200);
  }
  if (ppAVar5 == *(AstLocal ***)(this + 0x198)) {
    lVar2 = (long)uVar6 >> 3;
    uVar3 = uVar6 >> 2;
    if (uVar3 < lVar2 + 1U) {
      uVar3 = lVar2 + 1;
    }
    if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar3 * 8);
    ppAVar5 = (AstLocal **)((long)__dest + lVar2 * 8);
    *ppAVar5 = param_1;
    if (uVar6 != 0) {
      memcpy(__dest,__src,uVar6);
    }
    *(void **)(this + 0x188) = __dest;
    *(AstLocal ***)(this + 400) = ppAVar5 + 1;
    *(void **)(this + 0x198) = (void *)((long)__dest + uVar3 * 8);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppAVar5 = param_1;
    *(AstLocal ***)(this + 400) = ppAVar5 + 1;
  }
  lVar2 = *(long *)(this + 0x60);
  if ((ulong)(lVar2 * 3) >> 2 <= *(ulong *)(this + 0x68)) {
    detail::
    DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compiler::Local>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compiler::Local>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compiler::Local>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
    ::rehash();
    lVar2 = *(long *)(this + 0x60);
  }
  uVar6 = ((ulong)param_1 >> 4 ^ (ulong)param_1 >> 9) & lVar2 - 1U;
  ppAVar5 = (AstLocal **)(*(long *)(this + 0x58) + uVar6 * 0x10);
  if (*ppAVar5 == *(AstLocal **)(this + 0x70)) {
LAB_00ed17f0:
    lVar2 = *(long *)(this + 0x68);
    *ppAVar5 = param_1;
    *(long *)(this + 0x68) = lVar2 + 1;
  }
  else if (*ppAVar5 != param_1) {
    lVar4 = 1;
    do {
      uVar6 = uVar6 + lVar4 & lVar2 - 1U;
      ppAVar5 = (AstLocal **)(*(long *)(this + 0x58) + uVar6 * 0x10);
      if (*ppAVar5 == *(AstLocal **)(this + 0x70)) goto LAB_00ed17f0;
      lVar4 = lVar4 + 1;
    } while (*ppAVar5 != param_1);
  }
  *(uchar *)(ppAVar5 + 1) = param_2;
  *(undefined *)((long)ppAVar5 + 9) = 1;
  uVar1 = BytecodeBuilder::getDebugPC();
  *(undefined4 *)((long)ppAVar5 + 0xc) = uVar1;
  return;
}


