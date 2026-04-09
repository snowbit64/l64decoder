// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseGenericTypeList
// Entry Point: 00ef0194
// Size: 1080 bytes
// Signature: undefined __cdecl parseGenericTypeList(bool param_1)


/* Luau::Parser::parseGenericTypeList(bool) */

void Luau::Parser::parseGenericTypeList(bool param_1)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  Parser *this;
  undefined8 *puVar11;
  ulong in_x1;
  int *piVar12;
  int iVar13;
  long *in_x8;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined auVar24 [16];
  long *local_b8;
  long lStack_b0;
  long local_a8;
  long *local_a0;
  long lStack_98;
  long local_90;
  int local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  this = (Parser *)(ulong)param_1;
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puVar17 = (undefined8 *)0x0;
  lVar18 = 0;
  lVar19 = 0;
  puVar11 = (undefined8 *)0x0;
  local_90 = 0;
  local_a8 = 0;
  local_a0 = (long *)(this + 0x2c8);
  lStack_98 = *(long *)(this + 0x2d0) - *(long *)(this + 0x2c8) >> 5;
  local_b8 = (long *)(this + 0x2e0);
  lStack_b0 = *(long *)(this + 0x2e8) - *(long *)(this + 0x2e0) >> 5;
  if (*(int *)(this + 0x28) == 0x3c) {
    puVar17 = (undefined8 *)(this + 0x2c);
    uVar14 = *puVar17;
                    /* try { // try from 00ef022c to 00ef0233 has its CatchHandler @ 00ef05d8 */
    nextLexeme();
    bVar3 = false;
    bVar2 = 0;
    do {
      uVar7 = uStack_7c;
      uVar6 = local_80;
      uVar23 = *(undefined8 *)(this + 0x34);
      local_80 = (undefined4)*puVar17;
      uVar8 = local_80;
      uStack_7c = (undefined4)((ulong)*puVar17 >> 0x20);
      uVar9 = uStack_7c;
      local_80 = uVar6;
      uStack_7c = uVar7;
      if (*(int *)(this + 0x28) == 0x117) {
        uVar22 = *(undefined8 *)(this + 0x40);
                    /* try { // try from 00ef026c to 00ef0273 has its CatchHandler @ 00ef0604 */
        nextLexeme();
        iVar13 = *(int *)(this + 0x28);
        bVar10 = iVar13 == 0x106;
        if ((bool)(!bVar10 & (bVar2 ^ 1))) goto LAB_00ef02bc;
LAB_00ef0288:
        if (bVar10) {
                    /* try { // try from 00ef028c to 00ef0293 has its CatchHandler @ 00ef0608 */
          nextLexeme();
        }
        else {
                    /* try { // try from 00ef0354 to 00ef037b has its CatchHandler @ 00ef0608 */
          report((Location *)this,(char *)puVar17,"Generic types come before generic type packs");
        }
        uVar6 = uStack_84;
        iVar13 = local_88;
        local_88 = (int)uVar22;
        iVar4 = local_88;
        uStack_84 = (undefined4)((ulong)uVar22 >> 0x20);
        uVar7 = uStack_84;
        local_88 = iVar13;
        uStack_84 = uVar6;
        if (((in_x1 & 1) == 0) || (*(int *)(this + 0x28) != 0x3d)) {
          if (bVar3) {
                    /* try { // try from 00ef03b4 to 00ef03c7 has its CatchHandler @ 00ef0608 */
            report((Location *)this,(char *)puVar17,
                   "Expected default type pack after type pack name");
          }
          local_70 = 0;
                    /* try { // try from 00ef03d8 to 00ef03e3 has its CatchHandler @ 00ef0600 */
          local_88 = iVar4;
          uStack_84 = uVar7;
          local_80 = uVar8;
          uStack_7c = uVar9;
          uStack_78 = uVar23;
          TempVector<Luau::AstGenericTypePack>::push_back
                    ((TempVector<Luau::AstGenericTypePack> *)&local_b8,
                     (AstGenericTypePack *)&local_88);
          bVar2 = 1;
          iVar13 = *(int *)(this + 0x28);
        }
        else {
          nextLexeme();
          iVar13 = *(int *)(this + 0x28);
          if (iVar13 == 0x106) {
LAB_00ef0388:
                    /* try { // try from 00ef0388 to 00ef038f has its CatchHandler @ 00ef05f0 */
            local_70 = parseTypePackAnnotation();
                    /* try { // try from 00ef03a0 to 00ef03ab has its CatchHandler @ 00ef05ec */
            local_88 = iVar4;
            uStack_84 = uVar7;
            local_80 = uVar8;
            uStack_7c = uVar9;
            uStack_78 = uVar23;
            TempVector<Luau::AstGenericTypePack>::push_back
                      ((TempVector<Luau::AstGenericTypePack> *)&local_b8,
                       (AstGenericTypePack *)&local_88);
          }
          else {
            uVar22 = *(undefined8 *)(this + 0x2c);
            if (iVar13 == 0x117) {
                    /* try { // try from 00ef0404 to 00ef040f has its CatchHandler @ 00ef05e8 */
              Lexer::lookahead();
              if (local_88 == 0x106) goto LAB_00ef0388;
              iVar13 = *(int *)(this + 0x28);
            }
            if (iVar13 == 0x28) {
                    /* try { // try from 00ef0428 to 00ef042f has its CatchHandler @ 00ef05e4 */
              auVar24 = parseTypeOrPackAnnotation();
              if (auVar24._0_8_ != 0) {
                local_88 = (int)uVar22;
                uStack_84 = (undefined4)((ulong)uVar22 >> 0x20);
                local_80 = (undefined4)*(undefined8 *)(this + 0x50);
                uStack_7c = (undefined4)((ulong)*(undefined8 *)(this + 0x50) >> 0x20);
                    /* try { // try from 00ef0440 to 00ef0453 has its CatchHandler @ 00ef05d4 */
                report((Location *)this,(char *)&local_88,"Expected type pack after \'=\', got type"
                      );
              }
                    /* try { // try from 00ef0464 to 00ef046f has its CatchHandler @ 00ef05e0 */
              local_88 = iVar4;
              uStack_84 = uVar7;
              local_80 = uVar8;
              uStack_7c = uVar9;
              uStack_78 = uVar23;
              local_70 = auVar24._8_8_;
              TempVector<Luau::AstGenericTypePack>::push_back
                        ((TempVector<Luau::AstGenericTypePack> *)&local_b8,
                         (AstGenericTypePack *)&local_88);
            }
          }
          bVar3 = true;
          bVar2 = 1;
          iVar13 = *(int *)(this + 0x28);
        }
      }
      else {
                    /* try { // try from 00ef0298 to 00ef02a3 has its CatchHandler @ 00ef0604 */
        reportNameError(this,(char *)0x0);
        uVar22 = *(undefined8 *)(this + 0xd0);
        iVar13 = *(int *)(this + 0x28);
        bVar10 = iVar13 == 0x106;
        if (!(bool)(!bVar10 & (bVar2 ^ 1))) goto LAB_00ef0288;
LAB_00ef02bc:
        uVar6 = uStack_84;
        iVar4 = local_88;
        local_88 = (int)uVar22;
        iVar5 = local_88;
        uStack_84 = (undefined4)((ulong)uVar22 >> 0x20);
        uVar7 = uStack_84;
        local_88 = iVar4;
        uStack_84 = uVar6;
        if (((in_x1 & 1) == 0) || (iVar13 != 0x3d)) {
          if (bVar3) {
                    /* try { // try from 00ef0310 to 00ef0323 has its CatchHandler @ 00ef0608 */
            report((Location *)this,(char *)puVar17,"Expected default type after type name");
          }
          local_70 = 0;
                    /* try { // try from 00ef0334 to 00ef033f has its CatchHandler @ 00ef05f8 */
          local_88 = iVar5;
          uStack_84 = uVar7;
          local_80 = uVar8;
          uStack_7c = uVar9;
          uStack_78 = uVar23;
          TempVector<Luau::AstGenericType>::push_back
                    ((TempVector<Luau::AstGenericType> *)&local_a0,(AstGenericType *)&local_88);
          bVar2 = 0;
          iVar13 = *(int *)(this + 0x28);
        }
        else {
                    /* try { // try from 00ef02c8 to 00ef02cf has its CatchHandler @ 00ef0608 */
          nextLexeme();
                    /* try { // try from 00ef02d0 to 00ef02d7 has its CatchHandler @ 00ef05fc */
          local_70 = parseTypeAnnotation();
                    /* try { // try from 00ef02e8 to 00ef02f3 has its CatchHandler @ 00ef05f4 */
          local_88 = iVar5;
          uStack_84 = uVar7;
          local_80 = uVar8;
          uStack_7c = uVar9;
          uStack_78 = uVar23;
          TempVector<Luau::AstGenericType>::push_back
                    ((TempVector<Luau::AstGenericType> *)&local_a0,(AstGenericType *)&local_88);
          bVar2 = 0;
          bVar3 = true;
          iVar13 = *(int *)(this + 0x28);
        }
      }
      if (iVar13 != 0x2c) goto LAB_00ef0490;
                    /* try { // try from 00ef0484 to 00ef048b has its CatchHandler @ 00ef0608 */
      nextLexeme();
    } while( true );
  }
