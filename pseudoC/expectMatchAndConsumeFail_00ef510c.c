// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectMatchAndConsumeFail
// Entry Point: 00ef510c
// Size: 504 bytes
// Signature: undefined __thiscall expectMatchAndConsumeFail(Parser * this, Type param_1, MatchLexeme * param_2, char * param_3)


/* Luau::Parser::expectMatchAndConsumeFail(Luau::Lexeme::Type, Luau::Parser::MatchLexeme const&,
   char const*) */

void __thiscall
Luau::Parser::expectMatchAndConsumeFail
          (Parser *this,Type param_1,MatchLexeme *param_2,char *param_3)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  Lexeme local_a0 [16];
  void *local_90;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  local_b8 = 0;
  uStack_b0 = 0;
  Lexeme::Lexeme(local_a0,(Location *)&local_b8,param_1);
  Lexeme::toString();
  local_c8 = 0;
  uStack_c0 = 0;
                    /* try { // try from 00ef516c to 00ef5183 has its CatchHandler @ 00ef5370 */
  Lexeme::Lexeme(local_a0,(Location *)&local_c8,*(Type *)param_2);
  Lexeme::toString();
  pvVar3 = local_70;
  bVar8 = local_80[0];
  pvVar2 = local_a8;
  uVar7 = local_b8;
  iVar5 = *(int *)(param_2 + 4);
  if (*(int *)(this + 0x2c) == iVar5) {
    iVar5 = *(int *)(param_2 + 8);
                    /* try { // try from 00ef51ac to 00ef51b7 has its CatchHandler @ 00ef5350 */
    Lexeme::toString();
    pvVar1 = (void *)((ulong)&local_b8 | 1);
    if ((uVar7 & 1) != 0) {
      pvVar1 = pvVar2;
    }
    pvVar2 = (void *)((ulong)local_80 | 1);
    if ((bVar8 & 1) != 0) {
      pvVar2 = pvVar3;
    }
    pvVar3 = (void *)((ulong)local_a0 | 1);
    if (((byte)local_a0[0] & 1) != 0) {
      pvVar3 = local_90;
    }
    pcVar4 = "";
    if (param_3 != (char *)0x0) {
      pcVar4 = param_3;
    }
                    /* try { // try from 00ef5204 to 00ef5213 has its CatchHandler @ 00ef5318 */
    report((Location *)this,(char *)(this + 0x2c),"Expected %s (to close %s at column %d), got %s%s"
           ,pvVar2,pvVar1,(ulong)(iVar5 + 1),pvVar3,pcVar4);
  }
  else {
                    /* try { // try from 00ef5218 to 00ef5223 has its CatchHandler @ 00ef5308 */
    Lexeme::toString();
    pvVar1 = (void *)((ulong)&local_b8 | 1);
    if ((uVar7 & 1) != 0) {
      pvVar1 = pvVar2;
    }
    pvVar2 = (void *)((ulong)local_80 | 1);
    if ((bVar8 & 1) != 0) {
      pvVar2 = pvVar3;
    }
    pvVar3 = (void *)((ulong)local_a0 | 1);
    if (((byte)local_a0[0] & 1) != 0) {
      pvVar3 = local_90;
    }
    pcVar4 = "";
    if (param_3 != (char *)0x0) {
      pcVar4 = param_3;
    }
                    /* try { // try from 00ef5270 to 00ef527f has its CatchHandler @ 00ef5304 */
    report((Location *)this,(char *)(this + 0x2c),"Expected %s (to close %s at line %d), got %s%s",
           pvVar2,pvVar1,(ulong)(iVar5 + 1),pvVar3,pcVar4);
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_80[0] & 1) == 0) {
    if (*(long *)(lVar6 + 0x28) != local_68) {
LAB_00ef5300:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_70);
    if (*(long *)(lVar6 + 0x28) != local_68) goto LAB_00ef5300;
  }
  return;
}


