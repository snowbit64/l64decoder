// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprIndexExpr
// Entry Point: 00ed8cbc
// Size: 1608 bytes
// Signature: undefined __thiscall compileExprIndexExpr(Compiler * this, AstExprIndexExpr * param_1, uchar param_2)


/* WARNING: Type propagation algorithm not settling */
/* Luau::Compiler::compileExprIndexExpr(Luau::AstExprIndexExpr*, unsigned char) */

void __thiscall
Luau::Compiler::compileExprIndexExpr(Compiler *this,AstExprIndexExpr *param_1,uchar param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uchar uVar4;
  uint uVar5;
  AstExpr *pAVar6;
  ulong uVar7;
  AstExpr *pAVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  AstExpr *pAVar15;
  ulong uVar16;
  BytecodeBuilder *this_00;
  uint uVar17;
  BytecodeBuilder *pBVar18;
  
  pBVar18 = (BytecodeBuilder *)0x0;
  pAVar6 = *(AstExpr **)(param_1 + 0x28);
  uVar7 = *(ulong *)(this + 0xe0);
  uVar2 = *(uint *)(this + 0x178);
  if (uVar7 == 0) {
LAB_00ed8d64:
    if ((((int)uVar7 != 3) || ((double)pBVar18 < 1.0)) || (256.0 < (double)pBVar18))
    goto LAB_00ed8ec0;
    if ((double)pBVar18 == (double)(int)(double)pBVar18) {
      pAVar15 = *(AstExpr **)(param_1 + 0x20);
      iVar3 = *(int *)(pAVar15 + 8);
      pAVar6 = pAVar15;
      while ((pAVar6 == (AstExpr *)0x0 || (iVar3 != AstRtti<Luau::AstExprLocal>::value))) {
        if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
           (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed8e50;
        pAVar6 = *(AstExpr **)(pAVar6 + 0x20);
        iVar3 = *(int *)(pAVar6 + 8);
      }
      if (*(long *)(this + 0x68) != 0) {
        uVar7 = *(ulong *)(pAVar6 + 0x20);
        uVar13 = *(ulong *)(this + 0x70);
        if (uVar7 != uVar13) {
          uVar10 = 0;
          uVar11 = uVar7 >> 4 ^ uVar7 >> 9;
          uVar14 = *(long *)(this + 0x60) - 1;
          goto LAB_00ed8e28;
        }
      }
      goto LAB_00ed8e50;
    }
  }
  else {
    if (*(AstExpr **)(this + 0xe8) != pAVar6) {
      uVar7 = 0;
      uVar13 = (ulong)pAVar6 >> 4 ^ (ulong)pAVar6 >> 9;
      do {
        uVar13 = uVar13 & *(long *)(this + 0xd8) - 1U;
        pAVar15 = *(AstExpr **)(*(long *)(this + 0xd0) + uVar13 * 0x18);
        if (pAVar15 == pAVar6) {
          lVar9 = *(long *)(this + 0xd0) + uVar13 * 0x18;
          uVar7 = *(ulong *)(lVar9 + 8);
          pBVar18 = *(BytecodeBuilder **)(lVar9 + 0x10);
          goto LAB_00ed8d64;
        }
        if (pAVar15 == *(AstExpr **)(this + 0xe8)) break;
        uVar7 = uVar7 + 1;
        uVar13 = uVar7 + uVar13;
      } while (uVar7 <= *(long *)(this + 0xd8) - 1U);
    }
    uVar7 = 0;
LAB_00ed8ec0:
    if ((int)uVar7 == 4) {
                    /* try { // try from 00ed8ed4 to 00ed8edf has its CatchHandler @ 00ed9304 */
      uVar5 = BytecodeBuilder::addConstantString(*(undefined8 *)this,pBVar18,uVar7 >> 0x20);
      if ((int)uVar5 < 0) {
                    /* try { // try from 00ed92e0 to 00ed92eb has its CatchHandler @ 00ed9304 */
                    /* WARNING: Subroutine does not return */
        CompileError::raise((Location *)(param_1 + 0xc),
                            "Exceeded constant limit; simplify the code to compile");
      }
      pAVar15 = *(AstExpr **)(param_1 + 0x20);
      iVar3 = *(int *)(pAVar15 + 8);
      pAVar6 = pAVar15;
      while ((pAVar6 == (AstExpr *)0x0 || (iVar3 != AstRtti<Luau::AstExprLocal>::value))) {
        if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
           (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed8fa0;
        pAVar6 = *(AstExpr **)(pAVar6 + 0x20);
        iVar3 = *(int *)(pAVar6 + 8);
      }
      if (*(long *)(this + 0x68) != 0) {
        uVar13 = *(ulong *)(pAVar6 + 0x20);
        uVar10 = *(ulong *)(this + 0x70);
        if (uVar13 != uVar10) {
          uVar11 = 0;
          uVar14 = uVar13 >> 4 ^ uVar13 >> 9;
          uVar12 = *(long *)(this + 0x60) - 1;
          goto LAB_00ed8f78;
        }
      }
      goto LAB_00ed8fa0;
    }
  }
  pAVar8 = *(AstExpr **)(param_1 + 0x20);
  iVar3 = *(int *)(pAVar8 + 8);
  pAVar15 = pAVar8;
  while ((pAVar15 == (AstExpr *)0x0 || (iVar3 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed90e4;
    pAVar15 = *(AstExpr **)(pAVar15 + 0x20);
    iVar3 = *(int *)(pAVar15 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar7 = *(ulong *)(pAVar15 + 0x20);
    uVar13 = *(ulong *)(this + 0x70);
    if (uVar7 != uVar13) {
      uVar10 = 0;
      uVar11 = uVar7 >> 4 ^ uVar7 >> 9;
      uVar14 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed90bc;
    }
  }
  goto LAB_00ed90e4;
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar11 = uVar10 + uVar11;
    if ((uVar12 == uVar13 || uVar14 <= uVar10) && (uVar12 == uVar13 || uVar10 != uVar14)) break;
LAB_00ed8e28:
    uVar11 = uVar11 & uVar14;
    uVar12 = *(ulong *)(*(long *)(this + 0x58) + uVar11 * 0x10);
    if (uVar12 == uVar7) {
      lVar9 = *(long *)(this + 0x58) + uVar11 * 0x10;
      if (*(char *)(lVar9 + 9) != '\0') {
        iVar3 = *(int *)(this + 0xc);
        uVar5 = (uint)*(byte *)(lVar9 + 8);
        goto joined_r0x00ed926c;
      }
      break;
    }
  }
LAB_00ed8e50:
  uVar5 = uVar2 + 1;
  if (0xff < uVar5) {
                    /* try { // try from 00ed92c8 to 00ed92db has its CatchHandler @ 00ed9314 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar15 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar5;
  if (uVar5 <= *(uint *)(this + 0x17c)) {
    uVar5 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar5;
                    /* try { // try from 00ed8e70 to 00ed8ebb has its CatchHandler @ 00ed9314 */
  compileExpr(this,pAVar15,(uchar)uVar2,true);
  iVar3 = *(int *)(this + 0xc);
  uVar5 = uVar2;
joined_r0x00ed926c:
  if (0 < iVar3) {
    BytecodeBuilder::setDebugLine
              (*(BytecodeBuilder **)this,*(int *)(*(long *)(param_1 + 0x28) + 0xc) + 1);
  }
  BytecodeBuilder::emitABC
            (*(BytecodeBuilder **)this,0x11,param_2,(uchar)uVar5,(char)(int)(double)pBVar18 + 0xff);
  goto LAB_00ed9208;
  while( true ) {
    uVar11 = uVar11 + 1;
    uVar14 = uVar11 + uVar14;
    if ((uVar16 == uVar10 || uVar12 <= uVar11) && (uVar16 == uVar10 || uVar11 != uVar12)) break;
LAB_00ed8f78:
    uVar14 = uVar14 & uVar12;
    uVar16 = *(ulong *)(*(long *)(this + 0x58) + uVar14 * 0x10);
    if (uVar16 == uVar13) {
      lVar9 = *(long *)(this + 0x58) + uVar14 * 0x10;
      if (*(char *)(lVar9 + 9) != '\0') {
        uVar17 = (uint)*(byte *)(lVar9 + 8);
        iVar3 = *(int *)(this + 0xc);
        goto joined_r0x00ed928c;
      }
      break;
    }
  }
LAB_00ed8fa0:
  uVar17 = *(uint *)(this + 0x178);
  uVar1 = uVar17 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00ed92f0 to 00ed9303 has its CatchHandler @ 00ed9324 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar15 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed8fc4 to 00ed9027 has its CatchHandler @ 00ed9324 */
  compileExpr(this,pAVar15,(uchar)uVar17,true);
  iVar3 = *(int *)(this + 0xc);
joined_r0x00ed928c:
  if (0 < iVar3) {
    BytecodeBuilder::setDebugLine
              (*(BytecodeBuilder **)this,*(int *)(*(long *)(param_1 + 0x28) + 0xc) + 1);
  }
  this_00 = *(BytecodeBuilder **)this;
  uVar4 = BytecodeBuilder::getStringHash(pBVar18,uVar7 >> 0x20);
  BytecodeBuilder::emitABC(this_00,0xf,param_2,(uchar)uVar17,uVar4);
  BytecodeBuilder::emitAux(*(BytecodeBuilder **)this,uVar5);
  goto LAB_00ed9208;
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar11 = uVar10 + uVar11;
    if ((uVar12 == uVar13 || uVar14 <= uVar10) && (uVar12 == uVar13 || uVar10 != uVar14)) break;
LAB_00ed9194:
    uVar11 = uVar11 & uVar14;
    uVar12 = *(ulong *)(*(long *)(this + 0x58) + uVar11 * 0x10);
    if (uVar12 == uVar7) {
      lVar9 = *(long *)(this + 0x58) + uVar11 * 0x10;
      if (*(char *)(lVar9 + 9) != '\0') {
        uVar17 = (uint)*(byte *)(lVar9 + 8);
        goto LAB_00ed91f0;
      }
      break;
    }
  }
  goto LAB_00ed91bc;
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar11 = uVar10 + uVar11;
    if ((uVar12 == uVar13 || uVar14 <= uVar10) && (uVar12 == uVar13 || uVar10 != uVar14)) break;
LAB_00ed90bc:
    uVar11 = uVar11 & uVar14;
    uVar12 = *(ulong *)(*(long *)(this + 0x58) + uVar11 * 0x10);
    if (uVar12 == uVar7) {
      lVar9 = *(long *)(this + 0x58) + uVar11 * 0x10;
      if (*(char *)(lVar9 + 9) != '\0') {
        iVar3 = *(int *)(pAVar6 + 8);
        uVar5 = (uint)*(byte *)(lVar9 + 8);
        goto joined_r0x00ed9238;
      }
      break;
    }
  }
LAB_00ed90e4:
  uVar5 = uVar2 + 1;
  if (0xff < uVar5) {
                    /* try { // try from 00ed9298 to 00ed92ab has its CatchHandler @ 00ed930c */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar8 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar5;
  if (uVar5 <= *(uint *)(this + 0x17c)) {
    uVar5 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar5;
                    /* try { // try from 00ed9104 to 00ed9117 has its CatchHandler @ 00ed930c */
  compileExpr(this,pAVar8,(uchar)uVar2,true);
  pAVar6 = *(AstExpr **)(param_1 + 0x28);
  iVar3 = *(int *)(pAVar6 + 8);
  uVar5 = uVar2;
joined_r0x00ed9238:
  pAVar15 = pAVar6;
  while ((pAVar15 == (AstExpr *)0x0 || (iVar3 != AstRtti<Luau::AstExprLocal>::value))) {
    if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed91bc;
    pAVar15 = *(AstExpr **)((long)pAVar15 + 0x20);
    iVar3 = *(int *)(pAVar15 + 8);
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar7 = *(ulong *)((long)pAVar15 + 0x20);
    uVar13 = *(ulong *)(this + 0x70);
    if (uVar7 != uVar13) {
      uVar10 = 0;
      uVar11 = uVar7 >> 4 ^ uVar7 >> 9;
      uVar14 = *(long *)(this + 0x60) - 1;
      goto LAB_00ed9194;
    }
  }
LAB_00ed91bc:
  uVar17 = *(uint *)(this + 0x178);
  uVar1 = uVar17 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00ed92b0 to 00ed92c3 has its CatchHandler @ 00ed931c */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar6 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00ed91e0 to 00ed9207 has its CatchHandler @ 00ed931c */
  compileExpr(this,pAVar6,(uchar)uVar17,true);
LAB_00ed91f0:
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xd,param_2,(uchar)uVar5,(uchar)uVar17);
LAB_00ed9208:
  *(uint *)(this + 0x178) = uVar2;
  return;
}


