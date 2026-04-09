// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseDeclaration
// Entry Point: 00eedc3c
// Size: 2336 bytes
// Signature: undefined __thiscall parseDeclaration(Parser * this, Location * param_1)


/* Luau::Parser::parseDeclaration(Luau::Location const&) */

AstStatDeclareGlobal * __thiscall Luau::Parser::parseDeclaration(Parser *this,Location *param_1)

{
  long *plVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  AstType *pAVar8;
  AstStatDeclareClass *this_00;
  AstType **ppAVar9;
  int *piVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  Allocator *pAVar18;
  char *pcVar19;
  long lVar20;
  undefined8 *puVar21;
  char *pcVar22;
  char cVar23;
  long *plVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  ulong local_190;
  undefined8 uStack_188;
  ulong local_178;
  ulong local_170;
  ulong uStack_168;
  undefined8 *local_160;
  ulong uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long *local_128;
  long lStack_120;
  ulong local_118;
  int local_110;
  undefined8 local_10c;
  undefined8 *local_100;
  ulong local_f8;
  ulong uStack_f0;
  char *local_e8;
  long *local_e0;
  long *plStack_d8;
  undefined local_d0;
  long *local_c8;
  long lStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  undefined8 local_a8;
  long *local_a0;
  ulong uStack_98;
  ulong local_90;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  iVar7 = *(int *)(this + 0x28);
  if (iVar7 == 0x127) {
    nextLexeme();
    if (*(int *)(this + 0x28) == 0x117) {
      uStack_f0 = *(ulong *)(this + 0x34);
      local_f8 = *(ulong *)(this + 0x2c);
      puVar21 = *(undefined8 **)(this + 0x40);
      nextLexeme();
      local_100 = puVar21;
    }
    else {
      reportNameError(this,"global function name");
      local_100 = *(undefined8 **)(this + 0xd0);
      local_f8 = *(ulong *)(this + 0x2c);
      uStack_f0 = local_f8;
    }
    parseGenericTypeList(SUB81(this,0));
    local_110 = *(int *)(this + 0x28);
    local_10c = *(undefined8 *)(this + 0x2c);
    if (local_110 == 0x28) {
LAB_00eeddf4:
      nextLexeme();
    }
    else {
      expectAndConsumeFail(this,0x28,"global function declaration");
      Lexer::lookahead();
      if ((int)local_c8 == 0x28) {
        nextLexeme();
        goto LAB_00eeddf4;
      }
    }
    local_128 = (long *)(this + 0x208);
    local_118 = 0;
    lStack_120 = *(long *)(this + 0x210) - *(long *)(this + 0x208) >> 5;
    if (*(int *)(this + 0x28) == 0x29) {
      uVar27 = 0;
      cVar23 = '\0';
LAB_00eede58:
                    /* try { // try from 00eede58 to 00eede5f has its CatchHandler @ 00eee57c */
      nextLexeme();
    }
    else {
                    /* try { // try from 00eede30 to 00eede43 has its CatchHandler @ 00eee56c */
      parseBindingList((TempVector *)this,SUB81(&local_128,0));
      uVar27 = uStack_b0;
      cVar23 = (char)local_c8;
      if (*(int *)(this + 0x28) == 0x29) goto LAB_00eede58;
                    /* try { // try from 00eedea0 to 00eedec3 has its CatchHandler @ 00eee57c */
      piVar10 = &local_110;
      expectMatchAndConsumeFail(this,0x29,(MatchLexeme *)piVar10,(char *)0x0);
      expectMatchAndConsumeRecover(this,')',(MatchLexeme *)piVar10,false);
    }
    if (*this == (Parser)0x0) {
LAB_00eedf58:
      lVar15 = -0x68;
      local_a0 = (long *)((ulong)local_a0 & 0xffffffffffffff00);
    }
    else {
      if (*(int *)(this + 0x28) != 0x3a) {
        if (*(int *)(this + 0x28) != 0x107) goto LAB_00eedf58;
                    /* try { // try from 00eedee4 to 00eedf37 has its CatchHandler @ 00eee584 */
        report((Location *)this,(char *)(this + 0x2c),
               "Function return type annotations are written after \':\' instead of \'->\'");
      }
      nextLexeme();
      uVar3 = *(undefined4 *)(this + 0xbc);
      parseReturnTypeAnnotation();
      if (*(int *)(this + 0x28) == 0x2c) {
        report((Location *)this,(char *)(this + 0x2c),
               "Expected a statement, got \',\'; did you forget to wrap the list of return types in parentheses?"
              );
        nextLexeme();
      }
      *(undefined4 *)(this + 0xbc) = uVar3;
      lVar15 = -0x40;
      uStack_98 = uStack_b0;
      local_a0 = (long *)local_b8;
      local_90 = local_a8;
    }
    local_c8 = (long *)0x0;
    lStack_c0 = 0;
    local_b8 = 0;
    plVar12 = (long *)(this + 0x2b0);
    uStack_138 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar15);
    local_140 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar15);
    local_130 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar15);
    local_c8 = (long *)(this + 0x250);
    lVar15 = *(long *)(this + 0x2b8) - *(long *)(this + 0x2b0) >> 3;
    lStack_c0 = *(long *)(this + 600) - *(long *)(this + 0x250) >> 3;
    uStack_98 = lVar15 * -0x5555555555555555;
    uVar25 = *(ulong *)(this + 0x34);
    local_b8 = 0;
    local_90 = 0;
    local_a0 = plVar12;
    if (local_118 != 0) {
      do {
        uVar14 = local_90;
        ppAVar9 = (AstType **)(*local_128 + (local_90 + lStack_120) * 0x20 + 0x18);
        if (*ppAVar9 == (AstType *)0x0) {
          local_178 = *(ulong *)param_1;
          local_150 = 0;
          uStack_148 = 0;
          local_160 = (undefined8 *)0x0;
          uStack_158 = 0;
                    /* try { // try from 00eee0f4 to 00eee10f has its CatchHandler @ 00eee564 */
          local_170 = uVar25;
          this_00 = (AstStatDeclareClass *)
                    reportStatError((Location *)this,(AstArray *)&local_178,(AstArray *)&local_150,
                                    (char *)&local_160,
                                    "All declaration parameters must be annotated");
          goto LAB_00eee110;
        }
                    /* try { // try from 00eedfec to 00eedff3 has its CatchHandler @ 00eee590 */
        TempVector<Luau::AstType*>::push_back((TempVector<Luau::AstType*> *)&local_c8,ppAVar9);
        puVar2 = (ulong *)(*local_128 + (uVar14 + lStack_120) * 0x20);
        local_178 = *puVar2;
        uStack_168 = puVar2[2];
        local_170 = puVar2[1];
                    /* try { // try from 00eee014 to 00eee01f has its CatchHandler @ 00eee58c */
        FUN_00ef74f4(plVar12,&local_178);
        local_90 = uVar14 + 1;
      } while (local_90 < local_118);
    }
    uVar5 = local_90;
    uVar14 = local_b8;
    lVar20 = lStack_c0;
    if ((cVar23 == '\0') || (uVar27 != 0)) {
      local_150 = *(undefined8 *)param_1;
      pAVar18 = *(Allocator **)(this + 0x80);
      uStack_148 = uVar25;
      if (local_b8 == 0) {
        local_178 = 0;
      }
      else {
        lVar26 = *local_c8;
                    /* try { // try from 00eee08c to 00eee093 has its CatchHandler @ 00eee55c */
        local_178 = Allocator::allocate(pAVar18,local_b8 << 3);
        if ((uVar14 < 4) ||
           ((local_178 < lVar26 + (uVar14 + lVar20) * 8 &&
            ((ulong)(lVar26 + lVar20 * 8) < local_178 + uVar14 * 8)))) {
          uVar25 = 0;
        }
        else {
          uVar25 = uVar14 & 0xfffffffffffffffc;
          puVar21 = (undefined8 *)(local_178 + 0x10);
          puVar13 = (undefined8 *)(lVar26 + lVar20 * 8 + 0x10);
          uVar17 = uVar25;
          do {
            puVar16 = puVar13 + -1;
            uVar28 = puVar13[-2];
            uVar30 = puVar13[1];
            uVar29 = *puVar13;
            puVar13 = puVar13 + 4;
            uVar17 = uVar17 - 4;
            puVar21[-1] = *puVar16;
            puVar21[-2] = uVar28;
            puVar21[1] = uVar30;
            *puVar21 = uVar29;
            puVar21 = puVar21 + 4;
          } while (uVar17 != 0);
          if (uVar14 == uVar25) goto LAB_00eee174;
        }
        lVar11 = uVar14 - uVar25;
        puVar21 = (undefined8 *)(local_178 + uVar25 * 8);
        puVar13 = (undefined8 *)(lVar26 + (uVar25 + lVar20) * 8);
        do {
          lVar11 = lVar11 + -1;
          *puVar21 = *puVar13;
          puVar21 = puVar21 + 1;
          puVar13 = puVar13 + 1;
        } while (lVar11 != 0);
      }
LAB_00eee174:
      local_170 = uVar14;
      uStack_168 = uVar27;
      if (uVar5 == 0) {
        local_160 = (undefined8 *)0x0;
      }
      else {
        lVar20 = *local_a0;
                    /* try { // try from 00eee194 to 00eee1ff has its CatchHandler @ 00eee578 */
        local_160 = (undefined8 *)Allocator::allocate(*(Allocator **)(this + 0x80),uVar5 * 0x18);
        puVar21 = (undefined8 *)(lVar20 + lVar15 * 8);
        puVar13 = local_160;
        uVar27 = uVar5;
        do {
          uVar27 = uVar27 - 1;
          uVar29 = puVar21[1];
          uVar28 = *puVar21;
          puVar13[2] = puVar21[2];
          puVar13[1] = uVar29;
          *puVar13 = uVar28;
          puVar21 = puVar21 + 3;
          puVar13 = puVar13 + 3;
        } while (uVar27 != 0);
      }
      uStack_158 = uVar5;
      this_00 = (AstStatDeclareClass *)Allocator::allocate(pAVar18,0x88);
      AstStatDeclareFunction::AstStatDeclareFunction
                ((AstStatDeclareFunction *)this_00,(Location *)&local_150,(AstName *)&local_100,
                 (AstArray *)&local_e8,(AstArray *)&plStack_d8,(AstTypeList *)&local_178,
                 (AstArray *)&local_160,(AstTypeList *)&local_140);
      puVar13 = (undefined8 *)local_a0[1];
      puVar21 = (undefined8 *)(*local_a0 + uStack_98 * 0x18);
      plVar12 = local_a0;
      if (puVar21 != puVar13) goto LAB_00eee218;
    }
    else {
      local_178 = *(ulong *)param_1;
      local_150 = 0;
      uStack_148 = 0;
      local_160 = (undefined8 *)0x0;
      uStack_158 = 0;
                    /* try { // try from 00eee04c to 00eee067 has its CatchHandler @ 00eee568 */
      local_170 = uVar25;
      this_00 = (AstStatDeclareClass *)
                reportStatError((Location *)this,(AstArray *)&local_178,(AstArray *)&local_150,
                                (char *)&local_160,"All declaration parameters must be annotated");
LAB_00eee110:
      puVar13 = *(undefined8 **)(this + 0x2b8);
      puVar21 = (undefined8 *)(*plVar12 + lVar15 * 8);
      if (puVar21 != puVar13) {
LAB_00eee218:
        lVar15 = ((long)puVar13 - (long)puVar21) / 0x18;
        puVar16 = puVar21 + lVar15 * 3;
        while (puVar16 != puVar13) {
          puVar16 = puVar21 + lVar15 * 3;
          *puVar21 = *puVar16;
          uVar28 = puVar16[1];
          puVar21[2] = puVar16[2];
          puVar21[1] = uVar28;
          puVar21 = puVar21 + 3;
          puVar16 = puVar21 + lVar15 * 3;
        }
        plVar12[1] = (long)puVar21;
      }
    }
    lVar15 = *local_c8 + lStack_c0 * 8;
    if (lVar15 != local_c8[1]) {
      local_c8[1] = lVar15;
    }
    lVar15 = *local_128 + lStack_120 * 0x20;
    plVar12 = local_128;
    if (lVar15 == local_128[1]) goto LAB_00eee2a4;
  }
  else {
    pcVar22 = *(char **)(this + 0x40);
    if ((pcVar22 == (char *)0x0) || (iVar6 = strcmp(pcVar22,"class"), iVar6 != 0)) {
      if (iVar7 != 0x117) {
        reportNameError(this,"global variable name");
        local_c8 = (long *)0x0;
        lStack_c0 = 0;
        local_e8 = (char *)0x0;
        local_e0 = (long *)0x0;
        this_00 = (AstStatDeclareClass *)
                  reportStatError((Location *)this,(AstArray *)param_1,(AstArray *)&local_c8,
                                  (char *)&local_e8,
                                  "declare must be followed by an identifier, \'function\', or \'class\'"
                                 );
        goto LAB_00eee2a4;
      }
      plStack_d8 = *(long **)(this + 0x34);
      local_e0 = *(long **)(this + 0x2c);
      nextLexeme();
      local_d0 = 1;
      local_e8 = pcVar22;
      if (*(int *)(this + 0x28) == 0x3a) {
LAB_00eedd34:
        nextLexeme();
      }
      else {
        expectAndConsumeFail(this,0x3a,"global variable declaration");
        Lexer::lookahead();
        if ((int)local_c8 == 0x3a) {
          nextLexeme();
          goto LAB_00eedd34;
        }
      }
      pAVar8 = (AstType *)parseTypeAnnotation();
      local_c8 = *(long **)param_1;
      lStack_c0 = *(long *)(pAVar8 + 0x14);
      this_00 = (AstStatDeclareClass *)Allocator::allocate(*(Allocator **)(this + 0x80),0x30);
      AstStatDeclareGlobal::AstStatDeclareGlobal
                ((AstStatDeclareGlobal *)this_00,(Location *)&local_c8,(AstName *)&local_e8,pAVar8);
      goto LAB_00eee2a4;
    }
    nextLexeme();
    plVar12 = *(long **)(this + 0x2c);
    if (*(int *)(this + 0x28) == 0x117) {
      plStack_d8 = *(long **)(this + 0x34);
      local_e0 = *(long **)(this + 0x2c);
      pcVar19 = *(char **)(this + 0x40);
      nextLexeme();
      pcVar22 = *(char **)(this + 0x40);
      local_e8 = pcVar19;
      if (pcVar22 == (char *)0x0) goto LAB_00eee310;
LAB_00eee300:
      iVar7 = strcmp(pcVar22,"extends");
      if (iVar7 != 0) goto LAB_00eee310;
      nextLexeme();
      if (*(int *)(this + 0x28) == 0x117) {
        local_190 = *(ulong *)(this + 0x40);
        nextLexeme();
      }
      else {
        reportNameError(this,"superclass name");
        local_190 = *(ulong *)(this + 0xd0);
      }
      uVar27 = local_190 & 0xffffffffffffff00;
      local_190 = local_190 & 0xff;
      uStack_188 = 1;
    }
    else {
      reportNameError(this,"class name");
      local_e8 = *(char **)(this + 0xd0);
      local_e0 = *(long **)(this + 0x2c);
      pcVar22 = *(char **)(this + 0x40);
      plStack_d8 = local_e0;
      if (pcVar22 != (char *)0x0) goto LAB_00eee300;
LAB_00eee310:
      local_190 = 0;
      uStack_188 = 0;
      uVar27 = 0;
    }
    plVar1 = (long *)(this + 0x280);
    lVar15 = *(long *)(this + 0x288) - *(long *)(this + 0x280) >> 3;
    uStack_98 = lVar15 * -0x5555555555555555;
    local_90 = 0;
    local_a0 = plVar1;
LAB_00eee3e4:
    uVar25 = local_90;
    iVar7 = *(int *)(this + 0x28);
    if (iVar7 == 0x117) {
      plVar24 = *(long **)(this + 0x40);
                    /* try { // try from 00eee434 to 00eee48b has its CatchHandler @ 00eee5c0 */
      nextLexeme();
LAB_00eee43c:
      if (*(int *)(this + 0x28) == 0x3a) {
        nextLexeme();
      }
      else {
        expectAndConsumeFail(this,0x3a,"property type annotation");
        Lexer::lookahead();
        if ((int)local_c8 == 0x3a) {
          nextLexeme();
          nextLexeme();
        }
      }
                    /* try { // try from 00eee48c to 00eee493 has its CatchHandler @ 00eee5b8 */
      lStack_c0 = parseTypeAnnotation();
      local_b8 = local_b8 & 0xffffffffffffff00;
                    /* try { // try from 00eee49c to 00eee4a7 has its CatchHandler @ 00eee5b4 */
      local_c8 = plVar24;
      FUN_00ef7628(plVar1,&local_c8);
LAB_00eee3dc:
      local_90 = uVar25 + 1;
      goto LAB_00eee3e4;
    }
    if (iVar7 == 0x127) {
                    /* try { // try from 00eee414 to 00eee42b has its CatchHandler @ 00eee5bc */
      parseDeclaredClassMethod();
      FUN_00ef7628(plVar1,&local_c8);
      goto LAB_00eee3dc;
    }
    if (iVar7 != 0x124) {
                    /* try { // try from 00eee400 to 00eee40b has its CatchHandler @ 00eee5c0 */
      reportNameError(this,"property name");
      plVar24 = *(long **)(this + 0xd0);
      goto LAB_00eee43c;
    }
    lVar20 = *(long *)(this + 0x34);
                    /* try { // try from 00eee4b0 to 00eee4b7 has its CatchHandler @ 00eee560 */
    nextLexeme();
    pAVar18 = *(Allocator **)(this + 0x80);
    local_c8 = plVar12;
    lStack_c0 = lVar20;
    if (uVar25 == 0) {
      local_100 = (undefined8 *)0x0;
    }
    else {
      lVar20 = *plVar1;
                    /* try { // try from 00eee4d4 to 00eee537 has its CatchHandler @ 00eee574 */
      local_100 = (undefined8 *)Allocator::allocate(pAVar18,uVar25 * 0x18);
      puVar21 = (undefined8 *)(lVar20 + lVar15 * 8);
      puVar13 = local_100;
      uVar14 = uVar25;
      do {
        uVar14 = uVar14 - 1;
        uVar29 = puVar21[1];
        uVar28 = *puVar21;
        puVar13[2] = puVar21[2];
        puVar13[1] = uVar29;
        *puVar13 = uVar28;
        puVar21 = puVar21 + 3;
        puVar13 = puVar13 + 3;
      } while (uVar14 != 0);
    }
    local_f8 = uVar25;
    this_00 = (AstStatDeclareClass *)Allocator::allocate(pAVar18,0x48);
    AstStatDeclareClass::AstStatDeclareClass
              (this_00,&local_c8,&local_e8,uVar27 | local_190,uStack_188,&local_100);
    lVar15 = *local_a0 + uStack_98 * 0x18;
    plVar12 = local_a0;
    if (lVar15 == local_a0[1]) goto LAB_00eee2a4;
  }
  plVar12[1] = lVar15;
LAB_00eee2a4:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (AstStatDeclareGlobal *)this_00;
}


