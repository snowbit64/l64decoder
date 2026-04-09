// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079de80
// Entry Point: 0079de80
// Size: 300 bytes
// Signature: undefined FUN_0079de80(void)


void FUN_0079de80(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (((DAT_0107c568 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0107c568), iVar2 != 0)) {
    DAT_0107c550 = 0;
    DAT_0107c558 = 0;
    DAT_0107c560 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c550,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c568);
  }
  if (((DAT_0107c588 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0107c588), iVar2 != 0)) {
    DAT_0107c570 = 0;
    DAT_0107c578 = 0;
    DAT_0107c580 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c570,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c588);
  }
  if (((DAT_0107c5a8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_0107c5a8), iVar2 != 0)) {
    DAT_0107c590 = 0;
    DAT_0107c598 = 0;
    DAT_0107c5a0 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_0107c590,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0107c5a8);
  }
  uVar1 = GenericSaveGameUtil::getUploadState(*param_1);
  param_1[0x40] = uVar1;
  param_1[0x42] = 1;
  return;
}


