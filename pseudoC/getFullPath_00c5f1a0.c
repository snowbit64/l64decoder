// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFullPath
// Entry Point: 00c5f1a0
// Size: 132 bytes
// Signature: undefined getFullPath(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* NativeFileUtil::FileIterator::getFullPath() */

void NativeFileUtil::FileIterator::getFullPath(void)

{
  long lVar1;
  PathUtil *in_x0;
  basic_string *in_x2;
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
                    /* try { // try from 00c5f1d4 to 00c5f1eb has its CatchHandler @ 00c5f224 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            &local_50,*(basic_string **)(in_x0 + 0x30));
  PathUtil::combinePath(in_x0,(basic_string *)&local_50,in_x2);
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


