// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parsePhysicalName
// Entry Point: 00b1d94c
// Size: 484 bytes
// Signature: undefined __cdecl parsePhysicalName(char * param_1, IndexedUsage * param_2)


/* DeviceMappingManager::parsePhysicalName(char const*, DeviceMappingManager::IndexedUsage&) */

void DeviceMappingManager::parsePhysicalName(char *param_1,IndexedUsage *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  ulong __n;
  char *__dest;
  ulong uVar5;
  undefined8 local_88;
  ulong uStack_80;
  char *local_78;
  ulong local_70;
  ulong uStack_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70 = 0;
  uStack_68 = 0;
  local_60 = (char *)0x0;
  pcVar4 = strchr(param_1,0x23);
  if (pcVar4 == (char *)0x0) {
                    /* try { // try from 00b1d9c0 to 00b1d9cb has its CatchHandler @ 00b1db48 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((char *)&local_70);
    iVar2 = 0;
    goto LAB_00b1da30;
  }
  __n = (long)pcVar4 - (long)param_1;
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00b1dadc to 00b1dae3 has its CatchHandler @ 00b1db44 */
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (char *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00b1d9f4;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00b1d9dc to 00b1d9e3 has its CatchHandler @ 00b1db44 */
    __dest = (char *)operator_new(uVar5);
    local_88 = uVar5 | 1;
    uStack_80 = __n;
    local_78 = __dest;
LAB_00b1d9f4:
    memcpy(__dest,param_1,__n);
  }
  __dest[__n] = '\0';
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  uStack_68 = uStack_80;
  local_70 = local_88;
  local_60 = local_78;
  iVar2 = atoi(pcVar4 + 1);
LAB_00b1da30:
  *(int *)(param_2 + 4) = iVar2;
  pcVar4 = (char *)((ulong)&local_70 | 1);
  if ((local_70 & 1) != 0) {
    pcVar4 = local_60;
  }
                    /* try { // try from 00b1da4c to 00b1da97 has its CatchHandler @ 00b1db48 */
  iVar2 = USBUtil::findUsageFromShortDescriptor(pcVar4,1);
  *(int *)param_2 = iVar2;
  if (iVar2 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b1daf4 to 00b1daff has its CatchHandler @ 00b1db30 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      pcVar4 = local_60;
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "  Warning: Physical axis \'%s\' is not in the USB HID tables\n",pcVar4);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != 0);
  }
  return;
}


