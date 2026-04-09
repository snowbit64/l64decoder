// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadGls
// Entry Point: 008afe28
// Size: 268 bytes
// Signature: undefined __cdecl loadGls(uchar * param_1, int param_2, int param_3, int param_4)


/* StaticSoundRuntimeSettings::loadGls(unsigned char const*, int, int, int) */

int StaticSoundRuntimeSettings::loadGls(uchar *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  void *__dest;
  Logger *this;
  uint *puVar5;
  
  puVar5 = (uint *)(ulong)(uint)param_2;
  uVar1 = *puVar5;
  *(uint *)(param_1 + 0x28) = uVar1;
  uVar2 = puVar5[1];
  *(uint *)(param_1 + 0x30) = uVar2;
  uVar3 = puVar5[2];
  *(uint *)(param_1 + 0x2c) = uVar3;
  if (param_4 < (int)(param_3 + uVar3 + 0xc)) {
LAB_008afed0:
    iVar4 = -1;
  }
  else {
    if (uVar1 == 0) {
      __dest = operator_new__((ulong)uVar2 << 1);
      *(void **)(param_1 + 0x20) = __dest;
    }
    else {
      if (uVar1 != 1) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0
           )) {
                    /* try { // try from 008afef4 to 008afefb has its CatchHandler @ 008aff44 */
          this = (Logger *)operator_new(0x38);
                    /* try { // try from 008aff00 to 008aff03 has its CatchHandler @ 008aff34 */
          Logger::Logger(this);
          LogManager::getInstance()::singletonLogManager = this;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                          "loadGls:StaticSoundRuntimeSettings: invalid data format %d\n",
                          (ulong)uVar1);
        goto LAB_008afed0;
      }
      __dest = operator_new__((ulong)uVar2);
      *(void **)(param_1 + 0x18) = __dest;
    }
    memcpy(__dest,puVar5 + 3,(ulong)uVar3);
    iVar4 = uVar3 + 0x10;
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)((long)(puVar5 + 3) + (ulong)uVar3);
  }
  return iVar4;
}


