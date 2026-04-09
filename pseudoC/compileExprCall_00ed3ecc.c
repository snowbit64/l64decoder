// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprCall
// Entry Point: 00ed3ecc
// Size: 2824 bytes
// Signature: undefined __thiscall compileExprCall(Compiler * this, AstExprCall * param_1, uchar param_2, uchar param_3, bool param_4, bool param_5)


/* Luau::Compiler::compileExprCall(Luau::AstExprCall*, unsigned char, unsigned char, bool, bool) */

void __thiscall
Luau::Compiler::compileExprCall
          (Compiler *this,AstExprCall *param_1,uchar param_2,uchar param_3,bool param_4,bool param_5
          )

{
  uint uVar1;
  uchar uVar2;
  uint uVar3;
  AstExprCall AVar4;
  uchar uVar5;
  bool bVar7;
  bool bVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  AstExprFunction *pAVar12;
  undefined8 uVar13;
  AstExpr *pAVar14;
  ulong uVar15;
  AstExprFunction *pAVar16;
  long lVar17;
  int iVar18;
  ulong uVar19;
  AstExprCall *pAVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  AstExpr *pAVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  AstExpr *pAVar28;
  ulong uVar29;
  AstExprFunction *pAVar30;
  ulong uVar31;
  ulong uVar32;
  AstExprCall *pAVar33;
  long lVar34;
  undefined4 uVar35;
  char *pcVar36;
  BytecodeBuilder *this_00;
  uint uVar37;
  BytecodeBuilder *pBVar38;
  double dVar39;
  double dVar40;
  uchar local_88;
  int local_6c;
  uint uVar6;
  
  if (0 < *(int *)(this + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(param_1 + 0xc) + 1);
  }
  if (((1 < *(int *)(this + 8)) && (param_1[0x38] == (AstExprCall)0x0)) &&
     (pAVar12 = (AstExprFunction *)getFunctionExpr(this,*(AstExpr **)(param_1 + 0x20)),
     pAVar12 != (AstExprFunction *)0x0)) {
    if ((*(long *)(this + 0x40) != 0) &&
       (pAVar16 = *(AstExprFunction **)(this + 0x48), pAVar12 != pAVar16)) {
      uVar19 = 0;
      uVar26 = (ulong)pAVar12 >> 4 ^ (ulong)pAVar12 >> 9;
      uVar23 = *(long *)(this + 0x38) - 1;
      do {
        uVar26 = uVar26 & uVar23;
        pAVar30 = *(AstExprFunction **)(*(long *)(this + 0x30) + uVar26 * 0x38);
        if (pAVar30 == pAVar12) {
          pcVar36 = (char *)(*(long *)(this + 0x30) + uVar26 * 0x38 + 0x34);
          if (*pcVar36 != '\0') {
            uVar19 = tryCompileInlinedCall
                               (this,param_1,pAVar12,param_2,param_3,param_5,
                                FInt::LuauCompileInlineThreshold,
                                FInt::LuauCompileInlineThresholdMaxBoost,
                                FInt::LuauCompileInlineDepth);
            if ((uVar19 & 1) != 0) {
              return;
            }
            if (*pcVar36 != '\0') goto LAB_00ed3fc0;
          }
          if (pAVar12[0x78] == (AstExprFunction)0x0) {
            if (((byte)this[0x180] | (byte)this[0x181]) == 0) goto LAB_00ed3fc0;
            pcVar36 = "inlining failed: module uses getfenv/setfenv";
          }
          else {
            pcVar36 = "inlining failed: function is variadic";
          }
          goto LAB_00ed3fb8;
        }
        uVar19 = uVar19 + 1;
        uVar26 = uVar19 + uVar26;
      } while (pAVar30 != pAVar16 && uVar19 < uVar23 || pAVar30 != pAVar16 && uVar19 == uVar23);
    }
    pcVar36 = "inlining failed: can\'t inline recursive calls";
    if (pAVar12[0x78] != (AstExprFunction)0x0) {
      pcVar36 = "inlining failed: function is variadic";
    }
LAB_00ed3fb8:
    BytecodeBuilder::addDebugRemark(*(char **)this,pcVar36);
  }
LAB_00ed3fc0:
  AVar4 = param_1[0x38];
  lVar17 = *(long *)(param_1 + 0x30);
  uVar3 = *(uint *)(this + 0x178);
  iVar11 = (uint)(byte)AVar4 + (int)lVar17;
  uVar10 = (uint)param_3;
  if (uVar10 <= iVar11 + 1U) {
    uVar10 = iVar11 + 1;
  }
  if (param_4) {
    uVar37 = (uVar10 - param_3) + uVar3;
    if (0xff < uVar37) {
                    /* try { // try from 00ed498c to 00ed49af has its CatchHandler @ 00ed49f8 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,(ulong)(uVar10 - param_3),0xff);
    }
    uVar10 = *(uint *)(this + 0x17c);
    uVar6 = uVar3 - param_3;
  }
  else {
    uVar37 = uVar10 + uVar3;
    if (0xff < uVar37) {
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,(ulong)uVar10,0xff);
    }
    uVar10 = *(uint *)(this + 0x17c);
    uVar6 = uVar3;
  }
  uVar5 = (uchar)uVar6;
  uVar1 = uVar37;
  if (uVar37 <= uVar10) {
    uVar1 = uVar10;
  }
  *(uint *)(this + 0x17c) = uVar1;
  *(uint *)(this + 0x178) = uVar37;
  if (((0 < *(int *)(this + 8)) && ((byte)AVar4 == 0)) && (*(long *)(this + 0x158) != 0)) {
    pAVar20 = *(AstExprCall **)(this + 0x160);
    if (pAVar20 != param_1) {
      uVar19 = 0;
      uVar26 = (ulong)param_1 >> 4 ^ (ulong)param_1 >> 9;
      uVar23 = *(long *)(this + 0x150) - 1;
      do {
        uVar26 = uVar26 & uVar23;
        pAVar33 = *(AstExprCall **)(*(long *)(this + 0x148) + uVar26 * 0x10);
        if (pAVar33 == param_1) {
          local_6c = *(int *)(*(long *)(this + 0x148) + uVar26 * 0x10 + 8);
          if (local_6c == 0x22) {
            if (lVar17 != 3) goto LAB_00ed46d8;
            if (*(long *)(this + 0xe0) != 0) {
              uVar19 = *(ulong *)(this + 0xe8);
              uVar26 = *(ulong *)(*(long *)(param_1 + 0x28) + 8);
              if (uVar19 != uVar26) {
                uVar23 = 0;
                uVar25 = uVar26 >> 4 ^ uVar26 >> 9;
                lVar21 = *(long *)(this + 0xd0);
                uVar31 = *(long *)(this + 0xd8) - 1;
                uVar27 = uVar25;
                goto LAB_00ed46a8;
              }
            }
            local_6c = 0x22;
            goto LAB_00ed47c8;
          }
          if (local_6c != 0x39) goto LAB_00ed46d0;
          if ((param_3 == 1) && (!param_5)) {
                    /* try { // try from 00ed462c to 00ed46f3 has its CatchHandler @ 00ed49d8 */
            compileExprSelectVararg(this,param_1,param_2,'\x01',param_4,false,uVar5);
            goto LAB_00ed45dc;
          }
          break;
        }
        uVar19 = uVar19 + 1;
        uVar26 = uVar19 + uVar26;
      } while (pAVar33 != pAVar20 && uVar19 < uVar23 || pAVar33 != pAVar20 && uVar19 == uVar23);
      goto LAB_00ed4088;
    }
    local_6c = -1;
    goto LAB_00ed41a4;
  }
