// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseDo
// Entry Point: 00eeb9fc
// Size: 280 bytes
// Signature: undefined parseDo(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Luau::Parser::parseDo() */

long Luau::Parser::parseDo(void)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  Parser *in_x0;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_78;
  uint uStack_74;
  int iStack_70;
  int local_68;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(in_x0 + 0x2c);
  uVar3 = *(undefined4 *)(in_x0 + 0x28);
  uVar5 = *(undefined8 *)(in_x0 + 0x28);
  nextLexeme();
  lVar1 = *(long *)(in_x0 + 0x130);
  lVar2 = *(long *)(in_x0 + 0x138);
  lVar6 = parseBlockNoScope();
  restoreLocals(in_x0,(uint)((ulong)(lVar2 - lVar1) >> 3));
  *(undefined8 *)(lVar6 + 0xc) = uVar7;
  uStack_74 = (uint)uVar7;
  iStack_70 = (int)((ulong)uVar7 >> 0x20);
  local_78 = uVar3;
  if (*(int *)(in_x0 + 0x28) == 0x124) {
    if (((*(uint *)(in_x0 + 0x2c) != uStack_74) && (*(int *)(in_x0 + 0x30) != iStack_70)) &&
       (*(uint *)(in_x0 + 0xe4) < uStack_74)) {
      *(undefined8 *)(in_x0 + 0xe0) = uVar5;
      *(int *)(in_x0 + 0xe8) = iStack_70;
    }
  }
  else {
    expectMatchEndAndConsumeFail(in_x0,0x124,(MatchLexeme *)&local_78);
    Lexer::lookahead();
    if (local_68 != 0x124) goto LAB_00eebae4;
    nextLexeme();
  }
  nextLexeme();
LAB_00eebae4:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


