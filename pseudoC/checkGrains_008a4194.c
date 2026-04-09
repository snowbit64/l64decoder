// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkGrains
// Entry Point: 008a4194
// Size: 560 bytes
// Signature: undefined checkGrains(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GranularSynthesisRuntimeSettings::checkGrains() const */

undefined4 GranularSynthesisRuntimeSettings::checkGrains(void)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long in_x0;
  undefined4 uVar4;
  ulong local_40;
  undefined8 uStack_38;
  undefined8 *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = (undefined8 *)operator_new(0x40);
  *(undefined *)((long)local_30 + 0x34) = 0;
  *(undefined4 *)(local_30 + 6) = 0x3a726f72;
  uStack_38 = 0x34;
  local_40 = 0x41;
  iVar3 = *(int *)(in_x0 + 0x10);
  local_30[1] = 0x69736568746e7953;
  *local_30 = 0x72616c756e617247;
  local_30[3] = 0x73676e6974746553;
  local_30[2] = 0x656d69746e755273;
  local_30[5] = 0x72453a736e696172;
  local_30[4] = 0x476b636568633a3a;
  if (iVar3 == 1) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_40);
  }
  else if (iVar3 == 0) {
                    /* try { // try from 008a4204 to 008a42e7 has its CatchHandler @ 008a43dc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_40);
  }
  if ((*(long *)(in_x0 + 0x30) != *(long *)(in_x0 + 0x38)) &&
     (*(long *)(in_x0 + 0x18) != *(long *)(in_x0 + 0x20))) {
    if (*(int *)(in_x0 + 0xc) < *(int *)(in_x0 + 0x50)) {
      if (*(uint *)(in_x0 + 8) <=
          (uint)((ulong)(*(long *)(in_x0 + 0x38) - *(long *)(in_x0 + 0x30)) >> 4)) {
        uVar4 = 1;
        goto joined_r0x008a42f0;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 008a4388 to 008a4393 has its CatchHandler @ 008a43c4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar1 = (undefined8 *)((ulong)&local_40 | 1);
      if ((local_40 & 1) != 0) {
        puVar1 = local_30;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "%s: Window grain size invalid %d.\n",puVar1,(ulong)*(uint *)(in_x0 + 8));
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 008a4340 to 008a434b has its CatchHandler @ 008a43c8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      puVar1 = (undefined8 *)((ulong)&local_40 | 1);
      if ((local_40 & 1) != 0) {
        puVar1 = local_30;
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "%s: Crossfade size invalid %d.\n",puVar1,(ulong)*(uint *)(in_x0 + 0xc));
    }
  }
  uVar4 = 0;
joined_r0x008a42f0:
  if ((local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


