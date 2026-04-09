// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileInlinedCall
// Entry Point: 00edd3f8
// Size: 2740 bytes
// Signature: undefined __thiscall compileInlinedCall(Compiler * this, AstExprCall * param_1, AstExprFunction * param_2, uchar param_3, uchar param_4)


/* Luau::Compiler::compileInlinedCall(Luau::AstExprCall*, Luau::AstExprFunction*, unsigned char,
   unsigned char) */

void __thiscall
Luau::Compiler::compileInlinedCall
          (Compiler *this,AstExprCall *param_1,AstExprFunction *param_2,uchar param_3,uchar param_4)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  AstExprFunction **ppAVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  bool bVar8;
  AstStat *pAVar9;
  AstStatReturn *pAVar10;
  uchar uVar11;
  byte bVar12;
  byte bVar13;
  ulong uVar14;
  ulong *puVar15;
  AstLocal *pAVar16;
  AstExpr *pAVar17;
  AstExprFunction *pAVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  AstLocal **ppAVar23;
  long lVar24;
  ulong uVar25;
  AstLocal *pAVar26;
  AstExpr *pAVar27;
  ulong *puVar28;
  ulong uVar29;
  AstExprFunction *pAVar30;
  ulong uVar31;
  ulong uVar32;
  char cVar33;
  AstExprFunction *pAVar34;
  ulong uVar35;
  AstLocal **ppAVar36;
  AstLocal *pAVar37;
  AstExpr *pAVar38;
  ulong uVar39;
  AstExprFunction *local_a8;
  AstExprFunction *pAStack_a0;
  undefined2 local_98;
  void *local_90;
  void *local_88;
  undefined8 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  uVar5 = *(undefined4 *)(this + 0x178);
  local_98 = CONCAT11(param_4,param_3);
  local_88 = (void *)0x0;
  local_80 = 0;
  local_90 = (void *)0x0;
  pAVar34 = (AstExprFunction *)(*(long *)(this + 400) - *(long *)(this + 0x188) >> 3);
  ppAVar4 = *(AstExprFunction ***)(this + 0x1f0);
  local_a8 = param_2;
  pAStack_a0 = pAVar34;
  if (ppAVar4 < *(AstExprFunction ***)(this + 0x1f8)) {
    *(undefined2 *)(ppAVar4 + 2) = local_98;
    ppAVar4[1] = pAVar34;
    *ppAVar4 = param_2;
    ppAVar4[3] = (AstExprFunction *)0x0;
    ppAVar4[4] = (AstExprFunction *)0x0;
    ppAVar4[5] = (AstExprFunction *)0x0;
    *(AstExprFunction ***)(this + 0x1f0) = ppAVar4 + 6;
  }
  else {
                    /* try { // try from 00edd4b0 to 00edd4b7 has its CatchHandler @ 00eddec4 */
    std::__ndk1::
    vector<Luau::Compiler::InlineFrame,std::__ndk1::allocator<Luau::Compiler::InlineFrame>>::
    __push_back_slow_path<Luau::Compiler::InlineFrame>
              ((vector<Luau::Compiler::InlineFrame,std::__ndk1::allocator<Luau::Compiler::InlineFrame>>
                *)(this + 0x1e8),(InlineFrame *)&local_a8);
    if (local_90 != (void *)0x0) {
      local_88 = local_90;
      operator_delete(local_90);
    }
  }
  plVar2 = (long *)(this + 0xf8);
  uVar39 = *(ulong *)(param_2 + 0x50);
  if (uVar39 != 0) {
    uVar35 = 0;
LAB_00edd52c:
    uVar14 = *(ulong *)(param_1 + 0x30);
    if (uVar35 < uVar14) {
      pAVar38 = *(AstExpr **)(*(long *)(param_1 + 0x28) + uVar35 * 8);
      pAVar37 = *(AstLocal **)(*(long *)(param_2 + 0x48) + uVar35 * 8);
    }
    else {
      pAVar38 = (AstExpr *)0x0;
      pAVar37 = *(AstLocal **)(*(long *)(param_2 + 0x48) + uVar35 * 8);
    }
                    /* try { // try from 00edd578 to 00edd583 has its CatchHandler @ 00eddefc */
    if (((uVar35 + 1 != uVar14) || (uVar39 <= uVar14)) ||
       (uVar39 = isExprMultRet(this,pAVar38), (uVar39 & 1) == 0)) {
      uVar35 = uVar35 + 1;
      puVar15 = *(ulong **)(this + 0xb8);
      if ((puVar15 != (ulong *)0x0) && (pAVar16 = *(AstLocal **)(this + 0xc0), pAVar37 != pAVar16))
      {
        uVar39 = 0;
        uVar14 = (ulong)pAVar37 >> 4 ^ (ulong)pAVar37 >> 9;
        uVar22 = *(long *)(this + 0xb0) - 1;
        do {
          uVar14 = uVar14 & uVar22;
          pAVar26 = *(AstLocal **)(*(long *)(this + 0xa8) + uVar14 * 0x18);
          if (pAVar26 == pAVar37) {
            if (*(char *)(*(long *)(this + 0xa8) + uVar14 * 0x18 + 0x10) != '\0') {
              iVar21 = *(int *)(this + 0x178);
              uVar1 = iVar21 + 1;
              if (0xff < uVar1) {
                    /* try { // try from 00edde7c to 00edde8f has its CatchHandler @ 00eddee4 */
                    /* WARNING: Subroutine does not return */
                CompileError::raise((Location *)(pAVar38 + 0xc),
                                    "Out of registers when trying to allocate %d registers: exceeded limit %d"
                                    ,1,0xff);
              }
              *(uint *)(this + 0x178) = uVar1;
              if (uVar1 <= *(uint *)(this + 0x17c)) {
                uVar1 = *(uint *)(this + 0x17c);
              }
              *(uint *)(this + 0x17c) = uVar1;
              uVar11 = (uchar)iVar21;
              if (pAVar38 == (AstExpr *)0x0) {
                    /* try { // try from 00edd8e8 to 00edd90b has its CatchHandler @ 00eddeec */
                BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,2,uVar11,'\0','\0');
              }
              else {
                    /* try { // try from 00edd7e0 to 00edd7f3 has its CatchHandler @ 00eddeec */
                compileExpr(this,pAVar38,uVar11,true);
              }
              pushLocal(this,pAVar37,uVar11);
              goto LAB_00edd51c;
            }
            break;
          }
          uVar39 = uVar39 + 1;
          uVar14 = uVar39 + uVar14;
        } while (pAVar26 != pAVar16 && uVar39 < uVar22 || pAVar26 != pAVar16 && uVar39 == uVar22);
      }
      if (pAVar38 == (AstExpr *)0x0) {
        lVar20 = *(long *)(this + 0x100);
        if ((ulong)(lVar20 * 3) >> 2 <= *(ulong *)(this + 0x108)) {
                    /* try { // try from 00edd74c to 00edd753 has its CatchHandler @ 00eddef0 */
          detail::
          DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
          ::rehash();
          lVar20 = *(long *)(this + 0x100);
        }
        lVar19 = *(long *)(this + 0xf8);
        uVar39 = lVar20 - 1U & ((ulong)pAVar37 >> 4 ^ (ulong)pAVar37 >> 9);
        pAVar16 = *(AstLocal **)(lVar19 + uVar39 * 0x18);
        if (pAVar16 != *(AstLocal **)(this + 0x110)) {
          lVar24 = 1;
          do {
            if (pAVar16 == pAVar37) goto LAB_00edd510;
            uVar39 = uVar39 + lVar24;
            lVar24 = lVar24 + 1;
            uVar39 = uVar39 & lVar20 - 1U;
            pAVar16 = *(AstLocal **)(lVar19 + uVar39 * 0x18);
          } while (pAVar16 != *(AstLocal **)(this + 0x110));
        }
        *(AstLocal **)(lVar19 + uVar39 * 0x18) = pAVar37;
        *(long *)(this + 0x108) = *(long *)(this + 0x108) + 1;
LAB_00edd510:
        lVar19 = lVar19 + uVar39 * 0x18;
        *(undefined8 *)(lVar19 + 8) = 1;
        *(undefined8 *)(lVar19 + 0x10) = 0;
      }
      else {
        if ((*(long *)(this + 0xe0) != 0) &&
           (pAVar17 = *(AstExpr **)(this + 0xe8), pAVar38 != pAVar17)) {
          uVar39 = 0;
          uVar14 = (ulong)pAVar38 >> 4 ^ (ulong)pAVar38 >> 9;
          uVar22 = *(long *)(this + 0xd8) - 1;
          do {
            uVar14 = uVar14 & uVar22;
            pAVar27 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar14 * 0x18);
            if (pAVar27 == pAVar38) {
              lVar20 = *(long *)(this + 0xd0) + uVar14 * 0x18;
              ppAVar36 = (AstLocal **)(lVar20 + 8);
              if (*(int *)ppAVar36 != 0) {
                lVar19 = *(long *)(this + 0x100);
                if ((ulong)(lVar19 * 3) >> 2 <= *(ulong *)(this + 0x108)) {
                    /* try { // try from 00edd824 to 00edd82b has its CatchHandler @ 00eddec0 */
                  detail::
                  DenseHashTable<Luau::AstLocal*,std::__ndk1::pair<Luau::AstLocal*,Luau::Compile::Constant>,std::__ndk1::pair<Luau::AstLocal*const,Luau::Compile::Constant>,Luau::detail::ItemInterfaceMap<Luau::AstLocal*,Luau::Compile::Constant>,Luau::DenseHashPointer,std::__ndk1::equal_to<Luau::AstLocal*>>
                  ::rehash();
                  lVar19 = *(long *)(this + 0x100);
                }
                uVar39 = 0;
                uVar14 = (ulong)pAVar37 >> 4 ^ (ulong)pAVar37 >> 9;
                goto LAB_00edd848;
              }
              break;
            }
            uVar39 = uVar39 + 1;
            uVar14 = uVar39 + uVar14;
          } while (pAVar27 != pAVar17 && uVar39 < uVar22 || pAVar27 != pAVar17 && uVar39 == uVar22);
        }
        iVar21 = *(int *)(pAVar38 + 8);
        pAVar17 = pAVar38;
        while (iVar21 != AstRtti<Luau::AstExprLocal>::value) {
          do {
            if ((iVar21 != AstRtti<Luau::AstExprGroup>::value) &&
               (iVar21 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edd898;
            pAVar17 = *(AstExpr **)(pAVar17 + 0x20);
            iVar21 = *(int *)(pAVar17 + 8);
          } while (pAVar17 == (AstExpr *)0x0);
        }
        if (puVar15 == (ulong *)0x0) {
LAB_00edd6e4:
          lVar20 = *(long *)(this + 0x68);
        }
        else {
          uVar39 = *(ulong *)(pAVar17 + 0x20);
          if (uVar39 != *(ulong *)(this + 0xc0)) {
            uVar14 = 0;
            uVar22 = uVar39 >> 4 ^ uVar39 >> 9;
            do {
              uVar22 = uVar22 & *(long *)(this + 0xb0) - 1U;
              puVar28 = (ulong *)(*(long *)(this + 0xa8) + uVar22 * 0x18);
              if (*puVar28 == uVar39) goto LAB_00edd6d8;
              if (*puVar28 == *(ulong *)(this + 0xc0)) break;
              uVar14 = uVar14 + 1;
              uVar22 = uVar14 + uVar22;
            } while (uVar14 <= *(long *)(this + 0xb0) - 1U);
            puVar28 = (ulong *)0x0;
LAB_00edd6d8:
            puVar15 = (ulong *)0x0;
            if (puVar28 != (ulong *)0x0) {
              puVar15 = puVar28 + 1;
            }
            goto LAB_00edd6e4;
          }
          puVar15 = (ulong *)0x0;
          lVar20 = *(long *)(this + 0x68);
        }
        if (lVar20 != 0) {
          uVar39 = *(ulong *)(pAVar17 + 0x20);
          uVar14 = *(ulong *)(this + 0x70);
          if (uVar39 != uVar14) {
            uVar22 = 0;
            uVar29 = uVar39 >> 4 ^ uVar39 >> 9;
            uVar25 = *(long *)(this + 0x60) - 1;
            do {
              uVar29 = uVar29 & uVar25;
              uVar31 = *(ulong *)(*(long *)(this + 0x58) + uVar29 * 0x10);
              if (uVar31 == uVar39) {
                lVar20 = *(long *)(this + 0x58) + uVar29 * 0x10;
                if ((*(char *)(lVar20 + 9) != '\0') &&
                   ((puVar15 == (ulong *)0x0 || (*(char *)(puVar15 + 1) == '\0')))) {
                    /* try { // try from 00edd910 to 00edd91b has its CatchHandler @ 00eddeb8 */
                  pushLocal(this,pAVar37,*(uchar *)(lVar20 + 8));
                  goto LAB_00edd51c;
                }
                break;
              }
              uVar22 = uVar22 + 1;
              uVar29 = uVar22 + uVar29;
            } while (uVar31 != uVar14 && uVar22 < uVar25 || uVar31 != uVar14 && uVar22 == uVar25);
          }
        }
LAB_00edd898:
        iVar21 = *(int *)(this + 0x178);
        uVar1 = iVar21 + 1;
        if (0xff < uVar1) {
                    /* try { // try from 00edde64 to 00edde77 has its CatchHandler @ 00eddef8 */
                    /* WARNING: Subroutine does not return */
          CompileError::raise((Location *)(pAVar38 + 0xc),
                              "Out of registers when trying to allocate %d registers: exceeded limit %d"
                              ,1,0xff);
        }
        *(uint *)(this + 0x178) = uVar1;
        if (uVar1 <= *(uint *)(this + 0x17c)) {
          uVar1 = *(uint *)(this + 0x17c);
        }
        *(uint *)(this + 0x17c) = uVar1;
        uVar11 = (uchar)iVar21;
                    /* try { // try from 00edd8bc to 00edd8df has its CatchHandler @ 00eddf08 */
        compileExpr(this,pAVar38,uVar11,true);
        pushLocal(this,pAVar37,uVar11);
      }
      goto LAB_00edd51c;
    }
    iVar21 = *(int *)(this + 0x178);
    uVar1 = (*(int *)(param_2 + 0x50) - *(int *)(param_1 + 0x30)) + 1;
    uVar3 = uVar1 + iVar21;
    if (0xff < uVar3) {
                    /* try { // try from 00edde94 to 00eddea7 has its CatchHandler @ 00eddeb4 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(pAVar38 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,(ulong)uVar1,0xff);
    }
    *(uint *)(this + 0x178) = uVar3;
    if (uVar3 <= *(uint *)(this + 0x17c)) {
      uVar3 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar3;
    uVar11 = (uchar)iVar21;
    if ((*(int *)(pAVar38 + 8) == AstRtti<Luau::AstExprCall>::value) && (pAVar38 != (AstExpr *)0x0))
    {
                    /* try { // try from 00edd98c to 00edd9a7 has its CatchHandler @ 00eddeb0 */
      compileExprCall(this,(AstExprCall *)pAVar38,uVar11,(uchar)uVar1,true,false);
    }
    else if ((*(int *)(pAVar38 + 8) == AstRtti<Luau::AstExprVarargs>::value) &&
            (pAVar38 != (AstExpr *)0x0)) {
      if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00edd9dc to 00edd9f7 has its CatchHandler @ 00eddeac */
        BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(pAVar38 + 0xc) + 1);
      }
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x3f,uVar11,(uchar)uVar1 + '\x01','\0');
    }
    uVar39 = *(ulong *)(param_2 + 0x50);
    if (uVar35 < uVar39) {
      cVar33 = '\0';
      do {
                    /* try { // try from 00edda14 to 00edda1b has its CatchHandler @ 00eddef4 */
        pushLocal(this,*(AstLocal **)(*(long *)(param_2 + 0x48) + uVar35 * 8),cVar33 + uVar11);
        uVar39 = *(ulong *)(param_2 + 0x50);
        uVar35 = uVar35 + 1;
        cVar33 = cVar33 + '\x01';
      } while (uVar35 < uVar39);
    }
  }
