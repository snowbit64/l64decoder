// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unrollConcats
// Entry Point: 00edb64c
// Size: 360 bytes
// Signature: undefined __cdecl unrollConcats(vector * param_1)


/* Luau::Compiler::unrollConcats(std::__ndk1::vector<Luau::AstExpr*,
   std::__ndk1::allocator<Luau::AstExpr*> >&) */

void Luau::Compiler::unrollConcats(vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  void *__dest;
  void *__src;
  ulong __n;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  plVar4 = (long *)(*(long *)(param_1 + 8) + -8);
  lVar7 = *plVar4;
  iVar3 = *(int *)(lVar7 + 8);
  if (iVar3 == AstRtti<Luau::AstExprBinary>::value && lVar7 != 0) {
    while (*(int *)(lVar7 + 0x1c) == 6) {
      *plVar4 = *(long *)(lVar7 + 0x20);
      puVar2 = *(undefined8 **)(param_1 + 8);
      if (puVar2 == *(undefined8 **)(param_1 + 0x10)) {
        __src = *(void **)param_1;
        __n = (long)puVar2 - (long)__src;
        lVar5 = (long)__n >> 3;
        uVar1 = lVar5 + 1;
        if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar1 <= (ulong)((long)__n >> 2)) {
          uVar1 = (long)__n >> 2;
        }
        if (0x7ffffffffffffff7 < __n) {
          uVar1 = 0x1fffffffffffffff;
        }
        if (uVar1 == 0) {
          __dest = (void *)0x0;
          puVar6 = (undefined8 *)(lVar5 * 8);
          *puVar6 = *(undefined8 *)(lVar7 + 0x28);
        }
        else {
          if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar1 << 3);
          puVar6 = (undefined8 *)((long)__dest + lVar5 * 8);
          *puVar6 = *(undefined8 *)(lVar7 + 0x28);
        }
        puVar6 = puVar6 + 1;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)param_1 = __dest;
        *(undefined8 **)(param_1 + 8) = puVar6;
        *(void **)(param_1 + 0x10) = (void *)((long)__dest + uVar1 * 8);
        if (__src != (void *)0x0) {
          operator_delete(__src);
          puVar6 = *(undefined8 **)(param_1 + 8);
          iVar3 = AstRtti<Luau::AstExprBinary>::value;
        }
      }
      else {
        puVar6 = puVar2 + 1;
        *puVar2 = *(undefined8 *)(lVar7 + 0x28);
        *(undefined8 **)(param_1 + 8) = puVar6;
      }
      plVar4 = puVar6 + -1;
      lVar7 = *plVar4;
      if (*(int *)(lVar7 + 8) != iVar3) {
        return;
      }
      if (lVar7 == 0) {
        return;
      }
    }
  }
  return;
}


