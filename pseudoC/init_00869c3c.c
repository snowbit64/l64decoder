// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00869c3c
// Size: 240 bytes
// Signature: undefined __thiscall init(ConditionalAnimationClipInfo * this, CharacterSet * param_1)


/* ConditionalAnimationClipInfo::init(CharacterSet&) */

void __thiscall
ConditionalAnimationClipInfo::init(ConditionalAnimationClipInfo *this,CharacterSet *param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  Logger *this_00;
  ConditionalAnimationClipInfo *pCVar4;
  undefined4 uVar5;
  
  pCVar4 = *(ConditionalAnimationClipInfo **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pCVar4 = this + 1;
  }
  uVar1 = CharacterSet::getNamedClipIndex(param_1,(char *)pCVar4);
  if ((int)uVar1 < 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 00869cec to 00869cf3 has its CatchHandler @ 00869d3c */
      this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 00869cf8 to 00869cfb has its CatchHandler @ 00869d2c */
      Logger::Logger(this_00);
      LogManager::getInstance()::singletonLogManager = this_00;
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pCVar4 = this + 1;
    if (((byte)*this & 1) != 0) {
      pCVar4 = *(ConditionalAnimationClipInfo **)(this + 0x10);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: clip index not found for: %s.\n",pCVar4);
  }
  else {
    lVar3 = CharacterSet::getClip(param_1,uVar1);
    if (lVar3 != 0) {
      *(uint *)(this + 0x20) = uVar1;
      uVar5 = Clip::getDuration();
      *(undefined4 *)(this + 0x18) = uVar5;
    }
  }
  return;
}


