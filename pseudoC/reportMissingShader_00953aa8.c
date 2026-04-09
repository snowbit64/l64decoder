// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportMissingShader
// Entry Point: 00953aa8
// Size: 1160 bytes
// Signature: undefined __thiscall reportMissingShader(MaterialShaderManager * this, MaterialShaderHash * param_1)


/* MaterialShaderManager::reportMissingShader(MaterialShaderHash const&) */

void __thiscall
MaterialShaderManager::reportMissingShader(MaterialShaderManager *this,MaterialShaderHash *param_1)

{
  uint uVar1;
  long lVar2;
  pair pVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  MaterialShaderManager *pMVar8;
  MaterialShaderHash *pMVar9;
  MaterialShaderManager **ppMVar10;
  MaterialShaderManager *pMVar11;
  MaterialShaderManager **ppMVar12;
  MaterialShaderManager **ppMVar13;
  MaterialShaderManager *pMVar14;
  undefined8 local_868;
  undefined8 local_860;
  char acStack_858 [2048];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(this + 0xd0);
  if (puVar5 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*puVar5)(puVar5,param_1);
    goto LAB_00953d14;
  }
  if (((DAT_0210e550 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0210e550), iVar4 != 0)) {
    DAT_0210e548 = 0;
    DAT_0210e540 = 0;
    DAT_0210e538 = &DAT_0210e540;
    __cxa_atexit(FUN_00953f58,&DAT_0210e538,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&DAT_0210e550);
  }
  pMVar9 = param_1;
  pVar3 = std::__ndk1::
          __tree<MaterialShaderHash,std::__ndk1::less<MaterialShaderHash>,std::__ndk1::allocator<MaterialShaderHash>>
          ::__emplace_unique_key_args<MaterialShaderHash,MaterialShaderHash_const&>
                    ((__tree<MaterialShaderHash,std::__ndk1::less<MaterialShaderHash>,std::__ndk1::allocator<MaterialShaderHash>>
                      *)&DAT_0210e538,param_1,param_1);
  uVar6 = (ulong)pVar3;
  if (((ulong)pMVar9 & 1) == 0) goto LAB_00953d14;
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00953dd4 to 00953ddf has its CatchHandler @ 00953f40 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  FUN_00956d84(acStack_858,0x800,"%8.8X.%8.8X-%8.8X.%8.8X",*(undefined4 *)(param_1 + 4),
               *(undefined4 *)param_1,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 8));
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Missing shader %s.\n",acStack_858);
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    Mutex::enterCriticalSection();
    ppMVar12 = (MaterialShaderManager **)(this + 0xe0);
    ppMVar13 = (MaterialShaderManager **)*ppMVar12;
    ppMVar10 = ppMVar12;
    if (ppMVar13 == (MaterialShaderManager **)0x0) {
LAB_00953bb0:
      pMVar8 = (MaterialShaderManager *)0x0;
    }
    else {
      do {
        if (*(uint *)(ppMVar13 + 4) >= uVar1) {
          ppMVar10 = ppMVar13;
        }
        ppMVar13 = (MaterialShaderManager **)ppMVar13[*(uint *)(ppMVar13 + 4) < uVar1];
      } while (ppMVar13 != (MaterialShaderManager **)0x0);
      if ((ppMVar10 == ppMVar12) || (uVar1 < *(uint *)(ppMVar10 + 4))) goto LAB_00953bb0;
      pMVar14 = ppMVar10[5];
      pMVar8 = pMVar14 + 0x69;
      if (((byte)pMVar14[0x68] & 1) != 0) {
        pMVar8 = *(MaterialShaderManager **)(pMVar14 + 0x78);
      }
    }
    Mutex::leaveCriticalSection();
    uVar1 = *(uint *)(param_1 + 4);
    if (uVar1 == 0) {
      pMVar14 = (MaterialShaderManager *)0x0;
    }
    else {
      Mutex::enterCriticalSection();
      ppMVar13 = (MaterialShaderManager **)(this + 0xe0);
      ppMVar12 = (MaterialShaderManager **)*ppMVar13;
      ppMVar10 = ppMVar13;
      if (ppMVar12 == (MaterialShaderManager **)0x0) {
LAB_00953c08:
        pMVar14 = (MaterialShaderManager *)0x0;
      }
      else {
        do {
          if (*(uint *)(ppMVar12 + 4) >= uVar1) {
            ppMVar10 = ppMVar12;
          }
          ppMVar12 = (MaterialShaderManager **)ppMVar12[*(uint *)(ppMVar12 + 4) < uVar1];
        } while (ppMVar12 != (MaterialShaderManager **)0x0);
        if ((ppMVar10 == ppMVar13) || (uVar1 < *(uint *)(ppMVar10 + 4))) goto LAB_00953c08;
        pMVar11 = ppMVar10[5];
        pMVar14 = pMVar11 + 0x81;
        if (((byte)pMVar11[0x80] & 1) != 0) {
          pMVar14 = *(MaterialShaderManager **)(pMVar11 + 0x90);
        }
      }
      Mutex::leaveCriticalSection();
    }
    if (pMVar8 != (MaterialShaderManager *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00953ef4 to 00953eff has its CatchHandler @ 00953f30 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pMVar11 = (MaterialShaderManager *)&DAT_0050a39f;
      if (pMVar14 != (MaterialShaderManager *)0x0) {
        pMVar11 = pMVar14;
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Custom shader: %s variation: %s\n",pMVar8,pMVar11);
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00953e1c to 00953e27 has its CatchHandler @ 00953f3c */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  uVar7 = MaterialShaderHash::getFullDesc(param_1,param_1,"",acStack_858);
  pMVar8 = (MaterialShaderManager *)
           LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,
                             uVar7);
  local_868 = 0;
  local_860 = 0;
  uVar6 = findNearestCompiledShader(pMVar8,param_1,(MaterialShaderHash *)&local_868);
  if ((uVar6 & 1) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00953e64 to 00953e6f has its CatchHandler @ 00953f38 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    FUN_00956d84(acStack_858,0x800,"%8.8X.%8.8X-%8.8X.%8.8X",local_868._4_4_,local_868 & 0xffffffff,
                 local_860._4_4_,local_860 & 0xffffffff);
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,"Nearest hash %s.\n",
                      acStack_858);
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00953eac to 00953eb7 has its CatchHandler @ 00953f34 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar7 = MaterialShaderHash::getFullDesc((MaterialShaderHash *)&local_868,param_1,"",acStack_858)
    ;
    uVar6 = LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,&DAT_005118dd,
                              uVar7);
  }
LAB_00953d14:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


