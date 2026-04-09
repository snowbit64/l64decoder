// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainLayer
// Entry Point: 00936244
// Size: 968 bytes
// Signature: undefined __cdecl startTerrainLayer(void * param_1, char * param_2, char * * param_3)


/* WARNING: Type propagation algorithm not settling */
/* I3DSceneGraphFactory::startTerrainLayer(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainLayer(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  undefined8 local_168;
  undefined4 local_160;
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  ulong local_128;
  undefined8 uStack_120;
  void *local_118;
  ulong local_110;
  undefined8 uStack_108;
  void *local_100;
  ulong local_f8;
  undefined8 uStack_f0;
  void *local_e8;
  undefined4 local_e0;
  void *local_d8;
  void *local_d0;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float afStack_b0 [16];
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  pcVar6 = (char *)ExpatUtil::getAttr("name",param_3);
  pcVar7 = (char *)ExpatUtil::getAttr("detailMap",param_3);
  pcVar1 = "UnnamedLayer";
  if (pcVar7 != (char *)0x0) {
    pcVar1 = pcVar7;
  }
  if (pcVar6 != (char *)0x0) {
    pcVar1 = pcVar6;
  }
  pcVar6 = (char *)ExpatUtil::getAttr("detailMapId",param_3);
  if (pcVar6 == (char *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    uVar5 = atoi(pcVar6);
    pcVar6 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar5);
  }
  pcVar7 = (char *)ExpatUtil::getAttr("normalMapId",param_3);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)0x0;
  }
  else {
    uVar5 = atoi(pcVar7);
    pcVar7 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar5);
  }
  pcVar8 = (char *)ExpatUtil::getAttr("heightMapId",param_3);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    uVar5 = atoi(pcVar8);
    pcVar8 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar5);
  }
  pcVar9 = (char *)ExpatUtil::getAttr("weightMapId",param_3);
  if (pcVar9 == (char *)0x0) {
    pcVar9 = (char *)0x0;
  }
  else {
    uVar5 = atoi(pcVar9);
    pcVar9 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar5);
  }
  pcVar10 = (char *)ExpatUtil::getAttr("unitSize",param_3);
  pcVar11 = (char *)ExpatUtil::getAttr("unitOffsetU",param_3);
  pcVar12 = (char *)ExpatUtil::getAttr("unitOffsetV",param_3);
  if (((pcVar9 != (char *)0x0) && (pcVar6 != (char *)0x0)) && (pcVar10 != (char *)0x0)) {
    pcVar2 = "0.0";
    if (pcVar12 != (char *)0x0) {
      pcVar2 = pcVar12;
    }
    pcVar12 = "0.0";
    if (pcVar11 != (char *)0x0) {
      pcVar12 = pcVar11;
    }
    pcVar11 = "";
    if (pcVar8 != (char *)0x0) {
      pcVar11 = pcVar8;
    }
    pcVar8 = "";
    if (pcVar7 != (char *)0x0) {
      pcVar8 = pcVar7;
    }
    StringUtil::atof(pcVar10,&fStack_b4);
    StringUtil::atof(pcVar12,&local_b8);
    StringUtil::atof(pcVar2,&fStack_bc);
    local_c0 = 0.5;
    ExpatUtil::getFloatAttr("blendContrast",&local_c0,param_3);
    uVar5 = ExpatUtil::getFloatArrayAttr("attributes",afStack_b0,0x10,' ',param_3);
    lVar13 = *(long *)((long)param_1 + 0x280);
    TerrainTransformGroupDesc::DetailLayerDesc::DetailLayerDesc
              ((DetailLayerDesc *)&local_168,fStack_b4,local_b8,fStack_bc,pcVar1,pcVar6,pcVar8,
               pcVar11,pcVar9,local_c0,afStack_b0,uVar5);
    puVar3 = *(undefined8 **)(lVar13 + 0xa8);
    if (puVar3 < *(undefined8 **)(lVar13 + 0xb0)) {
      puVar3[0x12] = 0;
      puVar3[0x13] = 0;
      puVar3[0x14] = 0;
      *(undefined4 *)(puVar3 + 1) = local_160;
      *puVar3 = local_168;
      puVar3[4] = local_148;
      puVar3[3] = uStack_150;
      puVar3[2] = local_158;
      local_158 = 0;
      uStack_150 = 0;
      puVar3[6] = uStack_138;
      puVar3[5] = local_140;
      puVar3[7] = local_130;
      local_148 = (void *)0x0;
      local_140 = 0;
      uStack_138 = 0;
      local_130 = (void *)0x0;
      puVar3[10] = local_118;
      puVar3[9] = uStack_120;
      puVar3[8] = local_128;
      local_128 = 0;
      uStack_120 = 0;
      puVar3[0xd] = local_100;
      puVar3[0xc] = uStack_108;
      puVar3[0xb] = local_110;
      local_118 = (void *)0x0;
      local_110 = 0;
      uStack_108 = 0;
      local_100 = (void *)0x0;
      puVar3[0x10] = local_e8;
      puVar3[0xf] = uStack_f0;
      puVar3[0xe] = local_f8;
      local_f8 = 0;
      uStack_f0 = 0;
      local_e8 = (void *)0x0;
      *(undefined4 *)(puVar3 + 0x11) = local_e0;
      puVar3[0x12] = local_d8;
      puVar3[0x13] = local_d0;
      local_d8 = (void *)0x0;
      local_d0 = (void *)0x0;
      puVar3[0x14] = local_c8;
      local_c8 = 0;
      *(undefined8 **)(lVar13 + 0xa8) = puVar3 + 0x15;
    }
    else {
                    /* try { // try from 00936548 to 0093654f has its CatchHandler @ 0093660c */
      std::__ndk1::
      vector<TerrainTransformGroupDesc::DetailLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::DetailLayerDesc>>
      ::__push_back_slow_path<TerrainTransformGroupDesc::DetailLayerDesc>
                ((vector<TerrainTransformGroupDesc::DetailLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::DetailLayerDesc>>
                  *)(lVar13 + 0xa0),(DetailLayerDesc *)&local_168);
      if (local_d8 != (void *)0x0) {
        local_d0 = local_d8;
        operator_delete(local_d8);
      }
    }
    if ((local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    if ((local_110 & 1) != 0) {
      operator_delete(local_100);
    }
    if ((local_128 & 1) != 0) {
      operator_delete(local_118);
    }
    if ((local_140 & 1) != 0) {
      operator_delete(local_130);
    }
    if ((local_158 & 1) != 0) {
      operator_delete(local_148);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


