// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expectAndConsumeFail
// Entry Point: 00eea98c
// Size: 288 bytes
// Signature: undefined __thiscall expectAndConsumeFail(Parser * this, Type param_1, char * param_2)


/* Luau::Parser::expectAndConsumeFail(Luau::Lexeme::Type, char const*) */

void __thiscall Luau::Parser::expectAndConsumeFail(Parser *this,Type param_1,char *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  Lexeme local_80 [16];
  void *local_70;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  local_90 = 0;
  uStack_88 = 0;
  Lexeme::Lexeme(local_80,(Location *)&local_90,param_1);
  Lexeme::toString();
                    /* try { // try from 00eea9e0 to 00eea9eb has its CatchHandler @ 00eeaadc */
  Lexeme::toString();
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  pvVar2 = (void *)((ulong)local_80 | 1);
  if (((byte)local_80[0] & 1) != 0) {
    pvVar2 = local_70;
  }
  if (param_2 == (char *)0x0) {
    report((Location *)this,(char *)(this + 0x2c),"Expected %s, got %s",pvVar1,pvVar2);
  }
  else {
                    /* try { // try from 00eeaa1c to 00eeaa47 has its CatchHandler @ 00eeaaac */
    report((Location *)this,(char *)(this + 0x2c),"Expected %s when parsing %s, got %s",pvVar1,
           param_2);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_60[0] & 1) == 0) {
    if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00eeaaa8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    operator_delete(local_50);
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00eeaaa8;
  }
  return;
}


