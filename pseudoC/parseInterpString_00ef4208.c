// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseInterpString
// Entry Point: 00ef4208
// Size: 1132 bytes
// Signature: undefined parseInterpString(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseInterpString() */

AstExprInterpString * Luau::Parser::parseInterpString(void)

{
  ulong uVar1;
  void *pvVar2;
  Parser PVar3;
  long lVar4;
  undefined8 *puVar5;
  Parser *in_x0;
  ulong uVar6;
  AstExprInterpString *this;
  ulong uVar7;
  Parser *pPVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  Parser *pPVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 *local_100;
  long lStack_f8;
  void *local_f0;
  AstExpr *local_e8;
  ulong local_e0;
  ulong uStack_d8;
  Parser *local_d0;
  ulong uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long *local_98;
  long lStack_90;
  ulong local_88;
  long *local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = (long *)(in_x0 + 400);
  local_98 = (long *)(in_x0 + 0x1a8);
  local_88 = 0;
  iVar16 = *(int *)(in_x0 + 0x28);
  local_78 = *(long *)(in_x0 + 0x198) - *(long *)(in_x0 + 400) >> 4;
  uStack_a8 = *(undefined8 *)(in_x0 + 0x34);
  local_b0 = *(undefined8 *)(in_x0 + 0x2c);
  lStack_90 = *(long *)(in_x0 + 0x1b0) - *(long *)(in_x0 + 0x1a8) >> 3;
  local_70 = 0;
  do {
    uStack_b8 = *(undefined8 *)(in_x0 + 0x34);
    local_c0 = *(undefined8 *)(in_x0 + 0x2c);
                    /* try { // try from 00ef4290 to 00ef429f has its CatchHandler @ 00ef46b0 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)(in_x0 + 0x310),*(ulong *)(in_x0 + 0x40));
    uVar6 = Lexer::fixupQuotedString((basic_string *)(in_x0 + 0x310));
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 00ef440c to 00ef4413 has its CatchHandler @ 00ef46a4 */
      nextLexeme();
      local_100 = (undefined8 *)0x0;
      lStack_f8 = 0;
                    /* try { // try from 00ef4418 to 00ef442f has its CatchHandler @ 00ef46a0 */
      this = (AstExprInterpString *)
             reportExprError((Location *)in_x0,(AstArray *)&local_b0,(char *)&local_100,
                             "Interpolated string literal contains malformed escape sequence");
      goto LAB_00ef457c;
    }
    PVar3 = in_x0[0x310];
    uVar7 = *(ulong *)(in_x0 + 0x318);
    uVar12 = (ulong)((byte)PVar3 >> 1);
    pPVar13 = in_x0 + 0x311;
    uVar6 = uVar12;
    if (((byte)PVar3 & 1) != 0) {
      pPVar13 = *(Parser **)(in_x0 + 800);
      uVar6 = uVar7;
    }
    uVar1 = uVar6 + 1;
    if (uVar6 == 0xffffffffffffffff) {
      local_d0 = (Parser *)0x0;
    }
    else {
                    /* try { // try from 00ef42d4 to 00ef4357 has its CatchHandler @ 00ef46b4 */
      local_d0 = (Parser *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),uVar1);
      if ((uVar1 < 8) || ((local_d0 < pPVar13 + uVar6 + 1 && (pPVar13 < local_d0 + uVar6 + 1)))) {
        uVar7 = 0;
LAB_00ef4308:
        lVar15 = (uVar6 - uVar7) + 1;
        pPVar8 = local_d0 + uVar7;
        pPVar13 = pPVar13 + uVar7;
        do {
          lVar15 = lVar15 + -1;
          *pPVar8 = *pPVar13;
          pPVar8 = pPVar8 + 1;
          pPVar13 = pPVar13 + 1;
        } while (lVar15 != 0);
      }
      else if (uVar1 < 0x20) {
        uVar12 = 0;
LAB_00ef43dc:
        uVar7 = uVar1 & 0xfffffffffffffff8;
        lVar15 = uVar12 - uVar7;
        puVar9 = (undefined8 *)(local_d0 + uVar12);
        puVar10 = (undefined8 *)(pPVar13 + uVar12);
        do {
          lVar15 = lVar15 + 8;
          *puVar9 = *puVar10;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar15 != 0);
        if (uVar1 != uVar7) goto LAB_00ef4308;
      }
      else {
        uVar7 = uVar1 & 0xffffffffffffffe0;
        puVar9 = (undefined8 *)(local_d0 + 0x10);
        puVar10 = (undefined8 *)(pPVar13 + 0x10);
        uVar12 = uVar7;
        do {
          puVar5 = puVar10 + -1;
          uVar17 = puVar10[-2];
          uVar19 = puVar10[1];
          uVar18 = *puVar10;
          puVar10 = puVar10 + 4;
          uVar12 = uVar12 - 0x20;
          puVar9[-1] = *puVar5;
          puVar9[-2] = uVar17;
          puVar9[1] = uVar19;
          *puVar9 = uVar18;
          puVar9 = puVar9 + 4;
        } while (uVar12 != 0);
        if (uVar1 != uVar7) {
          uVar12 = uVar7;
          if ((uVar1 & 0x18) == 0) goto LAB_00ef4308;
          goto LAB_00ef43dc;
        }
      }
      PVar3 = in_x0[0x310];
      uVar7 = *(ulong *)(in_x0 + 0x318);
      uVar12 = (ulong)((byte)PVar3 >> 1);
    }
    uStack_c8 = uVar12;
    if (((byte)PVar3 & 1) != 0) {
      uStack_c8 = uVar7;
    }
    nextLexeme();
    TempVector<Luau::AstArray<char>>::push_back
              ((TempVector<Luau::AstArray<char>> *)&local_80,(AstArray *)&local_d0);
    lVar11 = local_70;
    lVar15 = local_78;
    if (iVar16 - 0x10bU < 2) {
      if (local_70 == 0) {
        local_100 = (undefined8 *)0x0;
        lVar14 = lStack_90;
        uVar6 = local_88;
      }
      else {
        lVar14 = *local_80;
                    /* try { // try from 00ef444c to 00ef444f has its CatchHandler @ 00ef4698 */
        local_100 = (undefined8 *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_70 << 4);
        puVar9 = (undefined8 *)(lVar14 + lVar15 * 0x10);
        puVar10 = local_100;
        lVar15 = lVar11;
        do {
          uVar17 = *puVar9;
          lVar15 = lVar15 + -1;
          puVar10[1] = puVar9[1];
          *puVar10 = uVar17;
          puVar9 = puVar9 + 2;
          puVar10 = puVar10 + 2;
          lVar14 = lStack_90;
          uVar6 = local_88;
        } while (lVar15 != 0);
      }
      lStack_90 = lVar14;
      local_88 = uVar6;
      if (uVar6 == 0) {
        lStack_f8 = lVar11;
        local_e0 = 0;
      }
      else {
        lStack_f8 = lVar11;
        lVar15 = *local_98;
                    /* try { // try from 00ef4488 to 00ef448b has its CatchHandler @ 00ef46a8 */
        local_e0 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),uVar6 << 3);
        if ((uVar6 < 4) ||
           ((local_e0 < lVar15 + (uVar6 + lVar14) * 8 &&
            ((ulong)(lVar15 + lVar14 * 8) < local_e0 + uVar6 * 8)))) {
          uVar7 = 0;
        }
        else {
          uVar7 = uVar6 & 0xfffffffffffffffc;
          puVar9 = (undefined8 *)(local_e0 + 0x10);
          puVar10 = (undefined8 *)(lVar15 + lVar14 * 8 + 0x10);
          uVar12 = uVar7;
          do {
            puVar5 = puVar10 + -1;
            uVar17 = puVar10[-2];
            uVar19 = puVar10[1];
            uVar18 = *puVar10;
            puVar10 = puVar10 + 4;
            uVar12 = uVar12 - 4;
            puVar9[-1] = *puVar5;
            puVar9[-2] = uVar17;
            puVar9[1] = uVar19;
            *puVar9 = uVar18;
            puVar9 = puVar9 + 4;
          } while (uVar12 != 0);
          if (uVar6 == uVar7) goto LAB_00ef4528;
        }
        lVar11 = uVar6 - uVar7;
        puVar9 = (undefined8 *)(local_e0 + uVar7 * 8);
        puVar10 = (undefined8 *)(lVar15 + (uVar7 + lVar14) * 8);
        do {
          lVar11 = lVar11 + -1;
          *puVar9 = *puVar10;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (lVar11 != 0);
      }
