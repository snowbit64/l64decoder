// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dump
// Entry Point: 00c3f2a4
// Size: 176 bytes
// Signature: undefined dump(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* IR_Section::dump() const */

void IR_Section::dump(void)

{
  char *__s;
  long lVar1;
  IR_Section *in_x0;
  ulong local_70;
  undefined8 uStack_68;
  char *local_60;
  CodeStringStream aCStack_58 [24];
  byte local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  CodeStringStream::CodeStringStream(aCStack_58);
                    /* try { // try from 00c3f2cc to 00c3f2d7 has its CatchHandler @ 00c3f36c */
  disassembleToStream(in_x0,aCStack_58);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (char *)0x0;
                    /* try { // try from 00c3f2e0 to 00c3f2ef has its CatchHandler @ 00c3f354 */
  StringStream::resolve((StringStream *)aCStack_58,(basic_string *)&local_70);
  __s = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    __s = local_60;
  }
  puts(__s);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  StringStream::~StringStream((StringStream *)aCStack_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


