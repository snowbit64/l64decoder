// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: report
// Entry Point: 00ef709c
// Size: 408 bytes
// Signature: undefined __thiscall report(Parser * this, Location * param_1, char * param_2, __va_list param_3)


/* Luau::Parser::report(Luau::Location const&, char const*, std::__va_list) */

void __thiscall Luau::Parser::report(Parser *this,Location *param_1,char *param_2,__va_list param_3)

{
  long lVar1;
  long lVar2;
  ParseError *this_00;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  byte local_60;
  void *local_50;
  long local_48;
  
  puVar3 = (undefined8 *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar1 = *(long *)(this + 0x150);
  if ((((*(long *)(this + 0x148) == lVar1) || (*(int *)(param_1 + 4) != *(int *)(lVar1 + -0x24))) ||
      (*(int *)param_1 != *(int *)(lVar1 + -0x28))) ||
     ((*(int *)(param_1 + 0xc) != *(int *)(lVar1 + -0x1c) ||
      (*(int *)(param_1 + 8) != *(int *)(lVar1 + -0x20))))) {
    uStack_78 = puVar3[1];
    local_80 = *puVar3;
    uStack_68 = puVar3[3];
    uStack_70 = puVar3[2];
    vformat((Luau *)param_2,(char *)&local_80,(__va_list)param_2);
    if (FInt::LuauParseErrorLimit == 1) {
      this_00 = (ParseError *)__cxa_allocate_exception(0x30);
                    /* try { // try from 00ef71fc to 00ef7207 has its CatchHandler @ 00ef7248 */
      ParseError::ParseError(this_00,param_1,(basic_string *)&local_60);
                    /* try { // try from 00ef7208 to 00ef722f has its CatchHandler @ 00ef7258 */
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this_00,&ParseError::typeinfo,ParseError::~ParseError);
    }
    puVar3 = *(undefined8 **)(this + 0x150);
    if (puVar3 < *(undefined8 **)(this + 0x158)) {
      *puVar3 = &PTR__ParseError_010168f8;
      uVar4 = *(undefined8 *)param_1;
      puVar3[2] = *(undefined8 *)(param_1 + 8);
      puVar3[1] = uVar4;
                    /* try { // try from 00ef716c to 00ef7173 has its CatchHandler @ 00ef7234 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)(puVar3 + 3));
      puVar3 = puVar3 + 6;
      *(undefined8 **)(this + 0x150) = puVar3;
    }
    else {
                    /* try { // try from 00ef7180 to 00ef718f has its CatchHandler @ 00ef7258 */
      std::__ndk1::vector<Luau::ParseError,std::__ndk1::allocator<Luau::ParseError>>::
      __emplace_back_slow_path<Luau::Location_const&,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&>
                ((Location *)(this + 0x148),(basic_string *)param_1);
      puVar3 = *(undefined8 **)(this + 0x150);
    }
    if ((ulong)FInt::LuauParseErrorLimit <=
        (ulong)(((long)puVar3 - *(long *)(this + 0x148) >> 4) * -0x5555555555555555)) {
      ParseError::raise(param_1,"Reached error limit (%d)");
      goto LAB_00ef7230;
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
LAB_00ef7230:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


