// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatRepeat
// Entry Point: 00ed2fb8
// Size: 1528 bytes
// Signature: undefined __thiscall compileStatRepeat(Compiler * this, AstStatRepeat * param_1)


/* Luau::Compiler::compileStatRepeat(Luau::AstStatRepeat*) */

void __thiscall Luau::Compiler::compileStatRepeat(Compiler *this,AstStatRepeat *param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  bool bVar7;
  void *__dest;
  AstExpr *pAVar8;
  byte bVar9;
  byte bVar10;
  AstExpr *pAVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  AstExpr *pAVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  void *__src;
  long lVar22;
  size_t __n;
  ulong uVar23;
  ulong uVar24;
  ulong *local_80;
  ulong *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  puVar19 = *(ulong **)(this + 0x1d8);
  lVar2 = *(long *)(this + 0x1b8);
  lVar3 = *(long *)(this + 0x1c0);
  uVar21 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  uVar24 = *(ulong *)(param_1 + 0x20);
  if (puVar19 < *(ulong **)(this + 0x1e0)) {
    *puVar19 = uVar21;
    puVar19[1] = uVar24;
    *(ulong **)(this + 0x1d8) = puVar19 + 2;
  }
  else {
    __src = *(void **)(this + 0x1d0);
    __n = (long)puVar19 - (long)__src;
    uVar23 = ((long)__n >> 4) + 1;
    if (uVar23 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    uVar12 = (long)*(ulong **)(this + 0x1e0) - (long)__src;
    uVar14 = (long)uVar12 >> 3;
    if (uVar23 <= uVar14) {
      uVar23 = uVar14;
    }
    if (0x7fffffffffffffef < uVar12) {
      uVar23 = 0xfffffffffffffff;
    }
    if (uVar23 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    __dest = operator_new(uVar23 * 0x10);
    puVar19 = (ulong *)((long)__dest + ((long)__n >> 4) * 0x10);
    *puVar19 = uVar21;
    puVar19[1] = uVar24;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x1d0) = __dest;
    *(ulong **)(this + 0x1d8) = puVar19 + 2;
    *(void **)(this + 0x1e0) = (void *)((long)__dest + uVar23 * 0x10);
    if (__src != (void *)0x0) {
      operator_delete(__src);
    }
  }
  uVar24 = BytecodeBuilder::emitLabel();
  lVar22 = *(long *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(this + 0x178);
  if (*(long *)(lVar22 + 0x28) != 0) {
    uVar23 = 0;
    do {
                    /* try { // try from 00ed30d8 to 00ed30df has its CatchHandler @ 00ed35c4 */
      compileStat(this,*(AstStat **)(*(long *)(lVar22 + 0x20) + uVar23 * 8));
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ulong *)(lVar22 + 0x28));
  }
                    /* try { // try from 00ed30f4 to 00ed30f7 has its CatchHandler @ 00ed35b0 */
  uVar23 = BytecodeBuilder::emitLabel();
  if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00ed3118 to 00ed311b has its CatchHandler @ 00ed35bc */
    BytecodeBuilder::setDebugLine
              (*(BytecodeBuilder **)this,*(int *)(*(long *)(param_1 + 0x20) + 0xc) + 1);
  }
  pAVar8 = *(AstExpr **)(param_1 + 0x20);
  if ((*(long *)(this + 0xe0) != 0) && (pAVar11 = *(AstExpr **)(this + 0xe8), pAVar11 != pAVar8)) {
    lVar22 = *(long *)(this + 0xd0);
    uVar12 = 0;
    uVar14 = (ulong)pAVar8 >> 4 ^ (ulong)pAVar8 >> 9;
    uVar13 = *(long *)(this + 0xd8) - 1;
    do {
      uVar14 = uVar14 & uVar13;
      pAVar15 = *(AstExpr **)(lVar22 + uVar14 * 0x18);
      if (pAVar15 == pAVar8) {
        uVar5 = *(uint *)(lVar22 + uVar14 * 0x18 + 8);
        if ((1 < uVar5) && ((uVar5 != 2 || (*(char *)(lVar22 + uVar14 * 0x18 + 0x10) != '\0')))) {
          uVar24 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
          if ((uVar24 <= uVar21) || (*(long *)(this + 0x68) == 0)) goto LAB_00ed356c;
          bVar7 = false;
          uVar12 = uVar21;
          bVar9 = 0xff;
          goto LAB_00ed34c8;
        }
        break;
      }
      uVar12 = uVar12 + 1;
      uVar14 = uVar12 + uVar14;
    } while (pAVar15 != pAVar11 && uVar12 < uVar13 || pAVar15 != pAVar11 && uVar12 == uVar13);
  }
  local_80 = (ulong *)0x0;
  local_78 = (ulong *)0x0;
  local_70 = 0;
                    /* try { // try from 00ed3194 to 00ed327f has its CatchHandler @ 00ed35b4 */
  compileConditionValue(this,pAVar8,(uchar *)0x0,(vector *)&local_80,true);
  uVar12 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if ((uVar21 < uVar12) && (*(long *)(this + 0x68) != 0)) {
    bVar7 = false;
    uVar14 = uVar21;
    bVar9 = 0xff;
LAB_00ed31dc:
    do {
      uVar13 = *(ulong *)(*(long *)(this + 0x188) + uVar14 * 8);
      if (uVar13 != *(ulong *)(this + 0x70)) {
        uVar16 = 0;
        uVar18 = uVar13 >> 4 ^ uVar13 >> 9;
        do {
          uVar18 = uVar18 & *(long *)(this + 0x60) - 1U;
          puVar19 = (ulong *)(*(long *)(this + 0x58) + uVar18 * 0x10);
          if (*puVar19 == uVar13) goto LAB_00ed3224;
          if (*puVar19 == *(ulong *)(this + 0x70)) break;
          uVar16 = uVar16 + 1;
          uVar18 = uVar16 + uVar18;
        } while (uVar16 <= *(long *)(this + 0x60) - 1U);
      }
      puVar19 = (ulong *)0x0;
LAB_00ed3224:
      puVar1 = (ulong *)0x0;
      if (puVar19 != (ulong *)0x0) {
        puVar1 = puVar19 + 1;
      }
      if (*(byte *)((long)puVar1 + 2) != 0) {
        uVar14 = uVar14 + 1;
        bVar10 = *(byte *)puVar1;
        if (bVar9 <= *(byte *)puVar1) {
          bVar10 = bVar9;
        }
        bVar7 = true;
        bVar9 = bVar10;
        if (uVar14 == uVar12) goto LAB_00ed326c;
        goto LAB_00ed31dc;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar12);
    bVar10 = bVar9;
    if (bVar7) {
LAB_00ed326c:
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar10,'\0','\0');
    }
  }
                    /* try { // try from 00ed3284 to 00ed329f has its CatchHandler @ 00ed35b8 */
  uVar14 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,0x18,'\0',0);
                    /* try { // try from 00ed32a4 to 00ed339f has its CatchHandler @ 00ed35cc */
  uVar13 = BytecodeBuilder::emitLabel();
  uVar12 = *(long *)(this + 400) - *(long *)(this + 0x188) >> 3;
  if ((uVar21 < uVar12) && (*(long *)(this + 0x68) != 0)) {
    bVar7 = false;
    uVar16 = uVar21;
    bVar9 = 0xff;
LAB_00ed32e0:
    do {
      uVar18 = *(ulong *)(*(long *)(this + 0x188) + uVar16 * 8);
      if (uVar18 != *(ulong *)(this + 0x70)) {
        uVar17 = 0;
        uVar20 = uVar18 >> 4 ^ uVar18 >> 9;
        do {
          uVar20 = uVar20 & *(long *)(this + 0x60) - 1U;
          puVar19 = (ulong *)(*(long *)(this + 0x58) + uVar20 * 0x10);
          if (*puVar19 == uVar18) goto LAB_00ed3328;
          if (*puVar19 == *(ulong *)(this + 0x70)) break;
          uVar17 = uVar17 + 1;
          uVar20 = uVar17 + uVar20;
        } while (uVar17 <= *(long *)(this + 0x60) - 1U);
      }
      puVar19 = (ulong *)0x0;
LAB_00ed3328:
      puVar1 = (ulong *)0x0;
      if (puVar19 != (ulong *)0x0) {
        puVar1 = puVar19 + 1;
      }
      if (*(byte *)((long)puVar1 + 2) != 0) {
        uVar16 = uVar16 + 1;
        bVar10 = *(byte *)puVar1;
        if (bVar9 <= *(byte *)puVar1) {
          bVar10 = bVar9;
        }
        bVar7 = true;
        bVar9 = bVar10;
        if (uVar16 == uVar12) goto LAB_00ed3370;
        goto LAB_00ed32e0;
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar12);
    bVar10 = bVar9;
    if (bVar7) {
LAB_00ed3370:
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar10,'\0','\0');
    }
  }
  uVar12 = BytecodeBuilder::emitLabel();
  uVar24 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar14,uVar24);
  puVar1 = local_78;
  puVar19 = local_80;
  if ((uVar24 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  for (; puVar19 != puVar1; puVar19 = puVar19 + 1) {
                    /* try { // try from 00ed33b8 to 00ed33bf has its CatchHandler @ 00ed35c0 */
    uVar24 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,*puVar19,uVar13);
    if ((uVar24 & 1) == 0) {
                    /* try { // try from 00ed3580 to 00ed359b has its CatchHandler @ 00ed35cc */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded jump distance limit; simplify the code to compile");
    }
  }
  if (local_80 != (ulong *)0x0) {
    local_78 = local_80;
    operator_delete(local_80);
  }
LAB_00ed33e4:
                    /* try { // try from 00ed33e4 to 00ed3573 has its CatchHandler @ 00ed35bc */
  popLocals(this,uVar21);
  uVar24 = lVar3 - lVar2 >> 4;
  patchLoopJumps(this,(AstNode *)param_1,uVar24,uVar12,uVar23);
  uVar21 = *(long *)(this + 0x1c0) - *(long *)(this + 0x1b8) >> 4;
  if (uVar24 < uVar21 || uVar24 - uVar21 == 0) {
    if (uVar24 < uVar21) {
      *(ulong *)(this + 0x1c0) = *(long *)(this + 0x1b8) + uVar24 * 0x10;
    }
  }
  else {
    std::__ndk1::vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>>::
    __append((vector<Luau::Compiler::LoopJump,std::__ndk1::allocator<Luau::Compiler::LoopJump>> *)
             (this + 0x1b8),uVar24 - uVar21);
  }
  *(undefined4 *)(this + 0x178) = uVar4;
  *(long *)(this + 0x1d8) = *(long *)(this + 0x1d8) + -0x10;
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
  while (uVar12 = uVar12 + 1, uVar12 != uVar24) {
LAB_00ed34c8:
    uVar14 = *(ulong *)(*(long *)(this + 0x188) + uVar12 * 8);
    if (uVar14 != *(ulong *)(this + 0x70)) {
      uVar13 = 0;
      uVar16 = uVar14 >> 4 ^ uVar14 >> 9;
      do {
        uVar16 = uVar16 & *(long *)(this + 0x60) - 1U;
        puVar19 = (ulong *)(*(long *)(this + 0x58) + uVar16 * 0x10);
        if (*puVar19 == uVar14) goto LAB_00ed3510;
        if (*puVar19 == *(ulong *)(this + 0x70)) break;
        uVar13 = uVar13 + 1;
        uVar16 = uVar13 + uVar16;
      } while (uVar13 <= *(long *)(this + 0x60) - 1U);
    }
    puVar19 = (ulong *)0x0;
LAB_00ed3510:
    puVar1 = (ulong *)0x0;
    if (puVar19 != (ulong *)0x0) {
      puVar1 = puVar19 + 1;
    }
    if (*(byte *)((long)puVar1 + 2) != 0) {
      uVar12 = uVar12 + 1;
      bVar10 = *(byte *)puVar1;
      if (bVar9 <= *(byte *)puVar1) {
        bVar10 = bVar9;
      }
      bVar7 = true;
      bVar9 = bVar10;
      if (uVar12 == uVar24) goto LAB_00ed3558;
      goto LAB_00ed34c8;
    }
  }
  bVar10 = bVar9;
  if (bVar7) {
LAB_00ed3558:
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar10,'\0','\0');
  }
LAB_00ed356c:
  uVar12 = BytecodeBuilder::emitLabel();
  goto LAB_00ed33e4;
}


