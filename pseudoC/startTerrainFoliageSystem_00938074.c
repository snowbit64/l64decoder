// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainFoliageSystem
// Entry Point: 00938074
// Size: 308 bytes
// Signature: undefined __cdecl startTerrainFoliageSystem(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainFoliageSystem(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainFoliageSystem(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  FoliageSystemDesc *this;
  uint local_44;
  uint uStack_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = 8.0;
  local_44 = 0;
  uStack_40 = 0xff00ff;
  ExpatUtil::getFloatAttr("cellSize",&local_3c,param_3);
  ExpatUtil::getUIntAttr("objectMask",&uStack_40,param_3);
  ExpatUtil::getUIntAttr("decalLayer",&local_44,param_3);
  if (*(long *)(*(long *)((long)param_1 + 0x280) + 600) == 0) {
    this = (FoliageSystemDesc *)operator_new(0x30);
                    /* try { // try from 0093812c to 0093812f has its CatchHandler @ 009381c0 */
    FoliageSystemDesc::FoliageSystemDesc(this,local_3c,uStack_40,local_44);
    *(FoliageSystemDesc **)(*(long *)((long)param_1 + 0x280) + 600) = this;
  }
  else {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093816c to 00938177 has its CatchHandler @ 009381a8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: A foliage system already exists for the current terrain; they will be merged.\n"
                     );
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


