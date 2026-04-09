// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: fillFilePosIndex
// Entry Point: 00b36fc0
// Size: 312 bytes
// Signature: undefined fillFilePosIndex(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ZIPFileArchive::fillFilePosIndex() */

void ZIPFileArchive::fillFilePosIndex(void)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  ulong uVar4;
  long lVar5;
  undefined local_8e0 [16];
  undefined auStack_8d0 [64];
  ulong local_890;
  char acStack_849 [2049];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar1 = (long *)(in_x0 + 0x80b0);
  if ((*plVar1 != 0) &&
     (uVar4 = (**(code **)(**(long **)(in_x0 + 0x10) + 0x10))(), (uVar4 & 1) != 0)) {
    *(undefined *)(in_x0 + 0x80d0) = 1;
    iVar3 = unzGoToFirstFile(*plVar1);
    if (iVar3 == 0) {
      do {
        iVar3 = unzOpenCurrentFile(*plVar1);
        if (iVar3 == 0) {
          iVar3 = unzGetCurrentFileInfo64(*plVar1,auStack_8d0,acStack_849 + 1,0x800,0,0,0,0);
          if (((iVar3 == 0) && (local_890 < 0x800)) && (acStack_849[local_890] != '/')) {
            lVar5 = *plVar1;
            acStack_849[local_890 + 1] = '\0';
            iVar3 = unzGetFilePos64(lVar5,local_8e0);
            if (iVar3 == 0) {
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,unz64_file_pos_s>>>
              ::__emplace_unique_impl<std::__ndk1::pair<char*,unz64_file_pos_s>>
                        ((pair *)(in_x0 + 0x80b8));
            }
          }
          unzCloseCurrentFile(*plVar1);
        }
        iVar3 = unzGoToNextFile(*plVar1);
      } while (iVar3 == 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


