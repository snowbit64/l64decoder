// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFileDirectory
// Entry Point: 00c63c84
// Size: 188 bytes
// Signature: undefined __cdecl getFileDirectory(basic_string * param_1, basic_string * param_2)


/* PathUtil::getFileDirectory(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void PathUtil::getFileDirectory(basic_string *param_1,basic_string *param_2)

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
  if (lVar2 == -1) {
    if ((*(byte *)param_2 & 1) == 0) {
      *(undefined2 *)param_2 = 0;
    }
    else {
      **(undefined **)(param_2 + 4) = 0;
      *(undefined8 *)(param_2 + 2) = 0;
    }
  }
  else {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string((basic_string *)&local_50,(ulong)param_1,0,(allocator *)(lVar2 + 1));
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


