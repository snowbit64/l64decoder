// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprBinary
// Entry Point: 00ed9d40
// Size: 1576 bytes
// Signature: undefined __thiscall compileExprBinary(Compiler * this, AstExprBinary * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileExprBinary(Luau::AstExprBinary*, unsigned char, bool) */

void __thiscall
Luau::Compiler::compileExprBinary(Compiler *this,AstExprBinary *param_1,uchar param_2,bool param_3)

{
  uint uVar1;
  LuauOpcode LVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  AstExpr *pAVar10;
  char cVar11;
  ulong uVar12;
  ulong uVar13;
  AstExpr *pAVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  uchar uVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  uVar6 = *(undefined4 *)(this + 0x178);
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
    if (*(long *)(this + 0xe0) != 0) {
      uVar9 = *(ulong *)(param_1 + 0x28);
      uVar8 = *(ulong *)(this + 0xe8);
      if (uVar8 != uVar9) {
        lVar3 = *(long *)(this + 0xd0);
        uVar12 = 0;
        uVar16 = uVar9 >> 4 ^ uVar9 >> 9;
        uVar13 = *(long *)(this + 0xd8) - 1;
        do {
          uVar16 = uVar16 & uVar13;
          uVar17 = *(ulong *)(lVar3 + uVar16 * 0x18);
          if (uVar17 == uVar9) {
            if (*(int *)(lVar3 + uVar16 * 0x18 + 8) == 3) {
                    /* try { // try from 00ed9f3c to 00ed9f3f has its CatchHandler @ 00eda36c */
              uVar19 = BytecodeBuilder::addConstantNumber
                                 (*(BytecodeBuilder **)this,
                                  *(double *)(lVar3 + uVar16 * 0x18 + 0x10));
              if ((int)uVar19 < 0) {
                    /* try { // try from 00eda340 to 00eda34b has its CatchHandler @ 00eda36c */
                    /* WARNING: Subroutine does not return */
                CompileError::raise((Location *)(uVar9 + 0xc),
                                    "Exceeded constant limit; simplify the code to compile");
              }
              if (uVar19 < 0x100) {
                pAVar10 = *(AstExpr **)(param_1 + 0x20);
                iVar15 = *(int *)(pAVar10 + 8);
                pAVar14 = pAVar10;
                if ((pAVar10 == (AstExpr *)0x0) || (iVar15 != AstRtti<Luau::AstExprLocal>::value))
                goto LAB_00ed9f90;
                goto LAB_00ed9fb4;
              }
            }
            break;
          }
          uVar12 = uVar12 + 1;
          uVar16 = uVar12 + uVar16;
        } while (uVar17 != uVar8 && uVar12 < uVar13 || uVar17 != uVar8 && uVar12 == uVar13);
      }
    }
    pAVar10 = *(AstExpr **)(param_1 + 0x20);
    iVar15 = *(int *)(pAVar10 + 8);
    pAVar14 = pAVar10;
    while ((pAVar14 == (AstExpr *)0x0 || (iVar15 != AstRtti<Luau::AstExprLocal>::value))) {
      if ((iVar15 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar15 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00eda11c;
      pAVar14 = *(AstExpr **)(pAVar14 + 0x20);
      iVar15 = *(int *)(pAVar14 + 8);
    }
    if (*(long *)(this + 0x68) != 0) {
      uVar8 = *(ulong *)(pAVar14 + 0x20);
      uVar9 = *(ulong *)(this + 0x70);
      if (uVar8 != uVar9) {
        uVar12 = 0;
        uVar16 = uVar8 >> 4 ^ uVar8 >> 9;
        uVar13 = *(long *)(this + 0x60) - 1;
        goto LAB_00eda0f4;
      }
    }
    goto LAB_00eda11c;
  case 6:
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 00ed9e8c to 00ed9e93 has its CatchHandler @ 00eda374 */
    local_80 = (undefined8 *)operator_new(0x10);
    local_78 = local_80 + 2;
    *local_80 = uVar4;
    local_80[1] = uVar5;
    puStack_70 = local_78;
                    /* try { // try from 00ed9ea4 to 00ed9eab has its CatchHandler @ 00eda370 */
    unrollConcats((vector *)&local_80);
    iVar15 = *(int *)(this + 0x178);
    uVar8 = (ulong)((long)local_78 - (long)local_80) >> 3;
    uVar19 = iVar15 + (int)uVar8;
    if (0xff < uVar19) {
                    /* try { // try from 00eda32c to 00eda33b has its CatchHandler @ 00eda378 */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Out of registers when trying to allocate %d registers: exceeded limit %d"
                          ,uVar8,0xff);
    }
    *(uint *)(this + 0x178) = uVar19;
    if (uVar19 <= *(uint *)(this + 0x17c)) {
      uVar19 = *(uint *)(this + 0x17c);
    }
    *(uint *)(this + 0x17c) = uVar19;
    uVar18 = (uchar)iVar15;
    if ((long)local_78 - (long)local_80 == 0) {
      cVar11 = '\0';
    }
    else {
      uVar8 = 0;
      do {
                    /* try { // try from 00ed9eec to 00ed9ef7 has its CatchHandler @ 00eda38c */
        compileExpr(this,(AstExpr *)local_80[uVar8],(char)uVar8 + uVar18,true);
        uVar8 = uVar8 + 1;
      } while (uVar8 < (ulong)((long)local_78 - (long)local_80 >> 3));
      cVar11 = (char)((ulong)((long)local_78 - (long)local_80) >> 3);
    }
                    /* try { // try from 00eda2c0 to 00eda2cf has its CatchHandler @ 00eda378 */
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,0x31,param_2,uVar18,uVar18 + cVar11 + 0xff);
    if (local_80 != (undefined8 *)0x0) {
      local_78 = local_80;
      operator_delete(local_80);
    }
    break;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
                    /* try { // try from 00ed9dfc to 00ed9e27 has its CatchHandler @ 00eda384 */
    uVar8 = compileCompareJump(this,param_1,false);
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,3,param_2,'\0','\x01');
                    /* try { // try from 00ed9e2c to 00ed9e6f has its CatchHandler @ 00eda3a4 */
    uVar9 = BytecodeBuilder::emitLabel();
    BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,3,param_2,'\x01','\0');
    uVar8 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)this,uVar8,uVar9);
    if ((uVar8 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(param_1 + 0xc),
                          "Exceeded jump distance limit; simplify the code to compile");
    }
    break;
  case 0xd:
  case 0xe:
                    /* try { // try from 00ed9e70 to 00ed9e83 has its CatchHandler @ 00eda37c */
    compileExprAndOr(this,param_1,param_2,param_3);
  }
  goto switchD_00ed9d9c_caseD_f;
  while( true ) {
    pAVar14 = *(AstExpr **)(pAVar14 + 0x20);
    iVar15 = *(int *)(pAVar14 + 8);
    if ((pAVar14 != (AstExpr *)0x0) && (iVar15 == AstRtti<Luau::AstExprLocal>::value)) break;
LAB_00ed9f90:
    if ((iVar15 != AstRtti<Luau::AstExprGroup>::value) &&
       (iVar15 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00eda008;
  }
LAB_00ed9fb4:
  if (*(long *)(this + 0x68) != 0) {
    uVar8 = *(ulong *)(pAVar14 + 0x20);
    uVar9 = *(ulong *)(this + 0x70);
    if (uVar8 != uVar9) {
      uVar12 = 0;
      uVar16 = uVar8 >> 4 ^ uVar8 >> 9;
      uVar13 = *(long *)(this + 0x60) - 1;
      do {
        uVar16 = uVar16 & uVar13;
        uVar17 = *(ulong *)(*(long *)(this + 0x58) + uVar16 * 0x10);
        if (uVar17 == uVar8) {
          lVar3 = *(long *)(this + 0x58) + uVar16 * 0x10;
          if (*(char *)(lVar3 + 9) != '\0') {
            uVar20 = (uint)*(byte *)(lVar3 + 8);
            goto LAB_00eda03c;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        uVar16 = uVar12 + uVar16;
      } while (uVar17 != uVar9 && uVar12 < uVar13 || uVar17 != uVar9 && uVar12 == uVar13);
    }
  }
LAB_00eda008:
  uVar20 = *(uint *)(this + 0x178);
  uVar1 = uVar20 + 1;
  if (0xff < uVar1) {
                    /* try { // try from 00eda350 to 00eda363 has its CatchHandler @ 00eda368 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar10 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar1;
  if (uVar1 <= *(uint *)(this + 0x17c)) {
    uVar1 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar1;
                    /* try { // try from 00eda02c to 00eda05f has its CatchHandler @ 00eda368 */
  compileExpr(this,pAVar10,(uchar)uVar20,true);
LAB_00eda03c:
  LVar2 = *(uint *)(param_1 + 0x1c) + 0x27;
  if (5 < *(uint *)(param_1 + 0x1c)) {
    LVar2 = 0;
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar2,param_2,(uchar)uVar20,(uchar)uVar19);
  goto switchD_00ed9d9c_caseD_f;
  while( true ) {
    uVar12 = uVar12 + 1;
    uVar16 = uVar12 + uVar16;
    if ((uVar17 == uVar9 || uVar13 <= uVar12) && (uVar17 == uVar9 || uVar12 != uVar13)) break;
LAB_00eda0f4:
    uVar16 = uVar16 & uVar13;
    uVar17 = *(ulong *)(*(long *)(this + 0x58) + uVar16 * 0x10);
    if (uVar17 == uVar8) {
      lVar3 = *(long *)(this + 0x58) + uVar16 * 0x10;
      if (*(char *)(lVar3 + 9) != '\0') {
        uVar19 = (uint)*(byte *)(lVar3 + 8);
        pAVar14 = *(AstExpr **)(param_1 + 0x28);
        iVar15 = *(int *)(pAVar14 + 8);
        if (pAVar14 != (AstExpr *)0x0) goto LAB_00eda168;
        goto LAB_00eda174;
      }
      break;
    }
  }
LAB_00eda11c:
  uVar19 = *(uint *)(this + 0x178);
  uVar20 = uVar19 + 1;
  if (0xff < uVar20) {
                    /* try { // try from 00eda2fc to 00eda30f has its CatchHandler @ 00eda380 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar10 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar20;
  if (uVar20 <= *(uint *)(this + 0x17c)) {
    uVar20 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar20;
                    /* try { // try from 00eda140 to 00eda14f has its CatchHandler @ 00eda380 */
  compileExpr(this,pAVar10,(uchar)uVar19,true);
  pAVar14 = *(AstExpr **)(param_1 + 0x28);
  iVar15 = *(int *)(pAVar14 + 8);
  if (pAVar14 == (AstExpr *)0x0) {
LAB_00eda174:
    uVar18 = (uchar)uVar19;
    pAVar10 = pAVar14;
    do {
      if ((iVar15 != AstRtti<Luau::AstExprGroup>::value) &&
         (iVar15 != AstRtti<Luau::AstExprTypeAssertion>::value)) goto LAB_00eda1f0;
      pAVar10 = *(AstExpr **)(pAVar10 + 0x20);
      iVar15 = *(int *)(pAVar10 + 8);
    } while ((pAVar10 == (AstExpr *)0x0) || (iVar15 != AstRtti<Luau::AstExprLocal>::value));
  }
  else {
LAB_00eda168:
    uVar18 = (uchar)uVar19;
    pAVar10 = pAVar14;
    if (iVar15 != AstRtti<Luau::AstExprLocal>::value) goto LAB_00eda174;
  }
  if (*(long *)(this + 0x68) != 0) {
    uVar8 = *(ulong *)(pAVar10 + 0x20);
    uVar9 = *(ulong *)(this + 0x70);
    if (uVar8 != uVar9) {
      uVar12 = 0;
      uVar16 = uVar8 >> 4 ^ uVar8 >> 9;
      uVar13 = *(long *)(this + 0x60) - 1;
      do {
        uVar16 = uVar16 & uVar13;
        uVar17 = *(ulong *)(*(long *)(this + 0x58) + uVar16 * 0x10);
        if (uVar17 == uVar8) {
          lVar3 = *(long *)(this + 0x58) + uVar16 * 0x10;
          if (*(char *)(lVar3 + 9) != '\0') {
            uVar19 = (uint)*(byte *)(lVar3 + 8);
            goto LAB_00eda224;
          }
          break;
        }
        uVar12 = uVar12 + 1;
        uVar16 = uVar12 + uVar16;
      } while (uVar17 != uVar9 && uVar12 < uVar13 || uVar17 != uVar9 && uVar12 == uVar13);
    }
  }
LAB_00eda1f0:
  uVar19 = *(uint *)(this + 0x178);
  uVar20 = uVar19 + 1;
  if (0xff < uVar20) {
                    /* try { // try from 00eda314 to 00eda327 has its CatchHandler @ 00eda388 */
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(pAVar14 + 0xc),
                        "Out of registers when trying to allocate %d registers: exceeded limit %d",1
                        ,0xff);
  }
  *(uint *)(this + 0x178) = uVar20;
  if (uVar20 <= *(uint *)(this + 0x17c)) {
    uVar20 = *(uint *)(this + 0x17c);
  }
  *(uint *)(this + 0x17c) = uVar20;
                    /* try { // try from 00eda214 to 00eda247 has its CatchHandler @ 00eda388 */
  compileExpr(this,pAVar14,(uchar)uVar19,true);
LAB_00eda224:
  LVar2 = *(uint *)(param_1 + 0x1c) + 0x21;
  if (5 < *(uint *)(param_1 + 0x1c)) {
    LVar2 = 0;
  }
  BytecodeBuilder::emitABC(*(BytecodeBuilder **)this,LVar2,param_2,uVar18,(uchar)uVar19);
switchD_00ed9d9c_caseD_f:
  *(undefined4 *)(this + 0x178) = uVar6;
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


