// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseTypeParams
// Entry Point: 00ef47a8
// Size: 528 bytes
// Signature: undefined parseTypeParams(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseTypeParams() */

void Luau::Parser::parseTypeParams(void)

{
  long lVar1;
  long lVar2;
  Parser *in_x0;
  undefined8 *puVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined auVar12 [16];
  long *local_80;
  long lStack_78;
  long local_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  puVar3 = (undefined8 *)0x0;
  local_80 = (long *)(in_x0 + 0x268);
  local_70 = 0;
  lStack_78 = *(long *)(in_x0 + 0x270) - *(long *)(in_x0 + 0x268) >> 4;
  if (*(int *)(in_x0 + 0x28) == 0x3c) {
    uVar10 = *(undefined8 *)(in_x0 + 0x2c);
                    /* try { // try from 00ef4804 to 00ef480b has its CatchHandler @ 00ef49bc */
    nextLexeme();
    do {
      iVar6 = *(int *)(in_x0 + 0x28);
      if (iVar6 == 0x106) {
LAB_00ef481c:
                    /* try { // try from 00ef481c to 00ef4823 has its CatchHandler @ 00ef49d4 */
        uVar4 = parseTypePackAnnotation();
        local_68 = 0;
        uStack_64 = 0;
        uStack_60 = (undefined4)uVar4;
        uStack_5c = (undefined4)((ulong)uVar4 >> 0x20);
                    /* try { // try from 00ef4828 to 00ef4833 has its CatchHandler @ 00ef49d8 */
        TempVector<Luau::AstTypeOrPack>::push_back
                  ((TempVector<Luau::AstTypeOrPack> *)&local_80,(AstTypeOrPack *)&local_68);
      }
      else {
        if (iVar6 == 0x117) {
                    /* try { // try from 00ef4840 to 00ef484b has its CatchHandler @ 00ef49dc */
          Lexer::lookahead();
          if (local_68 == 0x106) goto LAB_00ef481c;
          iVar6 = *(int *)(in_x0 + 0x28);
        }
        if (iVar6 == 0x3e) {
          if (local_70 == 0) goto LAB_00ef48ec;
        }
        else if (iVar6 == 0x28) {
                    /* try { // try from 00ef486c to 00ef4873 has its CatchHandler @ 00ef49cc */
          auVar12 = parseTypeOrPackAnnotation();
          if (auVar12._8_8_ == 0) {
            local_68 = auVar12._0_4_;
            uStack_64 = auVar12._4_4_;
            uStack_60 = 0;
            uStack_5c = 0;
                    /* try { // try from 00ef48c8 to 00ef48d3 has its CatchHandler @ 00ef49c0 */
            TempVector<Luau::AstTypeOrPack>::push_back
                      ((TempVector<Luau::AstTypeOrPack> *)&local_80,(AstTypeOrPack *)&local_68);
          }
          else {
            local_68 = 0;
            uStack_64 = 0;
            uStack_60 = auVar12._8_4_;
            uStack_5c = auVar12._12_4_;
                    /* try { // try from 00ef487c to 00ef4887 has its CatchHandler @ 00ef49c8 */
            TempVector<Luau::AstTypeOrPack>::push_back
                      ((TempVector<Luau::AstTypeOrPack> *)&local_80,(AstTypeOrPack *)&local_68);
          }
          goto LAB_00ef48ac;
        }
                    /* try { // try from 00ef4894 to 00ef48ab has its CatchHandler @ 00ef49d0 */
        uVar4 = parseTypeAnnotation();
        local_68 = (int)uVar4;
        uStack_64 = (undefined4)((ulong)uVar4 >> 0x20);
        uStack_60 = 0;
        uStack_5c = 0;
        TempVector<Luau::AstTypeOrPack>::push_back
                  ((TempVector<Luau::AstTypeOrPack> *)&local_80,(AstTypeOrPack *)&local_68);
      }
LAB_00ef48ac:
      if (*(int *)(in_x0 + 0x28) != 0x2c) goto LAB_00ef48d8;
                    /* try { // try from 00ef48b8 to 00ef48bf has its CatchHandler @ 00ef49dc */
      nextLexeme();
    } while( true );
  }
LAB_00ef4954:
  lVar9 = *local_80 + lStack_78 * 0x10;
  if (lVar9 == local_80[1]) goto LAB_00ef496c;
LAB_00ef4968:
  local_80[1] = lVar9;
LAB_00ef496c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3);
  }
  return;
LAB_00ef48d8:
  uStack_64 = (undefined4)uVar10;
  uStack_60 = (undefined4)((ulong)uVar10 >> 0x20);
  local_68 = 0x3c;
  if (*(int *)(in_x0 + 0x28) == 0x3e) {
LAB_00ef48ec:
                    /* try { // try from 00ef48ec to 00ef491b has its CatchHandler @ 00ef49c4 */
    nextLexeme();
  }
  else {
    piVar5 = &local_68;
    expectMatchAndConsumeFail(in_x0,0x3e,(MatchLexeme *)piVar5,(char *)0x0);
    expectMatchAndConsumeRecover(in_x0,'>',(MatchLexeme *)piVar5,false);
  }
  lVar9 = local_70;
  lVar2 = lStack_78;
  if (local_70 != 0) {
    lVar11 = *local_80;
                    /* try { // try from 00ef4934 to 00ef4937 has its CatchHandler @ 00ef49b8 */
    puVar3 = (undefined8 *)Allocator::allocate(*(Allocator **)(in_x0 + 0x80),local_70 << 4);
    puVar7 = (undefined8 *)(lVar11 + lVar2 * 0x10);
    puVar8 = puVar3;
    do {
      uVar10 = *puVar7;
      lVar9 = lVar9 + -1;
      puVar8[1] = puVar7[1];
      *puVar8 = uVar10;
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 2;
    } while (lVar9 != 0);
    goto LAB_00ef4954;
  }
  puVar3 = (undefined8 *)0x0;
  lVar9 = *local_80 + lStack_78 * 0x10;
  if (lVar9 == local_80[1]) goto LAB_00ef496c;
  goto LAB_00ef4968;
}


