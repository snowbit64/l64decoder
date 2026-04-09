// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startIndexedTriangleSubset
// Entry Point: 009020b8
// Size: 776 bytes
// Signature: undefined __cdecl startIndexedTriangleSubset(void * param_1, char * param_2, char * * param_3)


/* I3DIndexedMeshSetFactory::startIndexedTriangleSubset(void*, char const*, char const**) */

void I3DIndexedMeshSetFactory::startIndexedTriangleSubset
               (void *param_1,char *param_2,char **param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 extraout_x1;
  byte *pbVar10;
  byte *pbVar11;
  undefined4 uVar12;
  undefined auVar13 [16];
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  char *pcVar9;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar11 = *(byte **)((long)param_1 + 0x278);
  lVar5 = *(long *)(pbVar11 + 8);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(pbVar11 + 0x48);
    uVar3 = IndexedTriangleSet::getNumSubsets();
    if (uVar1 < uVar3) {
      uVar6 = ExpatUtil::getUIntAttr("firstVertex",&uStack_4c,param_3);
      if (((((uVar6 & 1) != 0) &&
           (uVar6 = ExpatUtil::getUIntAttr("numVertices",&local_50,param_3), (uVar6 & 1) != 0)) &&
          (uVar6 = ExpatUtil::getUIntAttr("firstIndex",&uStack_54,param_3), (uVar6 & 1) != 0)) &&
         (uVar6 = ExpatUtil::getUIntAttr("numIndices",&local_58,param_3), (uVar6 & 1) != 0)) {
        local_48 = 0;
        uStack_40 = 0;
        if (((*pbVar11 >> 1 & 1) != 0) &&
           (uVar6 = ExpatUtil::getFloatAttr("uvDensity0",(float *)&local_48,param_3),
           (uVar6 & 1) == 0)) {
          uVar12 = IndexedTriangleSet::computeUvDensity
                             (*(IndexedTriangleSet **)(pbVar11 + 8),0,uStack_54,local_58);
          local_48 = CONCAT44(local_48._4_4_,uVar12);
        }
        if (((*pbVar11 >> 2 & 1) != 0) &&
           (uVar6 = ExpatUtil::getFloatAttr("uvDensity1",(float *)((ulong)&local_48 | 4),param_3),
           (uVar6 & 1) == 0)) {
          uVar12 = IndexedTriangleSet::computeUvDensity
                             (*(IndexedTriangleSet **)(pbVar11 + 8),1,uStack_54,local_58);
          local_48 = CONCAT44(uVar12,(undefined4)local_48);
        }
        if (((*pbVar11 >> 3 & 1) != 0) &&
           (uVar6 = ExpatUtil::getFloatAttr("uvDensity2",(float *)&uStack_40,param_3),
           (uVar6 & 1) == 0)) {
          uVar12 = IndexedTriangleSet::computeUvDensity
                             (*(IndexedTriangleSet **)(pbVar11 + 8),2,uStack_54,local_58);
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar12);
        }
        if (((*pbVar11 >> 4 & 1) != 0) &&
           (uVar6 = ExpatUtil::getFloatAttr("uvDensity3",(float *)((long)&uStack_40 + 4),param_3),
           (uVar6 & 1) == 0)) {
          uVar12 = IndexedTriangleSet::computeUvDensity
                             (*(IndexedTriangleSet **)(pbVar11 + 8),3,uStack_54,local_58);
          uStack_40 = CONCAT44(uVar12,(undefined4)uStack_40);
        }
        puVar7 = (uint *)operator_new(0x20);
        *puVar7 = uStack_4c;
        puVar7[1] = local_50;
        *(undefined8 *)(puVar7 + 6) = uStack_40;
        *(undefined8 *)(puVar7 + 4) = local_48;
        puVar7[2] = uStack_54;
        puVar7[3] = local_58;
        auVar13 = IndexedTriangleSet::setSubset
                            (*(IndexedTriangleSet **)(pbVar11 + 8),(IndexedTriangleSubset *)puVar7,
                             *(uint *)(pbVar11 + 0x48));
        param_2 = auVar13._8_8_;
        lVar5 = auVar13._0_8_;
        *(int *)(pbVar11 + 0x48) = *(int *)(pbVar11 + 0x48) + 1;
        goto LAB_00902308;
      }
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 00902384 to 0090238f has its CatchHandler @ 009023c0 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar1 = *(uint *)(pbVar11 + 0x7c);
      pbVar10 = pbVar11 + 0x51;
      if ((pbVar11[0x50] & 1) != 0) {
        pbVar10 = *(byte **)(pbVar11 + 0x60);
      }
      pcVar9 = "Error: Missing attribute in subset in triangle set \'%s\' (%u).\n";
    }
    else {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0))
      {
                    /* try { // try from 0090233c to 00902347 has its CatchHandler @ 009023c4 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      uVar1 = *(uint *)(pbVar11 + 0x7c);
      pbVar10 = pbVar11 + 0x51;
      if ((pbVar11[0x50] & 1) != 0) {
        pbVar10 = *(byte **)(pbVar11 + 0x60);
      }
      pcVar9 = "Error: Too many subsets in triangle set \'%s\' (%u).\n";
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,pcVar9,pbVar10,
                       (ulong)uVar1);
    plVar8 = *(long **)(pbVar11 + 8);
    auVar13._8_8_ = extraout_x1;
    auVar13._0_8_ = plVar8;
    if (plVar8 != (long *)0x0) {
      auVar13 = (**(code **)(*plVar8 + 8))();
    }
    param_2 = auVar13._8_8_;
    lVar5 = auVar13._0_8_;
    *(undefined8 *)(pbVar11 + 8) = 0;
  }
LAB_00902308:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar5,param_2);
}


