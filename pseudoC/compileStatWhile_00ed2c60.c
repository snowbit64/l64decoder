// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatWhile
// Entry Point: 00ed2c60
// Size: 812 bytes
// Signature: undefined __thiscall compileStatWhile(Compiler * this, AstStatWhile * param_1)


/* Luau::Compiler::compileStatWhile(Luau::AstStatWhile*) */

void __thiscall Luau::Compiler::compileStatWhile(Compiler *this,AstStatWhile *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  void *__src;
  size_t __n;
  long lVar14;
  ulong *local_80;
  ulong *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0xe0) != 0) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    uVar9 = *(ulong *)(this + 0xe8);
    if (uVar9 != uVar8) {
      lVar1 = *(long *)(this + 0xd0);
      uVar10 = 0;
      uVar12 = uVar8 >> 4 ^ uVar8 >> 9;
      uVar11 = *(long *)(this + 0xd8) - 1;
      do {
        uVar12 = uVar12 & uVar11;
        uVar13 = *(ulong *)(lVar1 + uVar12 * 0x18);
        if (uVar13 == uVar8) {
          iVar4 = *(int *)(lVar1 + uVar12 * 0x18 + 8);
          if ((iVar4 == 1) || ((iVar4 == 2 && (*(char *)(lVar1 + uVar12 * 0x18 + 0x10) == '\0'))))
          goto LAB_00ed2ef8;
          break;
        }
        uVar10 = uVar10 + 1;
        uVar12 = uVar10 + uVar12;
      } while (uVar13 != uVar9 && uVar10 < uVar11 || uVar13 != uVar9 && uVar10 == uVar11);
    }
  }
  plVar2 = *(long **)(this + 0x1d8);
  lVar1 = *(long *)(this + 0x1b8);
  lVar3 = *(long *)(this + 0x1c0);
  lVar14 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if (plVar2 < *(long **)(this + 0x1e0)) {
    *plVar2 = lVar14;
    plVar2[1] = 0;
    *(long **)(this + 0x1d8) = plVar2 + 2;
  }
  else {
    __src = *(void **)(this + 0x1d0);
    __n = (long)plVar2 - (long)__src;
    uVar8 = ((long)__n >> 4) + 1;
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar9 = (long)*(long **)(this + 0x1e0) - (long)__src;
    uVar10 = (long)uVar9 >> 3;
    if (uVar8 <= uVar10) {
      uVar8 = uVar10;
    }
    if (0x7fffffffffffffef < uVar9) {
      uVar8 = 0xfffffffffffffff;
    }
    if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar8 * 0x10);
    plVar2 = (long *)((long)__dest + ((long)__n >> 4) * 0x10);
    *plVar2 = lVar14;
    plVar2[1] = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x1d0) = __dest;
    *(long **)(this + 0x1d8) = plVar2 + 2;
    *(void **)(this + 0x1e0) = (void *)((long)__dest + uVar8 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar8 = BytecodeBuilder::emitLabel();
  local_80 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  local_70 = 0;
                    /* try { // try from 00ed2dd8 to 00ed2df7 has its CatchHandler @ 00ed2f90 */
  compileConditionValue(this,*(AstExpr **)(param_1 + 0x20),(uchar *)0x0,(vector *)&local_80,false);
  compileStat(this,*(AstStat **)(param_1 + 0x28));
                    /* try { // try from 00ed2dfc to 00ed2dff has its CatchHandler @ 00ed2f8c */
  uVar9 = BytecodeBuilder::emitLabel();
                    /* try { // try from 00ed2e08 to 00ed2e43 has its CatchHandler @ 00ed2f94 */
  uVar10 = BytecodeBuilder::emitLabel();
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine
              (*(BytecodeBuilder **)this,*(int *)(*(long *)(param_1 + 0x20) + 0xc) + 1);
  }
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x18,'\0',0);
                    /* try { // try from 00ed2e48 to 00ed2e5f has its CatchHandler @ 00ed2f9c */
  uVar12 = BytecodeBuilder::emitLabel();
  uVar8 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar10,uVar8);
  puVar7 = local_78;
  puVar6 = local_80;
  if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
                    /* try { // try from 00ed2e78 to 00ed2e7f has its CatchHandler @ 00ed2f98 */
    uVar8 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,*puVar6,uVar12);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded jump distance limit; simplify the code to compile");
    }
  }
  uVar10 = lVar3 - lVar1 >> 4;
                    /* try { // try from 00ed2e98 to 00ed2f77 has its CatchHandler @ 00ed2f9c */
  patchLoopJumps(this,(AstNode *)param_1,uVar10,uVar12,uVar9);
  uVar8 = *(long *)(this + 0x1c0) - *(long *)(this + 0x1b8) >> 4;
  if (uVar10 < uVar8 || uVar10 - uVar8 == 0) {
    if (uVar10 < uVar8) {
      *(ulong *)(this + 0x1c0) = *(long *)(this + 0x1b8) + uVar10 * 0x10;
    }
  }
  else {
    std::__ndk1::vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>>::
    __append((vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>> *)
             (this + 0x1b8),uVar10 - uVar8);
  }
  *(long *)(this + 0x1d8) = *(long *)(this + 0x1d8) + -0x10;
  if (local_80 != (ulong *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_00ed2ef8:
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


