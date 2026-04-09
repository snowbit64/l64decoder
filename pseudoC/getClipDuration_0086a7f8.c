// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getClipDuration
// Entry Point: 0086a7f8
// Size: 384 bytes
// Signature: undefined getClipDuration(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* ConditionalAnimationBlending::getClipDuration() const */

float ConditionalAnimationBlending::getClipDuration(void)

{
  int iVar1;
  long in_x0;
  byte *pbVar2;
  Logger *this;
  byte *pbVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar5 = (*(long *)(in_x0 + 0x18) - *(long *)(in_x0 + 0x10) >> 3) * 0xb6db6db7;
  if ((int)uVar5 == 0) {
    fVar8 = 0.0;
  }
  else {
    fVar8 = (float)ConditionalAnimationClipInfo::getClipDuration();
    lVar7 = 0;
    do {
      lVar6 = *(long *)(in_x0 + 0x10);
      fVar10 = (float)ConditionalAnimationClipInfo::getClipDuration();
      if (fVar8 != fVar10) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 0086a960 to 0086a96b has its CatchHandler @ 0086a988 */
          this = (Logger *)operator_new(0x38);
                    /* try { // try from 0086a96c to 0086a973 has its CatchHandler @ 0086a978 */
          Logger::Logger(this);
          LogManager::getInstance()::singletonLogManager = this;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pbVar3 = (byte *)(lVar6 + lVar7);
        pbVar4 = *(byte **)(pbVar3 + 0x10);
        if ((*pbVar3 & 1) == 0) {
          pbVar4 = pbVar3 + 1;
        }
        fVar10 = (float)ConditionalAnimationClipInfo::getClipDuration();
        pbVar2 = *(byte **)(in_x0 + 0x10);
        pbVar3 = *(byte **)(pbVar2 + 0x10);
        if ((*pbVar2 & 1) == 0) {
          pbVar3 = pbVar2 + 1;
        }
        fVar9 = (float)ConditionalAnimationClipInfo::getClipDuration();
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,(double)fVar10,
                          (double)fVar9,"Warning: \'%s\'.duration(%.3f) != \'%s\'.duration(%.3f)\n",
                          pbVar4,pbVar3);
      }
      lVar7 = lVar7 + 0x38;
    } while ((uVar5 & 0xffffffff) * 0x38 - lVar7 != 0);
  }
  return fVar8;
}