LAB_00ed4088:
  local_6c = -1;
  if (AVar4 == (AstExprCall)0x0) goto LAB_00ed41a4;
  bVar7 = false;
  goto LAB_00ed4098;
  while( true ) {
    uVar23 = uVar23 + 1;
    uVar27 = uVar23 + uVar27;
    if ((uVar29 == uVar19 || uVar31 <= uVar23) && (uVar29 == uVar19 || uVar23 != uVar31)) break;
LAB_00ed46a8:
    uVar27 = uVar27 & uVar31;
    uVar29 = *(ulong *)(lVar21 + uVar27 * 0x18);
    if (uVar29 == uVar26) {
      if ((*(int *)(lVar21 + uVar27 * 0x18 + 8) != 0) &&
         (uVar23 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x10), uVar19 != uVar23)) {
        uVar27 = 0;
        uVar32 = uVar23 >> 4 ^ uVar23 >> 9;
        uVar29 = uVar32;
        goto LAB_00ed4820;
      }
      break;
    }
  }
  goto LAB_00ed46d0;
  while( true ) {
    uVar27 = uVar27 + 1;
    uVar29 = uVar27 + uVar29;
    if ((uVar15 == uVar19 || uVar31 <= uVar27) && (uVar15 == uVar19 || uVar27 != uVar31)) break;
LAB_00ed4820:
    uVar29 = uVar29 & uVar31;
    uVar15 = *(ulong *)(lVar21 + uVar29 * 0x18);
    if (uVar15 == uVar23) {
      if (*(int *)(lVar21 + uVar29 * 0x18 + 8) != 0) {
        dVar39 = 0.0;
        uVar27 = 0;
        goto LAB_00ed4868;
      }
      break;
    }
  }
  goto LAB_00ed46d0;
  while( true ) {
    uVar23 = uVar23 + 1;
    uVar27 = uVar23 + uVar27;
    if ((uVar31 == uVar26 || uVar25 <= uVar23) && (uVar31 == uVar26 || uVar23 != uVar25)) break;
LAB_00ed4144:
    uVar27 = uVar27 & uVar25;
    uVar31 = *(ulong *)(*(long *)(this + 0x58) + uVar27 * 0x10);
    if (uVar31 == uVar19) {
      lVar17 = *(long *)(this + 0x58) + uVar27 * 0x10;
      if (*(char *)(lVar17 + 9) != '\0') {
        local_88 = *(uchar *)(lVar17 + 8);
        goto LAB_00ed41cc;
      }
      break;
    }
  }
  goto LAB_00ed416c;
