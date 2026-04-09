// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileCompareJump
// Entry Point: 00ed75e4
// Size: 1584 bytes
// Signature: undefined __thiscall compileCompareJump(Compiler * this, AstExprBinary * param_1, bool param_2)


/* WARNING: Type propagation algorithm not settling */
/* Luau::Compiler::compileCompareJump(Luau::AstExprBinary*, bool) */

undefined8 __thiscall
Luau::Compiler::compileCompareJump(Compiler *this,AstExprBinary *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  AstExpr **ppAVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  AstExpr *pAVar11;
  LuauOpcode LVar12;
  AstExpr *pAVar13;
  ulong uVar14;
  ulong uVar15;
  AstExpr *pAVar16;
  ulong uVar17;
  ulong uVar18;
  AstExpr **ppAVar19;
  ulong uVar20;
  ulong uVar21;
  AstExpr *pAVar22;
  AstExpr *pAVar23;
  uint uVar24;
  
  pAVar16 = *(AstExpr **)(param_1 + 0x20);
  pAVar23 = *(AstExpr **)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 0x1c);
  uVar5 = *(uint *)(this + 0x178);
  pAVar11 = pAVar16;
  if (*(long *)(this + 0xe0) == 0) {
    bVar8 = false;
    bVar7 = iVar4 - 9U < 0xfffffffe;
  }
  else {
    pAVar13 = *(AstExpr **)(this + 0xe8);
    if (pAVar13 == pAVar23) {
      if (iVar4 - 9U < 0xfffffffe) {
        bVar8 = false;
        bVar7 = true;
      }
      else {
LAB_00ed76e4:
        if (pAVar13 != pAVar16) {
          uVar15 = 0;
          uVar21 = (ulong)pAVar16 >> 4 ^ (ulong)pAVar16 >> 9;
          do {
            uVar21 = uVar21 & *(long *)(this + 0xd8) - 1U;
            pAVar22 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar21 * 0x18);
            if (pAVar22 == pAVar16) {
              if (*(int *)(*(long *)(this + 0xd0) + uVar21 * 0x18 + 8) != 0) {
                bVar7 = false;
                bVar8 = true;
                pAVar11 = pAVar23;
                pAVar23 = pAVar16;
                goto LAB_00ed7764;
              }
              break;
            }
            if (pAVar22 == pAVar13) break;
            uVar15 = uVar15 + 1;
            uVar21 = uVar15 + uVar21;
          } while (uVar15 <= *(long *)(this + 0xd8) - 1U);
        }
        bVar7 = false;
        bVar8 = false;
      }
    }
    else {
      uVar15 = 0;
      uVar21 = (ulong)pAVar23 >> 4 ^ (ulong)pAVar23 >> 9;
      do {
        uVar21 = uVar21 & *(long *)(this + 0xd8) - 1U;
        pAVar22 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar21 * 0x18);
        if (pAVar22 == pAVar23) {
          bVar8 = *(int *)(*(long *)(this + 0xd0) + uVar21 * 0x18 + 8) != 0;
          bVar7 = iVar4 - 9U < 0xfffffffe;
          if (!bVar7) goto LAB_00ed76e0;
          goto LAB_00ed7764;
        }
        if (pAVar22 == pAVar13) break;
        uVar15 = uVar15 + 1;
        uVar21 = uVar15 + uVar21;
      } while (uVar15 <= *(long *)(this + 0xd8) - 1U);
      bVar8 = false;
      bVar6 = 0xfffffffd < iVar4 - 9U;
      bVar7 = !bVar6;
      if (bVar6) {
LAB_00ed76e0:
        if (!bVar8) goto LAB_00ed76e4;
      }
    }
  }
