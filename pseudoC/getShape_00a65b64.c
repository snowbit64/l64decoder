// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShape
// Entry Point: 00a65b64
// Size: 192 bytes
// Signature: undefined __thiscall getShape(FoliageSystemDesc * this, uint param_1, uint param_2, uint param_3, uint param_4, bool param_5)


/* FoliageSystemDesc::getShape(unsigned int, unsigned int, unsigned int, unsigned int, bool) */

long __thiscall
FoliageSystemDesc::getShape
          (FoliageSystemDesc *this,uint param_1,uint param_2,uint param_3,uint param_4,bool param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_4;
  lVar2 = getState(this,param_1,param_2,param_3,param_5);
  if (lVar2 != 0) {
    if (uVar3 < (ulong)(*(long *)(lVar2 + 0x58) - *(long *)(lVar2 + 0x50) >> 5)) {
      lVar2 = *(long *)(lVar2 + 0x50) + uVar3 * 0x20;
    }
    else {
      if (param_5) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0
           )) {
                    /* try { // try from 00a65bec to 00a65bf7 has its CatchHandler @ 00a65c24 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: FoliageSystemDesc: shape index %u is out of range.\n",uVar3);
      }
      lVar2 = 0;
    }
  }
  return lVar2;
}


