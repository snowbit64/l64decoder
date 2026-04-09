// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPathWithoutExtension
// Entry Point: 00c63e14
// Size: 172 bytes
// Signature: undefined __cdecl getPathWithoutExtension(basic_string * param_1, basic_string * param_2)


/* PathUtil::getPathWithoutExtension(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::getPathWithoutExtension(basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  allocator *paVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  paVar2 = (allocator *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                     ((char)param_1,0x2e);
  if (paVar2 == (allocator *)0xffffffffffffffff) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_2,param_1);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_50,(ulong)param_1,0,paVar2);
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


