// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: HlslParser
// Entry Point: 00c1f2e0
// Size: 300 bytes
// Signature: undefined __thiscall HlslParser(HlslParser * this, Context * param_1)


/* HlslParser::HlslParser(HlslParser::Context&) */

void __thiscall HlslParser::HlslParser(HlslParser *this,Context *param_1)

{
  Context *pCVar1;
  Context *pCVar2;
  undefined4 uVar3;
  IR_TypeSet *this_00;
  SHC_PoolAllocator *this_01;
  void **this_02;
  undefined8 *puVar4;
  GISLParserContext *this_03;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
                    /* try { // try from 00c1f308 to 00c1f30f has its CatchHandler @ 00c1f430 */
  this_00 = (IR_TypeSet *)operator_new(0xdd0);
                    /* try { // try from 00c1f318 to 00c1f31b has its CatchHandler @ 00c1f420 */
  IR_TypeSet::IR_TypeSet(this_00,(IR_TypeSet *)(param_1 + 0x10));
  *(IR_TypeSet **)(this + 0x30) = this_00;
                    /* try { // try from 00c1f320 to 00c1f327 has its CatchHandler @ 00c1f430 */
  this_01 = (SHC_PoolAllocator *)operator_new(0x48);
                    /* try { // try from 00c1f32c to 00c1f333 has its CatchHandler @ 00c1f414 */
  SHC_PoolAllocator::SHC_PoolAllocator(this_01,this_00);
  *(SHC_PoolAllocator **)(this + 0x38) = this_01;
                    /* try { // try from 00c1f338 to 00c1f33f has its CatchHandler @ 00c1f430 */
  this_02 = (void **)operator_new(0x20);
  puVar6 = *(undefined8 **)(param_1 + 8);
  this_02[1] = (void *)0x0;
  this_02[2] = (void *)0x0;
  *this_02 = (void *)0x0;
  puVar7 = (undefined8 *)*puVar6;
                    /* try { // try from 00c1f354 to 00c1f35b has its CatchHandler @ 00c1f410 */
  puVar4 = (undefined8 *)operator_new(8);
  uVar5 = *puVar7;
  *(void ***)(this + 0x40) = this_02;
  *puVar4 = uVar5;
  uVar3 = *(undefined4 *)(puVar6 + 3);
  *this_02 = puVar4;
  this_02[1] = puVar4 + 1;
  this_02[2] = puVar4 + 1;
  *(undefined4 *)(this_02 + 3) = uVar3;
                    /* try { // try from 00c1f37c to 00c1f3af has its CatchHandler @ 00c1f430 */
  GsTSymbolTable::push((GsTSymbolTable *)this_02,this_01);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
            ((ulong)this,0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::erase
            ((ulong)(this + 0x18),0);
  this_03 = (GISLParserContext *)operator_new(0xc0);
  pCVar1 = param_1 + 0xde1;
  if (((byte)param_1[0xde0] & 1) != 0) {
    pCVar1 = *(Context **)(param_1 + 0xdf0);
  }
  pCVar2 = param_1 + 0xdf9;
  if (((byte)param_1[0xdf8] & 1) != 0) {
    pCVar2 = *(Context **)(param_1 + 0xe08);
  }
                    /* try { // try from 00c1f3e0 to 00c1f3eb has its CatchHandler @ 00c1f40c */
  GISLParserContext::GISLParserContext
            (this_03,*(GsTSymbolTable **)(this + 0x40),(GsTInfoSink *)this,
             *(SHC_PoolAllocator **)(this + 0x38),(char *)pCVar1,(char *)pCVar2,false);
  *(GISLParserContext **)(this + 0x48) = this_03;
                    /* try { // try from 00c1f3f4 to 00c1f3f7 has its CatchHandler @ 00c1f430 */
  GsTSymbolTable::push(*(GsTSymbolTable **)(this + 0x40),*(SHC_PoolAllocator **)(this + 0x38));
  return;
}


