// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFor
// Entry Point: 00eebb14
// Size: 2448 bytes
// Signature: undefined parseFor(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseFor() */

AstStatFor * Luau::Parser::parseFor(void)

{
  long lVar1;
  int iVar2;
  Parser PVar3;
  long lVar4;
  undefined8 *puVar5;
  Parser *in_x0;
  AstExpr *pAVar6;
  AstExpr *pAVar7;
  AstExpr *pAVar8;
  AstLocal *pAVar9;
  AstStatBlock *pAVar10;
  AstStatFor *this;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  Allocator *this_00;
  undefined8 uVar18;
  ulong uVar19;
  AstExpr **ppAVar20;
  AstExpr *pAVar21;
  bool bVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  bool local_168;
  ulong local_160;
  ulong uStack_158;
  undefined4 local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  long *local_140;
  long lStack_138;
  ulong local_130;
  long *local_128;
  long lStack_120;
  ulong local_118;
  AstExpr *local_110;
  undefined8 uStack_108;
  undefined8 local_f8;
  int iStack_f0;
  int iStack_ec;
  ulong local_e8;
  undefined4 local_e0;
  uint uStack_dc;
  int iStack_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  AstExpr *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  AstExpr *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  ppAVar20 = (AstExpr **)(in_x0 + 0x2c);
  pAVar21 = *ppAVar20;
  nextLexeme();
  if (*(int *)(in_x0 + 0x28) == 0x117) {
    uStack_98 = *(undefined8 *)(in_x0 + 0x34);
    local_a0 = *ppAVar20;
    uVar18 = *(undefined8 *)(in_x0 + 0x40);
    nextLexeme();
  }
  else {
    reportNameError(in_x0,"variable name");
    uStack_98 = *(undefined8 *)(in_x0 + 0x34);
    local_a0 = *ppAVar20;
    uVar18 = *(undefined8 *)(in_x0 + 0xd0);
  }
  local_a8 = 0;
  iVar12 = *(int *)(in_x0 + 0x28);
  if ((*in_x0 != (Parser)0x0) && (iVar12 == 0x3a)) {
    nextLexeme();
    local_a8 = parseTypeAnnotation();
    iVar12 = *(int *)(in_x0 + 0x28);
  }
  puVar14 = (undefined8 *)(in_x0 + 0x28);
  uStack_b0 = uStack_98;
  local_b8 = local_a0;
  local_c0 = uVar18;
  if (iVar12 != 0x3d) {
    local_f8 = (long *)(in_x0 + 0x208);
    local_e8 = 0;
    iStack_f0 = (int)(*(long *)(in_x0 + 0x210) - *(long *)(in_x0 + 0x208) >> 5);
    iStack_ec = (int)(*(long *)(in_x0 + 0x210) - *(long *)(in_x0 + 0x208) >> 0x25);
                    /* try { // try from 00eebcb0 to 00eebccf has its CatchHandler @ 00eec4b0 */
    TempVector<Luau::Parser::Binding>::push_back
              ((TempVector<Luau::Parser::Binding> *)&local_f8,(Binding *)&local_c0);
    iVar12 = *(int *)puVar14;
    if (iVar12 == 0x2c) {
      nextLexeme();
      if (*(int *)(in_x0 + 0x28) == 0x117) {
        pAVar6 = *(AstExpr **)(in_x0 + 0x40);
        iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x34);
        uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20);
        local_e0 = SUB84(*ppAVar20,0);
        uStack_dc = (uint)((ulong)*ppAVar20 >> 0x20);
                    /* try { // try from 00eebcec to 00eebcf3 has its CatchHandler @ 00eec4a8 */
        nextLexeme();
        PVar3 = *in_x0;
      }
      else {
                    /* try { // try from 00eebeb8 to 00eebf1b has its CatchHandler @ 00eec4a8 */
        reportNameError(in_x0,"variable name");
        pAVar6 = *(AstExpr **)(in_x0 + 0xd0);
        iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x34);
        uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20);
        local_e0 = SUB84(*ppAVar20,0);
        uStack_dc = (uint)((ulong)*ppAVar20 >> 0x20);
        PVar3 = *in_x0;
      }
      local_88 = 0;
      if ((PVar3 != (Parser)0x0) && (local_88 = 0, *(int *)(in_x0 + 0x28) == 0x3a)) {
        nextLexeme();
        local_88 = parseTypeAnnotation();
      }
      uStack_90 = CONCAT44(uStack_d4,iStack_d8);
      uStack_98 = CONCAT44(uStack_dc,local_e0);
      local_a0 = pAVar6;
      TempVector<Luau::Parser::Binding>::push_back
                ((TempVector<Luau::Parser::Binding> *)&local_f8,(Binding *)&local_a0);
      iVar12 = *(int *)(in_x0 + 0x28);
      while (iVar12 == 0x2c) {
                    /* try { // try from 00eebf34 to 00eebfc7 has its CatchHandler @ 00eec4d4 */
        nextLexeme();
        if (*(int *)(in_x0 + 0x28) == 0x117) {
          pAVar6 = *(AstExpr **)(in_x0 + 0x40);
          iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x34);
          uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20);
          local_e0 = SUB84(*ppAVar20,0);
          uStack_dc = (uint)((ulong)*ppAVar20 >> 0x20);
          nextLexeme();
          PVar3 = *in_x0;
        }
        else {
          reportNameError(in_x0,"variable name");
          pAVar6 = *(AstExpr **)(in_x0 + 0xd0);
          iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x34);
          uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20);
          local_e0 = SUB84(*ppAVar20,0);
          uStack_dc = (uint)((ulong)*ppAVar20 >> 0x20);
          PVar3 = *in_x0;
        }
        uVar18 = 0;
        if ((PVar3 != (Parser)0x0) && (uVar18 = 0, *(int *)(in_x0 + 0x28) == 0x3a)) {
          nextLexeme();
          uVar18 = parseTypeAnnotation();
        }
        uStack_90 = CONCAT44(uStack_d4,iStack_d8);
        uStack_98 = CONCAT44(uStack_dc,local_e0);
        local_a0 = pAVar6;
        local_88 = uVar18;
        TempVector<Luau::Parser::Binding>::push_back
                  ((TempVector<Luau::Parser::Binding> *)&local_f8,(Binding *)&local_a0);
        iVar12 = *(int *)(in_x0 + 0x28);
      }
    }
    uStack_108 = *(undefined8 *)(in_x0 + 0x34);
    local_110 = *ppAVar20;
    if (iVar12 == 0x129) {
                    /* try { // try from 00eebfe4 to 00eec02b has its CatchHandler @ 00eec4c4 */
      nextLexeme();
    }
    else {
      expectAndConsumeFail(in_x0,0x129,"for loop");
      Lexer::lookahead();
      if ((int)local_a0 == 0x129) {
        nextLexeme();
        nextLexeme();
      }
    }
    local_128 = (long *)(in_x0 + 0x1a8);
    local_118 = 0;
    lStack_120 = *(long *)(in_x0 + 0x1b0) - *(long *)(in_x0 + 0x1a8) >> 3;
                    /* try { // try from 00eec044 to 00eec05f has its CatchHandler @ 00eec4c0 */
    local_a0 = (AstExpr *)parseExpr(in_x0,0);
    TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_128,&local_a0);
    while (iVar2 = *(int *)puVar14, iVar2 == 0x2c) {
                    /* try { // try from 00eec06c to 00eec08f has its CatchHandler @ 00eec4ec */
      nextLexeme();
      local_a0 = (AstExpr *)parseExpr(in_x0,0);
      TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_128,&local_a0);
    }
    uStack_c8 = *(undefined8 *)(in_x0 + 0x40);
    uStack_d0 = *(undefined8 *)(in_x0 + 0x38);
    iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x30);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20);
    local_e0 = (undefined4)*puVar14;
    uStack_dc = (uint)((ulong)*puVar14 >> 0x20);
    if (iVar2 == 0x121) {
                    /* try { // try from 00eec0a4 to 00eec0eb has its CatchHandler @ 00eec4bc */
      nextLexeme();
    }
    else {
      expectAndConsumeFail(in_x0,0x121,"for loop");
      Lexer::lookahead();
      if ((int)local_a0 == 0x121) {
        nextLexeme();
        nextLexeme();
      }
    }
    local_140 = (long *)(in_x0 + 0x220);
    lVar1 = *(long *)(in_x0 + 0x130);
    lVar24 = *(long *)(in_x0 + 0x138);
    *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + 1;
    local_130 = 0;
    lStack_138 = *(long *)(in_x0 + 0x228) - *(long *)(in_x0 + 0x220) >> 3;
    lVar15 = lVar24;
    lVar23 = lVar1;
    if (local_e8 != 0) {
      uVar19 = 0;
      do {
                    /* try { // try from 00eec138 to 00eec14f has its CatchHandler @ 00eec4dc */
        local_a0 = (AstExpr *)
                   pushLocal(in_x0,(Binding *)
                                   (*local_f8 + (uVar19 + CONCAT44(iStack_ec,iStack_f0)) * 0x20));
        TempVector<Luau::AstLocal*>::push_back
                  ((TempVector<Luau::AstLocal*> *)&local_140,(AstLocal **)&local_a0);
        uVar19 = uVar19 + 1;
      } while (uVar19 < local_e8);
      lVar15 = *(long *)(in_x0 + 0x138);
      lVar23 = *(long *)(in_x0 + 0x130);
    }
                    /* try { // try from 00eec178 to 00eec1b3 has its CatchHandler @ 00eec4d0 */
    pAVar10 = (AstStatBlock *)parseBlockNoScope();
    restoreLocals(in_x0,(uint)((ulong)(lVar15 - lVar23) >> 3));
    *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + -1;
    restoreLocals(in_x0,(uint)((ulong)(lVar24 - lVar1) >> 3));
    uVar18 = *(undefined8 *)(in_x0 + 0x34);
    local_150 = local_e0;
    uStack_14c = uStack_dc;
    iStack_148 = iStack_d8;
    if (*(int *)(in_x0 + 0x28) == 0x124) {
      if (((*(uint *)(in_x0 + 0x2c) != uStack_dc) && (*(int *)(in_x0 + 0x30) != iStack_d8)) &&
         (*(uint *)(in_x0 + 0xe4) < uStack_dc)) {
        *(ulong *)(in_x0 + 0xe0) = CONCAT44(uStack_dc,local_e0);
        *(int *)(in_x0 + 0xe8) = iStack_d8;
      }
                    /* try { // try from 00eec210 to 00eec253 has its CatchHandler @ 00eec4b8 */
      nextLexeme();
LAB_00eec254:
      local_168 = true;
      this_00 = *(Allocator **)(in_x0 + 0x80);
      if (local_130 != 0) goto LAB_00eec270;
LAB_00eec2ec:
      uVar11 = 0;
      uVar19 = local_130;
      local_a0 = pAVar21;
      uStack_98 = uVar18;
    }
    else {
      expectMatchEndAndConsumeFail(in_x0,0x124,(MatchLexeme *)&local_150);
      Lexer::lookahead();
      if ((int)local_a0 == 0x124) {
        nextLexeme();
        nextLexeme();
        goto LAB_00eec254;
      }
      local_168 = false;
      this_00 = *(Allocator **)(in_x0 + 0x80);
      if (local_130 == 0) goto LAB_00eec2ec;
LAB_00eec270:
      uVar19 = local_130;
      lVar1 = lStack_138;
      lVar24 = *local_140;
      local_a0 = pAVar21;
      uStack_98 = uVar18;
                    /* try { // try from 00eec27c to 00eec283 has its CatchHandler @ 00eec4a4 */
      uVar11 = Allocator::allocate(this_00,local_130 << 3);
      if ((uVar19 < 4) ||
         ((uVar11 < lVar24 + (uVar19 + lVar1) * 8 &&
          ((ulong)(lVar24 + lVar1 * 8) < uVar11 + uVar19 * 8)))) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar19 & 0xfffffffffffffffc;
        puVar14 = (undefined8 *)(uVar11 + 0x10);
        puVar16 = (undefined8 *)(lVar24 + lVar1 * 8 + 0x10);
        uVar17 = uVar13;
        do {
          puVar5 = puVar16 + -1;
          uVar18 = puVar16[-2];
          uVar26 = puVar16[1];
          uVar25 = *puVar16;
          puVar16 = puVar16 + 4;
          uVar17 = uVar17 - 4;
          puVar14[-1] = *puVar5;
          puVar14[-2] = uVar18;
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          puVar14 = puVar14 + 4;
        } while (uVar17 != 0);
        if (uVar19 == uVar13) goto LAB_00eec2f0;
      }
      lVar15 = uVar19 - uVar13;
      puVar14 = (undefined8 *)(uVar11 + uVar13 * 8);
      puVar16 = (undefined8 *)(lVar24 + (uVar13 + lVar1) * 8);
      do {
        lVar15 = lVar15 + -1;
        *puVar14 = *puVar16;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar15 != 0);
    }
