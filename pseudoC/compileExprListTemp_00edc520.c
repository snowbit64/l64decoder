// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprListTemp
// Entry Point: 00edc520
// Size: 676 bytes
// Signature: undefined __thiscall compileExprListTemp(Compiler * this, AstArray * param_1, uchar param_2, uchar param_3, bool param_4)


/* Luau::Compiler::compileExprListTemp(Luau::AstArray<Luau::AstExpr*> const&, unsigned char,
   unsigned char, bool) */

void __thiscall
Luau::Compiler::compileExprListTemp
          (Compiler *this,AstArray *param_1,uchar param_2,uchar param_3,bool param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  AstExpr *pAVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  AstExpr *pAVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  uVar15 = (ulong)param_3;
  uVar6 = *(ulong *)(param_1 + 8);
  if (uVar6 == uVar15) {
    if (uVar6 != 0) {
      uVar15 = 0;
      do {
        compileExpr(this,*(AstExpr **)(*(long *)param_1 + uVar15 * 8),(char)uVar15 + param_2,true);
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(ulong *)(param_1 + 8));
    }
  }
  else if (uVar15 < uVar6) {
    if (param_3 != '\0') {
      uVar6 = 0;
      do {
        compileExpr(this,*(AstExpr **)(*(long *)param_1 + uVar6 * 8),(char)uVar6 + param_2,true);
        uVar6 = uVar6 + 1;
      } while (uVar15 != uVar6);
      uVar6 = *(ulong *)(param_1 + 8);
    }
    if (uVar15 < uVar6) {
      iVar3 = *(int *)(this + 0x178);
      uVar1 = iVar3 + 1;
LAB_00edc5ec:
      pAVar5 = *(AstExpr **)(*(long *)param_1 + uVar15 * 8);
      iVar4 = *(int *)(pAVar5 + 8);
      pAVar11 = pAVar5;
      while ((pAVar11 == (AstExpr *)0x0 || (iVar4 != AstRtti<Luau::AstExprLocal>::value))) {
        if ((iVar4 != AstRtti<Luau::AstExprGroup>::value) &&
           (iVar4 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edc690;
        pAVar11 = *(AstExpr **)(pAVar11 + 0x20);
        iVar4 = *(int *)(pAVar11 + 8);
      }
      if (*(long *)(this + 0x68) != 0) {
        uVar7 = *(ulong *)(pAVar11 + 0x20);
        uVar9 = *(ulong *)(this + 0x70);
        if (uVar7 != uVar9) {
          uVar10 = 0;
          uVar13 = uVar7 >> 4 ^ uVar7 >> 9;
          uVar12 = *(long *)(this + 0x60) - 1;
          goto LAB_00edc668;
        }
      }
      goto LAB_00edc690;
    }
  }
  else {
    if (uVar6 != 0) {
      if (uVar6 == 1) {
        uVar6 = 0;
        lVar8 = 1;
      }
      else {
        uVar15 = 0;
        do {
          compileExpr(this,*(AstExpr **)(*(long *)param_1 + uVar15 * 8),(char)uVar15 + param_2,true)
          ;
          lVar8 = *(long *)(param_1 + 8);
          uVar15 = uVar15 + 1;
          uVar6 = lVar8 - 1;
        } while (uVar15 < uVar6);
      }
      compileExprTempN(this,*(AstExpr **)(*(long *)param_1 + uVar6 * 8),param_2 + (char)lVar8 + 0xff
                       ,param_3 - (char)uVar6,param_4);
      return;
    }
    if (param_3 != '\0') {
      uVar6 = 0;
      do {
        BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,2,(char)uVar6 + param_2,'\0','\0');
        uVar6 = uVar6 + 1;
      } while (uVar15 != uVar6);
    }
  }
  return;
  while( true ) {
    uVar10 = uVar10 + 1;
    uVar13 = uVar10 + uVar13;
    if ((uVar14 == uVar9 || uVar12 <= uVar10) && (uVar14 == uVar9 || uVar10 != uVar12)) break;
LAB_00edc668:
    uVar13 = uVar13 & uVar12;
    uVar14 = *(ulong *)(*(long *)(this + 0x58) + uVar13 * 0x10);
    if (uVar14 == uVar7) {
      if (*(char *)(*(long *)(this + 0x58) + uVar13 * 0x10 + 9) != '\0') goto LAB_00edc6c0;
      break;
    }
  }
LAB_00edc690:
  if (0xff < uVar1) {
                    /* try { // try from 00edc7b0 to 00edc7c3 has its CatchHandler @ 00edc7c4 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar5 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  uVar2 = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar2 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar2;
                    /* try { // try from 00edc6ac to 00edc6bb has its CatchHandler @ 00edc7cc */
  compileExpr(this,pAVar5,(uchar)iVar3,true);
  uVar6 = *(ulong *)(param_1 + 8);
LAB_00edc6c0:
  uVar15 = uVar15 + 1;
  *(int *)(this + 0x178) = iVar3;
  if (uVar6 <= uVar15) {
    return;
  }
  goto LAB_00edc5ec;
}