LAB_00ed4414:
                    /* try { // try from 00ed4414 to 00ed4427 has its CatchHandler @ 00ed4a0c */
  compileExpr(this,pAVar24,uVar9,true);
  bVar8 = false;
LAB_00ed422c:
  uVar19 = *(ulong *)(param_1 + 0x30);
  uVar26 = uVar23;
  if (uVar19 <= uVar23) goto LAB_00ed4430;
  goto LAB_00ed4238;
  while( true ) {
    uVar27 = uVar27 + 1;
    uVar25 = uVar27 + uVar25;
    if (uVar31 < uVar27) break;
LAB_00ed4868:
    uVar25 = uVar25 & uVar31;
    uVar29 = *(ulong *)(lVar21 + uVar25 * 0x18);
    if (uVar29 == uVar26) {
      lVar34 = lVar21 + uVar25 * 0x18;
      iVar11 = (int)*(undefined8 *)(lVar34 + 8);
      dVar39 = *(double *)(lVar34 + 0x10);
      goto LAB_00ed48ac;
    }
    if (uVar29 == uVar19) break;
  }
  iVar11 = 0;
LAB_00ed48ac:
  dVar40 = 0.0;
  uVar26 = 0;
  do {
    uVar32 = uVar32 & uVar31;
    uVar27 = *(ulong *)(lVar21 + uVar32 * 0x18);
    if (uVar27 == uVar23) {
      lVar21 = lVar21 + uVar32 * 0x18;
      iVar18 = (int)*(undefined8 *)(lVar21 + 8);
      dVar40 = *(double *)(lVar21 + 0x10);
      goto LAB_00ed48fc;
    }
    if (uVar27 == uVar19) break;
    uVar26 = uVar26 + 1;
    uVar32 = uVar26 + uVar32;
  } while (uVar26 <= uVar31);
  iVar18 = 0;
