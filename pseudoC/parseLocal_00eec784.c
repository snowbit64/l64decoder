// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseLocal
// Entry Point: 00eec784
// Size: 1484 bytes
// Signature: undefined parseLocal(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseLocal() */

AstStatLocalFunction * Luau::Parser::parseLocal(void)

{
  long lVar1;
  int iVar2;
  Parser PVar3;
  long lVar4;
  undefined8 *puVar5;
  Parser *in_x0;
  AstStatLocalFunction *this;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  Allocator *this_00;
  long **pplVar15;
  long *plVar16;
  long lVar17;
  long **pplVar18;
  undefined8 uVar19;
  undefined auVar20 [16];
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  long lStack_b8;
  ulong local_b0;
  long *local_a8;
  long *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 local_78;
  long *local_70;
  undefined8 uStack_68;
  undefined local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  pplVar18 = (long **)(in_x0 + 0x2c);
  plVar16 = *pplVar18;
  nextLexeme();
  pplVar15 = (long **)(in_x0 + 0x28);
  iVar2 = *(int *)pplVar15;
  if (iVar2 == 0x127) {
    uStack_88 = *(long **)(in_x0 + 0x30);
    local_90 = *pplVar15;
    local_78 = *(undefined8 *)(in_x0 + 0x40);
    local_80 = *(ulong *)(in_x0 + 0x38);
    nextLexeme();
    if (local_90._4_4_ == (int)plVar16) {
      uStack_88 = (long *)CONCAT44(uStack_88._4_4_,(int)((ulong)plVar16 >> 0x20));
    }
    if (*(int *)(in_x0 + 0x28) == 0x117) {
      plStack_98 = *(long **)(in_x0 + 0x34);
      local_a0 = *pplVar18;
      plVar13 = *(long **)(in_x0 + 0x40);
      nextLexeme();
      local_a8 = plVar13;
    }
    else {
      reportNameError(in_x0,"variable name");
      local_a8 = *(long **)(in_x0 + 0xd0);
      local_a0 = *(long **)(in_x0 + 0x2c);
      plStack_98 = local_a0;
    }
    *(int *)(*(long *)(in_x0 + 0x160) + 0x490) = *(int *)(*(long *)(in_x0 + 0x160) + 0x490) + 1;
    auVar20 = parseFunctionBody(in_x0,false,(Lexeme *)&local_90,(AstName *)&local_a8,
                                (Name *)&local_a8);
    *(int *)(*(long *)(in_x0 + 0x160) + 0x490) = *(int *)(*(long *)(in_x0 + 0x160) + 0x490) + -1;
    lStack_b8 = *(long *)(auVar20._0_8_ + 0x14);
    local_c0 = plVar16;
    this = (AstStatLocalFunction *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x30);
    AstStatLocalFunction::AstStatLocalFunction
              (this,(Location *)&local_c0,auVar20._8_8_,auVar20._0_8_);
    goto LAB_00eeccac;
  }
  local_a8 = (long *)(in_x0 + 0x208);
  plStack_98 = (long *)0x0;
  *(int *)(*(long *)(in_x0 + 0x160) + 0xf4) = *(int *)(*(long *)(in_x0 + 0x160) + 0xf4) + 1;
  local_a0 = (long *)(*(long *)(in_x0 + 0x210) - *(long *)(in_x0 + 0x208) >> 5);
  if (iVar2 == 0x117) {
    lStack_b8 = *(long *)(in_x0 + 0x34);
    local_c0 = *pplVar18;
    uVar14 = *(undefined8 *)(in_x0 + 0x40);
                    /* try { // try from 00eec858 to 00eec85f has its CatchHandler @ 00eecd5c */
    nextLexeme();
    PVar3 = *in_x0;
  }
  else {
                    /* try { // try from 00eec8fc to 00eec95f has its CatchHandler @ 00eecd5c */
    reportNameError(in_x0,"variable name");
    lStack_b8 = *(long *)(in_x0 + 0x34);
    local_c0 = *pplVar18;
    uVar14 = *(undefined8 *)(in_x0 + 0xd0);
    PVar3 = *in_x0;
  }
  local_78 = 0;
  if ((PVar3 != (Parser)0x0) && (local_78 = 0, *(int *)(in_x0 + 0x28) == 0x3a)) {
    nextLexeme();
    local_78 = parseTypeAnnotation();
  }
  local_80 = lStack_b8;
  uStack_88 = local_c0;
  local_90 = (long *)uVar14;
  TempVector<Luau::Parser::Binding>::push_back
            ((TempVector<Luau::Parser::Binding> *)&local_a8,(Binding *)&local_90);
  iVar2 = *(int *)(in_x0 + 0x28);
  while (iVar2 == 0x2c) {
                    /* try { // try from 00eec978 to 00eeca0b has its CatchHandler @ 00eecd7c */
    nextLexeme();
    if (*(int *)(in_x0 + 0x28) == 0x117) {
      lStack_b8 = *(long *)(in_x0 + 0x34);
      local_c0 = *pplVar18;
      uVar14 = *(undefined8 *)(in_x0 + 0x40);
      nextLexeme();
      PVar3 = *in_x0;
    }
    else {
      reportNameError(in_x0,"variable name");
      lStack_b8 = *(long *)(in_x0 + 0x34);
      local_c0 = *pplVar18;
      uVar14 = *(undefined8 *)(in_x0 + 0xd0);
      PVar3 = *in_x0;
    }
    uVar6 = 0;
    if ((PVar3 != (Parser)0x0) && (uVar6 = 0, *(int *)(in_x0 + 0x28) == 0x3a)) {
      nextLexeme();
      uVar6 = parseTypeAnnotation();
    }
    local_80 = lStack_b8;
    uStack_88 = local_c0;
    local_90 = (long *)uVar14;
    local_78 = uVar6;
    TempVector<Luau::Parser::Binding>::push_back
              ((TempVector<Luau::Parser::Binding> *)&local_a8,(Binding *)&local_90);
    iVar2 = *(int *)(in_x0 + 0x28);
  }
  local_90 = (long *)(in_x0 + 0x220);
  local_70 = (long *)((ulong)local_70 & 0xffffffffffffff00);
  local_60 = 0;
  *(int *)(*(long *)(in_x0 + 0x160) + 0xf4) = *(int *)(*(long *)(in_x0 + 0x160) + 0xf4) + -1;
  uStack_88 = (long *)(*(long *)(in_x0 + 0x228) - *(long *)(in_x0 + 0x220) >> 3);
  local_80 = 0;
  local_c0 = (long *)(in_x0 + 0x1a8);
  lStack_b8 = *(long *)(in_x0 + 0x1b0) - *(long *)(in_x0 + 0x1a8) >> 3;
  local_b0 = 0;
  if (iVar2 == 0x3d) {
    uStack_68 = *(undefined8 *)(in_x0 + 0x34);
    local_70 = *pplVar18;
    local_60 = 1;
                    /* try { // try from 00eeca7c to 00eeca9f has its CatchHandler @ 00eecd54 */
    nextLexeme();
    local_d0 = (long *)parseExpr(in_x0,0);
    TempVector<Luau::AstExpr*>::push_back
              ((TempVector<Luau::AstExpr*> *)&local_c0,(AstExpr **)&local_d0);
    while (*(int *)pplVar15 == 0x2c) {
                    /* try { // try from 00eecaac to 00eecacf has its CatchHandler @ 00eecd60 */
      nextLexeme();
      local_d0 = (long *)parseExpr(in_x0,0);
      TempVector<Luau::AstExpr*>::push_back
                ((TempVector<Luau::AstExpr*> *)&local_c0,(AstExpr **)&local_d0);
    }
  }
  if (plStack_98 != (long *)0x0) {
    plVar13 = (long *)0x0;
    do {
                    /* try { // try from 00eecaf0 to 00eecb07 has its CatchHandler @ 00eecd64 */
      local_d0 = (long *)pushLocal(in_x0,(Binding *)
                                         (*local_a8 + ((long)plVar13 + (long)local_a0) * 0x20));
      TempVector<Luau::AstLocal*>::push_back
                ((TempVector<Luau::AstLocal*> *)&local_90,(AstLocal **)&local_d0);
      plVar13 = (long *)((long)plVar13 + 1);
    } while (plVar13 < plStack_98);
  }
  uVar8 = local_80;
  lVar1 = (long)uStack_88;
  local_d0 = plVar16;
  if (local_b0 == 0) {
    uStack_c8 = *(undefined8 *)(in_x0 + 0x50);
    this_00 = *(Allocator **)(in_x0 + 0x80);
    if (local_80 == 0) goto LAB_00eecc2c;
LAB_00eecb44:
    lVar17 = *local_90;
                    /* try { // try from 00eecb50 to 00eecb57 has its CatchHandler @ 00eecd50 */
    local_e0 = Allocator::allocate(this_00,local_80 << 3);
    if ((uVar8 < 4) ||
       ((local_e0 < lVar17 + (uVar8 + lVar1) * 8 &&
        ((ulong)(lVar17 + lVar1 * 8) < local_e0 + uVar8 * 8)))) {
      uVar7 = 0;
LAB_00eecb84:
      lVar10 = uVar8 - uVar7;
      puVar9 = (undefined8 *)(local_e0 + uVar7 * 8);
      puVar11 = (undefined8 *)(lVar17 + (uVar7 + lVar1) * 8);
      do {
        lVar10 = lVar10 + -1;
        *puVar9 = *puVar11;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      } while (lVar10 != 0);
    }
    else {
      uVar7 = uVar8 & 0xfffffffffffffffc;
      puVar9 = (undefined8 *)(local_e0 + 0x10);
      puVar11 = (undefined8 *)(lVar17 + lVar1 * 8 + 0x10);
      uVar12 = uVar7;
      do {
        puVar5 = puVar11 + -1;
        uVar14 = puVar11[-2];
        uVar19 = puVar11[1];
        uVar6 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 4;
        puVar9[-1] = *puVar5;
        puVar9[-2] = uVar14;
        puVar9[1] = uVar19;
        *puVar9 = uVar6;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      if (uVar8 != uVar7) goto LAB_00eecb84;
    }
    if (local_b0 != 0) goto LAB_00eecbb0;
LAB_00eecc38:
    uStack_d8 = uVar8;
    local_f0 = 0;
    uVar7 = local_b0;
  }
  else {
    uStack_c8 = *(undefined8 *)(*(long *)(local_c0[1] + -8) + 0x14);
    this_00 = *(Allocator **)(in_x0 + 0x80);
    if (local_80 != 0) goto LAB_00eecb44;
LAB_00eecc2c:
    local_e0 = 0;
    if (local_b0 == 0) goto LAB_00eecc38;
LAB_00eecbb0:
    uVar7 = local_b0;
    lVar1 = lStack_b8;
    uStack_d8 = uVar8;
    lVar17 = *local_c0;
                    /* try { // try from 00eecbc0 to 00eecc63 has its CatchHandler @ 00eecd58 */
    local_f0 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_b0 << 3);
    if ((uVar7 < 4) ||
       ((local_f0 < lVar17 + (uVar7 + lVar1) * 8 &&
        ((ulong)(lVar17 + lVar1 * 8) < local_f0 + uVar7 * 8)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 0xfffffffffffffffc;
      puVar9 = (undefined8 *)(local_f0 + 0x10);
      puVar11 = (undefined8 *)(lVar17 + lVar1 * 8 + 0x10);
      uVar12 = uVar8;
      do {
        puVar5 = puVar11 + -1;
        uVar14 = puVar11[-2];
        uVar19 = puVar11[1];
        uVar6 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 4;
        puVar9[-1] = *puVar5;
        puVar9[-2] = uVar14;
        puVar9[1] = uVar19;
        *puVar9 = uVar6;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      if (uVar7 == uVar8) goto LAB_00eecc3c;
    }
    lVar10 = uVar7 - uVar8;
    puVar9 = (undefined8 *)(local_f0 + uVar8 * 8);
    puVar11 = (undefined8 *)(lVar17 + (uVar8 + lVar1) * 8);
    do {
      lVar10 = lVar10 + -1;
      *puVar9 = *puVar11;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar10 != 0);
  }
LAB_00eecc3c:
  uStack_e8 = uVar7;
  this = (AstStatLocalFunction *)Allocator::allocate(this_00,0x58);
  AstStatLocal::AstStatLocal
            ((AstStatLocal *)this,(Location *)&local_d0,(AstArray *)&local_e0,(AstArray *)&local_f0,
             (optional *)&local_70);
  lVar1 = *local_c0 + lStack_b8 * 8;
  if (lVar1 != local_c0[1]) {
    local_c0[1] = lVar1;
  }
  lVar1 = *local_90 + (long)uStack_88 * 8;
  if (lVar1 != local_90[1]) {
    local_90[1] = lVar1;
  }
  lVar1 = *local_a8 + (long)local_a0 * 0x20;
  if (lVar1 != local_a8[1]) {
    local_a8[1] = lVar1;
  }
LAB_00eeccac:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


