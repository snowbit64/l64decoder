// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProceduralPlacementObject
// Entry Point: 0093c3c4
// Size: 1768 bytes
// Signature: undefined __cdecl startProceduralPlacementObject(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startProceduralPlacementObject(void*, char const*, char const**) */

void I3DSceneGraphFactory::startProceduralPlacementObject
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  char *__s;
  ProceduralPlacementManager *pPVar6;
  size_t sVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 local_a8;
  size_t local_a0;
  void *local_98;
  uint local_8c;
  undefined8 local_88;
  size_t local_80;
  void *local_78;
  undefined8 local_70;
  size_t local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pcVar4 = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar5 = (char *)ExpatUtil::getAttr("type",param_3);
  __s = (char *)ExpatUtil::getAttr("ppType",param_3);
  if (((pcVar4 == (char *)0x0) || (pcVar5 == (char *)0x0)) || (__s == (char *)0x0)) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0)) {
                    /* try { // try from 0093c968 to 0093c973 has its CatchHandler @ 0093cab8 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar4 = 
    "Warning: Missing I3D attribute \'name\', \'type\' or \'ppType\' for procedural placement object\n"
    ;
    goto LAB_0093c4f8;
  }
  iVar2 = strcmp(pcVar5,"terrainTexture");
  if (iVar2 == 0) {
    pPVar6 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
    sVar7 = strlen(pcVar4);
    if (0xffffffffffffffef < sVar7) {
LAB_0093c9a0:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar9 = (void *)((ulong)&local_70 | 1);
      local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_0093c5f8;
    }
    else {
      uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar9 = operator_new(uVar8);
      local_70 = uVar8 | 1;
      local_68 = sVar7;
      local_60 = pvVar9;
LAB_0093c5f8:
      memcpy(pvVar9,pcVar4,sVar7);
    }
    *(undefined *)((long)pvVar9 + sVar7) = 0;
    sVar7 = strlen(__s);
    if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0093c9a8 to 0093c9af has its CatchHandler @ 0093cb20 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (sVar7 < 0x17) {
      pvVar9 = (void *)((ulong)&local_88 | 1);
      local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar7 << 1));
      if (sVar7 != 0) goto LAB_0093c660;
    }
    else {
      uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093c648 to 0093c64f has its CatchHandler @ 0093cb20 */
      pvVar9 = operator_new(uVar8);
      local_88 = uVar8 | 1;
      local_80 = sVar7;
      local_78 = pvVar9;
LAB_0093c660:
      memcpy(pvVar9,__s,sVar7);
    }
    *(undefined *)((long)pvVar9 + sVar7) = 0;
                    /* try { // try from 0093c674 to 0093c683 has its CatchHandler @ 0093cb08 */
    ProceduralPlacementManager::addObjectTexture
              (pPVar6,(basic_string *)&local_70,(basic_string *)&local_88);
  }
  else {
    iVar2 = strcmp(pcVar5,"terrainFoliage");
    if (iVar2 == 0) {
      pcVar5 = (char *)ExpatUtil::getAttr("foliageTypeName",param_3);
      if (pcVar5 == (char *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 0093c9d0 to 0093c9db has its CatchHandler @ 0093cab4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar4 = 
        "Warning: Missing I3D attribute \'foliageTypeName\' for procedural placement object\n";
LAB_0093c4f8:
        LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,pcVar4);
        goto LAB_0093c500;
      }
      local_8c = 0;
      uVar8 = ExpatUtil::getUIntAttr("channels",&local_8c,param_3);
      if ((uVar8 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 0093ca18 to 0093ca23 has its CatchHandler @ 0093cab0 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar4 = "Warning: Missing I3D attribute \'channels\' for procedural placement object\n";
        goto LAB_0093c4f8;
      }
      pPVar6 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
      sVar7 = strlen(pcVar4);
      if (0xffffffffffffffef < sVar7) goto LAB_0093c9a0;
      if (sVar7 < 0x17) {
        pvVar9 = (void *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0093c844;
      }
      else {
        uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar8);
        local_70 = uVar8 | 1;
        local_68 = sVar7;
        local_60 = pvVar9;
LAB_0093c844:
        memcpy(pvVar9,pcVar4,sVar7);
      }
      *(undefined *)((long)pvVar9 + sVar7) = 0;
      sVar7 = strlen(pcVar5);
      if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0093ca50 to 0093ca57 has its CatchHandler @ 0093caf0 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar7 < 0x17) {
        pvVar9 = (void *)((ulong)&local_88 | 1);
        local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0093c8ac;
      }
      else {
        uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093c894 to 0093c89b has its CatchHandler @ 0093caf0 */
        pvVar9 = operator_new(uVar8);
        local_88 = uVar8 | 1;
        local_80 = sVar7;
        local_78 = pvVar9;
LAB_0093c8ac:
        memcpy(pvVar9,pcVar5,sVar7);
      }
      uVar3 = local_8c;
      *(undefined *)((long)pvVar9 + sVar7) = 0;
      sVar7 = strlen(__s);
      if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0093ca58 to 0093ca5f has its CatchHandler @ 0093caec */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar7 < 0x17) {
        pvVar9 = (void *)((ulong)&local_a8 | 1);
        local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0093c918;
      }
      else {
        uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093c900 to 0093c907 has its CatchHandler @ 0093caec */
        pvVar9 = operator_new(uVar8);
        local_a8 = uVar8 | 1;
        local_a0 = sVar7;
        local_98 = pvVar9;
LAB_0093c918:
        memcpy(pvVar9,__s,sVar7);
      }
      *(undefined *)((long)pvVar9 + sVar7) = 0;
                    /* try { // try from 0093c92c to 0093c943 has its CatchHandler @ 0093cad0 */
      ProceduralPlacementManager::addObjectFoliage
                (pPVar6,(basic_string *)&local_70,(basic_string *)&local_88,uVar3,
                 (basic_string *)&local_a8);
    }
    else {
      iVar2 = strcmp(pcVar5,"reference");
      if (iVar2 != 0) goto LAB_0093c500;
      pcVar5 = (char *)ExpatUtil::getAttr("fileId",param_3);
      if (pcVar5 == (char *)0x0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0
           )) {
                    /* try { // try from 0093ca70 to 0093ca7b has its CatchHandler @ 0093caac */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar4 = "Warning: Missing I3D attribute \'fileId\' for procedural placement object\n";
        goto LAB_0093c4f8;
      }
      uVar3 = atoi(pcVar5);
      pcVar5 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar3);
      pPVar6 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
      sVar7 = strlen(pcVar4);
      if (0xffffffffffffffef < sVar7) goto LAB_0093c9a0;
      if (sVar7 < 0x17) {
        pvVar9 = (void *)((ulong)&local_70 | 1);
        local_70 = CONCAT71(local_70._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0093c728;
      }
      else {
        uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
        pvVar9 = operator_new(uVar8);
        local_70 = uVar8 | 1;
        local_68 = sVar7;
        local_60 = pvVar9;
LAB_0093c728:
        memcpy(pvVar9,pcVar4,sVar7);
      }
      *(undefined *)((long)pvVar9 + sVar7) = 0;
      sVar7 = strlen(pcVar5);
      if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0093c9b0 to 0093c9b7 has its CatchHandler @ 0093cb04 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar7 < 0x17) {
        pvVar9 = (void *)((ulong)&local_88 | 1);
        local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0093c790;
      }
      else {
        uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093c778 to 0093c77f has its CatchHandler @ 0093cb04 */
        pvVar9 = operator_new(uVar8);
        local_88 = uVar8 | 1;
        local_80 = sVar7;
        local_78 = pvVar9;
LAB_0093c790:
        memcpy(pvVar9,pcVar5,sVar7);
      }
      *(undefined *)((long)pvVar9 + sVar7) = 0;
      sVar7 = strlen(__s);
      if (0xffffffffffffffef < sVar7) {
                    /* try { // try from 0093c9b8 to 0093c9bf has its CatchHandler @ 0093caf4 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar7 < 0x17) {
        pvVar9 = (void *)((ulong)&local_a8 | 1);
        local_a8 = CONCAT71(local_a8._1_7_,(char)((int)sVar7 << 1));
        if (sVar7 != 0) goto LAB_0093c7f8;
      }
      else {
        uVar8 = sVar7 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 0093c7e0 to 0093c7e7 has its CatchHandler @ 0093caf4 */
        pvVar9 = operator_new(uVar8);
        local_a8 = uVar8 | 1;
        local_a0 = sVar7;
        local_98 = pvVar9;
LAB_0093c7f8:
        memcpy(pvVar9,__s,sVar7);
      }
      *(undefined *)((long)pvVar9 + sVar7) = 0;
                    /* try { // try from 0093c80c to 0093c81f has its CatchHandler @ 0093cad4 */
      ProceduralPlacementManager::addObjectReference
                (pPVar6,(basic_string *)&local_70,(basic_string *)&local_88,
                 (basic_string *)&local_a8);
    }
    if ((local_a8 & 1) != 0) {
      operator_delete(local_98);
    }
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0093c500:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


