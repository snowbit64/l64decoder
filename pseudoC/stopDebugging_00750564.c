// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopDebugging
// Entry Point: 00750564
// Size: 116 bytes
// Signature: undefined __thiscall stopDebugging(EngineManager * this)


/* non-virtual thunk to EngineManager::stopDebugging() */

void __thiscall EngineManager::stopDebugging(EngineManager *this)

{
  long lVar1;
  ushort local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  *(undefined2 *)(this + 0x285) = 1;
  this[0x287] = (EngineManager)0x0;
                    /* try { // try from 00750598 to 007505a3 has its CatchHandler @ 007505d8 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x288),(basic_string *)&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


