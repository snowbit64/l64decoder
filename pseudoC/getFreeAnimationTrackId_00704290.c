// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFreeAnimationTrackId
// Entry Point: 00704290
// Size: 412 bytes
// Signature: undefined __thiscall getFreeAnimationTrackId(AnimalAnimationSystem * this, uint param_1)


/* AnimalAnimationSystem::getFreeAnimationTrackId(unsigned int) */

undefined8 __thiscall
AnimalAnimationSystem::getFreeAnimationTrackId(AnimalAnimationSystem *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  Logger *this_00;
  
  if (this[0x59] != (AnimalAnimationSystem)0x0) {
    if (this[0xc1] == (AnimalAnimationSystem)0x0) {
      return 1;
    }
    if (this[0x129] == (AnimalAnimationSystem)0x0) {
      return 2;
    }
    if (this[0x191] == (AnimalAnimationSystem)0x0) {
      return 3;
    }
    if (this[0x1f9] == (AnimalAnimationSystem)0x0) {
      return 4;
    }
    if (this[0x261] == (AnimalAnimationSystem)0x0) {
      return 5;
    }
    uVar1 = CharacterSet::getAssignedClip(*(CharacterSet **)(this + 0x18),*(uint *)(this + 0x20));
    if (uVar1 != param_1) {
      uVar1 = CharacterSet::getAssignedClip(*(CharacterSet **)(this + 0x80),*(uint *)(this + 0x88));
      if (uVar1 == param_1) {
        return 1;
      }
      uVar1 = CharacterSet::getAssignedClip(*(CharacterSet **)(this + 0xe8),*(uint *)(this + 0xf0));
      if (uVar1 == param_1) {
        return 2;
      }
      uVar1 = CharacterSet::getAssignedClip
                        (*(CharacterSet **)(this + 0x150),*(uint *)(this + 0x158));
      if (uVar1 == param_1) {
        return 3;
      }
      uVar1 = CharacterSet::getAssignedClip
                        (*(CharacterSet **)(this + 0x1b8),*(uint *)(this + 0x1c0));
      if (uVar1 == param_1) {
        return 4;
      }
      uVar1 = CharacterSet::getAssignedClip
                        (*(CharacterSet **)(this + 0x220),*(uint *)(this + 0x228));
      if (uVar1 == param_1) {
        return 5;
      }
      if (this[0x38] == (AnimalAnimationSystem)0x0) {
        if (this[0xa0] != (AnimalAnimationSystem)0x0) {
          return 1;
        }
        if (this[0x108] != (AnimalAnimationSystem)0x0) {
          return 2;
        }
        if (this[0x170] != (AnimalAnimationSystem)0x0) {
          return 3;
        }
        if (this[0x1d8] != (AnimalAnimationSystem)0x0) {
          return 4;
        }
        if (this[0x240] != (AnimalAnimationSystem)0x0) {
          return 5;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 007043ec to 007043f3 has its CatchHandler @ 0070443c */
          this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 007043f8 to 007043fb has its CatchHandler @ 0070442c */
          Logger::Logger(this_00);
          LogManager::getInstance()::singletonLogManager = this_00;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                          "AnimalAnimationSystem: Not enough animation tracks available to make a transition.\n"
                         );
      }
    }
  }
  return 0;
}


