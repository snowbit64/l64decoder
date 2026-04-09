// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFromFile
// Entry Point: 00b857b0
// Size: 264 bytes
// Signature: undefined __thiscall loadFromFile(DensityMap * this, char * param_1)


/* DensityMap::loadFromFile(char const*) */

bool __thiscall DensityMap::loadFromFile(DensityMap *this,char *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  UpdateManager *this_00;
  
  if (this[0x20] == (DensityMap)0x0) {
    if (param_1 == (char *)0x0) {
      bVar1 = ((byte)this[0xe0] & 1) != 0;
      uVar3 = (ulong)((byte)this[0xe0] >> 1);
      if (bVar1) {
        uVar3 = *(ulong *)(this + 0xe8);
      }
      if (uVar3 == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 00b85880 to 00b8588b has its CatchHandler @ 00b858b8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "DensityMap: no filename for load\n");
        return false;
      }
      param_1 = *(char **)(this + 0xf0);
      if (!bVar1) {
        param_1 = (char *)(this + 0xe1);
      }
    }
    uVar3 = doLoad(this,param_1);
    if ((((uVar3 & 1) != 0) && (this[0x20] = (DensityMap)0x1, this[0x90] != (DensityMap)0x0)) &&
       (this[0x104] == (DensityMap)0x0)) {
      this[0x104] = (DensityMap)0x1;
      this_00 = (UpdateManager *)UpdateManager::getInstance();
      UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x48),false);
    }
  }
  return this[0x20] != (DensityMap)0x0;
}


