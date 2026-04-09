// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~HlslParser
// Entry Point: 00c1f444
// Size: 248 bytes
// Signature: undefined __thiscall ~HlslParser(HlslParser * this)


/* HlslParser::~HlslParser() */

void __thiscall HlslParser::~HlslParser(HlslParser *this)

{
  void *pvVar1;
  GsTSymbolTableLevel *this_00;
  void *pvVar2;
  long lVar3;
  void **ppvVar4;
  GISLParserContext *this_01;
  SHC_PoolAllocator *this_02;
  void **ppvVar5;
  
  ppvVar4 = *(void ***)(this + 0x40);
  pvVar1 = *ppvVar4;
  ppvVar5 = ppvVar4 + 1;
  pvVar2 = *ppvVar5;
  lVar3 = (long)pvVar2 - (long)pvVar1;
  while (lVar3 != 8) {
    this_00 = *(GsTSymbolTableLevel **)
               ((long)pvVar1 + (lVar3 * 0x20000000 + -0x100000000 >> 0x20) * 8);
    if (this_00 != (GsTSymbolTableLevel *)0x0) {
      GsTSymbolTableLevel::~GsTSymbolTableLevel(this_00);
      pvVar2 = *ppvVar5;
      ppvVar4 = *(void ***)(this + 0x40);
    }
    pvVar1 = *ppvVar4;
    *ppvVar5 = (void *)((long)pvVar2 + -8);
    ppvVar5 = ppvVar4 + 1;
    pvVar2 = *ppvVar5;
    lVar3 = (long)pvVar2 - (long)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    *ppvVar5 = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(ppvVar4);
  this_01 = *(GISLParserContext **)(this + 0x48);
  if (this_01 != (GISLParserContext *)0x0) {
    GISLParserContext::~GISLParserContext(this_01);
    operator_delete(this_01);
  }
  this_02 = *(SHC_PoolAllocator **)(this + 0x38);
  if (this_02 != (SHC_PoolAllocator *)0x0) {
    SHC_PoolAllocator::~SHC_PoolAllocator(this_02);
    operator_delete(this_02);
  }
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x10));
  return;
}


