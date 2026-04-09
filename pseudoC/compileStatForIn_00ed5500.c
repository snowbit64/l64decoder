// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatForIn
// Entry Point: 00ed5500
// Size: 1284 bytes
// Signature: undefined __thiscall compileStatForIn(Compiler * this, AstStatForIn * param_1)


/* Luau::Compiler::compileStatForIn(Luau::AstStatForIn*) */

void __thiscall Luau::Compiler::compileStatForIn(Compiler *this,AstStatForIn *param_1)

{
  long **pplVar1;
  uint uVar2;
  ulong *puVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  void *__dest;
  char *__s1;
  ulong uVar10;
  ulong uVar11;
  char *__s2;
  uchar uVar12;
  byte bVar13;
  byte bVar14;
  uint uVar15;
  LuauOpcode LVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  void *__src;
  size_t __n;
  ulong uVar23;
  undefined auVar24 [16];
  
  uVar6 = *(undefined4 *)(this + 0x178);
  puVar21 = *(ulong **)(this + 0x1d8);
  uVar22 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  lVar4 = *(long *)(this + 0x1b8);
  lVar5 = *(long *)(this + 0x1c0);
  if (puVar21 < *(ulong **)(this + 0x1e0)) {
    *puVar21 = uVar22;
    puVar21[1] = 0;
    *(ulong **)(this + 0x1d8) = puVar21 + 2;
  }
  else {
    __src = *(void **)(this + 0x1d0);
    __n = (long)puVar21 - (long)__src;
    uVar17 = ((long)__n >> 4) + 1;
    if (uVar17 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00ed59f4 to 00ed5a03 has its CatchHandler @ 00ed5a14 */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar10 = (long)*(ulong **)(this + 0x1e0) - (long)__src;
    uVar23 = (long)uVar10 >> 3;
    if (uVar17 <= uVar23) {
      uVar17 = uVar23;
    }
    if (0x7fffffffffffffef < uVar10) {
      uVar17 = 0xfffffffffffffff;
    }
    if (uVar17 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
                    /* try { // try from 00ed55a8 to 00ed55ab has its CatchHandler @ 00ed5a14 */
    __dest = operator_new(uVar17 << 4);
    puVar21 = (ulong *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar21 = uVar22;
    puVar21[1] = 0;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x1d0) = __dest;
    *(ulong **)(this + 0x1d8) = puVar21 + 2;
    *(void **)(this + 0x1e0) = (void *)((long)__dest + uVar17 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  iVar7 = *(int *)(this + 0x178);
  uVar15 = iVar7 + 3;
  if (0xff < uVar15) {
                    /* try { // try from 00ed59ac to 00ed59bf has its CatchHandler @ 00ed5a1c */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",3
                        ,0xff);
  }
  pplVar1 = (long **)(param_1 + 0x30);
  *(uint *)(this + 0x178) = uVar15;
  if (uVar15 <= *(uint *)(this + 0x17c)) {
    uVar15 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar15;
  uVar12 = (uchar)iVar7;
                    /* try { // try from 00ed5614 to 00ed562b has its CatchHandler @ 00ed5a1c */
  compileExprListTemp(this,(AstArray *)pplVar1,uVar12,'\x03',true);
  uVar17 = *(ulong *)(param_1 + 0x28);
  iVar7 = *(int *)(this + 0x178);
  uVar15 = (uint)uVar17;
  if (uVar15 < 3) {
    uVar15 = 2;
  }
  uVar2 = uVar15 + iVar7;
  if (0xff < uVar2) {
                    /* try { // try from 00ed59c4 to 00ed59d3 has its CatchHandler @ 00ed5a10 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",
                        (ulong)uVar15,0xff);
  }
  LVar16 = 0x4c;
  *(uint *)(this + 0x178) = uVar2;
  if (uVar2 <= *(uint *)(this + 0x17c)) {
    uVar2 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar2;
  if ((*(int *)(this + 8) < 1) || (2 < uVar17)) goto LAB_00ed573c;
  if (*(long *)(param_1 + 0x38) == 2) {
                    /* try { // try from 00ed5708 to 00ed570b has its CatchHandler @ 00ed5a08 */
    auVar24 = Compile::getBuiltin((AstExpr *)**pplVar1,(DenseHashMap *)(this + 0x80),
                                  (DenseHashMap *)(this + 0xa8));
    __s1 = auVar24._8_8_;
    LVar16 = 0x4c;
    if ((auVar24._0_8_ != 0) || (__s1 == (char *)0x0)) goto LAB_00ed573c;
    __s2 = "next";
  }
  else {
    if ((*(long *)(param_1 + 0x38) != 1) ||
       (*(int *)(**pplVar1 + 8) != AstRtti<Luau::AstExprCall>::value)) {
      LVar16 = 0x4c;
      goto LAB_00ed573c;
    }
                    /* try { // try from 00ed56b8 to 00ed56bb has its CatchHandler @ 00ed5a04 */
    auVar24 = Compile::getBuiltin(*(AstExpr **)(**pplVar1 + 0x20),(DenseHashMap *)(this + 0x80),
                                  (DenseHashMap *)(this + 0xa8));
    __s1 = auVar24._8_8_;
    LVar16 = 0x4c;
    if ((auVar24._0_8_ != 0) || (__s1 == (char *)0x0)) goto LAB_00ed573c;
    iVar9 = strcmp(__s1,"ipairs");
    if (iVar9 == 0) {
      LVar16 = 0x3b;
      goto LAB_00ed573c;
    }
    __s2 = "pairs";
  }
  iVar9 = strcmp(__s1,__s2);
  LVar16 = 0x3d;
  if (iVar9 != 0) {
    LVar16 = 0x4c;
  }
LAB_00ed573c:
                    /* try { // try from 00ed5740 to 00ed575b has its CatchHandler @ 00ed5a18 */
  uVar17 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,LVar16,uVar12,0);
                    /* try { // try from 00ed5760 to 00ed5763 has its CatchHandler @ 00ed5a24 */
  uVar10 = BytecodeBuilder::emitLabel();
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar23 = 0;
    do {
                    /* try { // try from 00ed5780 to 00ed5787 has its CatchHandler @ 00ed5a2c */
      pushLocal(this,*(AstLocal **)(*(long *)(param_1 + 0x20) + uVar23 * 8),
                (char)uVar23 + (char)iVar7);
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ulong *)(param_1 + 0x28));
  }
                    /* try { // try from 00ed579c to 00ed58a3 has its CatchHandler @ 00ed5a24 */
  compileStat(this,*(AstStat **)(param_1 + 0x40));
  uVar23 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if ((uVar22 < uVar23) && (*(long *)(this + 0x68) != 0)) {
    bVar8 = false;
    uVar11 = uVar22;
    bVar13 = 0xff;
LAB_00ed57d8:
    do {
      uVar18 = *(ulong *)(*(long *)(this + 0x188) + uVar11 * 8);
      if (uVar18 != *(ulong *)(this + 0x70)) {
        uVar19 = 0;
        uVar20 = uVar18 >> 4 ^ uVar18 >> 9;
        do {
          uVar20 = uVar20 & *(long *)(this + 0x60) - 1U;
          puVar21 = (ulong *)(*(long *)(this + 0x58) + uVar20 * 0x10);
          if (*puVar21 == uVar18) goto LAB_00ed5820;
          if (*puVar21 == *(ulong *)(this + 0x70)) break;
          uVar19 = uVar19 + 1;
          uVar20 = uVar19 + uVar20;
        } while (uVar19 <= *(long *)(this + 0x60) - 1U);
      }
      puVar21 = (ulong *)0x0;
LAB_00ed5820:
      puVar3 = (ulong *)0x0;
      if (puVar21 != (ulong *)0x0) {
        puVar3 = puVar21 + 1;
      }
      if (*(byte *)((long)puVar3 + 2) != 0) {
        uVar11 = uVar11 + 1;
        bVar14 = *(byte *)puVar3;
        if (bVar13 <= *(byte *)puVar3) {
          bVar14 = bVar13;
        }
        bVar8 = true;
        bVar13 = bVar14;
        if (uVar11 == uVar23) goto LAB_00ed5868;
        goto LAB_00ed57d8;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar23);
    bVar14 = bVar13;
    if (bVar8) {
LAB_00ed5868:
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar14,'\0','\0');
    }
  }
  popLocals(this,uVar22);
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
                    /* try { // try from 00ed58a8 to 00ed58ab has its CatchHandler @ 00ed5a0c */
  uVar22 = BytecodeBuilder::emitLabel();
                    /* try { // try from 00ed58b4 to 00ed58e7 has its CatchHandler @ 00ed5a20 */
  uVar23 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x3a,uVar12,0);
  BytecodeBuilder::emitAux
            (*(BytecodeBuilder **)this,*(uint *)(param_1 + 0x28) | (uint)(LVar16 == 0x3b) << 0x1f);
                    /* try { // try from 00ed58ec to 00ed595b has its CatchHandler @ 00ed5a28 */
  uVar11 = BytecodeBuilder::emitLabel();
  uVar17 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar17,uVar23);
  if ((uVar17 & 1) == 0) {
                    /* try { // try from 00ed59d8 to 00ed59f3 has its CatchHandler @ 00ed5a28 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  uVar17 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar23,uVar10);
  if ((uVar17 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  uVar17 = lVar5 - lVar4 >> 4;
  patchLoopJumps(this,(AstNode *)param_1,uVar17,uVar11,uVar22);
  uVar22 = *(long *)(this + 0x1c0) - *(long *)(this + 0x1b8) >> 4;
  if (uVar17 < uVar22 || uVar17 - uVar22 == 0) {
    if (uVar17 < uVar22) {
      *(ulong *)(this + 0x1c0) = *(long *)(this + 0x1b8) + uVar17 * 0x10;
    }
  }
  else {
    std::__ndk1::vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>>::
    __append((vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>> *)
             (this + 0x1b8),uVar17 - uVar22);
  }
  *(long *)(this + 0x1d8) = *(long *)(this + 0x1d8) + -0x10;
  *(undefined4 *)(this + 0x178) = uVar6;
  return;
}