LAB_00eec2f0:
    uVar13 = local_118;
    lVar1 = lStack_120;
    local_150 = (undefined4)uVar11;
    uStack_14c = (uint)(uVar11 >> 0x20);
    iStack_148 = (int)uVar19;
    uStack_144 = (undefined4)(uVar19 >> 0x20);
    if (local_118 == 0) {
      local_160 = 0;
    }
    else {
      lVar24 = *local_128;
                    /* try { // try from 00eec30c to 00eec3b3 has its CatchHandler @ 00eec4cc */
      local_160 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_118 << 3);
      if ((uVar13 < 4) ||
         ((local_160 < lVar24 + (uVar13 + lVar1) * 8 &&
          ((ulong)(lVar24 + lVar1 * 8) < local_160 + uVar13 * 8)))) {
        uVar19 = 0;
      }
      else {
        uVar19 = uVar13 & 0xfffffffffffffffc;
        puVar14 = (undefined8 *)(local_160 + 0x10);
        puVar16 = (undefined8 *)(lVar24 + lVar1 * 8 + 0x10);
        uVar11 = uVar19;
        do {
          puVar5 = puVar16 + -1;
          uVar18 = puVar16[-2];
          uVar26 = puVar16[1];
          uVar25 = *puVar16;
          puVar16 = puVar16 + 4;
          uVar11 = uVar11 - 4;
          puVar14[-1] = *puVar5;
          puVar14[-2] = uVar18;
          puVar14[1] = uVar26;
          *puVar14 = uVar25;
          puVar14 = puVar14 + 4;
        } while (uVar11 != 0);
        if (uVar13 == uVar19) goto LAB_00eec364;
      }
      lVar15 = uVar13 - uVar19;
      puVar14 = (undefined8 *)(local_160 + uVar19 * 8);
      puVar16 = (undefined8 *)(lVar24 + (uVar19 + lVar1) * 8);
      do {
        lVar15 = lVar15 + -1;
        *puVar14 = *puVar16;
        puVar14 = puVar14 + 1;
        puVar16 = puVar16 + 1;
      } while (lVar15 != 0);
    }
