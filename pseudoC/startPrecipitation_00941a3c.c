// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startPrecipitation
// Entry Point: 00941a3c
// Size: 1416 bytes
// Signature: undefined __cdecl startPrecipitation(void * param_1, char * param_2, char * * param_3)


/* I3DShapePoolFactory::startPrecipitation(void*, char const*, char const**) */

void I3DShapePoolFactory::startPrecipitation(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  Precipitation *this;
  StreamManager *this_00;
  long *plVar8;
  long **pplVar9;
  long **pplVar10;
  long **pplVar11;
  long **pplVar12;
  uint local_bc;
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  float fStack_60;
  undefined local_5c;
  undefined local_5b;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar4 = ExpatUtil::getAttr("name",param_3);
  pcVar5 = (char *)ExpatUtil::getAttr("shapeId",param_3);
  pcVar6 = (char *)ExpatUtil::getAttr("dropMaterialId",param_3);
  if (pcVar6 == (char *)0x0) {
    lVar7 = 0;
  }
  else {
    uVar2 = atoi(pcVar6);
    lVar7 = I3DLoad::findMaterial((I3DLoad *)param_1,uVar2);
  }
  local_bc = 0;
  if (pcVar5 != (char *)0x0) {
    local_bc = 0;
    StringUtil::strtouint(pcVar5,&local_bc);
    if (((lVar4 != 0) && (lVar7 != 0)) && (local_bc != 0)) {
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = (void *)0x0;
                    /* try { // try from 00941af8 to 00941b0b has its CatchHandler @ 00942008 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_b8);
      local_68._0_5_ = 0;
      local_68._5_3_ = 0;
      fStack_60 = 0.0;
      local_5c = 0;
      local_a0 = 100;
      local_8c = 1;
      uStack_94 = 0x3f8000003f000000;
      local_9c = 0x4248000042a00000;
      uStack_80 = 0x3dcccccd3d4ccccd;
      local_88 = 0x3dcccccd3d4ccccd;
      local_5b = 1;
                    /* try { // try from 00941b40 to 00941b4b has its CatchHandler @ 00942004 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_b8);
                    /* try { // try from 00941b4c to 00941b5b has its CatchHandler @ 00942000 */
      pcVar5 = (char *)ExpatUtil::getAttr("maxNumDrops",param_3);
      if (pcVar5 != (char *)0x0) {
        local_a0 = atoi(pcVar5);
      }
                    /* try { // try from 00941b68 to 00941b8b has its CatchHandler @ 0094202c */
      pcVar5 = (char *)ExpatUtil::getAttr("boundsWidth",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)&local_9c);
      }
                    /* try { // try from 00941b8c to 00941ba7 has its CatchHandler @ 00942028 */
      pcVar6 = (char *)ExpatUtil::getAttr("boundsHeight",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar6,(float *)((long)&local_9c + 4));
      }
                    /* try { // try from 00941ba8 to 00941bc3 has its CatchHandler @ 00942024 */
      pcVar5 = (char *)ExpatUtil::getAttr("dropWidth",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)&uStack_94);
      }
                    /* try { // try from 00941bc4 to 00941bdf has its CatchHandler @ 00942020 */
      pcVar5 = (char *)ExpatUtil::getAttr("dropHeight",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)((long)&uStack_94 + 4));
      }
                    /* try { // try from 00941be0 to 00941bef has its CatchHandler @ 00941ffc */
      pcVar5 = (char *)ExpatUtil::getAttr("dropAtlasSize",param_3);
      if (pcVar5 != (char *)0x0) {
        local_8c = atoi(pcVar5);
      }
                    /* try { // try from 00941bfc to 00941c17 has its CatchHandler @ 0094201c */
      pcVar5 = (char *)ExpatUtil::getAttr("dropMinVelocity",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)&local_88);
      }
                    /* try { // try from 00941c18 to 00941c67 has its CatchHandler @ 00942034 */
      pcVar5 = (char *)ExpatUtil::getAttr("dropMaxVelocity",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)((long)&local_88 + 4));
      }
      if (local_88._4_4_ < (float)local_88) {
        local_88 = CONCAT44(local_88._4_4_,local_88._4_4_);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00941f40 to 00941f4b has its CatchHandler @ 00941fc8 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: \'dropMinVelocity\' is bigger than \'dropMaxVelocity\'.\n");
      }
                    /* try { // try from 00941c68 to 00941c83 has its CatchHandler @ 00942018 */
      pcVar5 = (char *)ExpatUtil::getAttr("dropMinMass",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)&uStack_80);
      }
                    /* try { // try from 00941c84 to 00941cd3 has its CatchHandler @ 00942030 */
      pcVar5 = (char *)ExpatUtil::getAttr("dropMaxMass",param_3);
      if (pcVar5 != (char *)0x0) {
        StringUtil::atof(pcVar5,(float *)((long)&uStack_80 + 4));
      }
      if (uStack_80._4_4_ < (float)uStack_80) {
        uStack_80 = CONCAT44(uStack_80._4_4_,uStack_80._4_4_);
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar3 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar3 != 0
           )) {
                    /* try { // try from 00941f88 to 00941f93 has its CatchHandler @ 00941fc4 */
          LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: \'dropMinMass\' is bigger than \'dropMaxMass\'.\n");
      }
                    /* try { // try from 00941cd4 to 00941d0b has its CatchHandler @ 00942038 */
      pcVar5 = (char *)ExpatUtil::getAttr("windVelocity",param_3);
      if (pcVar5 != (char *)0x0) {
        lVar4 = StringUtil::atof(pcVar5,(float *)&local_68);
        lVar4 = StringUtil::atof((char *)(lVar4 + 1),(float *)((long)&local_68 + 4));
        StringUtil::atof((char *)(lVar4 + 1),&fStack_60);
      }
                    /* try { // try from 00941d0c to 00941d1b has its CatchHandler @ 00941ff8 */
      pcVar5 = (char *)ExpatUtil::getAttr("rotateWithCameraVelocity",param_3);
      if (pcVar5 != (char *)0x0) {
        iVar3 = strcasecmp(pcVar5,"true");
        local_5c = iVar3 == 0;
      }
                    /* try { // try from 00941d38 to 00941d47 has its CatchHandler @ 00941ff4 */
      pcVar5 = (char *)ExpatUtil::getAttr("useVelocityAlignedBillboards",param_3);
      if (pcVar5 != (char *)0x0) {
        iVar3 = strcasecmp(pcVar5,"false");
        local_5b = iVar3 != 0;
      }
                    /* try { // try from 00941d64 to 00941d6b has its CatchHandler @ 0094203c */
      this = (Precipitation *)operator_new(0xf0);
                    /* try { // try from 00941d70 to 00941d77 has its CatchHandler @ 00941fe4 */
      Precipitation::Precipitation(this,(PrecipitationDesc *)&local_b8);
                    /* try { // try from 00941d78 to 00941d87 has its CatchHandler @ 0094203c */
      this_00 = (StreamManager *)StreamManager::getInstance();
      StreamManager::addStreamable
                (this_00,(Streamable *)(this + 0x58),*(STREAM_QUEUE *)((long)param_1 + 0x254));
      FUN_00f276d0(1,this + 8);
      uVar2 = local_bc;
      pplVar10 = (long **)((long)param_1 + 0xc0);
      pplVar12 = (long **)*pplVar10;
      pplVar11 = pplVar10;
      while (pplVar12 != (long **)0x0) {
        while (pplVar9 = pplVar12, pplVar11 = pplVar9, local_bc < *(uint *)(pplVar9 + 4)) {
          pplVar10 = pplVar9;
          pplVar12 = (long **)*pplVar9;
          if ((long **)*pplVar9 == (long **)0x0) {
            if (*pplVar9 != (long *)0x0) goto LAB_00941e48;
            goto LAB_00941dec;
          }
        }
        if (local_bc <= *(uint *)(pplVar9 + 4)) break;
        pplVar10 = pplVar9 + 1;
        pplVar12 = (long **)*pplVar10;
      }
      pplVar9 = pplVar10;
      if (*pplVar9 == (long *)0x0) {
LAB_00941dec:
                    /* try { // try from 00941dec to 00941df7 has its CatchHandler @ 00941fe0 */
        plVar8 = (long *)operator_new(0x30);
        *(uint *)(plVar8 + 4) = uVar2;
        plVar8[5] = (long)this;
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = (long)pplVar11;
        *pplVar9 = plVar8;
        if (**(long **)((long)param_1 + 0xb8) != 0) {
          *(long *)((long)param_1 + 0xb8) = **(long **)((long)param_1 + 0xb8);
          plVar8 = *pplVar9;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)((long)param_1 + 0xc0),(__tree_node_base *)plVar8);
        *(long *)((long)param_1 + 200) = *(long *)((long)param_1 + 200) + 1;
      }