LAB_00ed7764:
  iVar4 = *(int *)(pAVar11 + 8);
  pAVar16 = pAVar11;
  while ((pAVar16 == (AstExpr *)0x0 || (iVar4 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar4 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar4 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed7818;
    pAVar16 = *(AstExpr **)(pAVar16 + 0x20);
    iVar4 = *(int *)(pAVar16 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar15 = *(ulong *)(pAVar16 + 0x20);
    uVar21 = *(ulong *)(this + 0x70);
    if (uVar15 != uVar21) {
      uVar14 = 0;
      uVar18 = uVar15 >> 4 ^ uVar15 >> 9;
      uVar17 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed77f0;
    }
  }
  goto LAB_00ed7818;
  while( true ) {
    uVar14 = uVar14 + 1;
    uVar18 = uVar14 + uVar18;
    if ((uVar20 == uVar21 || uVar17 <= uVar14) && (uVar20 == uVar21 || uVar14 != uVar17)) break;
LAB_00ed7ad8:
    uVar18 = uVar18 & uVar17;
    uVar20 = *(ulong *)(*(long *)(this + 0x58) + uVar18 * 0x10);
    if (uVar20 == uVar15) {
      lVar2 = *(long *)(this + 0x58) + uVar18 * 0x10;
      if (*(char *)(lVar2 + 9) != '\0') {
        uVar24 = (uint)*(byte *)(lVar2 + 8);
        goto LAB_00ed7b38;
      }
      break;
    }
  }
  goto LAB_00ed7b00;
  while( true ) {
    uVar14 = uVar14 + 1;
    uVar18 = uVar14 + uVar18;
    if ((uVar20 == uVar21 || uVar17 <= uVar14) && (uVar20 == uVar21 || uVar14 != uVar17)) break;
LAB_00ed77f0:
    uVar18 = uVar18 & uVar17;
    uVar20 = *(ulong *)(*(long *)(this + 0x58) + uVar18 * 0x10);
    if (uVar20 == uVar15) {
      lVar2 = *(long *)(this + 0x58) + uVar18 * 0x10;
      if (*(char *)(lVar2 + 9) != '\0') {
        uVar1 = (uint)*(byte *)(lVar2 + 8);
        goto joined_r0x00ed78ec;
      }
      break;
    }
  }
LAB_00ed7818:
  uVar1 = uVar5 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00ed7bd8 to 00ed7beb has its CatchHandler @ 00ed7c34 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar11 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed7838 to 00ed7847 has its CatchHandler @ 00ed7c34 */
  compileExpr(this,pAVar11,(uchar)uVar5,true);
  uVar1 = uVar5;
joined_r0x00ed78ec:
  if ((bool)(bVar7 | bVar8 ^ 1U)) {
    pAVar16 = pAVar23;
    switch(*(undefined4 *)(param_1 + 0x1c)) {
    case 7:
      LVar12 = 0x1b;
      if (!param_2) {
        LVar12 = 0x1e;
      }
      iVar4 = *(int *)(pAVar23 + 8);
      break;
    case 8:
      LVar12 = 0x1e;
      if (!param_2) {
        LVar12 = 0x1b;
      }
      iVar4 = *(int *)(pAVar23 + 8);
      break;
    case 9:
    case 0xb:
      LVar12 = 0x20;
      if (!param_2) {
        LVar12 = 0x1d;
      }
      iVar4 = *(int *)(pAVar23 + 8);
      break;
    case 10:
    case 0xc:
      LVar12 = 0x1f;
      if (!param_2) {
        LVar12 = 0x1c;
      }
      iVar4 = *(int *)(pAVar23 + 8);
      break;
    default:
      LVar12 = 0;
      iVar4 = *(int *)(pAVar23 + 8);
    }
    while ((pAVar16 == (AstExpr *)0x0 || (iVar4 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar4 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar4 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed7b00;
      iVar4 = *(int *)(*(AstExpr **)(pAVar16 + 0x20) + 8);
      pAVar16 = *(AstExpr **)(pAVar16 + 0x20);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar15 = *(ulong *)(pAVar16 + 0x20);
      uVar21 = *(ulong *)(this + 0x70);
      if (uVar15 != uVar21) {
        uVar14 = 0;
        uVar18 = uVar15 >> 4 ^ uVar15 >> 9;
        uVar17 = *(long *)(this + 0x60) - 1;
        goto LAB_00ed7ad8;
      }
    }
LAB_00ed7b00:
    uVar24 = *(uint *)(this + 0x178);
    uVar9 = uVar24 + 1;
    if (0xff < uVar9) {
                    /* try { // try from 00ed7bf0 to 00ed7c03 has its CatchHandler @ 00ed7c1c */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(pAVar23 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,1,0xff);
    }
    *(uint *)(this + 0x178) = uVar9;
    if (uVar9 <= *(uint *)(this + 0x17c)) {
      uVar9 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar9;
                    /* try { // try from 00ed7b24 to 00ed7b37 has its CatchHandler @ 00ed7c1c */
    compileExpr(this,pAVar23,(uchar)uVar24,true);
LAB_00ed7b38:
                    /* try { // try from 00ed7b3c to 00ed7b97 has its CatchHandler @ 00ed7c24 */
    uVar10 = BytecodeBuilder::emitLabel();
    if (*(int *)(param_1 + 0x1c) - 0xbU < 2) {
      BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,LVar12,(uchar)uVar24,0);
      BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar1 & 0xff);
    }
    else {
      BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,LVar12,(char)uVar1,0);
      BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar24 & 0xff);
    }
    goto LAB_00ed7b98;
  }
  if ((*(long *)(this + 0xe0) != 0) && (pAVar23 != *(AstExpr **)(this + 0xe8))) {
    uVar15 = 0;
    uVar21 = (ulong)pAVar23 >> 4 ^ (ulong)pAVar23 >> 9;
    do {
      uVar21 = uVar21 & *(long *)(this + 0xd8) - 1U;
      ppAVar19 = (AstExpr **)(*(long *)(this + 0xd0) + uVar21 * 0x18);
      if (*ppAVar19 == pAVar23) goto LAB_00ed794c;
      if (*ppAVar19 == *(AstExpr **)(this + 0xe8)) break;
      uVar15 = uVar15 + 1;
      uVar21 = uVar15 + uVar21;
    } while (uVar15 <= *(long *)(this + 0xd8) - 1U);
  }
  ppAVar19 = (AstExpr **)0x0;
LAB_00ed794c:
  ppAVar3 = (AstExpr **)0x0;
  if (ppAVar19 != (AstExpr **)0x0) {
    ppAVar3 = ppAVar19 + 1;
  }
  uVar24 = 0x80000000;
  if ((*(int *)(param_1 + 0x1c) != 8) == param_2) {
    uVar24 = 0;
  }
  if (3 < *(int *)ppAVar3 - 1U) goto LAB_00ed7c04;
  uVar9 = 0;
  LVar12 = 0x4d;
  switch(*(int *)ppAVar3) {
  case 2:
    uVar9 = (uint)*(byte *)(ppAVar3 + 1);
    LVar12 = 0x4e;
    break;
  case 3:
                    /* try { // try from 00ed79b0 to 00ed79d3 has its CatchHandler @ 00ed7c14 */
    uVar9 = getConstantIndex(this,pAVar23);
    LVar12 = 0x4f;
    goto LAB_00ed79dc;
  case 4:
    uVar9 = getConstantIndex(this,pAVar23);
    LVar12 = 0x50;
LAB_00ed79dc:
    if ((int)uVar9 < 0) {
LAB_00ed7c04:
                    /* try { // try from 00ed7c08 to 00ed7c13 has its CatchHandler @ 00ed7c14 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded constant limit; simplify the code to compile");
    }
  }
                    /* try { // try from 00ed79e4 to 00ed7a0b has its CatchHandler @ 00ed7c2c */
  uVar10 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)this,LVar12,(char)uVar1,0);
  BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar9 | uVar24);
LAB_00ed7b98:
  *(uint *)(this + 0x178) = uVar5;
  return uVar10;
}