LAB_00ef4528:
      uStack_d8 = uVar6;
                    /* try { // try from 00ef4530 to 00ef454f has its CatchHandler @ 00ef46a8 */
      this = (AstExprInterpString *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),0x40);
      AstExprInterpString::AstExprInterpString
                (this,(Location *)&local_b0,(AstArray *)&local_100,(AstArray *)&local_e0);
      goto LAB_00ef457c;
    }
                    /* try { // try from 00ef4364 to 00ef437f has its CatchHandler @ 00ef46ac */
    local_e8 = (AstExpr *)parseExpr(in_x0,0);
    TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_98,&local_e8);
    iVar16 = *(int *)(in_x0 + 0x28);
  } while (iVar16 - 0x109U < 3);
  if (iVar16 == 0x11a) {
                    /* try { // try from 00ef4554 to 00ef455b has its CatchHandler @ 00ef469c */
    nextLexeme();
    local_100 = (undefined8 *)0x0;
    lStack_f8 = 0;
                    /* try { // try from 00ef4560 to 00ef4577 has its CatchHandler @ 00ef4690 */
    this = (AstExprInterpString *)
           reportExprError((Location *)in_x0,(AstArray *)&local_c0,(char *)&local_100,
                           "Malformed interpolated string, did you forget to add a \'}\'?");
  }
  else if (iVar16 == 0x11d) {
                    /* try { // try from 00ef44ec to 00ef44f3 has its CatchHandler @ 00ef469c */
    nextLexeme();
    local_100 = (undefined8 *)0x0;
    lStack_f8 = 0;
                    /* try { // try from 00ef44f8 to 00ef450f has its CatchHandler @ 00ef4694 */
    this = (AstExprInterpString *)
           reportExprError((Location *)in_x0,(AstArray *)&local_c0,(char *)&local_100,
                           "Double braces are not permitted within interpolated strings. Did you mean \'\\{\'?"
                          );
  }
  else {
    local_e0 = 0;
    uStack_d8 = 0;
                    /* try { // try from 00ef45e4 to 00ef45f3 has its CatchHandler @ 00ef468c */
    Lexeme::toString();
    pvVar2 = (void *)((ulong)&local_100 | 1);
    if (((ulong)local_100 & 1) != 0) {
      pvVar2 = local_f0;
    }
                    /* try { // try from 00ef4608 to 00ef461f has its CatchHandler @ 00ef4674 */
    this = (AstExprInterpString *)
           reportExprError((Location *)in_x0,(AstArray *)&local_c0,(char *)&local_e0,
                           "Malformed interpolated string, got %s",pvVar2);
    if (((ulong)local_100 & 1) != 0) {
      operator_delete(local_f0);
    }
  }
LAB_00ef457c:
  lVar15 = *local_98 + lStack_90 * 8;
  if (lVar15 != local_98[1]) {
    local_98[1] = lVar15;
  }
  lVar15 = *local_80 + local_78 * 0x10;
  if (lVar15 != local_80[1]) {
    local_80[1] = lVar15;
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


