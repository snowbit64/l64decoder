// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raise
// Entry Point: 00ecf7ec
// Size: 188 bytes
// Signature: noreturn undefined __cdecl raise(Location * param_1, char * param_2, ...)


/* Luau::CompileError::raise(Luau::Location const&, char const*, ...) */

void Luau::CompileError::raise(Location *param_1,char *param_2,...)

{
  undefined8 *puVar1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar2;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined **ppuStack_88;
  undefined8 *puStack_80;
  undefined8 uStack_78;
  
  ppuStack_88 = &local_90;
  puStack_80 = &local_c0;
  uStack_78 = 0xffffff80ffffffd0;
  local_c0 = in_x2;
  local_b8 = in_x3;
  uStack_b0 = in_x4;
  local_a8 = in_x5;
  uStack_a0 = in_x6;
  local_98 = in_x7;
  local_90 = (undefined *)register0x00000008;
  vformat((Luau *)param_2,(char *)&local_90,(__va_list)in_x2);
  puVar1 = (undefined8 *)__cxa_allocate_exception(0x30);
  *puVar1 = &PTR__CompileError_01014948;
  uVar2 = *(undefined8 *)param_1;
  puVar1[2] = *(undefined8 *)(param_1 + 8);
  puVar1[1] = uVar2;
                    /* try { // try from 00ecf888 to 00ecf88f has its CatchHandler @ 00ecf8b8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string((basic_string *)(puVar1 + 3));
                    /* try { // try from 00ecf890 to 00ecf8a7 has its CatchHandler @ 00ecf8a8 */
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar1,&typeinfo,~CompileError);
}


