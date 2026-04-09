// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getLod
// Entry Point: 00a65c3c
// Size: 192 bytes
// Signature: undefined __thiscall getLod(FoliageSystemDesc * this, uint param_1, uint param_2, uint param_3, uint param_4, uint param_5, bool param_6)


/* FoliageSystemDesc::getLod(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int,
   bool) */

long __thiscall
FoliageSystemDesc::getLod
          (FoliageSystemDesc *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
          bool param_6)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_5;
  lVar2 = getShape(this,param_1,param_2,param_3,param_4,param_6);
  if (lVar2 != 0) {
    if (uVar3 < (ulong)(*(long *)(lVar2 + 0x10) - *(long *)(lVar2 + 8) >> 6)) {
      lVar2 = *(long *)(lVar2 + 8) + uVar3 * 0x40;
    }
    else {
      if (param_6) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a65cc4 to 00a65ccf has its CatchHandler @ 00a65cfc */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: LOD index %u is out of range.\n",uVar3);
      }
      lVar2 = 0;
    }
  }
  return lVar2;
}


