// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e919c
// Entry Point: 006e919c
// Size: 168 bytes
// Signature: undefined FUN_006e919c(void)


void FUN_006e919c(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((DAT_01052050 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01052050), iVar2 != 0)) {
    DAT_01052038 = 0;
    DAT_01052040 = 0;
    DAT_01052048 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01052038,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01052050);
  }
  EnvUtil::getUserId((basic_string *)&DAT_01052038);
  uVar1 = DAT_01052048;
  if ((DAT_01052038 & 1) == 0) {
    uVar1 = 0x1052039;
  }
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