LAB_00ed48fc:
  uVar10 = (uint)dVar39;
  iVar22 = (int)dVar40;
  if (iVar11 != 3) {
    uVar10 = 0xffffffff;
  }
  if (iVar18 != 3) {
    iVar22 = -1;
  }
  if (((-1 < (int)uVar10) && (0 < iVar22)) && ((int)(iVar22 + uVar10) < 0x21)) {
                    /* try { // try from 00ed4940 to 00ed4973 has its CatchHandler @ 00ed49d4 */
    iVar11 = BytecodeBuilder::addConstantNumber
                       (*(BytecodeBuilder **)this,(double)(iVar22 * 0x20 - 0x20U | uVar10));
    if (iVar11 < 0) {
                    /* try { // try from 00ed49c8 to 00ed49d3 has its CatchHandler @ 00ed49d4 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded constant limit; simplify the code to compile");
    }
    compileExprFastcallN(this,param_1,param_2,param_3,param_4,param_5,uVar5,0x3b,iVar11);
    goto LAB_00ed45dc;
  }
LAB_00ed46d0:
  if (local_6c < 0) {
LAB_00ed41a4:
    pAVar24 = *(AstExpr **)(param_1 + 0x20);
    *(uint *)(this + 0x178) = (uVar6 & 0xff) + 1;
                    /* try { // try from 00ed41b4 to 00ed41c3 has its CatchHandler @ 00ed49e4 */
    compileExpr(this,pAVar24,uVar5,true);
    bVar7 = false;
    local_88 = '\0';
    *(uint *)(this + 0x178) = uVar37;
  }
  else {
LAB_00ed46d8:
    if (lVar17 - 1U < 2) {
      uVar19 = isExprMultRet(this,*(AstExpr **)(*(long *)(param_1 + 0x28) + (lVar17 - 1U) * 8));
      if ((uVar19 & 1) == 0) {
                    /* try { // try from 00ed478c to 00ed47b7 has its CatchHandler @ 00ed49d8 */
        compileExprFastcallN(this,param_1,param_2,param_3,param_4,param_5,uVar5,local_6c,-1);
        goto LAB_00ed45dc;
      }
      bVar7 = true;
      if (param_1[0x38] == (AstExprCall)0x0) {
        local_88 = '\0';
      }
      else {
LAB_00ed4098:
        lVar17 = *(long *)(param_1 + 0x20);
        if (*(int *)(lVar17 + 8) != AstRtti<Luau::AstExprIndexName>::value) {
          lVar17 = 0;
        }
        pAVar14 = *(AstExpr **)(lVar17 + 0x20);
        iVar11 = *(int *)(pAVar14 + 8);
        pAVar24 = pAVar14;
        while ((pAVar24 == (AstExpr *)0x0 || (iVar11 != AstRtti<Luau::AstExprLocal>::value))) {
          if ((iVar11 != AstRtti<Luau::AstExprGroup>::value) &&
             (iVar11 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed416c;
          pAVar24 = *(AstExpr **)(pAVar24 + 0x20);
          iVar11 = *(int *)(pAVar24 + 8);
        }
        if (*(long *)(this + 0x68) != 0) {
          uVar19 = *(ulong *)(pAVar24 + 0x20);
          uVar26 = *(ulong *)(this + 0x70);
          if (uVar19 != uVar26) {
            uVar23 = 0;
            uVar27 = uVar19 >> 4 ^ uVar19 >> 9;
            uVar25 = *(long *)(this + 0x60) - 1;
            goto LAB_00ed4144;
          }
        }
LAB_00ed416c:
        uVar35 = *(undefined4 *)(this + 0x178);
        *(uint *)(this + 0x178) = (uVar6 & 0xff) + 1;
                    /* try { // try from 00ed417c to 00ed418b has its CatchHandler @ 00ed49e0 */
        compileExpr(this,pAVar14,uVar5,true);
        *(undefined4 *)(this + 0x178) = uVar35;
        local_88 = uVar5;
      }
    }
    else {
LAB_00ed47c8:
      local_88 = '\0';
      bVar7 = true;
    }
  }
LAB_00ed41cc:
  uVar19 = *(ulong *)(param_1 + 0x30);
  bVar8 = false;
  if (uVar19 != 0) {
    uVar26 = 0;
LAB_00ed4238:
    pAVar24 = *(AstExpr **)(*(long *)(param_1 + 0x28) + uVar26 * 8);
    uVar23 = uVar26 + 1;
    if (uVar23 == uVar19) {
      uVar10 = uVar6 + 1 + (int)uVar26 + (uint)(byte)param_1[0x38];
      iVar11 = *(int *)(pAVar24 + 8);
      uVar9 = (uchar)uVar10;
      if ((pAVar24 != (AstExpr *)0x0) && (iVar11 == AstRtti<Luau::AstExprCall>::value)) {
        if (1 < *(int *)(this + 8)) {
          if ((*(long *)(this + 0xe0) != 0) &&
             (pAVar14 = *(AstExpr **)(this + 0xe8), pAVar14 != pAVar24)) {
            uVar19 = 0;
            uVar26 = (ulong)pAVar24 >> 4 ^ (ulong)pAVar24 >> 9;
            uVar27 = *(long *)(this + 0xd8) - 1;
            do {
              uVar26 = uVar26 & uVar27;
              pAVar28 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar26 * 0x18);
              if (pAVar28 == pAVar24) {
                if (*(int *)(*(long *)(this + 0xd0) + uVar26 * 0x18 + 8) != 0) goto LAB_00ed4414;
                break;
              }
              uVar19 = uVar19 + 1;
              uVar26 = uVar19 + uVar26;
            } while (pAVar28 != pAVar14 && uVar19 < uVar27 || pAVar28 != pAVar14 && uVar19 == uVar27
                    );
          }
                    /* try { // try from 00ed42d8 to 00ed42df has its CatchHandler @ 00ed4a0c */
          uVar19 = getFunctionExpr(this,*(AstExpr **)(pAVar24 + 0x20));
          if (((uVar19 != 0) && (*(long *)(this + 0x40) != 0)) &&
             (uVar26 = *(ulong *)(this + 0x48), uVar19 != uVar26)) {
            uVar27 = 0;
            uVar25 = uVar19 >> 4 ^ uVar19 >> 9;
            uVar31 = *(long *)(this + 0x38) - 1;
            do {
              uVar25 = uVar25 & uVar31;
              uVar29 = *(ulong *)(*(long *)(this + 0x30) + uVar25 * 0x38);
              if (uVar29 == uVar19) {
                if (*(char *)(*(long *)(this + 0x30) + uVar25 * 0x38 + 0x35) != '\0')
                goto LAB_00ed4414;
                break;
              }
              uVar27 = uVar27 + 1;
              uVar25 = uVar27 + uVar25;
            } while (uVar29 != uVar26 && uVar27 < uVar31 || uVar29 != uVar26 && uVar27 == uVar31);
          }
        }
        uVar35 = *(undefined4 *)(this + 0x178);
        *(uint *)(this + 0x178) = uVar10 & 0xff;
                    /* try { // try from 00ed4344 to 00ed435f has its CatchHandler @ 00ed4a08 */
        compileExprCall(this,(AstExprCall *)pAVar24,uVar9,'\0',true,true);
        bVar8 = true;
        goto LAB_00ed4228;
      }
      bVar8 = iVar11 == AstRtti<Luau::AstExprVarargs>::value;
      if (pAVar24 != (AstExpr *)0x0 && bVar8) {
        uVar35 = *(undefined4 *)(this + 0x178);
        *(uint *)(this + 0x178) = uVar10 & 0xff;
        if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00ed43cc to 00ed43e7 has its CatchHandler @ 00ed4a04 */
          BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(pAVar24 + 0xc) + 1);
        }
        BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x3f,uVar9,'\0','\0');
        *(undefined4 *)(this + 0x178) = uVar35;
        bVar8 = true;
      }
      else {
                    /* try { // try from 00ed438c to 00ed439f has its CatchHandler @ 00ed4a0c */
        compileExpr(this,pAVar24,uVar9,true);
        bVar8 = pAVar24 != (AstExpr *)0x0 && bVar8;
      }
    }
    else {
      uVar35 = *(undefined4 *)(this + 0x178);
      uVar10 = (int)uVar23 + (uVar6 & 0xff) + (uint)(byte)param_1[0x38];
      *(uint *)(this + 0x178) = (uVar10 & 0xff) + 1;
                    /* try { // try from 00ed4218 to 00ed4227 has its CatchHandler @ 00ed4a14 */
      compileExpr(this,pAVar24,(uchar)uVar10,true);
LAB_00ed4228:
      *(undefined4 *)(this + 0x178) = uVar35;
    }
    goto LAB_00ed422c;
  }
