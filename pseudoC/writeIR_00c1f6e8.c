// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeIR
// Entry Point: 00c1f6e8
// Size: 188 bytes
// Signature: undefined __thiscall writeIR(HlslParser * this, char * param_1)


/* HlslParser::writeIR(char const*) */

void __thiscall HlslParser::writeIR(HlslParser *this,char *param_1)

{
  void *__ptr;
  long lVar1;
  size_t __n;
  FILE *__s;
  ulong local_50;
  size_t local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = 0;
                    /* try { // try from 00c1f71c to 00c1f727 has its CatchHandler @ 00c1f7a4 */
  TIRDebugUtil::outputTree(*(AST_Node **)(*(long *)(this + 0x48) + 0x10),(basic_string *)&local_50);
  __s = fopen(param_1,"wb");
  __ptr = (void *)((ulong)&local_50 | 1);
  __n = local_50 >> 1 & 0x7f;
  if ((local_50 & 1) != 0) {
    __ptr = local_40;
    __n = local_48;
  }
  fwrite(__ptr,1,__n,__s);
  fclose(__s);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