LAB_00edda30:
  uVar35 = *(ulong *)(param_1 + 0x30);
  if (uVar39 < uVar35) {
    iVar21 = *(int *)(this + 0x178);
    uVar1 = iVar21 + 1;
LAB_00edda54:
    pAVar17 = *(AstExpr **)(*(long *)(param_1 + 0x28) + uVar39 * 8);
    iVar6 = *(int *)(pAVar17 + 8);
    pAVar38 = pAVar17;
    while ((pAVar38 == (AstExpr *)0x0 || (iVar6 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar6 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar6 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00eddaf8;
      pAVar38 = *(AstExpr **)(pAVar38 + 0x20);
      iVar6 = *(int *)(pAVar38 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar14 = *(ulong *)(pAVar38 + 0x20);
      uVar22 = *(ulong *)(this + 0x70);
      if (uVar14 != uVar22) {
        uVar29 = 0;
        uVar25 = uVar14 >> 4 ^ uVar14 >> 9;
        uVar31 = *(long *)(this + 0x60) - 1;
        goto LAB_00eddad0;
      }
    }
    goto LAB_00eddaf8;
  }
LAB_00eddb4c:
                    /* try { // try from 00eddb5c to 00eddb6b has its CatchHandler @ 00eddee0 */
  Compile::foldConstants
            ((DenseHashMap *)(this + 0xd0),(DenseHashMap *)(this + 0xa8),(DenseHashMap *)plVar2,
             *(DenseHashMap **)(this + 0x170),*(AstNode **)(param_2 + 0x98));
  pAVar9 = *(AstStat **)(param_2 + 0x98);
  if (*(long *)(pAVar9 + 0x28) != 0) {
    uVar39 = 0;
    do {
      pAVar10 = *(AstStatReturn **)(*(long *)(pAVar9 + 0x20) + uVar39 * 8);
      if (*(int *)(pAVar10 + 8) == AstRtti<Luau::AstStatReturn>::value &&
          pAVar10 != (AstStatReturn *)0x0) {
                    /* try { // try from 00eddcc8 to 00eddcd3 has its CatchHandler @ 00eddebc */
        compileInlineReturn(this,pAVar10,true);
        goto LAB_00eddcd4;
      }
                    /* try { // try from 00eddba8 to 00eddbaf has its CatchHandler @ 00eddf04 */
      compileStat(this,(AstStat *)pAVar10);
      pAVar9 = *(AstStat **)(param_2 + 0x98);
      uVar39 = uVar39 + 1;
    } while (uVar39 < *(ulong *)(pAVar9 + 0x28));
  }
                    /* try { // try from 00eddbc4 to 00eddbcb has its CatchHandler @ 00eddee8 */
  uVar39 = allPathsEndWithReturn(this,pAVar9);
  if ((uVar39 & 1) == 0) {
    if (param_4 != '\0') {
      uVar39 = 0;
      do {
                    /* try { // try from 00eddbec to 00eddbfb has its CatchHandler @ 00eddf00 */
        BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,2,(char)uVar39 + param_3,'\0','\0');
        uVar39 = uVar39 + 1;
      } while (param_4 != uVar39);
    }
    pAVar18 = (AstExprFunction *)(*(long *)(this + 400) - *(long *)(this + 0x188) >> 3);
    if ((pAVar34 < pAVar18) && (*(long *)(this + 0x68) != 0)) {
      bVar8 = false;
      pAVar30 = pAVar34;
      bVar12 = 0xff;
LAB_00eddc3c:
      do {
        uVar39 = *(ulong *)(*(long *)(this + 0x188) + (long)pAVar30 * 8);
        if (uVar39 != *(ulong *)(this + 0x70)) {
          uVar35 = 0;
          uVar14 = uVar39 >> 4 ^ uVar39 >> 9;
          do {
            uVar14 = uVar14 & *(long *)(this + 0x60) - 1U;
            puVar15 = (ulong *)(*(long *)(this + 0x58) + uVar14 * 0x10);
            if (*puVar15 == uVar39) goto LAB_00eddc84;
            if (*puVar15 == *(ulong *)(this + 0x70)) break;
            uVar35 = uVar35 + 1;
            uVar14 = uVar35 + uVar14;
          } while (uVar35 <= *(long *)(this + 0x60) - 1U);
        }
        puVar15 = (ulong *)0x0;
LAB_00eddc84:
        puVar28 = (ulong *)0x0;
        if (puVar15 != (ulong *)0x0) {
          puVar28 = puVar15 + 1;
        }
        if (*(byte *)((long)puVar28 + 2) == 0) {
          pAVar30 = pAVar30 + 1;
          if (pAVar30 == pAVar18) {
            bVar13 = bVar12;
            if (!bVar8) goto LAB_00eddcd4;
            break;
          }
          goto LAB_00eddc3c;
        }
        pAVar30 = pAVar30 + 1;
        bVar13 = *(byte *)puVar28;
        if (bVar12 <= *(byte *)puVar28) {
          bVar13 = bVar12;
        }
        bVar8 = true;
        bVar12 = bVar13;
      } while (pAVar30 != pAVar18);
                    /* try { // try from 00edde24 to 00edde33 has its CatchHandler @ 00eddee8 */
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar13,'\0','\0');
    }
  }
LAB_00eddcd4:
                    /* try { // try from 00eddcd4 to 00eddcdf has its CatchHandler @ 00eddee8 */
  popLocals(this,(ulong)pAVar34);
                    /* try { // try from 00eddce4 to 00eddce7 has its CatchHandler @ 00eddf20 */
  uVar39 = BytecodeBuilder::emitLabel();
  lVar20 = *(long *)(this + 0x1f0);
  puVar15 = *(ulong **)(lVar20 + -0x18);
  puVar28 = *(ulong **)(lVar20 + -0x10);
  if (puVar15 != puVar28) {
    do {
                    /* try { // try from 00eddd04 to 00eddd0b has its CatchHandler @ 00eddf1c */
      uVar35 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,*puVar15,uVar39);
      if ((uVar35 & 1) == 0) {
                    /* try { // try from 00edde3c to 00edde47 has its CatchHandler @ 00eddf20 */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Exceeded jump distance limit; simplify the code to compile");
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar28);
    lVar20 = *(long *)(this + 0x1f0);
    puVar15 = *(ulong **)(lVar20 + -0x18);
  }
  if (puVar15 != (ulong *)0x0) {
    *(ulong **)(lVar20 + -0x10) = puVar15;
    operator_delete(puVar15);
  }
  *(long *)(this + 0x1f0) = lVar20 + -0x30;
  lVar20 = *(long *)(param_2 + 0x50);
  if ((lVar20 != 0) && (*(long *)(this + 0x108) != 0)) {
    lVar19 = 0;
    uVar39 = *(ulong *)(this + 0x110);
    lVar24 = *(long *)(param_2 + 0x48);
    uVar35 = *(long *)(this + 0x100) - 1;
    do {
      uVar14 = *(ulong *)(lVar24 + lVar19 * 8);
      if (uVar14 != uVar39) {
        uVar22 = 0;
        uVar29 = uVar14 >> 4 ^ uVar14 >> 9;
        do {
          uVar29 = uVar29 & uVar35;
          uVar25 = *(ulong *)(*plVar2 + uVar29 * 0x18);
          if (uVar25 == uVar14) {
            *(undefined4 *)(*plVar2 + uVar29 * 0x18 + 8) = 0;
            break;
          }
          uVar22 = uVar22 + 1;
          uVar29 = uVar22 + uVar29;
        } while (uVar25 != uVar39 && uVar22 < uVar35 || uVar25 != uVar39 && uVar22 == uVar35);
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != lVar20);
  }
                    /* try { // try from 00edddd0 to 00eddddb has its CatchHandler @ 00eddf20 */
  Compile::foldConstants
            ((DenseHashMap *)(this + 0xd0),(DenseHashMap *)(this + 0xa8),(DenseHashMap *)plVar2,
             *(DenseHashMap **)(this + 0x170),*(AstNode **)(param_2 + 0x98));
  *(undefined4 *)(this + 0x178) = uVar5;
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (*ppAVar23 == pAVar37) goto LAB_00edd930;
    uVar39 = uVar39 + 1;
    uVar14 = uVar39 + uVar14;
    if (lVar19 - 1U < uVar39) break;
LAB_00edd848:
    uVar14 = uVar14 & lVar19 - 1U;
    ppAVar23 = (AstLocal **)(*(long *)(this + 0xf8) + uVar14 * 0x18);
    if (*ppAVar23 == *(AstLocal **)(this + 0x110)) {
      *ppAVar23 = pAVar37;
      *(long *)(this + 0x108) = *(long *)(this + 0x108) + 1;
      goto LAB_00edd930;
    }
  }
  ppAVar23 = (AstLocal **)0x0;
LAB_00edd930:
  pAVar37 = *ppAVar36;
  ppAVar23[2] = *(AstLocal **)(lVar20 + 0x10);
  ppAVar23[1] = pAVar37;
LAB_00edd51c:
  uVar39 = *(ulong *)(param_2 + 0x50);
  if (uVar39 <= uVar35) goto LAB_00edda30;
  goto LAB_00edd52c;
  while( true ) {
    uVar29 = uVar29 + 1;
    uVar25 = uVar29 + uVar25;
    if ((uVar32 == uVar22 || uVar31 <= uVar29) && (uVar32 == uVar22 || uVar29 != uVar31)) break;
LAB_00eddad0:
    uVar25 = uVar25 & uVar31;
    uVar32 = *(ulong *)(*(long *)(this + 0x58) + uVar25 * 0x10);
    if (uVar32 == uVar14) {
      if (*(char *)(*(long *)(this + 0x58) + uVar25 * 0x10 + 9) != '\0') goto LAB_00eddb28;
      break;
    }
  }
LAB_00eddaf8:
  if (0xff < uVar1) {
                    /* try { // try from 00edde4c to 00edde5f has its CatchHandler @ 00eddf0c */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar17 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  uVar3 = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar3 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar3;
                    /* try { // try from 00eddb14 to 00eddb23 has its CatchHandler @ 00eddf10 */
  compileExpr(this,pAVar17,(uchar)iVar21,true);
  uVar35 = *(ulong *)(param_1 + 0x30);
LAB_00eddb28:
  uVar39 = uVar39 + 1;
  *(int *)(this + 0x178) = iVar21;
  if (uVar35 <= uVar39) goto LAB_00eddb4c;
  goto LAB_00edda54;
}


