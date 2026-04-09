// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: windowQuit
// Entry Point: 00750414
// Size: 116 bytes
// Signature: undefined __thiscall windowQuit(EngineManager * this)


/* non-virtual thunk to EngineManager::windowQuit() */

void __thiscall EngineManager::windowQuit(EngineManager *this)

{
  long lVar1;
  ushort local_40;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  *(undefined2 *)(this + 0x28d) = 1;
  this[0x28f] = (EngineManager)0x0;
                    /* try { // try from 00750448 to 00750453 has its CatchHandler @ 00750488 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x290),(basic_string *)&local_40);
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


