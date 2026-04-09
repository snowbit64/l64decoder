// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8ca8
// Entry Point: 006e8ca8
// Size: 128 bytes
// Signature: undefined FUN_006e8ca8(void)


void FUN_006e8ca8(long param_1)

{
  int iVar1;
  
  if (((DAT_01051fd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01051fd0), iVar1 != 0)) {
    DAT_01051fb8 = 0;
    DAT_01051fc0 = 0;
    DAT_01051fc8 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01051fb8,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01051fd0);
  }
  EngineManager::getInstance();
  EngineManager::getApplicationName();
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return;
}


