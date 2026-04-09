// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileOrThrow
// Entry Point: 00ed066c
// Size: 448 bytes
// Signature: undefined __cdecl compileOrThrow(BytecodeBuilder * param_1, basic_string * param_2, CompileOptions * param_3, ParseOptions * param_4)


/* Luau::compileOrThrow(Luau::BytecodeBuilder&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, Luau::CompileOptions
   const&, Luau::ParseOptions const&) */

void Luau::compileOrThrow
               (BytecodeBuilder *param_1,basic_string *param_2,CompileOptions *param_3,
               ParseOptions *param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 *puVar6;
  ParseErrors *pPVar7;
  undefined8 *puVar8;
  vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>> avStack_f8 [24];
  Parser aPStack_e0 [8];
  void *local_d8;
  void *local_d0;
  undefined8 *local_c0;
  undefined8 *local_b8;
  void *local_a8;
  void *local_a0;
  Allocator aAStack_90 [16];
  void *local_80 [7];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  Allocator::Allocator(aAStack_90);
                    /* try { // try from 00ed06a8 to 00ed06b3 has its CatchHandler @ 00ed0880 */
  AstNameTable::AstNameTable((AstNameTable *)local_80,aAStack_90);
  uVar1 = *(ulong *)(param_2 + 2);
  lVar2 = *(long *)(param_2 + 4);
  if ((*(byte *)param_2 & 1) == 0) {
    lVar2 = (long)param_2 + 1;
    uVar1 = (ulong)(*(byte *)param_2 >> 1);
  }
                    /* try { // try from 00ed06d0 to 00ed06e3 has its CatchHandler @ 00ed086c */
  Parser::parse(aPStack_e0,lVar2,uVar1,local_80,aAStack_90,*(undefined4 *)param_4);
  if (local_c0 != local_b8) {
    pPVar7 = (ParseErrors *)__cxa_allocate_exception(0x38);
                    /* try { // try from 00ed07f8 to 00ed0803 has its CatchHandler @ 00ed084c */
    std::__ndk1::vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>>::vector
              (avStack_f8,(vector *)&local_c0);
                    /* try { // try from 00ed0804 to 00ed080f has its CatchHandler @ 00ed083c */
    ParseErrors::ParseErrors(pPVar7,avStack_f8);
                    /* try { // try from 00ed0810 to 00ed0827 has its CatchHandler @ 00ed082c */
                    /* WARNING: Subroutine does not return */
    __cxa_throw(pPVar7,&ParseErrors::typeinfo,ParseErrors::~ParseErrors);
  }
                    /* try { // try from 00ed06f0 to 00ed0703 has its CatchHandler @ 00ed085c */
  compileOrThrow(param_1,(ParseResult *)aPStack_e0,(AstNameTable *)local_80,param_3);
  if (local_a8 != (void *)0x0) {
    local_a0 = local_a8;
    operator_delete(local_a8);
  }
  puVar6 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    while (local_b8 != puVar6) {
      puVar8 = local_b8 + -6;
      (**(code **)*puVar8)(puVar8);
      local_b8 = puVar8;
    }
    local_b8 = puVar6;
    operator_delete(local_c0);
  }
  pvVar5 = local_d8;
  if (local_d8 != (void *)0x0) {
    while (pvVar4 = local_d0, pvVar4 != pvVar5) {
      local_d0 = (void *)((long)pvVar4 + -0x30);
      if ((*(byte *)((long)pvVar4 + -0x18) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar4 + -8));
      }
    }
    local_d0 = pvVar5;
    operator_delete(local_d8);
  }
  if (local_80[0] != (void *)0x0) {
    operator_delete(local_80[0]);
  }
  Allocator::~Allocator(aAStack_90);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


