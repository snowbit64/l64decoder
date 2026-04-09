// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: buildMovedAbsolutePath
// Entry Point: 00c64414
// Size: 164 bytes
// Signature: undefined __cdecl buildMovedAbsolutePath(basic_string * param_1, basic_string * param_2, basic_string * param_3, basic_string * param_4)


/* PathUtil::buildMovedAbsolutePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

uint PathUtil::buildMovedAbsolutePath
               (basic_string *param_1,basic_string *param_2,basic_string *param_3,
               basic_string *param_4)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  ulong local_50;
  undefined8 uStack_48;
  char *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (char *)0x0;
                    /* try { // try from 00c64444 to 00c6447b has its CatchHandler @ 00c644b8 */
  uVar3 = buildRelativePath(param_1,param_3,param_3,(basic_string *)&local_50);
  if ((uVar3 & 1) != 0) {
    pcVar1 = (char *)((ulong)&local_50 | 1);
    if ((local_50 & 1) != 0) {
      pcVar1 = local_40;
    }
    buildAbsolutePath(param_2,pcVar1,param_4);
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


