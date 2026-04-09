// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileStatReturn
// Entry Point: 00ed3ad4
// Size: 988 bytes
// Signature: undefined __thiscall compileStatReturn(Compiler * this, AstStatReturn * param_1)


/* WARNING: Type propagation algorithm not settling */
/* Luau::Compiler::compileStatReturn(Luau::AstStatReturn*) */

void __thiscall Luau::Compiler::compileStatReturn(Compiler *this,AstStatReturn *param_1)

{
  ulong *puVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  AstExpr *pAVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  ulong uVar13;
  uchar uVar14;
  long lVar15;
  AstExpr *pAVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong *puVar22;
  uint uVar23;
  
  uVar12 = *(ulong *)(param_1 + 0x28);
  uVar3 = *(uint *)(this + 0x178);
  if (uVar12 != 0) {
    pAVar9 = **(AstExpr ***)(param_1 + 0x20);
    iVar7 = *(int *)(pAVar9 + 8);
    pAVar16 = pAVar9;
    while ((pAVar16 == (AstExpr *)0x0 || (iVar7 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar7 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar7 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed3bb8;
      pAVar16 = *(AstExpr **)(pAVar16 + 0x20);
      iVar7 = *(int *)(pAVar16 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar19 = *(ulong *)(pAVar16 + 0x20);
      uVar17 = *(ulong *)(this + 0x70);
      if (uVar19 != uVar17) {
        lVar2 = *(long *)(this + 0x58);
        uVar20 = 0;
        uVar21 = uVar19 >> 4 ^ uVar19 >> 9;
        uVar18 = *(long *)(this + 0x60) - 1;
        goto LAB_00ed3b90;
      }
    }
    goto LAB_00ed3bb8;
  }
  uVar23 = 0;
  lVar2 = *(long *)(this + 0x188);
  uVar12 = *(long *)(this + 400) - lVar2;
  goto joined_r0x00ed3c90;
  while( true ) {
    uVar20 = uVar20 + 1;
    uVar21 = uVar20 + uVar21;
    if ((uVar8 == uVar17 || uVar18 <= uVar20) && (uVar8 == uVar17 || uVar20 != uVar18)) break;
LAB_00ed3b90:
    uVar21 = uVar21 & uVar18;
    uVar8 = *(ulong *)(lVar2 + uVar21 * 0x10);
    if (uVar8 == uVar19) {
      lVar15 = lVar2 + uVar21 * 0x10;
      if (*(char *)(lVar15 + 9) != '\0') {
        uVar23 = (uint)*(byte *)(lVar15 + 8);
        if (uVar12 < 2) goto LAB_00ed3e84;
        bVar5 = true;
        uVar19 = 1;
        goto LAB_00ed3dbc;
      }
      break;
    }
  }
LAB_00ed3bb8:
  uVar23 = uVar3 + (int)uVar12;
  if (0xff < uVar23) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(param_1 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",
                        uVar12,0xff);
  }
  uVar6 = 0;
  uVar17 = 1;
  *(uint *)(this + 0x178) = uVar23;
  if (uVar23 <= *(uint *)(this + 0x17c)) {
    uVar23 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar23;
  uVar14 = (uchar)uVar3;
  uVar23 = uVar3;
  if (uVar12 == 1) goto LAB_00ed3c24;
  while( true ) {
    uVar4 = *(undefined4 *)(this + 0x178);
    *(uint *)(this + 0x178) = (uVar23 & 0xff) + 1;
                    /* try { // try from 00ed3c00 to 00ed3c0f has its CatchHandler @ 00ed3eb8 */
    compileExpr(this,pAVar9,(uchar)uVar23,true);
    *(undefined4 *)(this + 0x178) = uVar4;
    uVar12 = *(ulong *)(param_1 + 0x28);
    if (uVar12 <= uVar17) break;
    while( true ) {
      pAVar9 = *(AstExpr **)(*(long *)(param_1 + 0x20) + uVar17 * 8);
      uVar17 = uVar17 + 1;
      uVar23 = ((int)uVar17 + uVar3) - 1;
      uVar14 = (uchar)uVar23;
      if (uVar17 != uVar12) break;
LAB_00ed3c24:
                    /* try { // try from 00ed3c24 to 00ed3c2f has its CatchHandler @ 00ed3ec4 */
      uVar6 = compileExprTempMultRet(this,pAVar9,uVar14);
      uVar6 = uVar6 & 1;
      uVar12 = *(ulong *)(param_1 + 0x28);
      if (uVar12 <= uVar17) goto LAB_00ed3c60;
    }
  }
LAB_00ed3c60:
  lVar2 = *(long *)(this + 0x188);
  uVar12 = *(long *)(this + 400) - lVar2;
  uVar23 = uVar3;
  goto joined_r0x00ed3c90;
LAB_00ed3dbc:
  do {
    pAVar16 = (*(AstExpr ***)(param_1 + 0x20))[uVar19];
    iVar7 = *(int *)(pAVar16 + 8);
    if (pAVar16 == (AstExpr *)0x0 || iVar7 != AstRtti<Luau::AstExprLocal>::value) {
      do {
        if ((iVar7 != AstRtti<Luau::AstExprGroup>::value) &&
           (iVar7 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00ed3e5c;
        pAVar16 = *(AstExpr **)(pAVar16 + 0x20);
        iVar7 = *(int *)(pAVar16 + 8);
      } while ((pAVar16 == (AstExpr *)0x0) || (iVar7 != AstRtti<Luau::AstExprLocal>::value));
    }
    uVar20 = *(ulong *)(pAVar16 + 0x20);
    if (uVar20 != uVar17) {
      uVar21 = 0;
      uVar8 = uVar20 >> 4 ^ uVar20 >> 9;
      do {
        uVar8 = uVar8 & uVar18;
        uVar13 = *(ulong *)(lVar2 + uVar8 * 0x10);
        if (uVar13 == uVar20) {
          lVar15 = lVar2 + uVar8 * 0x10;
          if (*(char *)(lVar15 + 9) != '\0') {
            if ((uint)*(byte *)(lVar15 + 8) != (int)uVar19 + uVar23) goto LAB_00ed3e80;
            goto LAB_00ed3e6c;
          }
          break;
        }
        if (uVar13 == uVar17) break;
        uVar21 = uVar21 + 1;
        uVar8 = uVar21 + uVar8;
      } while (uVar21 <= uVar18);
    }
LAB_00ed3e5c:
    if ((int)uVar19 + uVar23 != -1) {
LAB_00ed3e80:
      if (bVar5) goto LAB_00ed3bb8;
      break;
    }
LAB_00ed3e6c:
    uVar19 = uVar19 + 1;
    bVar5 = uVar19 < uVar12;
  } while (uVar19 != uVar12);
LAB_00ed3e84:
  lVar2 = *(long *)(this + 0x188);
  uVar12 = *(long *)(this + 400) - lVar2;
joined_r0x00ed3c90:
  uVar6 = 0;
joined_r0x00ed3c90:
  if ((7 < uVar12) && (*(long *)(this + 0x68) != 0)) {
    bVar5 = false;
    lVar15 = 0;
    bVar10 = 0xff;
LAB_00ed3cb8:
    do {
      uVar17 = *(ulong *)(lVar2 + lVar15 * 8);
      if (uVar17 != *(ulong *)(this + 0x70)) {
        uVar19 = 0;
        uVar20 = uVar17 >> 4 ^ uVar17 >> 9;
        do {
          uVar20 = uVar20 & *(long *)(this + 0x60) - 1U;
          puVar22 = (ulong *)(*(long *)(this + 0x58) + uVar20 * 0x10);
          if (*puVar22 == uVar17) goto LAB_00ed3d00;
          if (*puVar22 == *(ulong *)(this + 0x70)) break;
          uVar19 = uVar19 + 1;
          uVar20 = uVar19 + uVar20;
        } while (uVar19 <= *(long *)(this + 0x60) - 1U);
      }
      puVar22 = (ulong *)0x0;
LAB_00ed3d00:
      puVar1 = (ulong *)0x0;
      if (puVar22 != (ulong *)0x0) {
        puVar1 = puVar22 + 1;
      }
      if (*(byte *)((long)puVar1 + 2) != 0) {
        lVar15 = lVar15 + 1;
        bVar11 = *(byte *)puVar1;
        if (bVar10 <= *(byte *)puVar1) {
          bVar11 = bVar10;
        }
        bVar5 = true;
        bVar10 = bVar11;
        if (lVar15 == (long)uVar12 >> 3) goto LAB_00ed3d48;
        goto LAB_00ed3cb8;
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 != (long)uVar12 >> 3);
    bVar11 = bVar10;
    if (bVar5) {
LAB_00ed3d48:
                    /* try { // try from 00ed3d4c to 00ed3eaf has its CatchHandler @ 00ed3eb0 */
      BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0xb,bVar11,'\0','\0');
    }
  }
  if (uVar6 == 0) {
    uVar14 = (char)param_1[0x28] + '\x01';
  }
  else {
    uVar14 = '\0';
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x16,(uchar)uVar23,uVar14,'\0');
  *(uint *)(this + 0x178) = uVar3;
  return;
}


