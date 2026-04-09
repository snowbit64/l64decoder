// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypeList
// Entry Point: 00ef19a4
// Size: 680 bytes
// Signature: undefined __thiscall parseTypeList(Parser * this, TempVector * param_1, TempVector * param_2)


/* Luau::Parser::parseTypeList(Luau::TempVector<Luau::AstType*>&,
   Luau::TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName, Luau::Location> > >&) */

void __thiscall Luau::Parser::parseTypeList(Parser *this,TempVector *param_1,TempVector *param_2)

{
  undefined *puVar1;
  long lVar2;
  void *__dest;
  undefined8 uVar3;
  int iVar4;
  ulong uVar5;
  void **ppvVar6;
  void *__src;
  ulong __n;
  AstType *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar4 = *(int *)(this + 0x28);
  if (iVar4 != 0x106) {
    do {
      if (iVar4 == 0x117) {
        Lexer::lookahead();
        if ((int)local_88 == 0x106) break;
        iVar4 = *(int *)(this + 0x28);
      }
      if (iVar4 == 0x117) {
        Lexer::lookahead();
        if ((int)local_88 != 0x3a) goto LAB_00ef1b14;
        uVar5 = *(ulong *)(param_2 + 0x10);
        while (uVar5 < *(ulong *)(param_1 + 0x10)) {
          ppvVar6 = *(void ***)param_2;
          puVar1 = (undefined *)ppvVar6[1];
          if (puVar1 == (undefined *)ppvVar6[2]) {
            __src = *ppvVar6;
            __n = (long)puVar1 - (long)__src;
            uVar5 = ((long)__n >> 5) + 1;
            if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
            if (uVar5 <= (ulong)((long)__n >> 4)) {
              uVar5 = (long)__n >> 4;
            }
            if (0x7fffffffffffffdf < __n) {
              uVar5 = 0x7ffffffffffffff;
            }
            if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
            }
            __dest = operator_new(uVar5 * 0x20);
            puVar1 = (undefined *)((long)__dest + ((long)__n >> 5) * 0x20);
            *puVar1 = 0;
            puVar1[0x18] = 0;
            if (0 < (long)__n) {
              memcpy(__dest,__src,__n);
            }
            *ppvVar6 = __dest;
            ppvVar6[1] = puVar1 + 0x20;
            ppvVar6[2] = (void *)((long)__dest + uVar5 * 0x20);
            if (__src != (void *)0x0) {
              operator_delete(__src);
            }
          }
          else {
            *puVar1 = 0;
            puVar1[0x18] = 0;
            ppvVar6[1] = puVar1 + 0x20;
          }
          uVar5 = *(long *)(param_2 + 0x10) + 1;
          *(ulong *)(param_2 + 0x10) = uVar5;
        }
        uStack_78 = *(undefined8 *)(this + 0x34);
        local_80 = *(undefined8 *)(this + 0x2c);
        local_88 = *(AstType **)(this + 0x40);
        local_70 = 1;
        TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>::
        push_back((TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>
                   *)param_2,(optional *)&local_88);
        nextLexeme();
        if (*(int *)(this + 0x28) == 0x3a) {
LAB_00ef1ba0:
          nextLexeme();
        }
        else {
          expectAndConsumeFail(this,0x3a,(char *)0x0);
          Lexer::lookahead();
          if ((int)local_88 == 0x3a) {
            nextLexeme();
            goto LAB_00ef1ba0;
          }
        }
      }
      else {
LAB_00ef1b14:
        if (*(long *)(param_2 + 0x10) != 0) {
          local_88 = (AstType *)((ulong)local_88 & 0xffffffffffffff00);
          local_70 = 0;
          TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>::
          push_back((TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>
                     *)param_2,(optional *)&local_88);
        }
      }
      local_88 = (AstType *)parseTypeAnnotation();
      TempVector<Luau::AstType*>::push_back((TempVector<Luau::AstType*> *)param_1,&local_88);
      if (*(int *)(this + 0x28) != 0x2c) {
        uVar3 = 0;
        if (*(long *)(lVar2 + 0x28) == local_68) {
          return;
        }
        goto LAB_00ef1c34;
      }
      nextLexeme();
      iVar4 = *(int *)(this + 0x28);
    } while (iVar4 != 0x106);
  }
  uVar3 = parseTypePackAnnotation();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_00ef1c34:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


