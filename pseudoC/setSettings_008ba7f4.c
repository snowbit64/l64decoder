// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setSettings
// Entry Point: 008ba7f4
// Size: 512 bytes
// Signature: undefined __thiscall setSettings(SteadyLoopSoundGenerator * this, SteadyLoopRuntimeSettings * param_1)


/* SteadyLoopSoundGenerator::setSettings(SteadyLoopRuntimeSettings const*) */

byte __thiscall
SteadyLoopSoundGenerator::setSettings
          (SteadyLoopSoundGenerator *this,SteadyLoopRuntimeSettings *param_1)

{
  byte *pbVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  Logger *this_00;
  byte *pbVar6;
  long **this_01;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  stb_vorbis *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_01 = (long **)(this + 0x50);
  plVar7 = *this_01;
  *(undefined8 *)(this + 8) = 0;
  plVar11 = *(long **)(this + 0x58);
  uVar9 = (*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * 0x38e38e39;
  if (plVar7 != plVar11) {
    do {
      if (*plVar7 != 0) {
        stb_vorbis_close();
        *plVar7 = 0;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar11);
    plVar7 = *this_01;
  }
  *(long **)(this + 0x58) = plVar7;
  local_70 = (stb_vorbis *)0x0;
  if ((uVar9 & 0xffffffff) != 0) {
    std::__ndk1::vector<stb_vorbis*,std::__ndk1::allocator<stb_vorbis*>>::__append
              ((vector<stb_vorbis*,std::__ndk1::allocator<stb_vorbis*>> *)this_01,uVar9 & 0xffffffff
               ,&local_70);
  }
  if ((int)uVar9 == 0) {
    bVar3 = false;
  }
  else {
    lVar8 = 0;
    uVar12 = 1;
    bVar3 = true;
    do {
      lVar10 = *(long *)param_1;
      lVar5 = lVar10 + lVar8;
      if (*(int *)(lVar5 + 0x40) != 0 && *(int *)(lVar5 + 0x38) == 1) {
        lVar5 = stb_vorbis_open_memory
                          (*(undefined8 *)(lVar5 + 0x28),*(undefined4 *)(lVar5 + 0x3c),0,0);
        if (lVar5 == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar4 != 0)) {
                    /* try { // try from 008ba9b0 to 008ba9b7 has its CatchHandler @ 008baa04 */
            this_00 = (Logger *)operator_new(0x38);
                    /* try { // try from 008ba9bc to 008ba9bf has its CatchHandler @ 008ba9f4 */
            Logger::Logger(this_00);
            LogManager::getInstance()::singletonLogManager = this_00;
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pbVar1 = (byte *)(lVar10 + lVar8);
          pbVar6 = *(byte **)(pbVar1 + 0x10);
          if ((*pbVar1 & 1) == 0) {
            pbVar6 = pbVar1 + 1;
          }
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Ogg Vorbis decoder failed to initialize (is the ogg data broken?) \'%s\'"
                             ,pbVar6);
          goto LAB_008ba968;
        }
        stb_vorbis_close();
      }
      bVar3 = uVar12 < (uVar9 & 0xffffffff);
      lVar8 = lVar8 + 0x48;
      uVar12 = uVar12 + 1;
    } while (((uVar9 & 0xffffffff) + (uVar9 & 0xffffffff) * 8) * 8 - lVar8 != 0);
  }
  *(SteadyLoopRuntimeSettings **)(this + 8) = param_1;
  (**(code **)(*(long *)this + 0x48))(this);
LAB_008ba968:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return bVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


