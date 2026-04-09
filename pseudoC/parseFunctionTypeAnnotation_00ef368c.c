// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseFunctionTypeAnnotation
// Entry Point: 00ef368c
// Size: 1276 bytes
// Signature: undefined __thiscall parseFunctionTypeAnnotation(Parser * this, bool param_1)


/* Luau::Parser::parseFunctionTypeAnnotation(bool) */

void __thiscall Luau::Parser::parseFunctionTypeAnnotation(Parser *this,bool param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  AstTypePackExplicit *pAVar9;
  int *piVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong local_110;
  ulong uStack_108;
  long *local_100;
  long lStack_f8;
  long local_f0;
  long *local_e8;
  long lStack_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  long local_80;
  long local_70;
  
  uVar6 = FInt::LuauRecursionLimit;
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  iVar1 = *(int *)(this + 0xbc);
  *(uint *)(this + 0xbc) = iVar1 + 1U;
  if (uVar6 < iVar1 + 1U) {
    uVar19 = ParseError::raise((Location *)(this + 0x2c),
                               "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                               ,"type annotation");
    goto LAB_00ef3b84;
  }
  uStack_98 = *(undefined8 *)(this + 0x40);
  uStack_a0 = *(undefined8 *)(this + 0x38);
  puVar18 = (undefined8 *)(this + 0x28);
  iVar2 = *(int *)puVar18;
  uStack_a8 = *(undefined8 *)(this + 0x30);
  local_b0 = *puVar18;
  bVar8 = iVar2 == 0x3c;
  parseGenericTypeList(SUB81(this,0));
  iVar1 = *(int *)puVar18;
  uVar19 = *(undefined8 *)(this + 0x2c);
  if (iVar1 == 0x28) {
LAB_00ef3754:
    nextLexeme();
  }
  else {
    expectAndConsumeFail(this,0x28,"function parameters");
    Lexer::lookahead();
    if (local_90 == 0x28) {
      nextLexeme();
      goto LAB_00ef3754;
    }
  }
  local_e8 = (long *)(this + 0x250);
  local_d8 = 0;
  local_f0 = 0;
  *(int *)(*(long *)(this + 0x160) + 0x41c) = *(int *)(*(long *)(this + 0x160) + 0x41c) + 1;
  lStack_e0 = *(long *)(this + 600) - *(long *)(this + 0x250) >> 3;
  local_100 = (long *)(this + 0x2f8);
  lStack_f8 = *(long *)(this + 0x300) - *(long *)(this + 0x2f8) >> 5;
  if (*(int *)(this + 0x28) == 0x29) {
    lVar17 = 0;
LAB_00ef37e0:
                    /* try { // try from 00ef37e0 to 00ef380f has its CatchHandler @ 00ef3b9c */
    nextLexeme();
  }
  else {
                    /* try { // try from 00ef37b8 to 00ef37c7 has its CatchHandler @ 00ef3b90 */
    lVar17 = parseTypeList(this,(TempVector *)&local_e8,(TempVector *)&local_100);
    uStack_8c = (undefined4)uVar19;
    uStack_88 = (undefined4)((ulong)uVar19 >> 0x20);
    local_90 = iVar1;
    if (*(int *)(this + 0x28) == 0x29) goto LAB_00ef37e0;
    piVar10 = &local_90;
    expectMatchAndConsumeFail(this,0x29,(MatchLexeme *)piVar10,(char *)0x0);
    expectMatchAndConsumeRecover(this,')',(MatchLexeme *)piVar10,true);
  }
  uVar7 = local_d8;
  lVar15 = lStack_e0;
  *(int *)(*(long *)(this + 0x160) + 0x41c) = *(int *)(*(long *)(this + 0x160) + 0x41c) + -1;
  if (local_d8 == 0) {
    local_110 = 0;
  }
  else {
    lVar20 = *local_e8;
                    /* try { // try from 00ef3838 to 00ef383b has its CatchHandler @ 00ef3b94 */
    local_110 = Allocator::allocate(*(Allocator **)(this + 0x80),local_d8 << 3);
    if ((uVar7 < 4) ||
       ((local_110 < lVar20 + (uVar7 + lVar15) * 8 &&
        ((ulong)(lVar20 + lVar15 * 8) < local_110 + uVar7 * 8)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = uVar7 & 0xfffffffffffffffc;
      puVar12 = (undefined8 *)(local_110 + 0x10);
      puVar14 = (undefined8 *)(lVar20 + lVar15 * 8 + 0x10);
      uVar16 = uVar11;
      do {
        puVar5 = puVar14 + -1;
        uVar19 = puVar14[-2];
        uVar22 = puVar14[1];
        uVar21 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar16 = uVar16 - 4;
        puVar12[-1] = *puVar5;
        puVar12[-2] = uVar19;
        puVar12[1] = uVar22;
        *puVar12 = uVar21;
        puVar12 = puVar12 + 4;
      } while (uVar16 != 0);
      if (uVar7 == uVar11) goto LAB_00ef3890;
    }
    lVar13 = uVar7 - uVar11;
    puVar12 = (undefined8 *)(local_110 + uVar11 * 8);
    puVar14 = (undefined8 *)(lVar20 + (uVar11 + lVar15) * 8);
    do {
      lVar13 = lVar13 + -1;
      *puVar12 = *puVar14;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    } while (lVar13 != 0);
  }
LAB_00ef3890:
  lVar20 = local_f0;
  lVar15 = lStack_f8;
  uStack_108 = uVar7;
  if ((char)FFlag::LuauFixNamedFunctionParse != '\0') {
    bVar8 = local_f0 != 0 || iVar2 == 0x3c;
  }
  iVar1 = *(int *)puVar18;
  if (iVar1 == 0x107) {
LAB_00ef38c8:
    if (local_f0 == 0) {
      puVar18 = (undefined8 *)0x0;
    }
    else {
      lVar13 = *local_100;
                    /* try { // try from 00ef38e0 to 00ef38e3 has its CatchHandler @ 00ef3b98 */
      puVar18 = (undefined8 *)Allocator::allocate(*(Allocator **)(this + 0x80),local_f0 << 5);
      puVar12 = (undefined8 *)(lVar13 + lVar15 * 0x20);
      puVar14 = puVar18;
      lVar15 = lVar20;
      do {
        uVar22 = *puVar12;
        uVar21 = puVar12[3];
        uVar19 = puVar12[2];
        lVar15 = lVar15 + -1;
        puVar14[1] = puVar12[1];
        *puVar14 = uVar22;
        puVar14[3] = uVar21;
        puVar14[2] = uVar19;
        puVar12 = puVar12 + 4;
        puVar14 = puVar14 + 4;
      } while (lVar15 != 0);
    }
    local_90 = (int)puVar18;
    uStack_8c = (undefined4)((ulong)puVar18 >> 0x20);
    uStack_88 = (undefined4)lVar20;
    uStack_84 = (undefined4)((ulong)lVar20 >> 0x20);
                    /* try { // try from 00ef3a1c to 00ef3a33 has its CatchHandler @ 00ef3b98 */
    uVar19 = parseFunctionTypeAnnotationTail
                       (this,&local_b0,local_d0,uStack_c8,local_c0,uStack_b8,&local_110,&local_90,
                        lVar17);
LAB_00ef3a34:
    puVar12 = (undefined8 *)local_100[1];
    puVar18 = (undefined8 *)(*local_100 + lStack_f8 * 0x20);
    if (puVar18 != puVar12) {
LAB_00ef3a4c:
      if ((undefined8 *)((long)puVar18 + ((long)puVar12 - (long)puVar18 & 0xffffffffffffffe0U)) !=
          puVar12) {
        lVar17 = (long)puVar12 - (long)puVar18 >> 5;
        do {
          cVar3 = *(char *)(puVar18 + 3);
          if (cVar3 == *(char *)(puVar18 + lVar17 * 4 + 3)) {
            if (cVar3 != '\0') {
              puVar14 = puVar18 + lVar17 * 4;
              uVar22 = puVar14[2];
              uVar21 = puVar14[1];
              *puVar18 = *puVar14;
              puVar18[2] = uVar22;
              puVar18[1] = uVar21;
            }
          }
          else if (cVar3 == '\0') {
            puVar14 = puVar18 + lVar17 * 4;
            *(undefined *)(puVar18 + 3) = 1;
            uVar22 = puVar14[1];
            uVar21 = *puVar14;
            puVar18[2] = puVar14[2];
            puVar18[1] = uVar22;
            *puVar18 = uVar21;
          }
          else {
            *(undefined *)(puVar18 + 3) = 0;
          }
          puVar18 = puVar18 + 4;
        } while (puVar18 + lVar17 * 4 != puVar12);
      }
      local_100[1] = (long)puVar18;
    }
  }
  else {
    if (((bool)((lVar17 != 0 || local_d8 != 1) | bVar8)) || (iVar1 == 0x3a)) {
      if ((!(bool)(bVar8 | iVar1 == 0x3a)) && (param_1)) {
        if (((char)DFFlag::LuaReportParseWrongNamedType != '\0') && (local_f0 != 0)) {
          lua_telemetry_parsed_named_non_function_type = 1;
        }
                    /* try { // try from 00ef39c8 to 00ef39ef has its CatchHandler @ 00ef3b88 */
        pAVar9 = (AstTypePackExplicit *)Allocator::allocate(*(Allocator **)(this + 0x80),0x38);
        uStack_88 = (undefined4)uStack_108;
        uStack_84 = (undefined4)(uStack_108 >> 0x20);
        local_90 = (int)local_110;
        uStack_8c = (undefined4)(local_110 >> 0x20);
        local_80 = lVar17;
        AstTypePackExplicit::AstTypePackExplicit(pAVar9,(ulong)&local_b0 | 4,&local_90);
        goto LAB_00ef39f0;
      }
      goto LAB_00ef38c8;
    }
    if (((char)DFFlag::LuaReportParseWrongNamedType != '\0') && (local_f0 != 0)) {
      lua_telemetry_parsed_named_non_function_type = 1;
    }
    if (!param_1) {
      uVar19 = *(undefined8 *)(*local_e8 + lStack_e0 * 8);
      goto LAB_00ef3a34;
    }
                    /* try { // try from 00ef395c to 00ef3983 has its CatchHandler @ 00ef3b8c */
    pAVar9 = (AstTypePackExplicit *)Allocator::allocate(*(Allocator **)(this + 0x80),0x38);
    local_80 = 0;
    uStack_88 = (undefined4)uStack_108;
    uStack_84 = (undefined4)(uStack_108 >> 0x20);
    local_90 = (int)local_110;
    uStack_8c = (undefined4)(local_110 >> 0x20);
    AstTypePackExplicit::AstTypePackExplicit(pAVar9,(ulong)&local_b0 | 4,&local_90);
LAB_00ef39f0:
    uVar19 = 0;
    puVar12 = (undefined8 *)local_100[1];
    puVar18 = (undefined8 *)(*local_100 + lStack_f8 * 0x20);
    if (puVar18 != puVar12) goto LAB_00ef3a4c;
  }
  lVar17 = *local_e8 + lStack_e0 * 8;
  if (lVar17 != local_e8[1]) {
    local_e8[1] = lVar17;
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
LAB_00ef3b84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
}


