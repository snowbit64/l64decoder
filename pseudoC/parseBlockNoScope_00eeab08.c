// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseBlockNoScope
// Entry Point: 00eeab08
// Size: 592 bytes
// Signature: undefined parseBlockNoScope(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseBlockNoScope() */

AstStatBlock * Luau::Parser::parseBlockNoScope(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  ulong uVar7;
  long in_x0;
  AstStatBlock *this;
  ulong uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  Allocator *this_00;
  AstStat *pAVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong local_a0;
  ulong uStack_98;
  AstStat *local_90;
  undefined8 uStack_88;
  long *local_80;
  long lStack_78;
  ulong local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_80 = (long *)(in_x0 + 0x178);
  local_70 = 0;
  pAVar13 = *(AstStat **)(in_x0 + 0x50);
  lStack_78 = *(long *)(in_x0 + 0x180) - *(long *)(in_x0 + 0x178) >> 3;
  while (uVar6 = FInt::LuauRecursionLimit, uVar3 = *(int *)(in_x0 + 0x28) - 0x122,
        (0x10 < uVar3 || (1 << (ulong)(uVar3 & 0x1f) & 0x10007U) == 0) &&
        *(int *)(in_x0 + 0x28) != 0) {
    iVar2 = *(int *)(in_x0 + 0xbc);
    uVar3 = iVar2 + 1;
    *(uint *)(in_x0 + 0xbc) = uVar3;
    if (uVar6 < uVar3) {
                    /* try { // try from 00eead40 to 00eead53 has its CatchHandler @ 00eead5c */
      ParseError::raise((Location *)(in_x0 + 0x2c),
                        "Exceeded allowed recursion depth; simplify your %s to make the code compile"
                        ,"block");
      goto LAB_00eead54;
    }
                    /* try { // try from 00eeabb8 to 00eeabef has its CatchHandler @ 00eead60 */
    local_90 = (AstStat *)parseStat();
    *(int *)(in_x0 + 0xbc) = iVar2;
    if (*(int *)(in_x0 + 0x28) == 0x3b) {
      nextLexeme();
      local_90[0x1c] = (AstStat)0x1;
    }
    TempVector<Luau::AstStat*>::push_back((TempVector<Luau::AstStat*> *)&local_80,&local_90);
    iVar2 = *(int *)(local_90 + 8);
    if (((iVar2 == AstRtti<Luau::AstStatBreak>::value) ||
        (iVar2 == AstRtti<Luau::AstStatContinue>::value)) ||
       (iVar2 == AstRtti<Luau::AstStatReturn>::value)) break;
  }
  uVar7 = local_70;
  lVar1 = lStack_78;
  uStack_88 = *(undefined8 *)(in_x0 + 0x2c);
  this_00 = *(Allocator **)(in_x0 + 0x80);
  local_90 = pAVar13;
  if (local_70 == 0) {
    local_a0 = 0;
  }
  else {
    lVar14 = *local_80;
                    /* try { // try from 00eeac3c to 00eeacb7 has its CatchHandler @ 00eead58 */
    local_a0 = Allocator::allocate(this_00,local_70 << 3);
    if ((uVar7 < 4) ||
       ((local_a0 < lVar14 + (uVar7 + lVar1) * 8 &&
        ((ulong)(lVar14 + lVar1 * 8) < local_a0 + uVar7 * 8)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7 & 0xfffffffffffffffc;
      puVar9 = (undefined8 *)(local_a0 + 0x10);
      puVar11 = (undefined8 *)(lVar14 + lVar1 * 8 + 0x10);
      uVar12 = uVar8;
      do {
        puVar5 = puVar11 + -1;
        uVar15 = puVar11[-2];
        uVar17 = puVar11[1];
        uVar16 = *puVar11;
        puVar11 = puVar11 + 4;
        uVar12 = uVar12 - 4;
        puVar9[-1] = *puVar5;
        puVar9[-2] = uVar15;
        puVar9[1] = uVar17;
        *puVar9 = uVar16;
        puVar9 = puVar9 + 4;
      } while (uVar12 != 0);
      if (uVar7 == uVar8) goto LAB_00eeac98;
    }
    lVar10 = uVar7 - uVar8;
    puVar9 = (undefined8 *)(local_a0 + uVar8 * 8);
    puVar11 = (undefined8 *)(lVar14 + (uVar8 + lVar1) * 8);
    do {
      lVar10 = lVar10 + -1;
      *puVar9 = *puVar11;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    } while (lVar10 != 0);
  }
LAB_00eeac98:
  uStack_98 = uVar7;
  this = (AstStatBlock *)Allocator::allocate(this_00,0x30);
  AstStatBlock::AstStatBlock(this,(Location *)&local_90,(AstArray *)&local_a0);
  lVar1 = *local_80 + lStack_78 * 8;
  if (lVar1 != local_80[1]) {
    local_80[1] = lVar1;
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this;
  }
LAB_00eead54:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


