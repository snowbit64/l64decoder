// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainFoliageType
// Entry Point: 009387b8
// Size: 404 bytes
// Signature: undefined __cdecl startTerrainFoliageType(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainFoliageType(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainFoliageType(void *param_1,char *param_2,char **param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  FoliageSystemDesc *this;
  ulong uVar6;
  long lVar7;
  
  lVar7 = *(long *)((long)param_1 + 0x280);
  pcVar4 = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar5 = (char *)ExpatUtil::getAttr("foliageXmlId",param_3);
  if (pcVar5 == (char *)0x0) {
    bVar1 = pcVar4 != (char *)0x0;
  }
  else {
    uVar2 = atoi(pcVar5);
    pcVar5 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar2);
    bVar1 = pcVar4 != (char *)0x0;
    if ((pcVar4 != (char *)0x0) && (pcVar5 != (char *)0x0)) {
      this = *(FoliageSystemDesc **)(lVar7 + 600);
      if ((this != (FoliageSystemDesc *)0x0) &&
         (uVar2 = *(uint *)(lVar7 + 0x260), uVar2 != 0xffffffff)) {
        uVar6 = FoliageSystemDesc::loadFruitTypeFromXml(this,uVar2,pcVar4,pcVar5);
        if ((uVar6 & 1) != 0) {
          return;
        }
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00938914 to 0093891f has its CatchHandler @ 0093894c */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar5 = "Error: Failed to load foliage type \'%s\'.\n";
        goto LAB_009388a8;
      }
      bVar1 = true;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 009388cc to 009388d7 has its CatchHandler @ 00938950 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  if (!bVar1) {
    pcVar4 = "Unknown";
  }
  pcVar5 = "Error: Failed to load terrain foliage layer \'%s\'.\n";
LAB_009388a8:
  LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar5,pcVar4);
  return;
}


