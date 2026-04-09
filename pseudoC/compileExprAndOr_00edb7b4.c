// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprAndOr
// Entry Point: 00edb7b4
// Size: 1380 bytes
// Signature: undefined __thiscall compileExprAndOr(Compiler * this, AstExprBinary * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileExprAndOr(Luau::AstExprBinary*, unsigned char, bool) */

void __thiscall
Luau::Compiler::compileExprAndOr(Compiler *this,AstExprBinary *param_1,uchar param_2,bool param_3)

{
  uint uVar1;
  ulong *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  uchar uVar7;
  long lVar8;
  ulong *puVar9;
  bool bVar10;
  uint uVar11;
  AstExpr *pAVar12;
  LuauOpcode LVar13;
  AstExpr *pAVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  AstExpr *pAVar20;
  ulong uVar21;
  ulong uVar22;
  uint uVar23;
  ulong *local_88;
  ulong *local_80;
  undefined8 local_78;
  uchar local_6c [4];
  long local_68;
  
  uVar23 = (uint)param_2;
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar6 = *(undefined4 *)(this + 0x178);
  if (*(long *)(this + 0xe0) == 0) {
    pAVar12 = *(AstExpr **)(param_1 + 0x20);
  }
  else {
    pAVar12 = *(AstExpr **)(param_1 + 0x20);
    pAVar14 = *(AstExpr **)(this + 0xe8);
    if (pAVar12 != pAVar14) {
      lVar4 = *(long *)(this + 0xd0);
      uVar15 = 0;
      uVar17 = *(long *)(this + 0xd8) - 1;
      uVar16 = (ulong)pAVar12 >> 4 ^ (ulong)pAVar12 >> 9;
      do {
        uVar16 = uVar16 & uVar17;
        pAVar20 = *(AstExpr **)(lVar4 + uVar16 * 0x18);
        if (pAVar20 == pAVar12) {
          iVar19 = *(int *)(lVar4 + uVar16 * 0x18 + 8);
          if (iVar19 != 0) {
            if (iVar19 == 1) {
              bVar10 = false;
            }
            else if (iVar19 == 2) {
              bVar10 = *(char *)(lVar4 + uVar16 * 0x18 + 0x10) != '\0';
            }
            else {
              bVar10 = true;
            }
            lVar4 = 0x20;
            if (!(bool)(iVar5 == 0xd ^ bVar10)) {
              lVar4 = 0x28;
            }
                    /* try { // try from 00edbc80 to 00edbc8f has its CatchHandler @ 00edbd28 */
            compileExpr(this,*(AstExpr **)(param_1 + lVar4),param_2,param_3);
            goto LAB_00edbafc;
          }
          break;
        }
        uVar15 = uVar15 + 1;
        uVar16 = uVar15 + uVar16;
      } while (pAVar20 != pAVar14 && uVar15 < uVar17 || pAVar20 != pAVar14 && uVar15 == uVar17);
    }
  }
                    /* try { // try from 00edb85c to 00edb863 has its CatchHandler @ 00edbd48 */
  uVar15 = isConditionFast(this,pAVar12);
  if ((uVar15 & 1) == 0) {
    pAVar14 = *(AstExpr **)(param_1 + 0x28);
    iVar19 = *(int *)(pAVar14 + 8);
    pAVar12 = pAVar14;
    while ((pAVar12 == (AstExpr *)0x0 || (iVar19 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar19 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar19 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edb920;
      pAVar12 = *(AstExpr **)(pAVar12 + 0x20);
      iVar19 = *(int *)(pAVar12 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar16 = *(ulong *)(pAVar12 + 0x20);
      uVar15 = *(ulong *)(this + 0x70);
      if (uVar16 != uVar15) {
        lVar4 = *(long *)(this + 0x58);
        uVar17 = 0;
        uVar21 = uVar16 >> 4 ^ uVar16 >> 9;
        uVar18 = *(long *)(this + 0x60) - 1;
        goto LAB_00edb8f8;
      }
    }
    goto LAB_00edb920;
  }
  goto LAB_00edba2c;
  while( true ) {
    pAVar12 = *(AstExpr **)(pAVar12 + 0x20);
    iVar19 = *(int *)(pAVar12 + 8);
    if ((pAVar12 != (AstExpr *)0x0) && (iVar19 == AstRtti<Luau::AstExprLocal>::value)) break;
LAB_00edbb98:
    if ((iVar19 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar19 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edbbfc;
  }
LAB_00edbbbc:
  uVar16 = *(ulong *)(pAVar12 + 0x20);
  if (uVar16 != uVar15) {
    uVar17 = 0;
    uVar21 = uVar16 >> 4 ^ uVar16 >> 9;
    do {
      uVar21 = uVar21 & uVar18;
      uVar22 = *(ulong *)(lVar4 + uVar21 * 0x10);
      if (uVar22 == uVar16) {
        lVar4 = lVar4 + uVar21 * 0x10;
        if (*(char *)(lVar4 + 9) != '\0') {
          uVar23 = (uint)*(byte *)(lVar4 + 8);
          goto LAB_00edbc30;
        }
        break;
      }
      uVar17 = uVar17 + 1;
      uVar21 = uVar17 + uVar21;
    } while (uVar22 != uVar15 && uVar17 < uVar18 || uVar22 != uVar15 && uVar17 == uVar18);
  }
LAB_00edbbfc:
  uVar23 = *(uint *)(this + 0x178);
  uVar11 = uVar23 + 1;
  if (0xff < uVar11) {
                    /* try { // try from 00edbd00 to 00edbd13 has its CatchHandler @ 00edbd20 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar14 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar11;
  if (uVar11 <= *(uint *)(this + 0x17c)) {
    uVar11 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar11;
                    /* try { // try from 00edbc20 to 00edbc2f has its CatchHandler @ 00edbd20 */
  compileExpr(this,pAVar14,(uchar)uVar23,true);
LAB_00edbc30:
  LVar13 = 0x2d;
  if (iVar5 != 0xd) {
    LVar13 = 0x2e;
  }
                    /* try { // try from 00edbc40 to 00edbc4f has its CatchHandler @ 00edbd18 */
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar13,param_2,(uchar)uVar23,uVar7);
  goto LAB_00edbafc;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar21 = uVar17 + uVar21;
    if ((uVar22 == uVar16 || uVar18 <= uVar17) && (uVar22 == uVar16 || uVar17 != uVar18)) break;
LAB_00edb9ac:
    uVar21 = uVar21 & uVar18;
    uVar22 = *(ulong *)(*(long *)(this + 0x58) + uVar21 * 0x10);
    if (uVar22 == uVar15) {
      lVar4 = *(long *)(this + 0x58) + uVar21 * 0x10;
      if (*(char *)(lVar4 + 9) != '\0') {
        uVar23 = (uint)*(byte *)(lVar4 + 8);
        goto LAB_00edba08;
      }
      break;
    }
  }
LAB_00edb9d4:
  uVar23 = *(uint *)(this + 0x178);
  uVar1 = uVar23 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00edbce8 to 00edbcfb has its CatchHandler @ 00edbd40 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar14 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00edb9f8 to 00edba27 has its CatchHandler @ 00edbd40 */
  compileExpr(this,pAVar14,(uchar)uVar23,true);
LAB_00edba08:
  LVar13 = 0x2f;
  if (iVar5 != 0xd) {
    LVar13 = 0x30;
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar13,param_2,(uchar)uVar23,(uchar)uVar11);
  goto LAB_00edbafc;
  while( true ) {
    uVar17 = uVar17 + 1;
    uVar21 = uVar17 + uVar21;
    if ((uVar22 == uVar15 || uVar18 <= uVar17) && (uVar22 == uVar15 || uVar17 != uVar18)) break;
LAB_00edb8f8:
    uVar21 = uVar21 & uVar18;
    uVar22 = *(ulong *)(lVar4 + uVar21 * 0x10);
    if (uVar22 == uVar16) {
      lVar3 = lVar4 + uVar21 * 0x10;
      if (*(char *)(lVar3 + 9) != '\0') {
        pAVar14 = *(AstExpr **)(param_1 + 0x20);
        uVar7 = *(uchar *)(lVar3 + 8);
        iVar19 = *(int *)(pAVar14 + 8);
        pAVar12 = pAVar14;
        if ((pAVar14 == (AstExpr *)0x0) || (iVar19 != AstRtti<Luau::AstExprLocal>::value))
        goto LAB_00edbb98;
        goto LAB_00edbbbc;
      }
      break;
    }
  }
LAB_00edb920:
                    /* try { // try from 00edb920 to 00edb927 has its CatchHandler @ 00edbd38 */
  uVar11 = getConstantIndex(this,pAVar14);
  if (uVar11 < 0x100) {
    pAVar14 = *(AstExpr **)(param_1 + 0x20);
    iVar19 = *(int *)(pAVar14 + 8);
    pAVar12 = pAVar14;
    while ((pAVar12 == (AstExpr *)0x0 || (iVar19 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar19 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar19 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00edb9d4;
      pAVar12 = *(AstExpr **)(pAVar12 + 0x20);
      iVar19 = *(int *)(pAVar12 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar15 = *(ulong *)(pAVar12 + 0x20);
      uVar16 = *(ulong *)(this + 0x70);
      if (uVar15 != uVar16) {
        uVar17 = 0;
        uVar21 = uVar15 >> 4 ^ uVar15 >> 9;
        uVar18 = *(long *)(this + 0x60) - 1;
        goto LAB_00edb9ac;
      }
    }
    goto LAB_00edb9d4;
  }
LAB_00edba2c:
  if (!param_3) {
    uVar23 = *(uint *)(this + 0x178);
    uVar11 = uVar23 + 1;
    if (0xff < uVar11) {
                    /* try { // try from 00edbcd0 to 00edbce3 has its CatchHandler @ 00edbd30 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,1,0xff);
    }
    *(uint *)(this + 0x178) = uVar11;
    if (uVar11 <= *(uint *)(this + 0x17c)) {
      uVar11 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar11;
  }
  local_6c[0] = (uchar)uVar23;
  local_88 = (ulong *)0x0;
  local_80 = (ulong *)0x0;
  local_78 = 0;
                    /* try { // try from 00edba70 to 00edba93 has its CatchHandler @ 00edbd50 */
  compileConditionValue
            (this,*(AstExpr **)(param_1 + 0x20),local_6c,(vector *)&local_88,iVar5 != 0xd);
  compileExpr(this,*(AstExpr **)(param_1 + 0x28),local_6c[0],true);
                    /* try { // try from 00edba98 to 00edba9b has its CatchHandler @ 00edbd58 */
  uVar15 = BytecodeBuilder::emitLabel();
  puVar9 = local_80;
  for (puVar2 = local_88; puVar2 != puVar9; puVar2 = puVar2 + 1) {
                    /* try { // try from 00edbab4 to 00edbabb has its CatchHandler @ 00edbd54 */
    uVar16 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,*puVar2,uVar15);
    if ((uVar16 & 1) == 0) {
                    /* try { // try from 00edbcc0 to 00edbccb has its CatchHandler @ 00edbd58 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded jump distance limit; simplify the code to compile");
    }
  }
  if (local_6c[0] != param_2) {
                    /* try { // try from 00edbadc to 00edbaeb has its CatchHandler @ 00edbd58 */
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,6,param_2,local_6c[0],'\0');
  }
  if (local_88 != (ulong *)0x0) {
    local_80 = local_88;
    operator_delete(local_88);
  }
LAB_00edbafc:
  *(undefined4 *)(this + 0x178) = uVar6;
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


