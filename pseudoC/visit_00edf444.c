// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: visit
// Entry Point: 00edf444
// Size: 368 bytes
// Signature: undefined __thiscall visit(ConstUpvalueVisitor * this, AstExprLocal * param_1)


/* Luau::Compiler::ConstUpvalueVisitor::visit(Luau::AstExprLocal*) */

undefined8 __thiscall
Luau::Compiler::ConstUpvalueVisitor::visit(ConstUpvalueVisitor *this,AstExprLocal *param_1)

{
  undefined8 *puVar1;
  void *__dest;
  AstExprLocal *pAVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  AstExprLocal *pAVar7;
  void *__src;
  
  if (((param_1[0x28] != (AstExprLocal)0x0) &&
      (lVar4 = *(long *)(this + 8), *(long *)(lVar4 + 0xe0) != 0)) &&
     (pAVar2 = *(AstExprLocal **)(lVar4 + 0xe8), pAVar2 != param_1)) {
    uVar3 = 0;
    uVar6 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
    uVar5 = *(long *)(lVar4 + 0xd8) - 1;
    do {
      uVar6 = uVar6 & uVar5;
      pAVar7 = *(AstExprLocal **)(*(long *)(lVar4 + 0xd0) + uVar6 * 0x18);
      if (pAVar7 == param_1) {
        if (*(int *)(*(long *)(lVar4 + 0xd0) + uVar6 * 0x18 + 8) == 0) {
          return 0;
        }
        puVar1 = *(undefined8 **)(this + 0x18);
        if (puVar1 != *(undefined8 **)(this + 0x20)) {
          *puVar1 = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 **)(this + 0x18) = puVar1 + 1;
          return 0;
        }
        __src = *(void **)(this + 0x10);
        uVar6 = (long)puVar1 - (long)__src;
        uVar3 = ((long)uVar6 >> 3) + 1;
        if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar3 <= (ulong)((long)uVar6 >> 2)) {
          uVar3 = (long)uVar6 >> 2;
        }
        if (0x7ffffffffffffff7 < uVar6) {
          uVar3 = 0x1fffffffffffffff;
        }
        if (uVar3 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar3 << 3);
        }
        puVar1 = (undefined8 *)((long)__dest + ((long)uVar6 >> 3) * 8);
        *puVar1 = *(undefined8 *)(param_1 + 0x20);
        if (0 < (long)uVar6) {
          memcpy(__dest,__src,uVar6);
        }
        *(void **)(this + 0x10) = __dest;
        *(undefined8 **)(this + 0x18) = puVar1 + 1;
        *(void **)(this + 0x20) = (void *)((long)__dest + uVar3 * 8);
        if (__src == (void *)0x0) {
          return 0;
        }
        operator_delete(__src);
        return 0;
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar3 + uVar6;
    } while (pAVar7 != pAVar2 && uVar3 < uVar5 || pAVar7 != pAVar2 && uVar3 == uVar5);
  }
  return 0;
}


