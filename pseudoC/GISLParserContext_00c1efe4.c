// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GISLParserContext
// Entry Point: 00c1efe4
// Size: 336 bytes
// Signature: undefined __thiscall GISLParserContext(GISLParserContext * this, GsTSymbolTable * param_1, GsTInfoSink * param_2, SHC_PoolAllocator * param_3, char * param_4, char * param_5, bool param_6)


/* GISLParserContext::GISLParserContext(GsTSymbolTable&, GsTInfoSink&, SHC_PoolAllocator&, char
   const*, char const*, bool) */

void __thiscall
GISLParserContext::GISLParserContext
          (GISLParserContext *this,GsTSymbolTable *param_1,GsTInfoSink *param_2,
          SHC_PoolAllocator *param_3,char *param_4,char *param_5,bool param_6)

{
  size_t sVar1;
  GISLParserContext *pGVar2;
  ulong uVar3;
  
  *(GsTSymbolTable **)this = param_1;
  *(GsTInfoSink **)(this + 8) = param_2;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (GISLParserContext)0x0;
  *(undefined4 *)(this + 0x1c) = 0;
  this[0x20] = (GISLParserContext)0x0;
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (GISLParserContext)0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(SHC_PoolAllocator **)(this + 0x58) = param_3;
  sVar1 = strlen(param_4);
  if (0xffffffffffffffef < sVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pGVar2 = this + 0x61;
    this[0x60] = SUB41((int)sVar1 << 1,0);
    if (sVar1 != 0) goto LAB_00c1f084;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
    pGVar2 = (GISLParserContext *)operator_new(uVar3);
    *(size_t *)(this + 0x68) = sVar1;
    *(GISLParserContext **)(this + 0x70) = pGVar2;
    *(ulong *)(this + 0x60) = uVar3 | 1;
LAB_00c1f084:
    memcpy(pGVar2,param_4,sVar1);
  }
  pGVar2[sVar1] = (GISLParserContext)0x0;
  sVar1 = strlen(param_5);
  if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 00c1f12c to 00c1f133 has its CatchHandler @ 00c1f134 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar1 < 0x17) {
    pGVar2 = this + 0x79;
    this[0x78] = SUB41((int)sVar1 << 1,0);
    if (sVar1 == 0) goto LAB_00c1f0f8;
  }
  else {
    uVar3 = sVar1 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00c1f0d0 to 00c1f0d7 has its CatchHandler @ 00c1f134 */
    pGVar2 = (GISLParserContext *)operator_new(uVar3);
    *(size_t *)(this + 0x80) = sVar1;
    *(GISLParserContext **)(this + 0x88) = pGVar2;
    *(ulong *)(this + 0x78) = uVar3 | 1;
  }
  memcpy(pGVar2,param_5,sVar1);
LAB_00c1f0f8:
  pGVar2[sVar1] = (GISLParserContext)0x0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0x90] = (GISLParserContext)param_6;
  return;
}


