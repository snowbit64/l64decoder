// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileExprIfElse
// Entry Point: 00eda3b4
// Size: 584 bytes
// Signature: undefined __cdecl compileExprIfElse(AstExprIfElse * param_1, uchar param_2, bool param_3)


/* Luau::Compiler::compileExprIfElse(Luau::AstExprIfElse*, unsigned char, bool) */

void Luau::Compiler::compileExprIfElse(AstExprIfElse *param_1,uchar param_2,bool param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  AstExpr *pAVar7;
  byte in_w3;
  AstExpr *pAVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  AstExpr *pAVar13;
  ulong *local_70;
  ulong *local_68;
  undefined8 local_60;
  long local_58;
  
  uVar6 = (ulong)param_2;
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  pAVar7 = *(AstExpr **)(uVar6 + 0x20);
  if ((*(long *)(param_1 + 0xe0) != 0) && (pAVar8 = *(AstExpr **)(param_1 + 0xe8), pAVar8 != pAVar7)
     ) {
    uVar11 = 0;
    uVar10 = (ulong)pAVar7 >> 4 ^ (ulong)pAVar7 >> 9;
    lVar1 = *(long *)(param_1 + 0xd0);
    uVar9 = *(long *)(param_1 + 0xd8) - 1;
    uVar12 = uVar10;
    do {
      uVar12 = uVar12 & uVar9;
      pAVar13 = *(AstExpr **)(lVar1 + uVar12 * 0x18);
      if (pAVar13 == pAVar7) {
        if (*(int *)(lVar1 + uVar12 * 0x18 + 8) != 0) {
          uVar11 = 0;
          goto LAB_00eda558;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      uVar12 = uVar11 + uVar12;
    } while (pAVar13 != pAVar8 && uVar11 < uVar9 || pAVar13 != pAVar8 && uVar11 == uVar9);
  }
  local_70 = (ulong *)0x0;
  local_68 = (ulong *)0x0;
  local_60 = 0;
                    /* try { // try from 00eda450 to 00eda477 has its CatchHandler @ 00eda604 */
  compileConditionValue((Compiler *)param_1,pAVar7,(uchar *)0x0,(vector *)&local_70,false);
  compileExpr((Compiler *)param_1,*(AstExpr **)(uVar6 + 0x30),param_3,(bool)(in_w3 & 1));
                    /* try { // try from 00eda47c to 00eda497 has its CatchHandler @ 00eda600 */
  uVar11 = BytecodeBuilder::emitLabel();
  BytecodeBuilder::emitAD(*(BytecodeBuilder **)param_1,0x17,'\0',0);
                    /* try { // try from 00eda49c to 00eda4b7 has its CatchHandler @ 00eda5fc */
  uVar12 = BytecodeBuilder::emitLabel();
  compileExpr((Compiler *)param_1,*(AstExpr **)(uVar6 + 0x40),param_3,(bool)(in_w3 & 1));
                    /* try { // try from 00eda4bc to 00eda4bf has its CatchHandler @ 00eda60c */
  uVar10 = BytecodeBuilder::emitLabel();
  puVar5 = local_68;
  for (puVar4 = local_70; puVar4 != puVar5; puVar4 = puVar4 + 1) {
                    /* try { // try from 00eda4d8 to 00eda4df has its CatchHandler @ 00eda608 */
    uVar9 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)param_1,*puVar4,uVar12);
    if ((uVar9 & 1) == 0) {
                    /* try { // try from 00eda5e0 to 00eda5fb has its CatchHandler @ 00eda60c */
                    /* WARNING: Subroutine does not return */
      CompileError::raise((Location *)(uVar6 + 0xc),
                          "Exceeded jump distance limit; simplify the code to compile");
    }
  }
                    /* try { // try from 00eda4f4 to 00eda4ff has its CatchHandler @ 00eda60c */
  uVar11 = BytecodeBuilder::patchJumpD(*(BytecodeBuilder **)param_1,uVar11,uVar10);
  if ((uVar11 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    CompileError::raise((Location *)(uVar6 + 0xc),
                        "Exceeded jump distance limit; simplify the code to compile");
  }
  if (local_70 != (ulong *)0x0) {
    local_68 = local_70;
    operator_delete(local_70);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
  goto LAB_00eda5bc;
  while( true ) {
    uVar11 = uVar11 + 1;
    uVar10 = uVar11 + uVar10;
    if ((pAVar13 == pAVar8 || uVar9 <= uVar11) && (pAVar13 == pAVar8 || uVar11 != uVar9)) break;
LAB_00eda558:
    uVar10 = uVar10 & uVar9;
    pAVar13 = *(AstExpr **)(lVar1 + uVar10 * 0x18);
    if (pAVar13 == pAVar7) {
      uVar2 = *(uint *)(lVar1 + uVar10 * 0x18 + 8);
      if ((1 < uVar2) && ((uVar2 != 2 || (*(char *)(lVar1 + uVar10 * 0x18 + 0x10) != '\0')))) {
        pAVar7 = *(AstExpr **)(uVar6 + 0x30);
        goto LAB_00eda59c;
      }
      break;
    }
  }
  pAVar7 = *(AstExpr **)(uVar6 + 0x40);
LAB_00eda59c:
  compileExpr((Compiler *)param_1,pAVar7,param_3,(bool)(in_w3 & 1));
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
LAB_00eda5bc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


