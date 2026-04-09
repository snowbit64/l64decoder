// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileLValue
// Entry Point: 00edeaa8
// Size: 1104 bytes
// Signature: undefined __cdecl compileLValue(AstExpr * param_1, RegScope * param_2)


/* Luau::Compiler::compileLValue(Luau::AstExpr*, Luau::Compiler::RegScope&) */

void Luau::Compiler::compileLValue(AstExpr *param_1,RegScope *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined uVar7;
  size_t sVar8;
  AstLocal *pAVar9;
  AstExpr *pAVar10;
  RegScope *in_x2;
  undefined8 *in_x8;
  AstLocal *pAVar11;
  ulong uVar12;
  ulong uVar13;
  AstExpr *pAVar14;
  ulong uVar15;
  ulong uVar16;
  AstLocal *pAVar17;
  ulong uVar18;
  ulong uVar19;
  char *pcVar20;
  uint uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  if (0 < *(int *)(param_1 + 0xc)) {
    BytecodeBuilder::setDebugLine(*(BytecodeBuilder **)param_1,*(int *)(param_2 + 0xc) + 1);
  }
  iVar5 = AstRtti<Luau::AstExprLocal>::value;
  iVar3 = *(int *)(param_2 + 8);
  if ((param_2 != (RegScope *)0x0) && (iVar3 == AstRtti<Luau::AstExprLocal>::value)) {
    if (*(long *)(param_1 + 0x68) == 0) {
      pAVar9 = *(AstLocal **)(param_2 + 0x20);
    }
    else {
      pAVar9 = *(AstLocal **)(param_2 + 0x20);
      pAVar11 = *(AstLocal **)(param_1 + 0x70);
      if (pAVar9 != pAVar11) {
        uVar12 = 0;
        uVar15 = (ulong)pAVar9 >> 4 ^ (ulong)pAVar9 >> 9;
        uVar13 = *(long *)(param_1 + 0x60) - 1;
        do {
          uVar15 = uVar15 & uVar13;
          pAVar17 = *(AstLocal **)(*(long *)(param_1 + 0x58) + uVar15 * 0x10);
          if (pAVar17 == pAVar9) {
            lVar2 = *(long *)(param_1 + 0x58) + uVar15 * 0x10;
            if (*(char *)(lVar2 + 9) != '\0') {
              uVar7 = *(undefined *)(lVar2 + 8);
              *in_x8 = 0;
              in_x8[1] = 0;
              uVar23 = *(undefined8 *)(param_2 + 0x14);
              uVar22 = *(undefined8 *)(param_2 + 0xc);
              in_x8[2] = 0;
              *(undefined *)((long)in_x8 + 4) = uVar7;
              in_x8[4] = uVar23;
              in_x8[3] = uVar22;
              return;
            }
            break;
          }
          uVar12 = uVar12 + 1;
          uVar15 = uVar12 + uVar15;
        } while (pAVar17 != pAVar11 && uVar12 < uVar13 || pAVar17 != pAVar11 && uVar12 == uVar13);
      }
    }
    *(undefined4 *)((long)in_x8 + 0x24) = 0;
    *(undefined4 *)in_x8 = 1;
    *(undefined8 *)((long)in_x8 + 0xc) = 0;
    *(undefined8 *)((long)in_x8 + 4) = 0;
    *(undefined8 *)((long)in_x8 + 0x1c) = 0;
    *(undefined8 *)((long)in_x8 + 0x14) = 0;
    uVar7 = getUpval((Compiler *)param_1,pAVar9);
    uVar23 = *(undefined8 *)(param_2 + 0x14);
    uVar22 = *(undefined8 *)(param_2 + 0xc);
    *(undefined *)((long)in_x8 + 5) = uVar7;
    in_x8[4] = uVar23;
    in_x8[3] = uVar22;
    return;
  }
  if ((param_2 != (RegScope *)0x0) && (iVar3 == AstRtti<Luau::AstExprGlobal>::value)) {
    pcVar20 = *(char **)(param_2 + 0x20);
    *(undefined4 *)((long)in_x8 + 0x24) = 0;
    *(undefined4 *)in_x8 = 2;
    *(undefined8 *)((long)in_x8 + 0xc) = 0;
    *(undefined8 *)((long)in_x8 + 4) = 0;
    *(undefined8 *)((long)in_x8 + 0x1c) = 0;
    *(undefined8 *)((long)in_x8 + 0x14) = 0;
    sVar8 = strlen(pcVar20);
    uVar23 = *(undefined8 *)(param_2 + 0x14);
    uVar22 = *(undefined8 *)(param_2 + 0xc);
    in_x8[1] = pcVar20;
    in_x8[2] = sVar8;
    in_x8[4] = uVar23;
    in_x8[3] = uVar22;
    return;
  }
  if ((param_2 == (RegScope *)0x0) || (iVar3 != AstRtti<Luau::AstExprIndexName>::value)) {
    if ((param_2 == (RegScope *)0x0) || (iVar3 != AstRtti<Luau::AstExprIndexExpr>::value)) {
      in_x8[4] = 0;
      in_x8[1] = 0;
      *in_x8 = 0;
      in_x8[3] = 0;
      in_x8[2] = 0;
      return;
    }
    pAVar10 = *(AstExpr **)(param_2 + 0x20);
    iVar3 = *(int *)(pAVar10 + 8);
    pAVar14 = pAVar10;
    while ((pAVar14 == (AstExpr *)0x0 || (iVar3 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar3 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar3 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edee04;
      pAVar14 = *(AstExpr **)(pAVar14 + 0x20);
      iVar3 = *(int *)(pAVar14 + 8);
    }
    if (*(long *)(param_1 + 0x68) != 0) {
      uVar12 = *(ulong *)(pAVar14 + 0x20);
      uVar15 = *(ulong *)(param_1 + 0x70);
      if (uVar12 != uVar15) {
        uVar13 = 0;
        uVar18 = uVar12 >> 4 ^ uVar12 >> 9;
        uVar16 = *(long *)(param_1 + 0x60) - 1;
        goto LAB_00ededdc;
      }
    }
    goto LAB_00edee04;
  }
  *(undefined4 *)((long)in_x8 + 0x24) = 0;
  pAVar10 = *(AstExpr **)(param_2 + 0x20);
  *(undefined8 *)((long)in_x8 + 0xc) = 0;
  *(undefined8 *)((long)in_x8 + 4) = 0;
  *(undefined8 *)((long)in_x8 + 0x1c) = 0;
  *(undefined8 *)((long)in_x8 + 0x14) = 0;
  iVar6 = AstRtti<Luau::AstExprTypeAssertion>::value;
  iVar4 = AstRtti<Luau::AstExprGroup>::value;
  *(undefined4 *)in_x8 = 3;
  iVar3 = *(int *)(pAVar10 + 8);
  pAVar14 = pAVar10;
  while ((pAVar14 == (AstExpr *)0x0 || (iVar3 != iVar5))) {
    if ((iVar3 != iVar4) && (iVar3 != iVar6)) goto LAB_00edec94;
    pAVar14 = *(AstExpr **)(pAVar14 + 0x20);
    iVar3 = *(int *)(pAVar14 + 8);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar12 = *(ulong *)(pAVar14 + 0x20);
    uVar15 = *(ulong *)(param_1 + 0x70);
    if (uVar12 != uVar15) {
      uVar13 = 0;
      uVar18 = uVar12 >> 4 ^ uVar12 >> 9;
      uVar16 = *(long *)(param_1 + 0x60) - 1;
      goto LAB_00edec6c;
    }
  }
LAB_00edec94:
  uVar21 = *(uint *)(param_1 + 0x178);
  uVar1 = uVar21 + 1;
  if (uVar1 < 0x100) {
    *(uint *)(param_1 + 0x178) = uVar1;
    if (uVar1 <= *(uint *)(param_1 + 0x17c)) {
      uVar1 = *(uint *)(param_1 + 0x17c);
    }
    *(uint *)(param_1 + 0x17c) = uVar1;
    compileExpr((Compiler *)param_1,pAVar10,(uchar)uVar21,true);
LAB_00edecc8:
    pcVar20 = *(char **)(param_2 + 0x28);
    *(char *)((long)in_x8 + 4) = (char)uVar21;
    sVar8 = strlen(pcVar20);
    uVar23 = *(undefined8 *)(param_2 + 0x14);
    uVar22 = *(undefined8 *)(param_2 + 0xc);
    in_x8[1] = pcVar20;
    in_x8[2] = sVar8;
    in_x8[4] = uVar23;
    in_x8[3] = uVar22;
    return;
  }
LAB_00edeee0:
                    /* WARNING: Subroutine does not return */
  CompileError::raise((Location *)(pAVar10 + 0xc),
                      "Out of registers when trying to allocate %d registers: exceeded limit %d",1,
                      0xff);
  while( true ) {
    uVar13 = uVar13 + 1;
    uVar18 = uVar13 + uVar18;
    if ((uVar19 == uVar15 || uVar16 <= uVar13) && (uVar19 == uVar15 || uVar13 != uVar16)) break;
LAB_00ededdc:
    uVar18 = uVar18 & uVar16;
    uVar19 = *(ulong *)(*(long *)(param_1 + 0x58) + uVar18 * 0x10);
    if (uVar19 == uVar12) {
      lVar2 = *(long *)(param_1 + 0x58) + uVar18 * 0x10;
      if (*(char *)(lVar2 + 9) != '\0') {
        uVar21 = (uint)*(byte *)(lVar2 + 8);
        goto LAB_00edee38;
      }
      break;
    }
  }
LAB_00edee04:
  uVar21 = *(uint *)(param_1 + 0x178);
  uVar1 = uVar21 + 1;
  if (uVar1 < 0x100) {
    *(uint *)(param_1 + 0x178) = uVar1;
    if (uVar1 <= *(uint *)(param_1 + 0x17c)) {
      uVar1 = *(uint *)(param_1 + 0x17c);
    }
    *(uint *)(param_1 + 0x17c) = uVar1;
    compileExpr((Compiler *)param_1,pAVar10,(uchar)uVar21,true);
LAB_00edee38:
    compileLValueIndex((Compiler *)param_1,(uchar)uVar21,*(AstExpr **)(param_2 + 0x28),in_x2);
    return;
  }
  goto LAB_00edeee0;
  while( true ) {
    uVar13 = uVar13 + 1;
    uVar18 = uVar13 + uVar18;
    if ((uVar19 == uVar15 || uVar16 <= uVar13) && (uVar19 == uVar15 || uVar13 != uVar16)) break;
LAB_00edec6c:
    uVar18 = uVar18 & uVar16;
    uVar19 = *(ulong *)(*(long *)(param_1 + 0x58) + uVar18 * 0x10);
    if (uVar19 == uVar12) {
      lVar2 = *(long *)(param_1 + 0x58) + uVar18 * 0x10;
      if (*(char *)(lVar2 + 9) != '\0') {
        uVar21 = (uint)*(byte *)(lVar2 + 8);
        goto LAB_00edecc8;
      }
      break;
    }
  }
  goto LAB_00edec94;
}


