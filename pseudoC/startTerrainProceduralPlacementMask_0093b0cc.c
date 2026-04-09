// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainProceduralPlacementMask
// Entry Point: 0093b0cc
// Size: 564 bytes
// Signature: undefined __cdecl startTerrainProceduralPlacementMask(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainProceduralPlacementMask(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainProceduralPlacementMask
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *__s;
  char *pcVar4;
  ProceduralPlacementManager *this;
  size_t sVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 local_88;
  size_t local_80;
  void *local_78;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __s = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar4 = (char *)ExpatUtil::getAttr("fileId",param_3);
  if (pcVar4 != (char *)0x0) {
    uVar2 = atoi(pcVar4);
    pcVar4 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar2);
    if ((__s != (char *)0x0) && (pcVar4 != (char *)0x0)) {
      this = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
      sVar5 = strlen(__s);
      if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        pvVar6 = (void *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar5 << 1));
        if (sVar5 != 0) goto LAB_0093b1ec;
      }
      else {
        uVar7 = sVar5 + 0x10 & 0xfffffffffffffff0;
        pvVar6 = operator_new(uVar7);
        local_70 = uVar7 | 1;
        local_68 = sVar5;
        local_60 = pvVar6;
LAB_0093b1ec:
        memcpy(pvVar6,__s,sVar5);
      }
      *(undefined *)((long)pvVar6 + sVar5) = 0;
      sVar5 = strlen(pcVar4);
      if (0xffffffffffffffef < sVar5) {
                    /* try { // try from 0093b2f4 to 0093b2fb has its CatchHandler @ 0093b348 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar5 < 0x17) {
        pvVar6 = (void *)((ulong)&local_88 | 1);
        local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar5 << 1));
        if (sVar5 != 0) goto LAB_0093b254;
      }
      else {
        uVar7 = sVar5 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093b23c to 0093b243 has its CatchHandler @ 0093b348 */
        pvVar6 = operator_new(uVar7);
        local_88 = uVar7 | 1;
        local_80 = sVar5;
        local_78 = pvVar6;
LAB_0093b254:
        memcpy(pvVar6,pcVar4,sVar5);
      }
      *(undefined *)((long)pvVar6 + sVar5) = 0;
                    /* try { // try from 0093b270 to 0093b27f has its CatchHandler @ 0093b318 */
      ProceduralPlacementManager::addMask
                (this,(basic_string *)&local_70,(basic_string *)&local_88,
                 (basic_string *)(*(long *)((long)param_1 + 0x280) + 0x208));
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      if ((local_70 & 1) != 0) {
        operator_delete(local_60);
      }
      goto LAB_0093b1a0;
    }
  }
  if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
     (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0093b2b4 to 0093b2bf has its CatchHandler @ 0093b300 */
    LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
    __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
  }
  LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                    "Warning: Missing I3D attribute \'name\', \'fileId\' for procedural placement mask\n"
                   );
LAB_0093b1a0:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