LAB_00ed4430:
  if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00ed4454 to 00ed4457 has its CatchHandler @ 00ed49fc */
    BytecodeBuilder::setDebugLine
              (*(BytecodeBuilder **)this,*(int *)(*(long *)(param_1 + 0x20) + 0x14) + 1);
  }
  if (param_1[0x38] == (AstExprCall)0x0) {
    if (bVar7) {
                    /* try { // try from 00ed450c to 00ed4543 has its CatchHandler @ 00ed49f0 */
      uVar19 = BytecodeBuilder::emitLabel();
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x44,(uchar)local_6c,'\0','\0');
      compileExpr(this,*(AstExpr **)(param_1 + 0x20),uVar5,true);
                    /* try { // try from 00ed4548 to 00ed455b has its CatchHandler @ 00ed49ec */
      uVar26 = BytecodeBuilder::emitLabel();
      uVar19 = BytecodeBuilder::patchSkipC(*(BytecodeBuilder **)this,uVar19,uVar26);
      if ((uVar19 & 1) == 0) {
                    /* try { // try from 00ed49b8 to 00ed49c3 has its CatchHandler @ 00ed49ec */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(*(long *)(param_1 + 0x20) + 0xc),
                            "Exceeded jump distance limit; simplify the code to compile");
      }
    }
  }
  else {
    lVar17 = *(long *)(param_1 + 0x20);
    if (*(int *)(lVar17 + 8) != AstRtti<Luau::AstExprIndexName>::value) {
      lVar17 = 0;
    }
    if (0 < *(int *)(this + 0xc)) {
                    /* try { // try from 00ed4498 to 00ed449b has its CatchHandler @ 00ed49dc */
      BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)this,*(int *)(lVar17 + 0x30) + 1);
    }
    pBVar38 = *(BytecodeBuilder **)(lVar17 + 0x28);
                    /* try { // try from 00ed44a0 to 00ed44ab has its CatchHandler @ 00ed49f4 */
    uVar13 = __strlen_chk(pBVar38,0xffffffffffffffff);
                    /* try { // try from 00ed44b4 to 00ed44fb has its CatchHandler @ 00ed4a00 */
    uVar10 = BytecodeBuilder::addConstantString(*(undefined8 *)this,pBVar38,uVar13);
    if ((int)uVar10 < 0) {
                    /* try { // try from 00ed497c to 00ed4987 has its CatchHandler @ 00ed4a00 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(lVar17 + 0xc),
                          "Exceeded constant limit; simplify the code to compile");
    }
    this_00 = *(BytecodeBuilder **)this;
    uVar9 = BytecodeBuilder::getStringHash(pBVar38,uVar13);
    BytecodeBuilder::emitABC(this_00,0x14,uVar5,local_88,uVar9);
    BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar10);
  }
  if (bVar8) {
    uVar9 = '\0';
  }
  else {
    uVar9 = (char)param_1[0x38] + (char)param_1[0x30] + '\x01';
  }
  uVar2 = '\0';
  if (!param_5) {
    uVar2 = param_3 + '\x01';
  }
                    /* try { // try from 00ed4590 to 00ed459b has its CatchHandler @ 00ed49fc */
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x15,uVar5,uVar9,uVar2);
  if ((!param_4) && (param_3 != '\0')) {
    uVar19 = 0;
    do {
                    /* try { // try from 00ed45c4 to 00ed45cf has its CatchHandler @ 00ed4a10 */
      BytecodeBuilder::emitABC
                (*(BytecodeBuilder **)this,6,(char)uVar19 + param_2,uVar5 + (char)uVar19,'\0');
      uVar19 = uVar19 + 1;
    } while (param_3 != uVar19);
  }
LAB_00ed45dc:
  *(uint *)(this + 0x178) = uVar3;
  return;
}


