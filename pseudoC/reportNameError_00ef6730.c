// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportNameError
// Entry Point: 00ef6730
// Size: 228 bytes
// Signature: undefined __thiscall reportNameError(Parser * this, char * param_1)


/* Luau::Parser::reportNameError(char const*) */

void __thiscall Luau::Parser::reportNameError(Parser *this,char *param_1)

{
  void *pvVar1;
  long lVar2;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == (char *)0x0) {
    Lexeme::toString();
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 00ef67c4 to 00ef67d7 has its CatchHandler @ 00ef6814 */
    report((Location *)this,(char *)(this + 0x2c),"Expected identifier, got %s",pvVar1);
  }
  else {
    Lexeme::toString();
    pvVar1 = (void *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      pvVar1 = local_50;
    }
                    /* try { // try from 00ef6788 to 00ef679f has its CatchHandler @ 00ef6818 */
    report((Location *)this,(char *)(this + 0x2c),"Expected identifier when parsing %s, got %s",
           param_1,pvVar1);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


