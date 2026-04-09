// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getBasePath
// Entry Point: 00c63ad4
// Size: 168 bytes
// Signature: undefined __cdecl getBasePath(basic_string * param_1, basic_string * param_2, bool param_3)


/* PathUtil::getBasePath(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, bool) */

void PathUtil::getBasePath(basic_string *param_1,basic_string *param_2,bool param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                    ((char)param_1,0x2f);
  if (lVar2 - 1U < 0xfffffffffffffffe) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_50,(ulong)param_1,0,
                 (allocator *)(lVar2 + ((ulong)param_3 & 1)));
    if ((*(byte *)param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 4));
    }
    *(undefined8 *)(param_2 + 2) = uStack_48;
    *(undefined8 *)param_2 = local_50;
    *(undefined8 *)(param_2 + 4) = local_40;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


