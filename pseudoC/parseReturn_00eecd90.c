// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseReturn
// Entry Point: 00eecd90
// Size: 524 bytes
// Signature: undefined parseReturn(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseReturn() */

AstStatReturn * Luau::Parser::parseReturn(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  Parser *in_x0;
  AstStatReturn *this;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  Allocator *this_00;
  ulong uVar10;
  long lVar11;
  AstExpr *pAVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong local_80;
  ulong uStack_78;
  AstExpr *local_70;
  undefined8 uStack_68;
  long *local_60;
  long lStack_58;
  ulong local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar13 = *(undefined8 *)(in_x0 + 0x34);
  pAVar12 = *(AstExpr **)(in_x0 + 0x2c);
  nextLexeme();
  local_60 = (long *)(in_x0 + 0x1a8);
  local_50 = 0;
  iVar2 = *(int *)(in_x0 + 0x28);
  lStack_58 = *(long *)(in_x0 + 0x1b0) - *(long *)(in_x0 + 0x1a8) >> 3;
  if ((((0x10 < iVar2 - 0x122U) || ((1 << (ulong)(iVar2 - 0x122U & 0x1f) & 0x10007U) == 0)) &&
      (iVar2 != 0)) && (iVar2 != 0x3b)) {
                    /* try { // try from 00eece88 to 00eecea3 has its CatchHandler @ 00eecf9c */
    local_70 = (AstExpr *)parseExpr(in_x0,0);
    TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_60,&local_70);
    while (uVar10 = local_50, lVar1 = lStack_58, *(int *)(in_x0 + 0x28) == 0x2c) {
                    /* try { // try from 00eeceb0 to 00eeced3 has its CatchHandler @ 00eecfa4 */
      nextLexeme();
      local_70 = (AstExpr *)parseExpr(in_x0,0);
      TempVector<Luau::AstExpr*>::push_back((TempVector<Luau::AstExpr*> *)&local_60,&local_70);
    }
    if (local_50 != 0) {
      this_00 = *(Allocator **)(in_x0 + 0x80);
      uStack_68 = *(undefined8 *)(*(long *)(local_60[1] + -8) + 0x14);
      lVar11 = *local_60;
      local_70 = pAVar12;
                    /* try { // try from 00eecf08 to 00eecf0f has its CatchHandler @ 00eecfa0 */
      local_80 = Allocator::allocate(this_00,local_50 << 3);
      if ((uVar10 < 4) ||
         ((local_80 < lVar11 + (uVar10 + lVar1) * 8 &&
          ((ulong)(lVar11 + lVar1 * 8) < local_80 + uVar10 * 8)))) {
        uVar5 = 0;
      }
      else {
        uVar5 = uVar10 & 0xfffffffffffffffc;
        puVar6 = (undefined8 *)(local_80 + 0x10);
        puVar8 = (undefined8 *)(lVar11 + lVar1 * 8 + 0x10);
        uVar9 = uVar5;
        do {
          puVar4 = puVar8 + -1;
          uVar13 = puVar8[-2];
          uVar15 = puVar8[1];
          uVar14 = *puVar8;
          puVar8 = puVar8 + 4;
          uVar9 = uVar9 - 4;
          puVar6[-1] = *puVar4;
          puVar6[-2] = uVar13;
          puVar6[1] = uVar15;
          *puVar6 = uVar14;
          puVar6 = puVar6 + 4;
        } while (uVar9 != 0);
        if (uVar10 == uVar5) goto LAB_00eece18;
      }
      lVar7 = uVar10 - uVar5;
      puVar6 = (undefined8 *)(local_80 + uVar5 * 8);
      puVar8 = (undefined8 *)(lVar11 + (uVar5 + lVar1) * 8);
      do {
        lVar7 = lVar7 + -1;
        *puVar6 = *puVar8;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
      goto LAB_00eece18;
    }
  }
  uVar10 = 0;
  this_00 = *(Allocator **)(in_x0 + 0x80);
  local_80 = 0;
  local_70 = pAVar12;
  uStack_68 = uVar13;
LAB_00eece18:
  uStack_78 = uVar10;
                    /* try { // try from 00eece1c to 00eece37 has its CatchHandler @ 00eecfa0 */
  this = (AstStatReturn *)Allocator::allocate(this_00,0x30);
  AstStatReturn::AstStatReturn(this,(Location *)&local_70,(AstArray *)&local_80);
  lVar1 = *local_60 + lStack_58 * 8;
  if (lVar1 != local_60[1]) {
    local_60[1] = lVar1;
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}


