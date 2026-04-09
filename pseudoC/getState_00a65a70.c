// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getState
// Entry Point: 00a65a70
// Size: 220 bytes
// Signature: undefined __thiscall getState(FoliageSystemDesc * this, uint param_1, uint param_2, uint param_3, bool param_4)


/* FoliageSystemDesc::getState(unsigned int, unsigned int, unsigned int, bool) */

long __thiscall
FoliageSystemDesc::getState
          (FoliageSystemDesc *this,uint param_1,uint param_2,uint param_3,bool param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_3;
  lVar2 = getLayer(this,param_1,param_2,param_4);
  if (lVar2 != 0) {
    uVar3 = (*(long *)(lVar2 + 0x60) - *(long *)(lVar2 + 0x58) >> 3) * 0x4ec4ec4ec4ec4ec5;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (param_4) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a65b14 to 00a65b1f has its CatchHandler @ 00a65b4c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: state index %u is out of range.\n",uVar4);
      }
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + 0x58) + uVar4 * 0x68;
    }
  }
  return lVar2;
}


