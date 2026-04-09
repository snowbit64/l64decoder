// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTableTypeAnnotation
// Entry Point: 00ef2c5c
// Size: 1768 bytes
// Signature: undefined parseTableTypeAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTableTypeAnnotation() */

AstTypeTable * Luau::Parser::parseTableTypeAnnotation(void)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  Parser *in_x0;
  size_t sVar8;
  AstTypeReference *pAVar9;
  long lVar10;
  undefined8 *puVar11;
  AstTypeReference *pAVar12;
  ulong uVar13;
  AstTypeTable *this;
  int *piVar14;
  int iVar15;
  undefined8 *puVar16;
  Allocator *this_00;
  undefined8 uVar17;
  AstTypeReference *pAVar18;
  AstTypeReference **ppAVar19;
  AstTypeReference **ppAVar20;
  undefined8 uVar21;
  AstTypeReference *pAVar22;
  long lVar23;
  undefined8 *puVar24;
  AstTypeReference *pAVar25;
  undefined8 uVar26;
  int local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  int local_d8;
  AstTypeReference *local_d4;
  long *local_c8;
  long local_c0;
  long local_b8;
  int local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *local_88;
  ulong uStack_80;
  char local_78;
  long local_70;
  
  uVar2 = FInt::LuauRecursionLimit;
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  iVar15 = *(int *)(in_x0 + 0xbc);
  *(uint *)(in_x0 + 0xbc) = iVar15 + 1U;
  if (uVar2 < iVar15 + 1U) {
    ParseError::raise((Location *)(in_x0 + 0x2c),
                      "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                      "type annotation");
  }
  else {
    local_c8 = (long *)(in_x0 + 0x238);
    puVar24 = (undefined8 *)(in_x0 + 0x28);
    local_d8 = *(int *)puVar24;
    ppAVar20 = (AstTypeReference **)(in_x0 + 0x2c);
    pAVar18 = *ppAVar20;
    local_c0 = *(long *)(in_x0 + 0x240) - *(long *)(in_x0 + 0x238) >> 5;
    local_b8 = 0;
    local_d4 = pAVar18;
    if (local_d8 == 0x7b) {
                    /* try { // try from 00ef2cf0 to 00ef2d37 has its CatchHandler @ 00ef3368 */
      nextLexeme();
    }
    else {
      expectAndConsumeFail(in_x0,0x7b,"table type");
      Lexer::lookahead();
      if (local_b0 == 0x7b) {
        nextLexeme();
        nextLexeme();
      }
    }
    iVar15 = *(int *)(in_x0 + 0x28);
    if (iVar15 == 0x7d) {
      ppAVar19 = (AstTypeReference **)0x0;
    }
    else {
      ppAVar19 = (AstTypeReference **)0x0;
      puVar16 = (undefined8 *)((ulong)&local_100 | 4);
      do {
        if (iVar15 == 0x5b) {
                    /* try { // try from 00ef2d88 to 00ef2d93 has its CatchHandler @ 00ef3380 */
          Lexer::lookahead();
                    /* try { // try from 00ef2da0 to 00ef2dab has its CatchHandler @ 00ef3360 */
          if ((local_b0 != 0x114) && (Lexer::lookahead(), local_100 != 0x115)) {
            iVar15 = *(int *)puVar24;
            goto LAB_00ef2ebc;
          }
          uStack_e8 = *(undefined8 *)(in_x0 + 0x40);
          uStack_f0 = *(undefined8 *)(in_x0 + 0x38);
          iStack_f8 = (int)*(undefined8 *)(in_x0 + 0x30);
          uStack_f4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20);
          local_100 = (int)*puVar24;
          uStack_fc = (undefined4)((ulong)*puVar24 >> 0x20);
                    /* try { // try from 00ef2dc0 to 00ef2dc7 has its CatchHandler @ 00ef3378 */
          nextLexeme();
                    /* try { // try from 00ef2dc8 to 00ef2dd3 has its CatchHandler @ 00ef338c */
          parseCharArray();
          local_b0 = local_100;
          uStack_ac = uStack_fc;
          iStack_a8 = iStack_f8;
          if (*(int *)(in_x0 + 0x28) == 0x5d) {
                    /* try { // try from 00ef2df0 to 00ef2e1f has its CatchHandler @ 00ef3384 */
            nextLexeme();
          }
          else {
            piVar14 = &local_b0;
            expectMatchAndConsumeFail(in_x0,0x5d,(MatchLexeme *)piVar14,(char *)0x0);
            expectMatchAndConsumeRecover(in_x0,']',(MatchLexeme *)piVar14,false);
          }
          if (*(int *)(in_x0 + 0x28) == 0x3a) {
                    /* try { // try from 00ef2e2c to 00ef2e73 has its CatchHandler @ 00ef338c */
            nextLexeme();
          }
          else {
            expectAndConsumeFail(in_x0,0x3a,"table field");
            Lexer::lookahead();
            if (local_b0 == 0x3a) {
              nextLexeme();
              nextLexeme();
            }
          }
                    /* try { // try from 00ef2e74 to 00ef2e7b has its CatchHandler @ 00ef337c */
          uVar17 = parseTypeAnnotation();
          uVar13 = uStack_80;
          pcVar7 = local_88;
          if ((local_78 == '\0') || (sVar8 = strnlen(local_88,uStack_80), sVar8 < uVar13)) {
                    /* try { // try from 00ef2ea0 to 00ef2eb3 has its CatchHandler @ 00ef3364 */
            report((Location *)in_x0,(char *)puVar16,
                   "String literal contains malformed escape sequence");
          }
          else {
            local_b0 = (int)pcVar7;
            uStack_ac = (undefined4)((ulong)pcVar7 >> 0x20);
            uStack_a0 = puVar16[1];
            iStack_a8 = (int)*puVar16;
            uStack_a4 = (undefined4)((ulong)*puVar16 >> 0x20);
                    /* try { // try from 00ef3020 to 00ef302b has its CatchHandler @ 00ef3354 */
            local_98 = uVar17;
            TempVector<Luau::AstTableProp>::push_back
                      ((TempVector<Luau::AstTableProp> *)&local_c8,(AstTableProp *)&local_b0);
          }
LAB_00ef30e4:
          iVar15 = *(int *)puVar24;
        }
        else {
LAB_00ef2ebc:
          iVar6 = iStack_a8;
          uVar4 = uStack_ac;
          if (iVar15 != 0x5b) {
            if ((local_b8 == 0) && (ppAVar19 == (AstTypeReference **)0x0)) {
                    /* try { // try from 00ef2f18 to 00ef2f23 has its CatchHandler @ 00ef3358 */
              if ((iVar15 != 0x117) || (Lexer::lookahead(), local_b0 != 0x3a)) {
                    /* try { // try from 00ef32ac to 00ef32b3 has its CatchHandler @ 00ef334c */
                pAVar25 = (AstTypeReference *)parseTypeAnnotation();
                    /* try { // try from 00ef32bc to 00ef32eb has its CatchHandler @ 00ef3350 */
                pAVar9 = (AstTypeReference *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x48)
                ;
                local_b0 = 0;
                uStack_ac = 0;
                iStack_a8 = 0;
                uStack_a4 = 0;
                AstTypeReference::AstTypeReference
                          (pAVar9,pAVar25 + 0xc,0,0,*(undefined8 *)(in_x0 + 200),0,&local_b0);
                uVar17 = *(undefined8 *)(pAVar25 + 0xc);
                iStack_a8 = (int)*(undefined8 *)(pAVar25 + 0x14);
                uStack_a4 = (undefined4)((ulong)*(undefined8 *)(pAVar25 + 0x14) >> 0x20);
                local_b0 = (int)uVar17;
                uStack_ac = (undefined4)((ulong)uVar17 >> 0x20);
                    /* try { // try from 00ef32f8 to 00ef32ff has its CatchHandler @ 00ef3348 */
                ppAVar19 = (AstTypeReference **)
                           Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
                *ppAVar19 = pAVar9;
                ppAVar19[1] = pAVar25;
                ppAVar19[3] = (AstTypeReference *)CONCAT44(uStack_a4,iStack_a8);
                ppAVar19[2] = (AstTypeReference *)CONCAT44(uStack_ac,local_b0);
                break;
              }
              iVar15 = *(int *)(in_x0 + 0x28);
            }
            if (iVar15 == 0x117) {
              uVar17 = *(undefined8 *)(in_x0 + 0x40);
              iStack_a8 = (int)*(undefined8 *)(in_x0 + 0x34);
              uStack_a4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x34) >> 0x20);
              local_b0 = (int)*ppAVar20;
              uStack_ac = (undefined4)((ulong)*ppAVar20 >> 0x20);
                    /* try { // try from 00ef2f48 to 00ef2fab has its CatchHandler @ 00ef3388 */
              nextLexeme();
              iStack_f8 = iStack_a8;
              uStack_f4 = uStack_a4;
              local_100 = local_b0;
              uStack_fc = uStack_ac;
              if (*(int *)(in_x0 + 0x28) == 0x3a) {
                nextLexeme();
              }
              else {
                expectAndConsumeFail(in_x0,0x3a,"table field");
                Lexer::lookahead();
                if (local_b0 == 0x3a) {
                  nextLexeme();
                  nextLexeme();
                }
              }
                    /* try { // try from 00ef2fac to 00ef2fb3 has its CatchHandler @ 00ef3370 */
              local_98 = parseTypeAnnotation();
              uStack_a0 = CONCAT44(uStack_f4,iStack_f8);
              local_b0 = (int)uVar17;
              uStack_ac = (undefined4)((ulong)uVar17 >> 0x20);
              iStack_a8 = local_100;
              uStack_a4 = uStack_fc;
                    /* try { // try from 00ef2fc4 to 00ef2fcf has its CatchHandler @ 00ef336c */
              TempVector<Luau::AstTableProp>::push_back
                        ((TempVector<Luau::AstTableProp> *)&local_c8,(AstTableProp *)&local_b0);
              goto LAB_00ef30e4;
            }
                    /* try { // try from 00ef3314 to 00ef3323 has its CatchHandler @ 00ef3344 */
            reportNameError(in_x0,"table field");
            break;
          }
          pAVar25 = *ppAVar20;
          uStack_ac = SUB84(pAVar25,0);
          uVar5 = uStack_ac;
          iStack_a8 = (int)((ulong)pAVar25 >> 0x20);
          iVar15 = iStack_a8;
          uStack_ac = uVar4;
          iStack_a8 = iVar6;
          if (ppAVar19 != (AstTypeReference **)0x0) {
                    /* try { // try from 00ef2ecc to 00ef2eff has its CatchHandler @ 00ef3390 */
            nextLexeme();
            uVar17 = parseTypeAnnotation();
            local_b0 = 0x5b;
            if (*(int *)(in_x0 + 0x28) == 0x5d) {
              uStack_ac = uVar5;
              iStack_a8 = iVar15;
              nextLexeme();
            }
            else {
                    /* try { // try from 00ef3030 to 00ef30e3 has its CatchHandler @ 00ef3390 */
              piVar14 = &local_b0;
              uStack_ac = uVar5;
              iStack_a8 = iVar15;
              expectMatchAndConsumeFail(in_x0,0x5d,(MatchLexeme *)piVar14,(char *)0x0);
              expectMatchAndConsumeRecover(in_x0,']',(MatchLexeme *)piVar14,false);
            }
            if (*(int *)(in_x0 + 0x28) == 0x3a) {
              nextLexeme();
            }
            else {
              expectAndConsumeFail(in_x0,0x3a,"table field");
              Lexer::lookahead();
              if (local_b0 == 0x3a) {
                nextLexeme();
                nextLexeme();
              }
            }
            lVar10 = parseTypeAnnotation();
            uVar21 = *(undefined8 *)(lVar10 + 0x14);
            puVar11 = (undefined8 *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
            *puVar11 = uVar17;
            puVar11[1] = lVar10;
            puVar11[3] = uVar21;
            puVar11[2] = pAVar25;
            report((Location *)in_x0,(char *)(puVar11 + 2),"Cannot have more than one table indexer"
                  );
            goto LAB_00ef30e4;
          }
                    /* try { // try from 00ef2fd4 to 00ef3007 has its CatchHandler @ 00ef3394 */
          nextLexeme();
          pAVar9 = (AstTypeReference *)parseTypeAnnotation();
          local_b0 = 0x5b;
          if (*(int *)(in_x0 + 0x28) == 0x5d) {
            uStack_ac = uVar5;
            iStack_a8 = iVar15;
            nextLexeme();
          }
          else {
            piVar14 = &local_b0;
            uStack_ac = uVar5;
            iStack_a8 = iVar15;
            expectMatchAndConsumeFail(in_x0,0x5d,(MatchLexeme *)piVar14,(char *)0x0);
            expectMatchAndConsumeRecover(in_x0,']',(MatchLexeme *)piVar14,false);
          }
          if (*(int *)(in_x0 + 0x28) == 0x3a) {
            nextLexeme();
          }
          else {
            expectAndConsumeFail(in_x0,0x3a,"table field");
            Lexer::lookahead();
            if (local_b0 == 0x3a) {
              nextLexeme();
              nextLexeme();
            }
          }
          pAVar12 = (AstTypeReference *)parseTypeAnnotation();
          pAVar22 = *(AstTypeReference **)(pAVar12 + 0x14);
          ppAVar19 = (AstTypeReference **)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x20);
          *ppAVar19 = pAVar9;
          ppAVar19[1] = pAVar12;
          ppAVar19[2] = pAVar25;
          ppAVar19[3] = pAVar22;
          iVar15 = *(int *)puVar24;
        }
        if ((iVar15 != 0x3b) && (iVar15 != 0x2c)) break;
                    /* try { // try from 00ef30f8 to 00ef31a3 has its CatchHandler @ 00ef3394 */
        nextLexeme();
        iVar15 = *(int *)puVar24;
      } while (iVar15 != 0x7d);
    }
    uVar17 = *(undefined8 *)(in_x0 + 0x34);
    if (*(int *)(in_x0 + 0x28) == 0x7d) {
                    /* try { // try from 00ef2d5c to 00ef2d63 has its CatchHandler @ 00ef335c */
      nextLexeme();
    }
    else {
                    /* try { // try from 00ef31c0 to 00ef31e3 has its CatchHandler @ 00ef335c */
      piVar14 = &local_d8;
      expectMatchAndConsumeFail(in_x0,0x7d,(MatchLexeme *)piVar14,(char *)0x0);
      uVar13 = expectMatchAndConsumeRecover(in_x0,'}',(MatchLexeme *)piVar14,false);
      if ((uVar13 & 1) == 0) {
        uVar17 = *(undefined8 *)(in_x0 + 0x50);
      }
    }
    lVar3 = local_b8;
    lVar10 = local_c0;
    this_00 = *(Allocator **)(in_x0 + 0x80);
    local_b0 = (int)pAVar18;
    uStack_ac = (undefined4)((ulong)pAVar18 >> 0x20);
    iStack_a8 = (int)uVar17;
    uStack_a4 = (undefined4)((ulong)uVar17 >> 0x20);
    if (local_b8 == 0) {
      puVar24 = (undefined8 *)0x0;
    }
    else {
      lVar23 = *local_c8;
                    /* try { // try from 00ef320c to 00ef325b has its CatchHandler @ 00ef3374 */
      puVar24 = (undefined8 *)Allocator::allocate(this_00,local_b8 << 5);
      puVar16 = (undefined8 *)(lVar23 + lVar10 * 0x20);
      puVar11 = puVar24;
      lVar10 = lVar3;
      do {
        uVar26 = *puVar16;
        uVar21 = puVar16[3];
        uVar17 = puVar16[2];
        lVar10 = lVar10 + -1;
        puVar11[1] = puVar16[1];
        *puVar11 = uVar26;
        puVar11[3] = uVar21;
        puVar11[2] = uVar17;
        puVar16 = puVar16 + 4;
        puVar11 = puVar11 + 4;
      } while (lVar10 != 0);
    }
    local_100 = (int)puVar24;
    uStack_fc = (undefined4)((ulong)puVar24 >> 0x20);
    iStack_f8 = (int)lVar3;
    uStack_f4 = (undefined4)((ulong)lVar3 >> 0x20);
    this = (AstTypeTable *)Allocator::allocate(this_00,0x38);
    AstTypeTable::AstTypeTable
              (this,(Location *)&local_b0,(AstArray *)&local_100,(AstTableIndexer *)ppAVar19);
    lVar10 = *local_c8 + local_c0 * 0x20;
    if (lVar10 != local_c8[1]) {
      local_c8[1] = lVar10;
    }
    if (*(long *)(lVar1 + 0x28) == local_70) {
      return this;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


