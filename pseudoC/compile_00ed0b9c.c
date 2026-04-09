// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compile
// Entry Point: 00ed0b9c
// Size: 516 bytes
// Signature: undefined __thiscall compile(Luau * this, basic_string * param_1, CompileOptions * param_2, ParseOptions * param_3, BytecodeEncoder * param_4)


/* Luau::compile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, Luau::CompileOptions const&, Luau::ParseOptions const&,
   Luau::BytecodeEncoder*) */

void __thiscall
Luau::compile(Luau *this,basic_string *param_1,CompileOptions *param_2,ParseOptions *param_3,
             BytecodeEncoder *param_4)

{
  ulong uVar1;
  Luau *pLVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  basic_string *extraout_x1;
  basic_string *in_x8;
  long *plVar10;
  ParseResult aPStack_380 [8];
  void *local_378;
  void *local_370;
  long *local_360;
  long *local_358;
  void *local_348;
  void *local_340;
  Allocator aAStack_330 [16];
  void *local_320 [7];
  BytecodeBuilder local_2e8 [16];
  void *local_2d8;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  Allocator::Allocator(aAStack_330);
                    /* try { // try from 00ed0be0 to 00ed0beb has its CatchHandler @ 00ed0e68 */
  AstNameTable::AstNameTable((AstNameTable *)local_320,aAStack_330);
  uVar1 = *(ulong *)(this + 8);
  pLVar2 = *(Luau **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pLVar2 = this + 1;
    uVar1 = (ulong)((byte)*this >> 1);
  }
                    /* try { // try from 00ed0c08 to 00ed0c17 has its CatchHandler @ 00ed0e60 */
  Parser::parse((Parser *)aPStack_380,pLVar2,uVar1,local_320,aAStack_330,*(undefined4 *)param_2);
  plVar7 = local_360;
  if (local_360 == local_358) {
                    /* try { // try from 00ed0c7c to 00ed0c87 has its CatchHandler @ 00ed0da0 */
    BytecodeBuilder::BytecodeBuilder(local_2e8,(BytecodeEncoder *)param_3);
                    /* try { // try from 00ed0c88 to 00ed0cab has its CatchHandler @ 00ed0dc4 */
    compileOrThrow(local_2e8,aPStack_380,(AstNameTable *)local_320,(CompileOptions *)param_1);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string(in_x8);
    BytecodeBuilder::~BytecodeBuilder(local_2e8);
  }
  else {
                    /* try { // try from 00ed0c24 to 00ed0c2b has its CatchHandler @ 00ed0e70 */
    piVar8 = (int *)ParseError::getLocation();
    iVar3 = *piVar8;
    uVar9 = (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* try { // try from 00ed0c48 to 00ed0c5b has its CatchHandler @ 00ed0e70 */
    format(":%d: %s",local_2e8,(ulong)(iVar3 + 1),uVar9);
                    /* try { // try from 00ed0c5c to 00ed0c67 has its CatchHandler @ 00ed0dac */
    BytecodeBuilder::getError(local_2e8,extraout_x1);
    if (((byte)local_2e8[0] & 1) != 0) {
      operator_delete(local_2d8);
    }
  }
  if (local_348 != (void *)0x0) {
    local_340 = local_348;
    operator_delete(local_348);
  }
  plVar7 = local_360;
  if (local_360 != (long *)0x0) {
    while (local_358 != plVar7) {
      plVar10 = local_358 + -6;
      (**(code **)*plVar10)(plVar10);
      local_358 = plVar10;
    }
    local_358 = plVar7;
    operator_delete(local_360);
  }
  pvVar6 = local_378;
  if (local_378 != (void *)0x0) {
    while (pvVar5 = local_370, pvVar5 != pvVar6) {
      local_370 = (void *)((long)pvVar5 + -0x30);
      if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar5 + -8));
      }
    }
    local_370 = pvVar6;
    operator_delete(local_378);
  }
  if (local_320[0] != (void *)0x0) {
    operator_delete(local_320[0]);
  }
  Allocator::~Allocator(aAStack_330);
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


