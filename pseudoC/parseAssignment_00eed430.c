// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseAssignment
// Entry Point: 00eed430
// Size: 1092 bytes
// Signature: undefined __thiscall parseAssignment(Parser * this, AstExpr * param_1)


/* Luau::Parser::parseAssignment(Luau::AstExpr*) */

AstStatAssign * __thiscall Luau::Parser::parseAssignment(Parser *this,AstExpr *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  AstExpr *pAVar5;
  AstStatAssign *this_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  Allocator *this_01;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  AstExpr *local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  AstExpr *local_b8;
  undefined8 uStack_b0;
  long *local_a8;
  long lStack_a0;
  ulong local_98;
  AstExpr *local_90;
  AstExpr **local_88;
  long lStack_80;
  ulong local_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  local_90 = param_1;
  if ((((iVar2 != AstRtti<Luau::AstExprLocal>::value) &&
       (iVar2 != AstRtti<Luau::AstExprGlobal>::value)) &&
      (iVar2 != AstRtti<Luau::AstExprIndexExpr>::value)) &&
     (iVar2 != AstRtti<Luau::AstExprIndexName>::value)) {
    local_88 = (AstExpr **)Allocator::allocate(*(Allocator **)(this + 0x80),8);
    *local_88 = param_1;
    lStack_80 = 1;
    local_90 = (AstExpr *)
               reportExprError((Location *)this,(AstArray *)(param_1 + 0xc),(char *)&local_88,
                               "Assigned expression must be a variable or a field");
  }
  local_a8 = (long *)(this + 0x1a8);
  local_98 = 0;
  lStack_a0 = *(long *)(this + 0x1b0) - *(long *)(this + 0x1a8) >> 3;
                    /* try { // try from 00eed508 to 00eed513 has its CatchHandler @ 00eed880 */
  TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_a8,&local_90);
  iVar2 = *(int *)(this + 0x28);
  while (iVar2 == 0x2c) {
                    /* try { // try from 00eed52c to 00eed533 has its CatchHandler @ 00eed890 */
    nextLexeme();
                    /* try { // try from 00eed534 to 00eed53f has its CatchHandler @ 00eed898 */
    pAVar5 = (AstExpr *)parsePrimaryExpr(this,true);
    iVar2 = *(int *)(pAVar5 + 8);
    local_b8 = pAVar5;
    if (((iVar2 != AstRtti<Luau::AstExprLocal>::value) &&
        (iVar2 != AstRtti<Luau::AstExprGlobal>::value)) &&
       ((iVar2 != AstRtti<Luau::AstExprIndexExpr>::value &&
        (iVar2 != AstRtti<Luau::AstExprIndexName>::value)))) {
                    /* try { // try from 00eed580 to 00eed5a3 has its CatchHandler @ 00eed888 */
      local_88 = (AstExpr **)Allocator::allocate(*(Allocator **)(this + 0x80),8);
      *local_88 = pAVar5;
      lStack_80 = 1;
      local_b8 = (AstExpr *)
                 reportExprError((Location *)this,(AstArray *)(pAVar5 + 0xc),(char *)&local_88,
                                 "Assigned expression must be a variable or a field");
    }
                    /* try { // try from 00eed5a8 to 00eed5b3 has its CatchHandler @ 00eed898 */
    TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_a8,&local_b8);
    iVar2 = *(int *)(this + 0x28);
  }
  if (iVar2 == 0x3d) {
                    /* try { // try from 00eed5c8 to 00eed60f has its CatchHandler @ 00eed880 */
    nextLexeme();
  }
  else {
    expectAndConsumeFail(this,0x3d,"assignment");
    Lexer::lookahead();
    if ((int)local_88 == 0x3d) {
      nextLexeme();
      nextLexeme();
    }
  }
  local_88 = (AstExpr **)(this + 0x1c0);
  local_78 = 0;
  lStack_80 = *(long *)(this + 0x1c8) - *(long *)(this + 0x1c0) >> 3;
                    /* try { // try from 00eed628 to 00eed643 has its CatchHandler @ 00eed878 */
  local_b8 = (AstExpr *)parseExpr(this,0);
  TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_88,&local_b8);
  while (uVar7 = local_98, lVar1 = lStack_a0, *(int *)(this + 0x28) == 0x2c) {
                    /* try { // try from 00eed650 to 00eed673 has its CatchHandler @ 00eed8a0 */
    nextLexeme();
    local_b8 = (AstExpr *)parseExpr(this,0);
    TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_88,&local_b8);
  }
  this_01 = *(Allocator **)(this + 0x80);
  local_b8 = *(AstExpr **)(local_90 + 0xc);
  uStack_b0 = *(undefined8 *)(*(long *)(local_88[1] + -8) + 0x14);
  if (local_98 == 0) {
    local_c8 = 0;
  }
  else {
    lVar12 = *local_a8;
                    /* try { // try from 00eed6a8 to 00eed6af has its CatchHandler @ 00eed874 */
    local_c8 = Allocator::allocate(this_01,local_98 << 3);
    if ((uVar7 < 4) ||
       ((local_c8 < lVar12 + (uVar7 + lVar1) * 8 &&
        ((ulong)(lVar12 + lVar1 * 8) < local_c8 + uVar7 * 8)))) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar7 & 0xfffffffffffffffc;
      puVar8 = (undefined8 *)(local_c8 + 0x10);
      puVar10 = (undefined8 *)(lVar12 + lVar1 * 8 + 0x10);
      uVar11 = uVar6;
      do {
        puVar4 = puVar10 + -1;
        uVar13 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar11 = uVar11 - 4;
        puVar8[-1] = *puVar4;
        puVar8[-2] = uVar13;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + 4;
      } while (uVar11 != 0);
      if (uVar7 == uVar6) goto LAB_00eed704;
    }
    lVar9 = uVar7 - uVar6;
    puVar8 = (undefined8 *)(local_c8 + uVar6 * 8);
    puVar10 = (undefined8 *)(lVar12 + (uVar6 + lVar1) * 8);
    do {
      lVar9 = lVar9 + -1;
      *puVar8 = *puVar10;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
LAB_00eed704:
  uVar6 = local_78;
  lVar1 = lStack_80;
  uStack_c0 = uVar7;
  if (local_78 == 0) {
    local_d8 = (AstExpr *)0x0;
  }
  else {
    pAVar5 = *local_88;
                    /* try { // try from 00eed720 to 00eed79b has its CatchHandler @ 00eed87c */
    local_d8 = (AstExpr *)Allocator::allocate(*(Allocator **)(this + 0x80),local_78 << 3);
    if ((uVar6 < 4) ||
       ((local_d8 < pAVar5 + (uVar6 + lVar1) * 8 && (pAVar5 + lVar1 * 8 < local_d8 + uVar6 * 8)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xfffffffffffffffc;
      puVar8 = (undefined8 *)(local_d8 + 0x10);
      puVar10 = (undefined8 *)(pAVar5 + lVar1 * 8 + 0x10);
      uVar11 = uVar7;
      do {
        puVar4 = puVar10 + -1;
        uVar13 = puVar10[-2];
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        puVar10 = puVar10 + 4;
        uVar11 = uVar11 - 4;
        puVar8[-1] = *puVar4;
        puVar8[-2] = uVar13;
        puVar8[1] = uVar15;
        *puVar8 = uVar14;
        puVar8 = puVar8 + 4;
      } while (uVar11 != 0);
      if (uVar6 == uVar7) goto LAB_00eed778;
    }
    lVar12 = uVar6 - uVar7;
    puVar8 = (undefined8 *)(local_d8 + uVar7 * 8);
    puVar10 = (undefined8 *)(pAVar5 + (uVar7 + lVar1) * 8);
    do {
      lVar12 = lVar12 + -1;
      *puVar8 = *puVar10;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar12 != 0);
  }
LAB_00eed778:
  uStack_d0 = uVar6;
  this_00 = (AstStatAssign *)Allocator::allocate(this_01,0x40);
  AstStatAssign::AstStatAssign
            (this_00,(Location *)&local_b8,(AstArray *)&local_c8,(AstArray *)&local_d8);
  if (*local_88 + lStack_80 * 8 != local_88[1]) {
    local_88[1] = *local_88 + lStack_80 * 8;
  }
  lVar1 = *local_a8 + lStack_a0 * 8;
  if (lVar1 != local_a8[1]) {
    local_a8[1] = lVar1;
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


