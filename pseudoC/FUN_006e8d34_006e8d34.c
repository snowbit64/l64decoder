// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8d34
// Entry Point: 006e8d34
// Size: 208 bytes
// Signature: undefined FUN_006e8d34(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006e8d34(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  if (((DAT_01051ff0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01051ff0), iVar2 != 0)) {
    _DAT_01051fd8 = 0;
    DAT_01051fe0 = 0;
    DAT_01051fe8 = (undefined *)0x0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01051fd8,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01051ff0);
  }
  if ((_DAT_01051fd8 & 1) == 0) {
    _DAT_01051fd8 = _DAT_01051fd8 & 0xffffffffffff0000;
  }
  else {
    *DAT_01051fe8 = 0;
    DAT_01051fe0 = 0;
  }
  EnvUtil::getProcessorName((basic_string *)&DAT_01051fd8);
  puVar1 = DAT_01051fe8;
  if ((_DAT_01051fd8 & 1) == 0) {
    puVar1 = (undefined *)0x1051fd9;
  }
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(undefined **)(param_1 + 0x100) = puVar1;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


