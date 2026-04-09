// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushLocal
// Entry Point: 00eeef3c
// Size: 468 bytes
// Signature: undefined __thiscall pushLocal(Parser * this, Binding * param_1)


/* Luau::Parser::pushLocal(Luau::Parser::Binding const&) */

ulong __thiscall Luau::Parser::pushLocal(Parser *this,Binding *param_1)

{
  void *pvVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *__src;
  ulong *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(this + 0x110);
  if ((ulong)(lVar8 * 3) >> 2 <= *(ulong *)(this + 0x118)) {
    detail::
    DenseHashTable<Luau::AstName,std::__ndk1::pair<Luau::AstName,Luau::AstLocal*>,std::__ndk1::pair<Luau::AstName_const,Luau::AstLocal*>,Luau::detail::ItemInterfaceMap<Luau::AstName,Luau::AstLocal*>,std::__ndk1::hash<Luau::AstName>,std::__ndk1::equal_to<Luau::AstName>>
    ::rehash();
    lVar8 = *(long *)(this + 0x110);
  }
  uVar6 = *(ulong *)param_1;
  uVar7 = 0;
  uVar10 = uVar6 >> 4 ^ uVar6 >> 9;
  do {
    uVar10 = uVar10 & lVar8 - 1U;
    puVar11 = (ulong *)(*(long *)(this + 0x108) + uVar10 * 0x10);
    if (*puVar11 == *(ulong *)(this + 0x120)) {
      lVar8 = *(long *)(this + 0x118);
      *puVar11 = uVar6;
      *(long *)(this + 0x118) = lVar8 + 1;
      goto LAB_00eeefd8;
    }
    if (*puVar11 == uVar6) goto LAB_00eeefd8;
    uVar7 = uVar7 + 1;
    uVar10 = uVar7 + uVar10;
  } while (uVar7 <= lVar8 - 1U);
  puVar11 = (ulong *)0x0;
LAB_00eeefd8:
  lVar8 = *(long *)(this + 0xf0);
  lVar3 = *(long *)(this + 0xf8);
  puVar5 = (undefined8 *)Allocator::allocate(*(Allocator **)(this + 0x80),0x38);
  uVar7 = puVar11[1];
  uVar9 = *(undefined8 *)(param_1 + 0x18);
  *puVar5 = *(undefined8 *)param_1;
  uVar4 = *(uint *)(lVar3 + -4);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 8);
  puVar5[3] = uVar7;
  puVar5[6] = uVar9;
  puVar5[4] = (lVar3 - lVar8 >> 3) + -1;
  puVar5[5] = (ulong)uVar4;
  puVar5[2] = uVar13;
  puVar5[1] = uVar12;
  puVar11[1] = (ulong)puVar5;
  puVar2 = *(ulong **)(this + 0x138);
  if (puVar2 == *(ulong **)(this + 0x140)) {
    __src = *(void **)(this + 0x130);
    uVar10 = (long)puVar2 - (long)__src;
    lVar8 = (long)uVar10 >> 3;
    uVar7 = lVar8 + 1;
    if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar7 <= (ulong)((long)uVar10 >> 2)) {
      uVar7 = (long)uVar10 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar10) {
      uVar7 = 0x1fffffffffffffff;
    }
    if (uVar7 == 0) {
      __dest = (void *)0x0;
      puVar2 = (ulong *)(lVar8 * 8);
      pvVar1 = (void *)0x0;
      *puVar2 = (ulong)puVar5;
    }
    else {
      if (uVar7 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar7 << 3);
      puVar2 = (ulong *)((long)__dest + lVar8 * 8);
      pvVar1 = (void *)((long)__dest + uVar7 * 8);
      *puVar2 = puVar11[1];
    }
    if (0 < (long)uVar10) {
      memcpy(__dest,__src,uVar10);
    }
    *(void **)(this + 0x130) = __dest;
    *(ulong **)(this + 0x138) = puVar2 + 1;
    *(void **)(this + 0x140) = pvVar1;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar2 = (ulong)puVar5;
    *(ulong **)(this + 0x138) = puVar2 + 1;
  }
  return puVar11[1];
}


