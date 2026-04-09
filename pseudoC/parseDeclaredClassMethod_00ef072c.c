// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseDeclaredClassMethod
// Entry Point: 00ef072c
// Size: 1528 bytes
// Signature: undefined parseDeclaredClassMethod(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseDeclaredClassMethod() */

void Luau::Parser::parseDeclaredClassMethod(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  Parser *in_x0;
  char *__s1;
  AstTypeFunction *this;
  AstType **ppAVar6;
  int *piVar7;
  undefined8 *in_x8;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  Allocator *this_00;
  long lVar13;
  char cVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *local_170;
  long lStack_168;
  ulong local_160;
  ulong uStack_158;
  long *local_148;
  long lStack_140;
  long local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  long *local_118;
  long lStack_110;
  ulong local_108;
  int local_100;
  undefined8 local_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  ulong local_b8;
  ulong uStack_b0;
  long *local_a8;
  undefined uStack_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  long *local_90;
  long lStack_88;
  ulong local_80;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  nextLexeme();
  uStack_c8 = *(undefined8 *)(in_x0 + 0x34);
  local_d0 = *(ulong *)(in_x0 + 0x2c);
  if (*(int *)(in_x0 + 0x28) == 0x117) {
    uVar16 = *(undefined8 *)(in_x0 + 0x40);
    nextLexeme();
  }
  else {
    reportNameError(in_x0,"function name");
    uVar16 = *(undefined8 *)(in_x0 + 0xd0);
  }
  local_100 = *(int *)(in_x0 + 0x28);
  local_e0 = 0;
  uStack_d8 = 0;
  local_fc = *(undefined8 *)(in_x0 + 0x2c);
  local_f0 = 0;
  uStack_e8 = 0;
  if (local_100 == 0x28) {
LAB_00ef07f4:
    nextLexeme();
  }
  else {
    expectAndConsumeFail(in_x0,0x28,"function parameter list start");
    Lexer::lookahead();
    if ((int)local_b8 == 0x28) {
      nextLexeme();
      goto LAB_00ef07f4;
    }
  }
  local_118 = (long *)(in_x0 + 0x208);
  local_108 = 0;
  lStack_110 = *(long *)(in_x0 + 0x210) - *(long *)(in_x0 + 0x208) >> 5;
  if (*(int *)(in_x0 + 0x28) == 0x29) {
    uVar18 = 0;
    cVar14 = '\0';
LAB_00ef0858:
                    /* try { // try from 00ef0858 to 00ef0887 has its CatchHandler @ 00ef0d58 */
    nextLexeme();
  }
  else {
                    /* try { // try from 00ef0830 to 00ef0843 has its CatchHandler @ 00ef0d30 */
    parseBindingList((TempVector *)in_x0,SUB81(&local_118,0));
    uVar18 = CONCAT71(uStack_9f,uStack_a0);
    cVar14 = (char)local_b8;
    if (*(int *)(in_x0 + 0x28) == 0x29) goto LAB_00ef0858;
    piVar7 = &local_100;
    expectMatchAndConsumeFail(in_x0,0x29,(MatchLexeme *)piVar7,(char *)0x0);
    expectMatchAndConsumeRecover(in_x0,')',(MatchLexeme *)piVar7,false);
  }
  if (*in_x0 == (Parser)0x0) {
LAB_00ef0920:
    lVar13 = -0x58;
    local_90 = (long *)((ulong)local_90 & 0xffffffffffffff00);
  }
  else {
    if (*(int *)(in_x0 + 0x28) != 0x3a) {
      if (*(int *)(in_x0 + 0x28) != 0x107) goto LAB_00ef0920;
                    /* try { // try from 00ef08a8 to 00ef08ff has its CatchHandler @ 00ef0d5c */
      report((Location *)in_x0,(char *)(in_x0 + 0x2c),
             "Function return type annotations are written after \':\' instead of \'->\'");
    }
    nextLexeme();
    uVar3 = *(undefined4 *)(in_x0 + 0xbc);
    parseReturnTypeAnnotation();
    if (*(int *)(in_x0 + 0x28) == 0x2c) {
      report((Location *)in_x0,(char *)(in_x0 + 0x2c),
             "Expected a statement, got \',\'; did you forget to wrap the list of return types in parentheses?"
            );
      nextLexeme();
    }
    *(undefined4 *)(in_x0 + 0xbc) = uVar3;
    lVar13 = -0x30;
    local_90 = local_a8;
    local_80 = local_98;
  }
  uVar12 = local_108;
  lVar17 = lStack_110;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (long *)0x0;
  uStack_128 = *(undefined8 *)(&stack0xffffffffffffffa8 + lVar13);
  local_130 = *(undefined8 *)(&stack0xffffffffffffffa0 + lVar13);
  local_138 = 0;
  local_120 = *(undefined8 *)(&stack0xffffffffffffffb0 + lVar13);
  local_80 = 0;
  local_90 = (long *)(in_x0 + 0x250);
  lStack_88 = *(long *)(in_x0 + 600) - *(long *)(in_x0 + 0x250) >> 3;
  local_148 = (long *)(in_x0 + 0x2f8);
  lStack_140 = *(long *)(in_x0 + 0x300) - *(long *)(in_x0 + 0x2f8) >> 5;
  uVar15 = *(ulong *)(in_x0 + 0x34);
  if (local_108 == 0) {
LAB_00ef09b4:
    *in_x8 = uVar16;
    local_160 = 0;
    uStack_158 = 0;
    local_b8 = local_d0;
                    /* try { // try from 00ef09c4 to 00ef09df has its CatchHandler @ 00ef0d40 */
    uStack_b0 = uVar15;
    uVar16 = reportTypeAnnotationError
                       ((Location *)in_x0,(AstArray *)&local_b8,SUB81(&local_160,0),(char *)0x0,
                        "\'self\' must be present as the unannotated first parameter");
    in_x8[1] = uVar16;
    *(undefined *)(in_x8 + 2) = 1;
    puVar10 = (undefined8 *)local_148[1];
    puVar8 = (undefined8 *)(*local_148 + lStack_140 * 0x20);
    if (puVar8 == puVar10) goto LAB_00ef0a8c;
  }
  else {
    lVar13 = *local_118;
    __s1 = *(char **)(lVar13 + lStack_110 * 0x20);
    if (((__s1 == (char *)0x0) || (iVar5 = strcmp(__s1,"self"), iVar5 != 0)) ||
       (*(long *)(lVar13 + lVar17 * 0x20 + 0x18) != 0)) goto LAB_00ef09b4;
    if (1 < uVar12) {
      uVar12 = 1;
      while( true ) {
        puVar2 = (ulong *)(lVar13 + (lVar17 + uVar12) * 0x20);
        uStack_158 = puVar2[2];
        local_160 = puVar2[1];
        local_b8 = *puVar2;
        uStack_a0 = 1;
                    /* try { // try from 00ef0b28 to 00ef0b33 has its CatchHandler @ 00ef0d3c */
        uStack_b0 = local_160;
        local_a8 = (long *)uStack_158;
        TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>::
        push_back((TempVector<std::__ndk1::optional<std::__ndk1::pair<Luau::AstName,Luau::Location>>>
                   *)&local_148,(optional *)&local_b8);
        ppAVar6 = (AstType **)(*local_118 + (uVar12 + lStack_110) * 0x20 + 0x18);
        if (*ppAVar6 == (AstType *)0x0) {
          local_160 = 0;
          uStack_158 = 0;
          local_b8 = local_d0;
                    /* try { // try from 00ef0b64 to 00ef0b8f has its CatchHandler @ 00ef0d38 */
          uStack_b0 = uVar15;
          local_170 = (undefined8 *)
                      reportTypeAnnotationError
                                ((Location *)in_x0,(AstArray *)&local_b8,SUB81(&local_160,0),
                                 (char *)0x0,
                                 "All declaration parameters aside from \'self\' must be annotated")
          ;
          TempVector<Luau::AstType*>::push_back
                    ((TempVector<Luau::AstType*> *)&local_90,(AstType **)&local_170);
        }
        else {
                    /* try { // try from 00ef0b4c to 00ef0b53 has its CatchHandler @ 00ef0d34 */
          TempVector<Luau::AstType*>::push_back((TempVector<Luau::AstType*> *)&local_90,ppAVar6);
        }
        uVar12 = uVar12 + 1;
        if (local_108 <= uVar12) break;
        lVar13 = *local_118;
        lVar17 = lStack_110;
      }
    }
    if ((cVar14 != '\0') && (uVar18 == 0)) {
                    /* try { // try from 00ef0bb8 to 00ef0bcb has its CatchHandler @ 00ef0d24 */
      report((Location *)in_x0,(char *)&local_d0,
             "All declaration parameters aside from \'self\' must be annotated");
    }
    uVar12 = local_80;
    lVar13 = lStack_88;
    this_00 = *(Allocator **)(in_x0 + 0x80);
    local_160 = local_d0;
    uStack_158 = uVar15;
    if (local_80 == 0) {
      local_b8 = 0;
    }
    else {
      lVar17 = *local_90;
                    /* try { // try from 00ef0bec to 00ef0bf3 has its CatchHandler @ 00ef0d28 */
      local_b8 = Allocator::allocate(this_00,local_80 << 3);
      if ((uVar12 < 4) ||
         ((local_b8 < lVar17 + (uVar12 + lVar13) * 8 &&
          ((ulong)(lVar17 + lVar13 * 8) < local_b8 + uVar12 * 8)))) {
        uVar15 = 0;
      }
      else {
        uVar15 = uVar12 & 0xfffffffffffffffc;
        puVar8 = (undefined8 *)(local_b8 + 0x10);
        puVar10 = (undefined8 *)(lVar17 + lVar13 * 8 + 0x10);
        uVar11 = uVar15;
        do {
          puVar1 = puVar10 + -1;
          uVar19 = puVar10[-2];
          uVar21 = puVar10[1];
          uVar20 = *puVar10;
          puVar10 = puVar10 + 4;
          uVar11 = uVar11 - 4;
          puVar8[-1] = *puVar1;
          puVar8[-2] = uVar19;
          puVar8[1] = uVar21;
          *puVar8 = uVar20;
          puVar8 = puVar8 + 4;
        } while (uVar11 != 0);
        if (uVar12 == uVar15) goto LAB_00ef0c48;
      }
      lVar9 = uVar12 - uVar15;
      puVar8 = (undefined8 *)(local_b8 + uVar15 * 8);
      puVar10 = (undefined8 *)(lVar17 + (uVar15 + lVar13) * 8);
      do {
        lVar9 = lVar9 + -1;
        *puVar8 = *puVar10;
        puVar8 = puVar8 + 1;
        puVar10 = puVar10 + 1;
      } while (lVar9 != 0);
    }
LAB_00ef0c48:
    lVar17 = local_138;
    lVar13 = lStack_140;
    uStack_b0 = uVar12;
    local_a8 = (long *)uVar18;
    if (local_138 == 0) {
      local_170 = (undefined8 *)0x0;
    }
    else {
      lVar9 = *local_148;
                    /* try { // try from 00ef0c6c to 00ef0cc3 has its CatchHandler @ 00ef0d2c */
      local_170 = (undefined8 *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_138 << 5);
      puVar8 = (undefined8 *)(lVar9 + lVar13 * 0x20);
      puVar10 = local_170;
      lVar13 = lVar17;
      do {
        uVar21 = *puVar8;
        uVar20 = puVar8[3];
        uVar19 = puVar8[2];
        lVar13 = lVar13 + -1;
        puVar10[1] = puVar8[1];
        *puVar10 = uVar21;
        puVar10[3] = uVar20;
        puVar10[2] = uVar19;
        puVar8 = puVar8 + 4;
        puVar10 = puVar10 + 4;
      } while (lVar13 != 0);
    }
    lStack_168 = lVar17;
    this = (AstTypeFunction *)Allocator::allocate(this_00,0x80);
    AstTypeFunction::AstTypeFunction
              (this,(Location *)&local_160,(AstArray *)&local_e0,(AstArray *)&local_f0,
               (AstTypeList *)&local_b8,(AstArray *)&local_170,(AstTypeList *)&local_130);
    *in_x8 = uVar16;
    in_x8[1] = this;
    *(undefined *)(in_x8 + 2) = 1;
    puVar10 = (undefined8 *)local_148[1];
    puVar8 = (undefined8 *)(*local_148 + lStack_140 * 0x20);
    if (puVar8 == puVar10) goto LAB_00ef0a8c;
  }
  if ((undefined8 *)((long)puVar8 + ((long)puVar10 - (long)puVar8 & 0xffffffffffffffe0U)) != puVar10
     ) {
    lVar13 = (long)puVar10 - (long)puVar8 >> 5;
    do {
      cVar14 = *(char *)(puVar8 + 3);
      if (cVar14 == *(char *)(puVar8 + lVar13 * 4 + 3)) {
        if (cVar14 != '\0') {
          puVar1 = puVar8 + lVar13 * 4;
          uVar19 = puVar1[2];
          uVar16 = puVar1[1];
          *puVar8 = *puVar1;
          puVar8[2] = uVar19;
          puVar8[1] = uVar16;
        }
      }
      else if (cVar14 == '\0') {
        puVar1 = puVar8 + lVar13 * 4;
        *(undefined *)(puVar8 + 3) = 1;
        uVar19 = puVar1[1];
        uVar16 = *puVar1;
        puVar8[2] = puVar1[2];
        puVar8[1] = uVar19;
        *puVar8 = uVar16;
      }
      else {
        *(undefined *)(puVar8 + 3) = 0;
      }
      puVar8 = puVar8 + 4;
    } while (puVar8 + lVar13 * 4 != puVar10);
  }
  local_148[1] = (long)puVar8;
LAB_00ef0a8c:
  lVar13 = *local_90 + lStack_88 * 8;
  if (lVar13 != local_90[1]) {
    local_90[1] = lVar13;
  }
  lVar13 = *local_118 + lStack_110 * 0x20;
  if (lVar13 != local_118[1]) {
    local_118[1] = lVar13;
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


