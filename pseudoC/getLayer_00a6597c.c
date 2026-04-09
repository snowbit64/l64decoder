// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLayer
// Entry Point: 00a6597c
// Size: 220 bytes
// Signature: undefined __thiscall getLayer(FoliageSystemDesc * this, uint param_1, uint param_2, bool param_3)


/* FoliageSystemDesc::getLayer(unsigned int, unsigned int, bool) */

long __thiscall
FoliageSystemDesc::getLayer(FoliageSystemDesc *this,uint param_1,uint param_2,bool param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_2;
  lVar2 = getMultiLayer(this,param_1,param_3);
  if (lVar2 != 0) {
    uVar3 = (*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 4) * 0x6db6db6db6db6db7;
    if (uVar3 < uVar4 || uVar3 - uVar4 == 0) {
      if (param_3) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a65a20 to 00a65a2b has its CatchHandler @ 00a65a58 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: layer index %u is out of range.\n",uVar4);
      }
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(lVar2 + 8) + uVar4 * 0x70;
    }
  }
  return lVar2;
}


