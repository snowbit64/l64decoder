// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startProceduralPlacementRuleObject
// Entry Point: 0093cb3c
// Size: 1444 bytes
// Signature: undefined __cdecl startProceduralPlacementRuleObject(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startProceduralPlacementRuleObject(void*, char const*, char const**) */

void I3DSceneGraphFactory::startProceduralPlacementRuleObject
               (void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  ProceduralPlacementManager *pPVar7;
  long lVar8;
  undefined8 *puVar9;
  float local_98;
  float fStack_94;
  basic_string local_90 [4];
  void *local_80;
  basic_string local_78 [4];
  void *local_68;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_4c = 0;
  uVar4 = ExpatUtil::getUIntAttr("probability",&local_4c,param_3);
  if ((uVar4 & 1) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0)) {
                    /* try { // try from 0093cf84 to 0093cf8f has its CatchHandler @ 0093d0f0 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    pcVar5 = "Warning: Missing I3D attribute \'probability\' for procedural placement rule object\n"
    ;
    puVar9 = &LogManager::getInstance()::singletonLogManager;
  }
  else {
    pcVar5 = (char *)ExpatUtil::getAttr("childRule",param_3);
    if (pcVar5 == (char *)0x0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0))
      {
                    /* try { // try from 0093cfcc to 0093cfd7 has its CatchHandler @ 0093d0ec */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      pcVar5 = "Warning: Missing I3D attribute \'childRule\' for procedural placement rule object\n"
      ;
      puVar9 = &LogManager::getInstance()::singletonLogManager;
    }
    else {
      local_50 = 0;
      uVar4 = ExpatUtil::getUIntAttr("id",&local_50,param_3);
      if ((uVar4 & 1) == 0) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 0093d014 to 0093d01f has its CatchHandler @ 0093d0e8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        pcVar5 = "Warning: Missing I3D attribute \'id\' for procedural placement rule object\n";
        puVar9 = &LogManager::getInstance()::singletonLogManager;
      }
      else {
        local_54 = 0;
        uVar4 = ExpatUtil::getUIntAttr("childMinCount",&local_54,param_3);
        if ((uVar4 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar3 != 0)) {
                    /* try { // try from 0093d05c to 0093d067 has its CatchHandler @ 0093d0e4 */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
          pcVar5 = 
          "Warning: Missing I3D attribute \'childMinCount\' for procedural placement rule object\n";
          puVar9 = &LogManager::getInstance()::singletonLogManager;
        }
        else {
          local_58 = 0;
          uVar4 = ExpatUtil::getUIntAttr("childMaxCount",&local_58,param_3);
          if ((uVar4 & 1) == 0) {
            if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
               iVar3 != 0)) {
                    /* try { // try from 0093d0a4 to 0093d0af has its CatchHandler @ 0093d0e0 */
              LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
              __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                           &PTR_LOOP_00fd8de0);
              __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
            }
            pcVar5 = 
            "Warning: Missing I3D attribute \'childMaxCount\' for procedural placement rule object\n"
            ;
            puVar9 = &LogManager::getInstance()::singletonLogManager;
          }
          else {
            local_5c = 0;
            uVar4 = ExpatUtil::getUIntAttr("childMinRadius",&local_5c,param_3);
            if ((uVar4 & 1) == 0) {
              puVar9 = (undefined8 *)LogManager::getInstance();
              pcVar5 = 
              "Warning: Missing I3D attribute \'childMinRadius\' for procedural placement rule object\n"
              ;
            }
            else {
              local_60 = 0;
              uVar4 = ExpatUtil::getUIntAttr("childMaxRadius",&local_60,param_3);
              if ((uVar4 & 1) == 0) {
                puVar9 = (undefined8 *)LogManager::getInstance();
                pcVar5 = 
                "Warning: Missing I3D attribute \'childMaxRadius\' for procedural placement rule object\n"
                ;
              }
              else {
                pcVar6 = (char *)ExpatUtil::getAttr("objectName",param_3);
                if (pcVar6 == (char *)0x0) {
                  puVar9 = (undefined8 *)LogManager::getInstance();
                  pcVar5 = 
                  "Warning: Missing I3D attribute \'objectName\' for procedural placement rule object\n"
                  ;
                }
                else {
                  pPVar7 = (ProceduralPlacementManager *)ProceduralPlacementManager::getInstance();
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)local_78,pcVar6);
                    /* try { // try from 0093cc4c to 0093cc57 has its CatchHandler @ 0093d148 */
                  iVar3 = ProceduralPlacementManager::getObjectTypeByName(pPVar7,local_78);
                  if (((byte)local_78[0]._0_1_ & 1) != 0) {
                    operator_delete(local_68);
                  }
                  if (iVar3 != 2) {
                    if (iVar3 == 1) {
                      pPVar7 = (ProceduralPlacementManager *)
                               ProceduralPlacementManager::getInstance();
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_78,pcVar6);
                    /* try { // try from 0093cdec to 0093cdf7 has its CatchHandler @ 0093d134 */
                      lVar8 = ProceduralPlacementManager::getFoliageObjectByName(pPVar7,local_78);
                      if (((byte)local_78[0]._0_1_ & 1) != 0) {
                        operator_delete(local_68);
                      }
                      if (lVar8 == 0) goto LAB_0093cdb0;
                      pPVar7 = (ProceduralPlacementManager *)
                               ProceduralPlacementManager::getInstance();
                      uVar2 = local_50;
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_78,pcVar5);
                    /* try { // try from 0093ce28 to 0093ce33 has its CatchHandler @ 0093d118 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_90,pcVar6);
                    /* try { // try from 0093ce48 to 0093ce67 has its CatchHandler @ 0093d114 */
                      ProceduralPlacementManager::addTerrainFoliageObject
                                (pPVar7,uVar2,local_78,local_90,local_54,local_58,local_5c,local_60,
                                 (basic_string *)(lVar8 + 0x18),*(uint *)(lVar8 + 0x30),local_4c);
                    }
                    else {
                      if (iVar3 != 0) goto LAB_0093cdb0;
                      pPVar7 = (ProceduralPlacementManager *)
                               ProceduralPlacementManager::getInstance();
                      uVar2 = local_50;
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_78,pcVar5);
                    /* try { // try from 0093cc98 to 0093cca3 has its CatchHandler @ 0093d138 */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_90,pcVar6);
                    /* try { // try from 0093ccb0 to 0093ccc7 has its CatchHandler @ 0093d11c */
                      ProceduralPlacementManager::addTerrainTextureObject
                                (pPVar7,uVar2,local_78,local_90,local_54,local_58,local_5c,local_60,
                                 local_4c);
                    }