LAB_00ef0560:
  *in_x8 = (long)puVar17;
  in_x8[1] = lVar18;
  in_x8[2] = (long)puVar11;
  in_x8[3] = lVar19;
  lVar19 = *local_b8 + lStack_b0 * 0x20;
  if (lVar19 != local_b8[1]) {
    local_b8[1] = lVar19;
  }
  lVar19 = *local_a0 + lStack_98 * 0x20;
  if (lVar19 != local_a0[1]) {
    local_a0[1] = lVar19;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00ef0490:
  local_88 = 0x3c;
  uStack_84 = (undefined4)uVar14;
  local_80 = (undefined4)((ulong)uVar14 >> 0x20);
  if (iVar13 == 0x3e) {
                    /* try { // try from 00ef04a8 to 00ef04d7 has its CatchHandler @ 00ef05dc */
    nextLexeme();
  }
  else {
    piVar12 = &local_88;
    expectMatchAndConsumeFail(this,0x3e,(MatchLexeme *)piVar12,(char *)0x0);
    expectMatchAndConsumeRecover(this,'>',(MatchLexeme *)piVar12,false);
  }
  lVar18 = local_90;
  lVar19 = lStack_98;
  if (local_90 == 0) {
    puVar17 = (undefined8 *)0x0;
    lVar20 = lStack_b0;
    lVar19 = local_a8;
  }
  else {
    lVar20 = *local_a0;
                    /* try { // try from 00ef04f0 to 00ef04f3 has its CatchHandler @ 00ef05d0 */
    puVar17 = (undefined8 *)Allocator::allocate(*(Allocator **)(this + 0x80),local_90 << 5);
    puVar11 = (undefined8 *)(lVar20 + lVar19 * 0x20);
    puVar15 = puVar17;
    lVar21 = lVar18;
    do {
      uVar22 = *puVar11;
      uVar23 = puVar11[3];
      uVar14 = puVar11[2];
      lVar21 = lVar21 + -1;
      puVar15[1] = puVar11[1];
      *puVar15 = uVar22;
      puVar15[3] = uVar23;
      puVar15[2] = uVar14;
      puVar11 = puVar11 + 4;
      puVar15 = puVar15 + 4;
      lVar20 = lStack_b0;
      lVar19 = local_a8;
    } while (lVar21 != 0);
  }
  lStack_b0 = lVar20;
  local_a8 = lVar19;
  if (lVar19 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    lVar21 = *local_b8;
                    /* try { // try from 00ef052c to 00ef052f has its CatchHandler @ 00ef05cc */
    puVar11 = (undefined8 *)Allocator::allocate(*(Allocator **)(this + 0x80),lVar19 << 5);
    puVar15 = (undefined8 *)(lVar21 + lVar20 * 0x20);
    puVar16 = puVar11;
    lVar20 = lVar19;
    do {
      uVar22 = *puVar15;
      uVar23 = puVar15[3];
      uVar14 = puVar15[2];
      lVar20 = lVar20 + -1;
      puVar16[1] = puVar15[1];
      *puVar16 = uVar22;
      puVar16[3] = uVar23;
      puVar16[2] = uVar14;
      puVar15 = puVar15 + 4;
      puVar16 = puVar16 + 4;
    } while (lVar20 != 0);
  }
  goto LAB_00ef0560;
}


