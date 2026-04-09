// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: windowQuit
// Entry Point: 00750384
// Size: 116 bytes
// Signature: undefined windowQuit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineManager::windowQuit() */

void EngineManager::windowQuit(void)

{
  long lVar1;
  long in_x0;
  ushort local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  *(undefined2 *)(in_x0 + 0x2ad) = 1;
  *(undefined *)(in_x0 + 0x2af) = 0;
                    /* try { // try from 007503b8 to 007503c3 has its CatchHandler @ 007503f8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (in_x0 + 0x2b0),(basic_string *)&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


