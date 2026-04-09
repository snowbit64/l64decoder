// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEnv
// Entry Point: 00c6991c
// Size: 1104 bytes
// Signature: undefined getEnv(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AndroidJNICall::getEnv() */

void AndroidJNICall::getEnv(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long **in_x0;
  long *plVar5;
  long **pplVar6;
  long **pplVar7;
  long *plVar8;
  long **pplVar9;
  undefined4 local_78 [2];
  char *local_70;
  undefined8 uStack_68;
  long *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  uVar2 = gettid();
  local_60 = (long *)0x0;
  pplVar9 = in_x0 + 2;
  pplVar6 = (long **)*pplVar9;
  pplVar7 = pplVar9;
  if (pplVar6 != (long **)0x0) {
    do {
      if ((int)uVar2 <= *(int *)(pplVar6 + 4)) {
        pplVar7 = pplVar6;
      }
      pplVar6 = (long **)pplVar6[*(int *)(pplVar6 + 4) < (int)uVar2];
    } while (pplVar6 != (long **)0x0);
    if ((pplVar7 != pplVar9) && (*(int *)(pplVar7 + 4) <= (int)uVar2)) {
      Mutex::leaveCriticalSection();
      plVar5 = pplVar7[5];
      goto LAB_00c69bd4;
    }
  }
  uVar3 = (**(code **)(**in_x0 + 0x30))(*in_x0,&local_60,0x10006);
  if (uVar3 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00c69c58 to 00c69c63 has its CatchHandler @ 00c69d78 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Adding JNIEnv*: 0x%p\n",local_60);
    pplVar7 = (long **)*pplVar9;
    plVar5 = local_60;
  }
  else {
    if (uVar3 != 0xfffffffe) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00c69ca0 to 00c69cab has its CatchHandler @ 00c69d74 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "GetEnv() returned error %d!\n",(ulong)uVar3);
      Mutex::leaveCriticalSection();
      plVar5 = (long *)0x0;
      goto LAB_00c69bd4;
    }
    local_60 = (long *)0x0;
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00c69c10 to 00c69c1b has its CatchHandler @ 00c69d7c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "JNI thread %d found in detached state, attaching now... (%s)\n",(ulong)uVar2,
                      *(undefined8 *)(s_javaClassNames + (ulong)*(uint *)(in_x0 + 0xb) * 8));
    local_78[0] = 0x10006;
    if (*(uint *)(in_x0 + 0xb) == 0) {
      local_70 = "MainActivity";
    }
    else {
      local_70 = *(char **)(s_javaClassNames + (ulong)*(uint *)(in_x0 + 0xb) * 8);
    }
    uStack_68 = 0;
    uVar3 = (**(code **)(**in_x0 + 0x20))(*in_x0,&local_60,local_78);
    if (uVar3 != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00c69d30 to 00c69d3b has its CatchHandler @ 00c69d6c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "AttachCurrentThread() returned error %d!\n",(ulong)uVar3);
    }
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00c69ce8 to 00c69cf3 has its CatchHandler @ 00c69d70 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Adding JNIEnv* for detached thread %u: 0x%p\n",(ulong)uVar2,local_60);
    pplVar7 = (long **)*pplVar9;
    plVar5 = local_60;
  }
  if (pplVar7 == (long **)0x0) {
    plVar8 = *pplVar9;
    pplVar6 = pplVar9;
  }
  else {
    pplVar6 = in_x0 + 2;
    do {
      while (pplVar9 = pplVar7, (int)uVar2 < *(int *)(pplVar9 + 4)) {
        pplVar7 = (long **)*pplVar9;
        pplVar6 = pplVar9;
        if ((long **)*pplVar9 == (long **)0x0) {
          plVar8 = *pplVar9;
          goto joined_r0x00c69b60;
        }
      }
      if ((int)uVar2 <= *(int *)(pplVar9 + 4)) break;
      pplVar6 = pplVar9 + 1;
      pplVar7 = (long **)*pplVar6;
    } while ((long **)*pplVar6 != (long **)0x0);
    plVar8 = *pplVar6;
  }
joined_r0x00c69b60:
  local_60 = plVar5;
  if (plVar8 == (long *)0x0) {
    plVar8 = (long *)operator_new(0x30);
    *(uint *)(plVar8 + 4) = uVar2;
    plVar8[5] = (long)plVar5;
    *plVar8 = 0;
    plVar8[1] = 0;
    plVar8[2] = (long)pplVar9;
    *pplVar6 = plVar8;
    if ((long *)*in_x0[1] != (long *)0x0) {
      in_x0[1] = (long *)*in_x0[1];
      plVar8 = *pplVar6;
    }
    std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
              ((__tree_node_base *)in_x0[2],(__tree_node_base *)plVar8);
    in_x0[3] = (long *)((long)in_x0[3] + 1);
  }
  Mutex::leaveCriticalSection();
  plVar5 = local_60;
LAB_00c69bd4:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar5);
  }
  return;
}


