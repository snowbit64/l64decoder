// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readCommonTerrainDetailLayerAttributes
// Entry Point: 00939484
// Size: 1108 bytes
// Signature: undefined __cdecl readCommonTerrainDetailLayerAttributes(I3DReader * param_1, I3DLoad * param_2, TerrainDetailTransformGroupDesc * param_3, DensityMap * param_4)


/* I3DSceneGraphFactory::readCommonTerrainDetailLayerAttributes(I3DReader&, I3DLoad*,
   TerrainDetailTransformGroupDesc&, DensityMap*) */

void I3DSceneGraphFactory::readCommonTerrainDetailLayerAttributes
               (I3DReader *param_1,I3DLoad *param_2,TerrainDetailTransformGroupDesc *param_3,
               DensityMap *param_4)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  ResourceManager *pRVar10;
  uint uVar11;
  char *pcVar12;
  ulong local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  char *local_98;
  undefined **local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_4 == (DensityMap *)0x0) &&
     (pcVar12 = (char *)ExpatUtil::getAttr("densityMapId",*(char ***)param_1),
     pcVar12 != (char *)0x0)) {
    uVar11 = StringUtil::strtouint(pcVar12);
    pcVar12 = (char *)I3DLoad::findFilePath(param_2,uVar11);
  }
  else {
    pcVar12 = (char *)0x0;
  }
  pcVar6 = (char *)ExpatUtil::getAttr("numDensityMapChannels",*(char ***)param_1);
  if (pcVar6 != (char *)0x0) {
    uVar4 = StringUtil::strtouint(pcVar6);
    *(undefined4 *)(param_3 + 0x1c) = uVar4;
  }
  if (param_4 == (DensityMap *)0x0) {
    if (pcVar12 != (char *)0x0) {
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (char *)0x0;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = (char *)0x0;
                    /* try { // try from 00939628 to 00939637 has its CatchHandler @ 009398f8 */
      makeDensityMapPath(pcVar12,(basic_string *)&local_a8,(basic_string *)&local_c0);
                    /* try { // try from 0093963c to 00939647 has its CatchHandler @ 009398f4 */
      pbVar9 = (byte *)ExpatUtil::getAttr("compressionChannels",*(char ***)param_1);
      if (pbVar9 == (byte *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (uint)*pbVar9;
        if (*pbVar9 != 0) {
                    /* try { // try from 00939654 to 009396fb has its CatchHandler @ 009398f0 */
          pcVar12 = (char *)StringUtil::strtouint((char *)pbVar9,&uStack_5c);
          do {
            cVar2 = *pcVar12;
            if (cVar2 == '\0') goto LAB_00939724;
            pcVar12 = pcVar12 + 1;
          } while (cVar2 != ';');
          if (*pcVar12 == '\0') {
LAB_00939724:
            uVar11 = 1;
          }
          else {
            pcVar12 = (char *)StringUtil::strtouint(pcVar12,&uStack_58);
            do {
              cVar2 = *pcVar12;
              if (cVar2 == '\0') goto LAB_0093972c;
              pcVar12 = pcVar12 + 1;
            } while (cVar2 != ';');
            if (*pcVar12 == '\0') {
LAB_0093972c:
              uVar11 = 2;
            }
            else {
              pcVar12 = (char *)StringUtil::strtouint(pcVar12,&uStack_54);
              do {
                cVar2 = *pcVar12;
                if (cVar2 == '\0') goto LAB_00939734;
                pcVar12 = pcVar12 + 1;
              } while (cVar2 != ';');
              if (*pcVar12 == '\0') {
LAB_00939734:
                uVar11 = 3;
              }
              else {
                pcVar12 = (char *)StringUtil::strtouint(pcVar12,&uStack_50);
                do {
                  cVar2 = *pcVar12;
                  if (cVar2 == '\0') goto LAB_0093973c;
                  pcVar12 = pcVar12 + 1;
                } while (cVar2 != ';');
                if (*pcVar12 == '\0') {
LAB_0093973c:
                  uVar11 = 4;
                }
                else {
                  pcVar12 = (char *)StringUtil::strtouint(pcVar12,&uStack_4c);
                  do {
                    cVar2 = *pcVar12;
                    pcVar12 = pcVar12 + 1;
                  } while (cVar2 != ';' && cVar2 != '\0');
                  uVar11 = 5;
                }
              }
            }
          }
        }
      }
      local_78 = 0;
      uStack_70 = 0;
      uStack_84 = *(undefined4 *)(param_3 + 0x1c);
      local_68 = 0;
      local_90 = &PTR__ResourceDesc_00fdba40;
      local_80 = (ulong)(uVar11 + 1) << 0x20;
      local_88 = 0;
      if (uVar11 != 0) {
        memcpy(&local_78,&uStack_5c,(ulong)uVar11 << 2);
      }
                    /* try { // try from 00939788 to 00939827 has its CatchHandler @ 009398fc */
      pRVar10 = (ResourceManager *)ResourceManager::getInstance();
      pcVar12 = (char *)((ulong)&local_a8 | 1);
      if ((local_a8 & 1) != 0) {
        pcVar12 = local_98;
      }
      param_4 = (DensityMap *)
                ResourceManager::get
                          (pRVar10,pcVar12,1,(ResourceDesc *)&local_90,
                           *(STREAM_QUEUE *)(param_2 + 0x254),true,true);
      if (param_4 == (DensityMap *)0x0) {
        uVar1 = local_c0 >> 1 & 0x7f;
        if ((local_c0 & 1) != 0) {
          uVar1 = local_b8;
        }
        if (uVar1 == 0) {
          param_4 = (DensityMap *)0x0;
        }
        else {
          pRVar10 = (ResourceManager *)ResourceManager::getInstance();
          pcVar12 = (char *)((ulong)&local_c0 | 1);
          if ((local_c0 & 1) != 0) {
            pcVar12 = local_b0;
          }
          param_4 = (DensityMap *)
                    ResourceManager::get
                              (pRVar10,pcVar12,1,(ResourceDesc *)&local_90,
                               *(STREAM_QUEUE *)(param_2 + 0x254),true,true);
        }
      }
      if ((local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
      if (param_4 != (DensityMap *)0x0) goto LAB_00939518;
    }
    uVar8 = 0;
  }
  else {
    FUN_00f276d0(1,param_4 + 8);
LAB_00939518:
    lVar7 = ExpatUtil::getAttr("remappingFirstChannel",*(char ***)param_1);
    if (((lVar7 != 0) ||
        (lVar7 = ExpatUtil::getAttr("remappingNumChannels",*(char ***)param_1), lVar7 != 0)) ||
       (lVar7 = ExpatUtil::getAttr("remappings",*(char ***)param_1), lVar7 != 0)) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar5 != 0))
      {
                    /* try { // try from 0093989c to 009398a7 has its CatchHandler @ 009398d8 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::warnf((char *)&LogManager::getInstance()::singletonLogManager,
                        "Warning: Unsupported I3D terrain detail feature \'remappings\'\n");
    }
    *(DensityMap **)(param_3 + 0x10) = param_4;
    pcVar12 = (char *)ExpatUtil::getAttr("densityMapTypeIndex",*(char ***)param_1);
    if (pcVar12 != (char *)0x0) {
      uVar4 = StringUtil::strtouint(pcVar12);
      *(undefined4 *)(param_3 + 0x20) = uVar4;
    }
    pcVar12 = (char *)ExpatUtil::getAttr("densityMapChannelOffset",*(char ***)param_1);
    if (pcVar12 != (char *)0x0) {
      uVar4 = StringUtil::strtouint(pcVar12);
      *(undefined4 *)(param_3 + 0x18) = uVar4;
    }
    pcVar12 = (char *)ExpatUtil::getAttr("decalLayer",*(char ***)param_1);
    if (pcVar12 != (char *)0x0) {
      uVar4 = StringUtil::strtouint(pcVar12);
      *(undefined4 *)(param_3 + 8) = uVar4;
    }
    pcVar12 = (char *)ExpatUtil::getAttr("cellSize",*(char ***)param_1);
    if (pcVar12 != (char *)0x0) {
      StringUtil::atof(pcVar12,(float *)param_3);
    }
    pcVar12 = (char *)ExpatUtil::getAttr("objectMask",*(char ***)param_1);
    if (pcVar12 == (char *)0x0) {
      uVar8 = 1;
    }
    else {
      uVar4 = StringUtil::strtouint(pcVar12);
      uVar8 = 1;
      *(undefined4 *)(param_3 + 4) = uVar4;
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


