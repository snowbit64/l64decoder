// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileExtension
// Entry Point: 00c63d40
// Size: 212 bytes
// Signature: undefined __cdecl getFileExtension(basic_string * param_1, basic_string * param_2)


/* PathUtil::getFileExtension(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::getFileExtension(basic_string *param_1,basic_string *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                    ((char)param_1,0x2f);
  uVar3 = std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::rfind
                    ((char)param_1,0x2e);
  if ((uVar3 == 0xffffffffffffffff) || ((uVar2 != 0xffffffffffffffff && (uVar3 < uVar2)))) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)param_2);
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_50,(ulong)param_1,uVar3,(allocator *)0xffffffffffffffff);
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