LAB_0093ce68:
                    if (((byte)local_90[0]._0_1_ & 1) != 0) {
                      operator_delete(local_80);
                    }
                    if (((byte)local_78[0]._0_1_ & 1) != 0) {
                      operator_delete(local_68);
                    }
                    goto LAB_0093cdb0;
                  }
                  local_98 = 1.0;
                  fStack_94 = 1.0;
                  uVar4 = ExpatUtil::getFloatAttr("scaleMin",&fStack_94,param_3);
                  if ((uVar4 & 1) == 0) {
                    puVar9 = (undefined8 *)LogManager::getInstance();
                    pcVar5 = 
                    "Warning: Missing I3D attribute \'scaleMin\' for procedural placement rule object\n"
                    ;
                  }
                  else {
                    uVar4 = ExpatUtil::getFloatAttr("scaleMax",&local_98,param_3);
                    if ((uVar4 & 1) != 0) {
                      pPVar7 = (ProceduralPlacementManager *)
                               ProceduralPlacementManager::getInstance();
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_78,pcVar6);
                    /* try { // try from 0093ced8 to 0093cee3 has its CatchHandler @ 0093d110 */
                      lVar8 = ProceduralPlacementManager::getReferenceObjectByName(pPVar7,local_78);
                      if (((byte)local_78[0]._0_1_ & 1) != 0) {
                        operator_delete(local_68);
                      }
                      if (lVar8 == 0) goto LAB_0093cdb0;
                      pPVar7 = (ProceduralPlacementManager *)
                               ProceduralPlacementManager::getInstance();
                      uVar2 = local_50;
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_78,pcVar5);
                    /* try { // try from 0093cf14 to 0093cf1f has its CatchHandler @ 0093d10c */
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)local_90,pcVar6);
                    /* try { // try from 0093cf34 to 0093cf4f has its CatchHandler @ 0093d108 */
                      ProceduralPlacementManager::addReferenceI3dObject
                                (pPVar7,uVar2,local_78,local_90,local_54,local_58,local_5c,local_60,
                                 (basic_string *)(lVar8 + 0x18),fStack_94,local_98,local_4c);
                      goto LAB_0093ce68;
                    }
                    puVar9 = (undefined8 *)LogManager::getInstance();
                    pcVar5 = 
                    "Warning: Missing I3D attribute \'scaleMax\' for procedural placement rule object\n"
                    ;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  LogManager::warnf((char *)puVar9,pcVar5);
LAB_0093cdb0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


