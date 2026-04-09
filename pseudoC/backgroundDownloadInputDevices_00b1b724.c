// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backgroundDownloadInputDevices
// Entry Point: 00b1b724
// Size: 416 bytes
// Signature: undefined __cdecl backgroundDownloadInputDevices(void * param_1, bool * param_2)


/* DeviceMappingManager::backgroundDownloadInputDevices(void*, bool volatile&) */

undefined8 DeviceMappingManager::backgroundDownloadInputDevices(void *param_1,bool *param_2)

{
  uchar *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong local_f0;
  ulong local_e8;
  uchar *local_e0;
  AndroidHTTPSRequest aAStack_d8 [160];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((param_1 == (void *)0x0) || (*param_2 != false)) goto LAB_00b1b850;
  AndroidHTTPSRequest::AndroidHTTPSRequest(aAStack_d8);
                    /* try { // try from 00b1b760 to 00b1b79f has its CatchHandler @ 00b1b8f0 */
  AndroidHTTPSRequest::init((char *)aAStack_d8,false,true);
  AndroidHTTPSRequest::setUserAgent(aAStack_d8,"GIANTS Engine");
  AndroidHTTPSRequest::setReferer(aAStack_d8,"http://www.farming-simulator.com/");
  AndroidHTTPSRequest::setCancelFlag(aAStack_d8,param_2);
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = (uchar *)0x0;
                    /* try { // try from 00b1b7b4 to 00b1b837 has its CatchHandler @ 00b1b8d8 */
  uVar4 = AndroidHTTPSRequest::httpGET
                    ((char *)aAStack_d8,(basic_string *)s_pInputDevicesURL,(Range *)&local_f0,
                     (char *)0x0,(uint *)0x0,(map *)0x0);
  if ((uVar4 & 1) == 0) {
LAB_00b1b814:
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 00b1b888 to 00b1b893 has its CatchHandler @ 00b1b8c4 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: Failed to download input devices.\n");
  }
  else {
    uVar4 = local_f0 >> 1 & 0x7f;
    if ((local_f0 & 1) != 0) {
      uVar4 = local_e8;
    }
    if (uVar4 == 0) goto LAB_00b1b814;
    if (*param_2 == false) {
      puVar1 = (uchar *)((ulong)&local_f0 | 1);
      if ((local_f0 & 1) != 0) {
        puVar1 = local_e0;
      }
      installDeviceMappings((DeviceMappingManager *)param_1,puVar1,(uint)uVar4);
    }
  }
  if ((local_f0 & 1) != 0) {
    operator_delete(local_e0);
  }
  AndroidHTTPSRequest::~AndroidHTTPSRequest(aAStack_d8);
LAB_00b1b850:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


