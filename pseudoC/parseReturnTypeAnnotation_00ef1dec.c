// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseReturnTypeAnnotation
// Entry Point: 00ef1dec
// Size: 1700 bytes
// Signature: undefined parseReturnTypeAnnotation(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseReturnTypeAnnotation() */

void Luau::Parser::parseReturnTypeAnnotation(void)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  Parser *in_x0;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *in_x8;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  AstType *local_128;
  undefined8 *local_120;
  long lStack_118;
  ulong local_110;
  ulong uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *local_d0;
  long lStack_c8;
  long local_c0;
  long *local_b8;
  long local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  int iStack_94;
  ulong local_90;
  long local_78;
  
  uVar5 = FInt::LuauRecursionLimit;
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  iVar2 = *(int *)(in_x0 + 0xbc);
  *(uint *)(in_x0 + 0xbc) = iVar2 + 1U;
  if (uVar5 < iVar2 + 1U) {
    ParseError::raise((Location *)(in_x0 + 0x2c),
                      "Exceeded allowed recursion depth; simplify your %s to make the code compile",
                      "type annotation");
    goto LAB_00ef248c;
  }
  plVar10 = (long *)(in_x0 + 0x250);
  local_c0 = 0;
  local_b0 = *(long *)(in_x0 + 600) - *(long *)(in_x0 + 0x250) >> 3;
  uStack_d8 = *(undefined8 *)(in_x0 + 0x40);
  uStack_e0 = *(undefined8 *)(in_x0 + 0x38);
  local_d0 = (long *)(in_x0 + 0x2f8);
  lStack_c8 = *(long *)(in_x0 + 0x300) - *(long *)(in_x0 + 0x2f8) >> 5;
  local_a8 = 0;
  iVar2 = *(int *)(in_x0 + 0x28);
  uStack_e8 = (undefined4)*(undefined8 *)(in_x0 + 0x30);
  uStack_e4 = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x30) >> 0x20);
  local_f0 = (int)*(undefined8 *)(in_x0 + 0x28);
  uStack_ec = (undefined4)((ulong)*(undefined8 *)(in_x0 + 0x28) >> 0x20);
  local_b8 = plVar10;
  if (iVar2 == 0x28) {
                    /* try { // try from 00ef1f20 to 00ef1f6f has its CatchHandler @ 00ef24c8 */
    nextLexeme();
    uStack_f8 = *(undefined8 *)(in_x0 + 0x34);
    local_100 = *(undefined8 *)(in_x0 + 0x2c);
    *(int *)(*(long *)(in_x0 + 0x160) + 0x41c) = *(int *)(*(long *)(in_x0 + 0x160) + 0x41c) + 1;
    if (*(int *)(in_x0 + 0x28) == 0x29) {
      lVar6 = 0;
      uVar8 = CONCAT44(uStack_e8,uStack_ec);
      uVar18 = *(undefined8 *)(in_x0 + 0x34);
LAB_00ef20d8:
                    /* try { // try from 00ef20d8 to 00ef213f has its CatchHandler @ 00ef24bc */
      nextLexeme();
    }
    else {
                    /* try { // try from 00ef20a4 to 00ef20b3 has its CatchHandler @ 00ef24a8 */
      lVar6 = parseTypeList(in_x0,(TempVector *)&local_b8,(TempVector *)&local_d0);
      uVar8 = CONCAT44(uStack_e8,uStack_ec);
      uVar18 = *(undefined8 *)(in_x0 + 0x34);
      local_a0._0_4_ = local_f0;
      local_a0._4_4_ = uStack_ec;
      uStack_98 = uStack_e8;
      if (*(int *)(in_x0 + 0x28) == 0x29) goto LAB_00ef20d8;
      puVar11 = &local_a0;
      expectMatchAndConsumeFail(in_x0,0x29,(MatchLexeme *)puVar11,(char *)0x0);
      expectMatchAndConsumeRecover(in_x0,')',(MatchLexeme *)puVar11,true);
    }
    uVar16 = local_a8;
    lVar9 = local_b0;
    *(int *)(*(long *)(in_x0 + 0x160) + 0x41c) = *(int *)(*(long *)(in_x0 + 0x160) + 0x41c) + -1;
    if ((*(int *)(in_x0 + 0x28) != 0x107) && (local_c0 == 0)) {
      uVar7 = local_a8;
      if (local_a8 == 0) {
LAB_00ef23c0:
        *in_x8 = uVar8;
        in_x8[1] = uVar18;
        in_x8[2] = uVar7;
        in_x8[3] = uVar16;
      }
      else {
        if (local_a8 != 1) {
          lVar12 = *local_b8;
                    /* try { // try from 00ef2370 to 00ef2373 has its CatchHandler @ 00ef2490 */
          uVar7 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_a8 << 3);
          if ((uVar16 < 4) ||
             ((uVar7 < lVar12 + (uVar16 + lVar9) * 8 &&
              ((ulong)(lVar12 + lVar9 * 8) < uVar7 + uVar16 * 8)))) {
            uVar13 = 0;
          }
          else {
            uVar13 = uVar16 & 0xfffffffffffffffc;
            puVar11 = (undefined8 *)(uVar7 + 0x10);
            puVar14 = (undefined8 *)(lVar12 + lVar9 * 8 + 0x10);
            uVar15 = uVar13;
            do {
              puVar1 = puVar14 + -1;
              uVar19 = puVar14[-2];
              uVar21 = puVar14[1];
              uVar20 = *puVar14;
              puVar14 = puVar14 + 4;
              uVar15 = uVar15 - 4;
              puVar11[-1] = *puVar1;
              puVar11[-2] = uVar19;
              puVar11[1] = uVar21;
              *puVar11 = uVar20;
              puVar11 = puVar11 + 4;
            } while (uVar15 != 0);
            if (uVar16 == uVar13) goto LAB_00ef23c0;
          }
          lVar17 = uVar16 - uVar13;
          puVar11 = (undefined8 *)(uVar7 + uVar13 * 8);
          puVar14 = (undefined8 *)(lVar12 + (uVar13 + lVar9) * 8);
          do {
            lVar17 = lVar17 + -1;
            *puVar11 = *puVar14;
            puVar11 = puVar11 + 1;
            puVar14 = puVar14 + 1;
          } while (lVar17 != 0);
          goto LAB_00ef23c0;
        }
                    /* try { // try from 00ef2178 to 00ef2187 has its CatchHandler @ 00ef2498 */
        lVar9 = parseTypeAnnotation(in_x0,(TempVector *)&local_b8,(Location *)&local_100);
        uVar18 = *(undefined8 *)(lVar9 + 0x14);
                    /* try { // try from 00ef2194 to 00ef219b has its CatchHandler @ 00ef2494 */
        plVar10 = (long *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),8);
        *plVar10 = lVar9;
        *in_x8 = uVar8;
        in_x8[1] = uVar18;
        in_x8[2] = plVar10;
        in_x8[3] = 1;
      }
      goto LAB_00ef1fb8;
    }
    if (local_a8 == 0) {
      local_110 = 0;
      if (local_c0 != 0) goto LAB_00ef2224;
LAB_00ef2264:
      uStack_108 = uVar16;
      local_120 = (undefined8 *)0x0;
      lVar12 = local_c0;
    }
    else {
      lVar12 = *local_b8;
                    /* try { // try from 00ef21c8 to 00ef21cb has its CatchHandler @ 00ef24a4 */
      local_110 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_a8 << 3);
      if ((uVar16 < 4) ||
         ((local_110 < lVar12 + (uVar16 + lVar9) * 8 &&
          ((ulong)(lVar12 + lVar9 * 8) < local_110 + uVar16 * 8)))) {
        uVar7 = 0;
LAB_00ef21f8:
        lVar17 = uVar16 - uVar7;
        puVar11 = (undefined8 *)(local_110 + uVar7 * 8);
        puVar14 = (undefined8 *)(lVar12 + (uVar7 + lVar9) * 8);
        do {
          lVar17 = lVar17 + -1;
          *puVar11 = *puVar14;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar7 = uVar16 & 0xfffffffffffffffc;
        puVar11 = (undefined8 *)(local_110 + 0x10);
        puVar14 = (undefined8 *)(lVar12 + lVar9 * 8 + 0x10);
        uVar13 = uVar7;
        do {
          puVar1 = puVar14 + -1;
          uVar18 = puVar14[-2];
          uVar20 = puVar14[1];
          uVar19 = *puVar14;
          puVar14 = puVar14 + 4;
          uVar13 = uVar13 - 4;
          puVar11[-1] = *puVar1;
          puVar11[-2] = uVar18;
          puVar11[1] = uVar20;
          *puVar11 = uVar19;
          puVar11 = puVar11 + 4;
        } while (uVar13 != 0);
        if (uVar16 != uVar7) goto LAB_00ef21f8;
      }
      if (local_c0 == 0) goto LAB_00ef2264;
LAB_00ef2224:
      lVar12 = local_c0;
      lVar9 = lStack_c8;
      uStack_108 = uVar16;
      lVar17 = *local_d0;
                    /* try { // try from 00ef2234 to 00ef2237 has its CatchHandler @ 00ef24a0 */
      local_120 = (undefined8 *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_c0 << 5);
      puVar11 = (undefined8 *)(lVar17 + lVar9 * 0x20);
      puVar14 = local_120;
      lVar9 = lVar12;
      do {
        uVar20 = *puVar11;
        uVar19 = puVar11[3];
        uVar18 = puVar11[2];
        lVar9 = lVar9 + -1;
        puVar14[1] = puVar11[1];
        *puVar14 = uVar20;
        puVar14[3] = uVar19;
        puVar14[2] = uVar18;
        puVar11 = puVar11 + 4;
        puVar14 = puVar14 + 4;
      } while (lVar9 != 0);
    }
    local_90 = 0;
    uStack_98 = (undefined4)(*(long *)(in_x0 + 600) - *(long *)(in_x0 + 0x250) >> 3);
    iStack_94 = (int)(*(long *)(in_x0 + 600) - *(long *)(in_x0 + 0x250) >> 0x23);
    lStack_118 = lVar12;
    local_a0 = plVar10;
                    /* try { // try from 00ef2284 to 00ef22bb has its CatchHandler @ 00ef24ac */
    local_128 = (AstType *)parseFunctionTypeAnnotationTail();
    TempVector<Luau::AstType*>::push_back((TempVector<Luau::AstType*> *)&local_a0,&local_128);
    uVar16 = local_90;
    lVar12 = CONCAT44(iStack_94,uStack_98);
    lVar9 = *local_a0;
    plVar10 = (long *)(lVar9 + lVar12 * 8);
    uVar18 = *(undefined8 *)(*plVar10 + 0x14);
    if (local_90 == 0) {
      uVar7 = 0;
    }
    else {
                    /* try { // try from 00ef22e0 to 00ef22e3 has its CatchHandler @ 00ef249c */
      uVar7 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_90 << 3);
      if ((uVar16 < 4) ||
         ((uVar7 < lVar9 + (uVar16 + lVar12) * 8 && (plVar10 < (long *)(uVar7 + uVar16 * 8))))) {
        uVar13 = 0;
LAB_00ef230c:
        lVar17 = uVar16 - uVar13;
        puVar11 = (undefined8 *)(uVar7 + uVar13 * 8);
        puVar14 = (undefined8 *)(lVar9 + (uVar13 + lVar12) * 8);
        do {
          lVar17 = lVar17 + -1;
          *puVar11 = *puVar14;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        } while (lVar17 != 0);
      }
      else {
        uVar13 = uVar16 & 0xfffffffffffffffc;
        puVar11 = (undefined8 *)(uVar7 + 0x10);
        puVar14 = (undefined8 *)(lVar9 + lVar12 * 8 + 0x10);
        uVar15 = uVar13;
        do {
          puVar1 = puVar14 + -1;
          uVar19 = puVar14[-2];
          uVar21 = puVar14[1];
          uVar20 = *puVar14;
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 4;
          puVar11[-1] = *puVar1;
          puVar11[-2] = uVar19;
          puVar11[1] = uVar21;
          *puVar11 = uVar20;
          puVar11 = puVar11 + 4;
        } while (uVar15 != 0);
        if (uVar16 != uVar13) goto LAB_00ef230c;
      }
      lVar12 = CONCAT44(iStack_94,uStack_98);
      lVar9 = *local_a0;
    }
    lVar17 = local_a0[1];
    lVar9 = lVar9 + lVar12 * 8;
    *in_x8 = uVar8;
    in_x8[1] = uVar18;
    in_x8[2] = uVar7;
    in_x8[3] = uVar16;
    in_x8[4] = lVar6;
    if (lVar9 != lVar17) {
      local_a0[1] = lVar9;
    }
  }
  else {
    if ((iVar2 == 0x106) || ((iVar2 == 0x117 && (Lexer::lookahead(), (int)local_a0 == 0x106)))) {
                    /* try { // try from 00ef1e9c to 00ef1ea3 has its CatchHandler @ 00ef24c8 */
      lVar6 = parseTypePackAnnotation();
      if (local_a8 == 0) goto LAB_00ef1fa0;
LAB_00ef1eb0:
      uVar16 = local_a8;
      lVar9 = local_b0;
      lVar17 = *local_b8;
      plVar10 = (long *)(lVar17 + local_b0 * 8);
      lVar12 = *plVar10;
      uVar18 = *(undefined8 *)(lVar12 + 0x14);
      uVar8 = *(undefined8 *)(lVar12 + 0xc);
      uStack_98 = (undefined4)uVar18;
      iStack_94 = (int)((ulong)uVar18 >> 0x20);
      local_a0._0_4_ = (int)uVar8;
      local_a0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
                    /* try { // try from 00ef1ed0 to 00ef1ed3 has its CatchHandler @ 00ef24c0 */
      uVar7 = Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_a8 << 3);
      if ((uVar16 < 4) ||
         ((uVar7 < lVar17 + (uVar16 + lVar9) * 8 && (plVar10 < (long *)(uVar7 + uVar16 * 8))))) {
        uVar13 = 0;
      }
      else {
        uVar13 = uVar16 & 0xfffffffffffffffc;
        puVar11 = (undefined8 *)(uVar7 + 0x10);
        puVar14 = (undefined8 *)(lVar17 + lVar9 * 8 + 0x10);
        uVar15 = uVar13;
        do {
          puVar1 = puVar14 + -1;
          uVar8 = puVar14[-2];
          uVar19 = puVar14[1];
          uVar18 = *puVar14;
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 4;
          puVar11[-1] = *puVar1;
          puVar11[-2] = uVar8;
          puVar11[1] = uVar19;
          *puVar11 = uVar18;
          puVar11 = puVar11 + 4;
        } while (uVar15 != 0);
        if (uVar16 == uVar13) goto LAB_00ef1fac;
      }
      lVar12 = uVar16 - uVar13;
      puVar11 = (undefined8 *)(uVar7 + uVar13 * 8);
      puVar14 = (undefined8 *)(lVar17 + (uVar13 + lVar9) * 8);
      do {
        lVar12 = lVar12 + -1;
        *puVar11 = *puVar14;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (lVar12 != 0);
    }
    else {
                    /* try { // try from 00ef1f7c to 00ef1f93 has its CatchHandler @ 00ef24c4 */
      uVar8 = parseTypeAnnotation();
      local_a0._0_4_ = (int)uVar8;
      local_a0._4_4_ = (undefined4)((ulong)uVar8 >> 0x20);
      TempVector<Luau::AstType*>::push_back
                ((TempVector<Luau::AstType*> *)&local_b8,(AstType **)&local_a0);
      lVar6 = 0;
      if (local_a8 != 0) goto LAB_00ef1eb0;
LAB_00ef1fa0:
      uVar7 = 0;
      uStack_98 = (undefined4)*(undefined8 *)(lVar6 + 0x14);
      iStack_94 = (int)((ulong)*(undefined8 *)(lVar6 + 0x14) >> 0x20);
      local_a0._0_4_ = (int)*(undefined8 *)(lVar6 + 0xc);
      local_a0._4_4_ = (undefined4)((ulong)*(undefined8 *)(lVar6 + 0xc) >> 0x20);
      uVar16 = local_a8;
    }
LAB_00ef1fac:
    in_x8[2] = uVar7;
    in_x8[3] = uVar16;
    in_x8[1] = CONCAT44(iStack_94,uStack_98);
    *in_x8 = CONCAT44(local_a0._4_4_,(int)local_a0);
LAB_00ef1fb8:
    in_x8[4] = lVar6;
  }
  puVar14 = (undefined8 *)local_d0[1];
  puVar11 = (undefined8 *)(*local_d0 + lStack_c8 * 0x20);
  if (puVar11 != puVar14) {
    if ((undefined8 *)((long)puVar11 + ((long)puVar14 - (long)puVar11 & 0xffffffffffffffe0U)) !=
        puVar14) {
      lVar6 = (long)puVar14 - (long)puVar11 >> 5;
      do {
        cVar3 = *(char *)(puVar11 + 3);
        if (cVar3 == *(char *)(puVar11 + lVar6 * 4 + 3)) {
          if (cVar3 != '\0') {
            puVar1 = puVar11 + lVar6 * 4;
            uVar18 = puVar1[2];
            uVar8 = puVar1[1];
            *puVar11 = *puVar1;
            puVar11[2] = uVar18;
            puVar11[1] = uVar8;
          }
        }
        else if (cVar3 == '\0') {
          puVar1 = puVar11 + lVar6 * 4;
          *(undefined *)(puVar11 + 3) = 1;
          uVar18 = puVar1[1];
          uVar8 = *puVar1;
          puVar11[2] = puVar1[2];
          puVar11[1] = uVar18;
          *puVar11 = uVar8;
        }
        else {
          *(undefined *)(puVar11 + 3) = 0;
        }
        puVar11 = puVar11 + 4;
      } while (puVar11 + lVar6 * 4 != puVar14);
    }
    local_d0[1] = (long)puVar11;
  }
  lVar6 = *local_b8 + local_b0 * 8;
  if (lVar6 != local_b8[1]) {
    local_b8[1] = lVar6;
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
LAB_00ef248c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


