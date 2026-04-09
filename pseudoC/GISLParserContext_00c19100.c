// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GISLParserContext
// Entry Point: 00c19100
// Size: 148 bytes
// Signature: undefined __thiscall ~GISLParserContext(GISLParserContext * this)


/* GISLParserContext::~GISLParserContext() */

void __thiscall GISLParserContext::~GISLParserContext(GISLParserContext *this)

{
  void **ppvVar1;
  void **ppvVar2;
  
  ppvVar2 = *(void ***)(this + 0xa8);
  ppvVar1 = *(void ***)(this + 0xb0);
  if (ppvVar2 != ppvVar1) {
    do {
      if (*ppvVar2 != (void *)0x0) {
        operator_delete__(*ppvVar2);
      }
      ppvVar2 = ppvVar2 + 1;
    } while (ppvVar2 != ppvVar1);
    ppvVar2 = *(void ***)(this + 0xa8);
  }
  if (ppvVar2 != (void **)0x0) {
    *(void ***)(this + 0xb0) = ppvVar2;
    operator_delete(ppvVar2);
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
    return;
  }
  return;
}


