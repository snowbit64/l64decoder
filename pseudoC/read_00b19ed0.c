// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 00b19ed0
// Size: 688 bytes
// Signature: undefined __cdecl read(uint param_1, char * param_2, bool * param_3)


/* VoiceChatStreamedAudioData::read(unsigned int, char*, bool&) */

int VoiceChatStreamedAudioData::read(uint param_1,char *param_2,bool *param_3)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  void *__dest;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  size_t __n;
  ulong uVar9;
  ulong uVar10;
  float fVar11;
  
  uVar5 = (ulong)param_1;
  Mutex::enterCriticalSection();
  uVar10 = (ulong)*(uint *)(uVar5 + 0x4c0);
  uVar1 = (*(uint *)(uVar5 + 0x4c0) + 1) % 0x32;
  uVar9 = (ulong)uVar1;
  if (*(char *)(uVar5 + uVar10 * 0x18 + 0x22) == '\0') {
    Mutex::leaveCriticalSection();
    iVar3 = OpusVoiceCodec::decode(*(uchar **)(uVar5 + 8),0,(short *)0x0,(uint)param_3);
  }
  else {
    uVar8 = *(uint *)(uVar5 + uVar10 * 0x18 + 0x18);
    __n = (size_t)uVar8;
    if (uVar8 == 0) {
      Mutex::leaveCriticalSection();
      memset(param_3,0,0x3c0);
      OpusVoiceCodec::resetDecoder();
      iVar3 = 0x1e0;
      *(uint *)(uVar5 + 0x4c0) = uVar1;
      goto LAB_00b1a11c;
    }
    __dest = *(void **)(uVar5 + 0x4f8);
    if (*(uint *)(uVar5 + 0x4f0) != uVar8) {
      if (__dest != (void *)0x0) {
        operator_delete__(__dest);
        uVar10 = (ulong)*(uint *)(uVar5 + 0x4c0);
        uVar8 = *(uint *)(uVar5 + uVar10 * 0x18 + 0x18);
      }
      *(uint *)(uVar5 + 0x4f0) = uVar8;
      __n = (size_t)uVar8;
      __dest = operator_new__(__n);
      *(void **)(uVar5 + 0x4f8) = __dest;
    }
    memcpy(__dest,*(void **)(uVar5 + 0x10 + uVar10 * 0x18),__n);
    *(undefined *)(uVar5 + 0x10 + (ulong)*(uint *)(uVar5 + 0x4c0) * 0x18 + 0x12) = 0;
    Mutex::leaveCriticalSection();
    iVar3 = OpusVoiceCodec::decode
                      (*(uchar **)(uVar5 + 8),(uint)*(undefined8 *)(uVar5 + 0x4f8),
                       (short *)(ulong)*(uint *)(uVar5 + 0x4f0),(uint)param_3);
    if (*(char *)(uVar5 + 0x506) != '\0') {
      if ((*(char *)(uVar5 + uVar9 * 0x18 + 0x22) == '\0') ||
         (*(int *)(uVar5 + uVar9 * 0x18 + 0x18) == 0)) goto LAB_00b1a0a8;
      fVar11 = 0.0;
      lVar7 = 0;
      do {
        fVar2 = fVar11 * (float)(int)*(short *)(param_3 + lVar7);
        fVar11 = fVar11 + 0.002083333;
        *(short *)(param_3 + lVar7) = (short)(int)fVar2;
        lVar7 = lVar7 + 2;
      } while (lVar7 != 0x3c0);
      *(undefined *)(uVar5 + 0x506) = 0;
    }
    if (*(int *)(uVar5 + uVar9 * 0x18 + 0x18) == 0) {
      lVar7 = 0;
      fVar11 = 1.0;
      do {
        fVar2 = fVar11 * (float)(int)*(short *)(param_3 + lVar7);
        fVar11 = fVar11 + -0.002083333;
        *(short *)(param_3 + lVar7) = (short)(int)fVar2;
        lVar7 = lVar7 + 2;
      } while (lVar7 != 0x3c0);
      *(undefined *)(uVar5 + 0x506) = 1;
    }
  }
LAB_00b1a0a8:
  *(uint *)(uVar5 + 0x4c0) = uVar1;
  if (iVar3 < 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00b1a148 to 00b1a153 has its CatchHandler @ 00b1a180 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    uVar6 = OpusVoiceCodec::getErrorStr(*(OpusVoiceCodec **)(uVar5 + 8),iVar3);
    LogManager::infof((char *)&LogManager::getInstance()::singletonLogManager,
                      "Info: Unable to decode voice chat data. Reason: %s\n",uVar6);
    OpusVoiceCodec::resetDecoder();
    iVar3 = 0;
  }
LAB_00b1a11c:
  return iVar3 << 1;
}


