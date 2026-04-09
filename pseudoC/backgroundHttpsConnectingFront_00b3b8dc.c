// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: backgroundHttpsConnectingFront
// Entry Point: 00b3b8dc
// Size: 656 bytes
// Signature: undefined __cdecl backgroundHttpsConnectingFront(void * param_1, bool * param_2)


/* MasterServerManager::backgroundHttpsConnectingFront(void*, bool volatile&) */

undefined8 MasterServerManager::backgroundHttpsConnectingFront(void *param_1,bool *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_50c;
  ulong local_508;
  ulong local_500;
  undefined8 *local_4f8;
  uint local_4ec;
  AndroidHTTPSRequest aAStack_4e8 [160];
  basic_string abStack_448 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_1 == (void *)0x0) goto LAB_00b3b94c;
  *(undefined *)((long)param_1 + 0x171) = 0;
  if (*param_2 == false) {
    local_4ec = 0;
    Network::getAddressByHostname
              (*(char **)((long)param_1 + (ulong)*(uint *)((long)param_1 + 0x174) * 8 + 0x4a0),
               &local_4ec);
    if (*param_2 == false) {
      AndroidHTTPSRequest::AndroidHTTPSRequest(aAStack_4e8);
                    /* try { // try from 00b3b980 to 00b3b9cb has its CatchHandler @ 00b3bb9c */
      AndroidHTTPSRequest::init((char *)aAStack_4e8,false,true);
      AndroidHTTPSRequest::setUserAgent(aAStack_4e8,"GIANTS Engine");
      AndroidHTTPSRequest::setReferer(aAStack_4e8,"http://www.farming-simulator.com/");
      AndroidHTTPSRequest::setVerbose(aAStack_4e8,false);
      AndroidHTTPSRequest::setCancelFlag(aAStack_4e8,param_2);
      FUN_00b41720(abStack_448);
      local_508 = 0;
      local_500 = 0;
      local_4f8 = (undefined8 *)0x0;
      local_50c = 0;
                    /* try { // try from 00b3b9e8 to 00b3bab3 has its CatchHandler @ 00b3bb84 */
      uVar4 = AndroidHTTPSRequest::httpGET
                        ((char *)aAStack_4e8,abStack_448,(Range *)&local_508,(char *)0x0,(uint *)0x0
                         ,(map *)&local_50c);
      if ((uVar4 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00b3bae8 to 00b3baf3 has its CatchHandler @ 00b3bb70 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Couldn\'t reach front server for public key.\n");
      }
      else {
        if (local_50c == 200) {
          uVar4 = local_508 >> 1 & 0x7f;
          if ((local_508 & 1) != 0) {
            uVar4 = local_500;
          }
          if (uVar4 == 0x40) {
            puVar1 = (undefined8 *)((ulong)&local_508 | 1);
            if ((local_508 & 1) != 0) {
              puVar1 = local_4f8;
            }
            uVar7 = puVar1[4];
            uVar6 = puVar1[7];
            uVar5 = puVar1[6];
            uVar9 = puVar1[1];
            uVar8 = *puVar1;
            uVar11 = puVar1[3];
            uVar10 = puVar1[2];
            *(undefined8 *)((long)param_1 + 0x150) = puVar1[5];
            *(undefined8 *)((long)param_1 + 0x148) = uVar7;
            *(undefined8 *)((long)param_1 + 0x160) = uVar6;
            *(undefined8 *)((long)param_1 + 0x158) = uVar5;
            *(undefined *)((long)param_1 + 0x171) = 1;
            *(undefined8 *)((long)param_1 + 0x130) = uVar9;
            *(undefined8 *)((long)param_1 + 0x128) = uVar8;
            *(undefined8 *)((long)param_1 + 0x140) = uVar11;
            *(undefined8 *)((long)param_1 + 0x138) = uVar10;
            goto LAB_00b3bab4;
          }
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00b3bb30 to 00b3bb3b has its CatchHandler @ 00b3bb6c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "Warning: Couldn\'t get public key for connection.\n");
      }
LAB_00b3bab4:
      *(undefined *)((long)param_1 + 0x170) = 1;
      if ((local_508 & 1) != 0) {
        operator_delete(local_4f8);
      }
      AndroidHTTPSRequest::~AndroidHTTPSRequest(aAStack_4e8);
      goto LAB_00b3b94c;
    }
  }
  *(undefined *)((long)param_1 + 0x170) = 1;
LAB_00b3b94c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