LAB_00eec364:
    uStack_158 = uVar13;
    this = (AstStatFor *)Allocator::allocate(this_00,0x78);
    AstStatForIn::AstStatForIn
              ((AstStatForIn *)this,(Location *)&local_a0,(AstArray *)&local_150,
               (AstArray *)&local_160,pAVar10,iVar12 == 0x129,(Location *)&local_110,iVar2 == 0x121,
               (Location *)((ulong)&local_e0 | 4),local_168);
    lVar1 = *local_140 + lStack_138 * 8;
    if (lVar1 != local_140[1]) {
      local_140[1] = lVar1;
    }
    lVar1 = *local_128 + lStack_120 * 8;
    if (lVar1 != local_128[1]) {
      local_128[1] = lVar1;
    }
    lVar1 = *local_f8 + CONCAT44(iStack_ec,iStack_f0) * 0x20;
    if (lVar1 != local_f8[1]) {
      local_f8[1] = lVar1;
    }
    goto LAB_00eec3fc;
  }
  nextLexeme();
  pAVar6 = (AstExpr *)parseExpr(in_x0,0);
  if (*(int *)(in_x0 + 0x28) == 0x2c) {
LAB_00eebc40:
    nextLexeme();
  }
  else {
    expectAndConsumeFail(in_x0,0x2c,"index range");
    Lexer::lookahead();
    if ((int)local_a0 == 0x2c) {
      nextLexeme();
      goto LAB_00eebc40;
    }
  }
  pAVar7 = (AstExpr *)parseExpr(in_x0,0);
  iVar12 = *(int *)(in_x0 + 0x28);
  if (iVar12 == 0x2c) {
    nextLexeme();
    pAVar8 = (AstExpr *)parseExpr(in_x0,0);
    iVar12 = *(int *)(in_x0 + 0x28);
    uStack_c8 = *(undefined8 *)(in_x0 + 0x40);
    uStack_d0 = *(undefined8 *)(in_x0 + 0x38);
    iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x30);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20);
    local_e0 = (undefined4)*puVar14;
    uStack_dc = (uint)((ulong)*puVar14 >> 0x20);
    if (iVar12 == 0x121) goto LAB_00eebd4c;
