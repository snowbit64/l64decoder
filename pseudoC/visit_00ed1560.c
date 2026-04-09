// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00ed1560
// Size: 288 bytes
// Signature: undefined __thiscall visit(FunctionVisitor * this, AstExprFunction * param_1)


/* Luau::Compiler::FunctionVisitor::visit(Luau::AstExprFunction*) */

undefined8 __thiscall
Luau::Compiler::FunctionVisitor::visit(FunctionVisitor *this,AstExprFunction *param_1)

{
  ulong uVar1;
  void *pvVar2;
  AstExprFunction **ppAVar3;
  void *__dest;
  void **ppvVar4;
  void *__src;
  ulong __n;
  long lVar5;
  
  (**(code **)**(undefined8 **)(param_1 + 0x98))(*(undefined8 **)(param_1 + 0x98),this);
  ppvVar4 = *(void ***)(this + 0x10);
  ppAVar3 = (AstExprFunction **)ppvVar4[1];
  if (ppAVar3 == (AstExprFunction **)ppvVar4[2]) {
    __src = *ppvVar4;
    __n = (long)ppAVar3 - (long)__src;
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
      ppAVar3 = (AstExprFunction **)(lVar5 * 8);
      pvVar2 = (void *)0x0;
      *ppAVar3 = param_1;
    }
    else {
      if (uVar1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar1 << 3);
      ppAVar3 = (AstExprFunction **)((long)__dest + lVar5 * 8);
      pvVar2 = (void *)((long)__dest + uVar1 * 8);
      *ppAVar3 = param_1;
    }
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *ppvVar4 = __dest;
    ppvVar4[1] = ppAVar3 + 1;
    ppvVar4[2] = pvVar2;
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *ppAVar3 = param_1;
    ppvVar4[1] = ppAVar3 + 1;
  }
  return 0;
}


