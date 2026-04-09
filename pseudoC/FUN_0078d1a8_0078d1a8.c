// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078d1a8
// Entry Point: 0078d1a8
// Size: 516 bytes
// Signature: undefined FUN_0078d1a8(void)


void FUN_0078d1a8(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  Logger *this;
  undefined1 *puVar3;
  uint uVar4;
  
  puVar3 = &EngineScriptBinding::s_intervalTimers;
  if (EngineScriptBinding::s_intervalTimers == '\0') {
    uVar4 = 0;
  }
  else {
    puVar3 = &DAT_010530e8;
    if (DAT_010530e8 == '\0') {
      uVar4 = 1;
    }
    else {
      puVar3 = &DAT_010530f8;
      if (DAT_010530f8 == '\0') {
        uVar4 = 2;
      }
      else {
        puVar3 = &DAT_01053108;
        if (DAT_01053108 == '\0') {
          uVar4 = 3;
        }
        else {
          puVar3 = &DAT_01053118;
          if (DAT_01053118 == '\0') {
            uVar4 = 4;
          }
          else {
            puVar3 = &DAT_01053128;
            if (DAT_01053128 == '\0') {
              uVar4 = 5;
            }
            else {
              puVar3 = &DAT_01053138;
              if (DAT_01053138 == '\0') {
                uVar4 = 6;
              }
              else {
                puVar3 = &DAT_01053148;
                if (DAT_01053148 == '\0') {
                  uVar4 = 7;
                }
                else {
                  puVar3 = &DAT_01053158;
                  if (DAT_01053158 == '\0') {
                    uVar4 = 8;
                  }
                  else {
                    puVar3 = &DAT_01053168;
                    if (DAT_01053168 == '\0') {
                      uVar4 = 9;
                    }
                    else {
                      puVar3 = &DAT_01053178;
                      if (DAT_01053178 == '\0') {
                        uVar4 = 10;
                      }
                      else {
                        puVar3 = &DAT_01053188;
                        if (DAT_01053188 == '\0') {
                          uVar4 = 0xb;
                        }
                        else {
                          puVar3 = &DAT_01053198;
                          if (DAT_01053198 == '\0') {
                            uVar4 = 0xc;
                          }
                          else {
                            puVar3 = &DAT_010531a8;
                            if (DAT_010531a8 == '\0') {
                              uVar4 = 0xd;
                            }
                            else {
                              puVar3 = &DAT_010531b8;
                              if (DAT_010531b8 == '\0') {
                                uVar4 = 0xe;
                              }
                              else {
                                puVar3 = &DAT_010531c8;
                                if (DAT_010531c8 != '\0') {
                                  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
                                     (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::
                                                                   singletonLogManager), iVar1 != 0)
                                     ) {
                    /* try { // try from 0078d36c to 0078d373 has its CatchHandler @ 0078d3bc */
                                    this = (Logger *)operator_new(0x38);
                    /* try { // try from 0078d378 to 0078d37b has its CatchHandler @ 0078d3ac */
                                    Logger::Logger(this);
                                    LogManager::getInstance()::singletonLogManager = this;
                                    __cxa_atexit(LogManager::~LogManager,
                                                 &LogManager::getInstance()::singletonLogManager,
                                                 &PTR_LOOP_00fd8de0);
                                    __cxa_guard_release(&LogManager::getInstance()::
                                                         singletonLogManager);
                                  }
                                  LogManager::errorf((char *)&LogManager::getInstance()::
                                                              singletonLogManager,
                                                     "Error: No more interval timers\n");
                                  uVar4 = 0xffffffff;
                                  goto LAB_0078d340;
                                }
                                uVar4 = 0xf;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  *puVar3 = 1;
  uVar2 = Watch::getCurrentTicks();
  (&DAT_010530e0)[(ulong)uVar4 * 2] = uVar2;
LAB_0078d340:
  *(uint *)(param_1 + 0x100) = uVar4;
  *(undefined4 *)(param_1 + 0x108) = 1;
  return;
}


