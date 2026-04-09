// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: yyInput
// Entry Point: 00c19194
// Size: 92 bytes
// Signature: undefined __thiscall yyInput(GISLParserContext * this, char * param_1, int param_2)


/* GISLParserContext::yyInput(char*, int) */

ulong __thiscall GISLParserContext::yyInput(GISLParserContext *this,char *param_1,int param_2)

{
  ulong __n;
  ulong uVar1;
  
  uVar1 = *(long *)(this + 0x48) - *(long *)(this + 0x50);
  __n = (long)param_2;
  if (uVar1 <= (ulong)(long)param_2) {
    __n = uVar1;
  }
  if (__n != 0) {
    memcpy(param_1,(void *)(*(long *)(this + 0x40) + *(long *)(this + 0x50)),__n);
    *(ulong *)(this + 0x50) = *(long *)(this + 0x50) + __n;
  }
  return __n & 0xffffffff;
}