LAB_00eebd18:
    expectAndConsumeFail(in_x0,0x121,"for loop");
    Lexer::lookahead();
    if ((int)local_a0 == 0x121) {
      nextLexeme();
      goto LAB_00eebd4c;
    }
  }
  else {
    pAVar8 = (AstExpr *)0x0;
    uStack_c8 = *(undefined8 *)(in_x0 + 0x40);
    uStack_d0 = *(undefined8 *)(in_x0 + 0x38);
    iStack_d8 = (int)*(undefined8 *)(in_x0 + 0x30);
    uStack_d4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20);
    local_e0 = (undefined4)*puVar14;
    uStack_dc = (uint)((ulong)*puVar14 >> 0x20);
    if (iVar12 != 0x121) goto LAB_00eebd18;
LAB_00eebd4c:
    nextLexeme();
  }
  lVar1 = *(long *)(in_x0 + 0x130);
  lVar15 = *(long *)(in_x0 + 0x138);
  *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + 1;
  pAVar9 = (AstLocal *)pushLocal(in_x0,(Binding *)&local_c0);
  lVar24 = *(long *)(in_x0 + 0x130);
  lVar23 = *(long *)(in_x0 + 0x138);
  pAVar10 = (AstStatBlock *)parseBlockNoScope();
  restoreLocals(in_x0,(uint)((ulong)(lVar23 - lVar24) >> 3));
  *(int *)(*(long *)(in_x0 + 0xf8) + -4) = *(int *)(*(long *)(in_x0 + 0xf8) + -4) + -1;
  restoreLocals(in_x0,(uint)((ulong)(lVar15 - lVar1) >> 3));
  uVar18 = *(undefined8 *)(in_x0 + 0x34);
  local_f8._0_4_ = local_e0;
  local_f8._4_4_ = uStack_dc;
  iStack_f0 = iStack_d8;
  if (*(int *)(in_x0 + 0x28) == 0x124) {
    if (((*(uint *)(in_x0 + 0x2c) != uStack_dc) && (*(int *)(in_x0 + 0x30) != iStack_d8)) &&
       (*(uint *)(in_x0 + 0xe4) < uStack_dc)) {
      *(ulong *)(in_x0 + 0xe0) = CONCAT44(uStack_dc,local_e0);
      *(int *)(in_x0 + 0xe8) = iStack_d8;
    }
LAB_00eebe50:
    nextLexeme();
    bVar22 = true;
  }
  else {
    expectMatchEndAndConsumeFail(in_x0,0x124,(MatchLexeme *)&local_f8);
    Lexer::lookahead();
    if ((int)local_a0 == 0x124) {
      nextLexeme();
      goto LAB_00eebe50;
    }
    bVar22 = false;
  }
  local_a0 = pAVar21;
  uStack_98 = uVar18;
  this = (AstStatFor *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x60);
  AstStatFor::AstStatFor
            (this,(Location *)&local_a0,pAVar9,pAVar6,pAVar7,pAVar8,pAVar10,iVar12 == 0x121,
             (Location *)((ulong)&local_e0 | 4),bVar22);
LAB_00eec3fc:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


