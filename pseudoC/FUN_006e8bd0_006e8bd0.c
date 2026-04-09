// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e8bd0
// Entry Point: 006e8bd0
// Size: 184 bytes
// Signature: undefined FUN_006e8bd0(void)


void FUN_006e8bd0(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  
  if (((DAT_01051fb0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01051fb0), iVar2 != 0)) {
    DAT_01051f98 = 0;
    DAT_01051fa0 = 0;
    DAT_01051fa8 = 0;
    __cxa_atexit(std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 ~basic_string,&DAT_01051f98,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_01051fb0);
  }
  EngineManager::getInstance();
  pcVar3 = (char *)EngineManager::getApplicationName();
  PathUtil::getUserProfileAppPath(pcVar3,(basic_string *)&DAT_01051f98,false,true);
  uVar1 = DAT_01051fa8;
  if ((DAT_01051f98 & 1) == 0) {
    uVar1 = 0x1051f99;
  }
  *(undefined4 *)(param_1 + 0x108) = 6;
  *(undefined8 *)(param_1 + 0x100) = uVar1;
  *(ushort *)(param_1 + 0x10c) = *(ushort *)(param_1 + 0x10c) & 0xfffe;
  return;
}


