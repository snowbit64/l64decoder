// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectMatchEndAndConsumeFail
// Entry Point: 00ef6f08
// Size: 328 bytes
// Signature: undefined __thiscall expectMatchEndAndConsumeFail(Parser * this, Type param_1, MatchLexeme * param_2)


/* Luau::Parser::expectMatchEndAndConsumeFail(Luau::Lexeme::Type, Luau::Parser::MatchLexeme const&)
    */

void __thiscall
Luau::Parser::expectMatchEndAndConsumeFail(Parser *this,Type param_1,MatchLexeme *param_2)

{
  void *pvVar1;
  char *pcVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  Lexeme local_80 [16];
  char *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((*(Type *)(this + 0xe0) == 0) || (*(uint *)(this + 0xe4) <= *(uint *)(param_2 + 4))) {
    expectMatchAndConsumeFail(this,param_1,param_2,(char *)0x0);
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00ef7020;
  }
  else {
    local_90 = 0;
    uStack_88 = 0;
    Lexeme::Lexeme(local_80,(Location *)&local_90,*(Type *)(this + 0xe0));
    Lexeme::toString();
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 00ef6f8c to 00ef6f9f has its CatchHandler @ 00ef7080 */
    format("; did you forget to close %s at line %d?",local_80,pvVar1,
           (ulong)(*(int *)(this + 0xe4) + 1));
    pcVar2 = (char *)((ulong)local_80 | 1);
    if (((byte)local_80[0] & 1) != 0) {
      pcVar2 = local_70;
    }
                    /* try { // try from 00ef6fb4 to 00ef6fc3 has its CatchHandler @ 00ef7050 */
    expectMatchAndConsumeFail(this,param_1,param_2,pcVar2);
    if (((byte)local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_60[0] & 1) == 0) {
      if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00ef7020:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
    }
    else {
      operator_delete(local_50);
      if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00ef7020;
    }
  }
  return;
}


