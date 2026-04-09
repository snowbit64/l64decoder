// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainFoliageMultiLayer
// Entry Point: 009381d4
// Size: 696 bytes
// Signature: undefined __cdecl startTerrainFoliageMultiLayer(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startTerrainFoliageMultiLayer(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainFoliageMultiLayer(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  FoliageSystemDesc *this;
  ulong uVar6;
  ResourceManager *pRVar7;
  DensityMap *pDVar8;
  long lVar9;
  ulong local_c8;
  ulong local_c0;
  char *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  uint local_98;
  uint uStack_94;
  undefined **local_90;
  undefined4 local_88;
  uint uStack_84;
  uint local_80;
  int iStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint auStack_5c [5];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar5 = (char *)ExpatUtil::getAttr("densityMapId",param_3);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = (char *)0x0;
  }
  else {
    uVar2 = atoi(pcVar5);
    pcVar5 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar2);
  }
  if (*(long *)(*(long *)((long)param_1 + 0x280) + 600) == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00938450 to 0093845b has its CatchHandler @ 0093848c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                      "Warning: missing <FoliageSystem> tag.\n");
    this = (FoliageSystemDesc *)operator_new(0x30);
                    /* try { // try from 00938274 to 00938283 has its CatchHandler @ 009384a4 */
    FoliageSystemDesc::FoliageSystemDesc(this,8.0,0xff00ff,0);
    *(FoliageSystemDesc **)(*(long *)((long)param_1 + 0x280) + 600) = this;
  }
  if (((pcVar5 != (char *)0x0) &&
      (uVar6 = ExpatUtil::getUIntAttr("numChannels",&uStack_94,param_3), (uVar6 & 1) != 0)) &&
     (uVar6 = ExpatUtil::getUIntAttr("numTypeIndexChannels",&local_98,param_3), (uVar6 & 1) != 0)) {
    uVar2 = ExpatUtil::getUIntArrayAttr("compressionChannels",auStack_5c,5,';',param_3);
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = (char *)0x0;
    local_c8 = 0;
    local_c0 = 0;
    local_b8 = (char *)0x0;
                    /* try { // try from 009382f0 to 009382ff has its CatchHandler @ 009384a0 */
    makeDensityMapPath(pcVar5,(basic_string *)&local_b0,(basic_string *)&local_c8);
    iStack_7c = uVar2 + 1;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = &PTR__ResourceDesc_00fdba40;
    local_88 = 0;
    uStack_84 = uStack_94;
    local_80 = local_98;
    if (uVar2 != 0) {
      memcpy(&local_78,auStack_5c,(ulong)uVar2 << 2);
    }
                    /* try { // try from 00938344 to 009383cb has its CatchHandler @ 009384b0 */
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    pcVar5 = (char *)((ulong)&local_b0 | 1);
    if ((local_b0 & 1) != 0) {
      pcVar5 = local_a0;
    }
    pDVar8 = (DensityMap *)
             ResourceManager::get
                       (pRVar7,pcVar5,1,(ResourceDesc *)&local_90,
                        *(STREAM_QUEUE *)((long)param_1 + 0x254),true,true);
    if (pDVar8 == (DensityMap *)0x0) {
      uVar6 = local_c8 >> 1 & 0x7f;
      if ((local_c8 & 1) != 0) {
        uVar6 = local_c0;
      }
      if (uVar6 == 0) {
        pDVar8 = (DensityMap *)0x0;
      }
      else {
        pRVar7 = (ResourceManager *)ResourceManager::getInstance();
        pcVar5 = (char *)((ulong)&local_c8 | 1);
        if ((local_c8 & 1) != 0) {
          pcVar5 = local_b8;
        }
        pDVar8 = (DensityMap *)
                 ResourceManager::get
                           (pRVar7,pcVar5,1,(ResourceDesc *)&local_90,
                            *(STREAM_QUEUE *)((long)param_1 + 0x254),true,true);
      }
    }
    lVar9 = *(long *)((long)param_1 + 0x280);
                    /* try { // try from 009383e0 to 009383f7 has its CatchHandler @ 009384b4 */
    uVar3 = FoliageSystemDesc::createMultiLayer(*(FoliageSystemDesc **)(lVar9 + 600),pDVar8);
    *(undefined4 *)(lVar9 + 0x260) = uVar3;
    pRVar7 = (ResourceManager *)ResourceManager::getInstance();
    ResourceManager::release(pRVar7,(Resource *)pDVar8);
    if ((local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if ((local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


