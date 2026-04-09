// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parser
// Entry Point: 00ee9d8c
// Size: 948 bytes
// Signature: undefined __thiscall Parser(Parser * this, char * param_1, ulong param_2, AstNameTable * param_3, Allocator * param_4, ParseOptions * param_5)


/* Luau::Parser::Parser(char const*, unsigned long, Luau::AstNameTable&, Luau::Allocator&,
   Luau::ParseOptions const&) */

void __thiscall
Luau::Parser::Parser
          (Parser *this,char *param_1,ulong param_2,AstNameTable *param_3,Allocator *param_4,
          ParseOptions *param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 *this_00;
  void *pvVar5;
  long lVar6;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  undefined8 local_84;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)this = *(undefined4 *)param_5;
  Lexer::Lexer((Lexer *)(this + 8),param_1,param_2,param_3);
  local_98 = 0;
  uStack_90 = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(Allocator **)(this + 0x80) = param_4;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  this[0xb8] = (Parser)0x1;
  *(undefined8 *)(this + 0xc4) = 0;
  *(undefined8 *)(this + 0xbc) = 0;
  *(undefined8 *)(this + 0xd4) = 0;
  *(undefined8 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
                    /* try { // try from 00ee9e04 to 00ee9e13 has its CatchHandler @ 00eea154 */
  Lexeme::Lexeme((Lexeme *)&local_88,(Location *)&local_98,0);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(uint *)(this + 0xe0) = local_88;
  *(undefined8 *)(this + 0xe4) = local_84;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  this_00 = (undefined8 *)(this + 0x160);
  *(undefined8 *)(this + 0x168) = 0;
  *this_00 = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x288) = 0;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2e8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x318) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 800) = 0;
                    /* try { // try from 00ee9e88 to 00ee9e8f has its CatchHandler @ 00eea16c */
  puVar2 = (undefined8 *)operator_new(0x40);
  *(undefined8 **)(this + 0xf0) = puVar2;
  *puVar2 = 1;
  *(undefined8 **)(this + 0xf8) = puVar2 + 1;
  *(undefined8 **)(this + 0x100) = puVar2 + 8;
                    /* try { // try from 00ee9ea4 to 00ee9eb7 has its CatchHandler @ 00eea150 */
  uVar3 = AstNameTable::addStatic(param_3,"self",0x117);
  *(undefined8 *)(this + 0xc0) = uVar3;
                    /* try { // try from 00ee9ebc to 00ee9ecf has its CatchHandler @ 00eea14c */
  uVar3 = AstNameTable::addStatic(param_3,"number",0x117);
  *(undefined8 *)(this + 200) = uVar3;
                    /* try { // try from 00ee9ed4 to 00ee9ee7 has its CatchHandler @ 00eea148 */
  uVar3 = AstNameTable::addStatic(param_3,"%error-id%",0x117);
  *(undefined8 *)(this + 0xd0) = uVar3;
                    /* try { // try from 00ee9eec to 00ee9efb has its CatchHandler @ 00eea144 */
  uVar3 = AstNameTable::getOrAdd(param_3,"nil");
  *(undefined8 *)(this + 0xd8) = uVar3;
  local_88 = 0;
                    /* try { // try from 00ee9f04 to 00ee9f13 has its CatchHandler @ 00eea140 */
  std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::assign
            ((vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)this_00,0x134,&local_88);
  *(undefined4 *)*this_00 = 1;
                    /* try { // try from 00ee9f20 to 00eea0cb has its CatchHandler @ 00eea16c */
  Lexer::setSkipComments((Lexer *)(this + 8),true);
  nextLexeme();
  this[0xb8] = (Parser)0x0;
  pvVar5 = *(void **)(this + 0x130);
  if ((ulong)(*(long *)(this + 0x140) - (long)pvVar5) < 0x80) {
    lVar6 = *(long *)(this + 0x138);
    pvVar4 = operator_new(0x80);
    lVar6 = lVar6 - (long)pvVar5;
    if (0 < lVar6) {
      __memcpy_chk(pvVar4,pvVar5,lVar6,0x80);
    }
    *(void **)(this + 0x130) = pvVar4;
    *(long *)(this + 0x138) = (long)pvVar4 + lVar6;
    *(long *)(this + 0x140) = (long)pvVar4 + 0x80;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  pvVar5 = *(void **)(this + 0x178);
  if ((ulong)(*(long *)(this + 0x188) - (long)pvVar5) < 0x80) {
    lVar6 = *(long *)(this + 0x180);
    pvVar4 = operator_new(0x80);
    lVar6 = lVar6 - (long)pvVar5;
    if (0 < lVar6) {
      __memcpy_chk(pvVar4,pvVar5,lVar6,0x80);
    }
    *(void **)(this + 0x178) = pvVar4;
    *(long *)(this + 0x180) = (long)pvVar4 + lVar6;
    *(long *)(this + 0x188) = (long)pvVar4 + 0x80;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  pvVar5 = *(void **)(this + 0x1a8);
  if ((ulong)(*(long *)(this + 0x1b8) - (long)pvVar5) < 0x80) {
    lVar6 = *(long *)(this + 0x1b0);
    pvVar4 = operator_new(0x80);
    lVar6 = lVar6 - (long)pvVar5;
    if (0 < lVar6) {
      __memcpy_chk(pvVar4,pvVar5,lVar6,0x80);
    }
    *(void **)(this + 0x1a8) = pvVar4;
    *(long *)(this + 0x1b0) = (long)pvVar4 + lVar6;
    *(long *)(this + 0x1b8) = (long)pvVar4 + 0x80;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  pvVar5 = *(void **)(this + 0x220);
  if ((ulong)(*(long *)(this + 0x230) - (long)pvVar5) < 0x80) {
    lVar6 = *(long *)(this + 0x228);
    pvVar4 = operator_new(0x80);
    lVar6 = lVar6 - (long)pvVar5;
    if (0 < lVar6) {
      __memcpy_chk(pvVar4,pvVar5,lVar6,0x80);
    }
    *(void **)(this + 0x220) = pvVar4;
    *(long *)(this + 0x228) = (long)pvVar4 + lVar6;
    *(long *)(this + 0x230) = (long)pvVar4 + 0x80;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  pvVar5 = *(void **)(this + 0x208);
  if ((ulong)(*(long *)(this + 0x218) - (long)pvVar5) < 0x200) {
    lVar6 = *(long *)(this + 0x210);
    pvVar4 = operator_new(0x200);
    lVar6 = lVar6 - (long)pvVar5;
    if (0 < lVar6) {
      __memcpy_chk(pvVar4,pvVar5,lVar6,0x200);
    }
    *(void **)(this + 0x208) = pvVar4;
    *(long *)(this + 0x210) = (long)pvVar4 + lVar6;
    *(long *)(this + 0x218) = (long)pvVar4 + 0x200;
    if (pvVar5 != (void *)0x0) {
      operator_delete(pvVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