LAB_00941e48:
      uVar2 = local_bc;
      pplVar10 = (long **)((long)param_1 + 0xf0);
      pplVar12 = (long **)*pplVar10;
      pplVar11 = pplVar10;
      while (pplVar12 != (long **)0x0) {
        while (pplVar9 = pplVar12, pplVar11 = pplVar9, local_bc < *(uint *)(pplVar9 + 4)) {
          pplVar10 = pplVar9;
          pplVar12 = (long **)*pplVar9;
          if ((long **)*pplVar9 == (long **)0x0) {
            if (*pplVar9 != (long *)0x0) goto LAB_00941ef4;
            goto LAB_00941e9c;
          }
        }
        if (local_bc <= *(uint *)(pplVar9 + 4)) break;
        pplVar10 = pplVar9 + 1;
        pplVar12 = (long **)*pplVar10;
      }
      pplVar9 = pplVar10;
      if (*pplVar9 == (long *)0x0) {
LAB_00941e9c:
                    /* try { // try from 00941e9c to 00941ea7 has its CatchHandler @ 00941fdc */
        plVar8 = (long *)operator_new(0x30);
        *(uint *)(plVar8 + 4) = uVar2;
        plVar8[5] = lVar7;
        *plVar8 = 0;
        plVar8[1] = 0;
        plVar8[2] = (long)pplVar11;
        *pplVar9 = plVar8;
        if (**(long **)((long)param_1 + 0xe8) != 0) {
          *(long *)((long)param_1 + 0xe8) = **(long **)((long)param_1 + 0xe8);
          plVar8 = *pplVar9;
        }
        std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)((long)param_1 + 0xf0),(__tree_node_base *)plVar8);
        *(long *)((long)param_1 + 0xf8) = *(long *)((long)param_1 + 0xf8) + 1;
      }
LAB_00941ef4:
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


