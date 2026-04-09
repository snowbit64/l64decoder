// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e90f4
// Entry Point: 006e90f4
// Size: 168 bytes
// Signature: undefined FUN_006e90f4(void)


void FUN_006e90f4(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  
  if (((DAT_01052030 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01052030), iVar2 != 0)) {
    DAT_01052018 = 0;
    DAT_01052020 = 0;
    DAT_01052028 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01052018,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01052030);
  }
  EnvUtil::getUserName((basic_string *)&DAT_01052018);
  uVar1 = DAT_01052028;
  if ((DAT_01052018 & 1) == 0) {
    uVar1 = 0x1052019;
  }
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


