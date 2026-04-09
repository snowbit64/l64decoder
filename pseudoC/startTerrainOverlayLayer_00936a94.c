// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startTerrainOverlayLayer
// Entry Point: 00936a94
// Size: 884 bytes
// Signature: undefined __cdecl startTerrainOverlayLayer(void * param_1, char * param_2, char * * param_3)


/* WARNING: Removing unreachable block (ram,0x00936d3c) */
/* WARNING: Type propagation algorithm not settling */
/* I3DSceneGraphFactory::startTerrainOverlayLayer(void*, char const*, char const**) */

void I3DSceneGraphFactory::startTerrainOverlayLayer(void *param_1,char *param_2,char **param_3)

{
  char *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  char *__s1;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  undefined4 local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  void *local_e0;
  ulong local_d8;
  undefined8 uStack_d0;
  void *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  void *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  void *local_98;
  ulong local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined4 local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  pcVar6 = (char *)ExpatUtil::getAttr("name",param_3);
  __s1 = (char *)ExpatUtil::getAttr("type",param_3);
  pcVar7 = (char *)ExpatUtil::getAttr("detailMapId",param_3);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)0x0;
  }
  else {
    uVar4 = atoi(pcVar7);
    pcVar7 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar4);
  }
  pcVar8 = (char *)ExpatUtil::getAttr("normalMapId",param_3);
  if (pcVar8 == (char *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    uVar4 = atoi(pcVar8);
    pcVar8 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar4);
  }
  pcVar9 = (char *)ExpatUtil::getAttr("heightMapId",param_3);
  if (pcVar9 != (char *)0x0) {
    uVar4 = atoi(pcVar9);
    pcVar9 = (char *)I3DLoad::findFilePath((I3DLoad *)param_1,uVar4);
  }
  pcVar1 = "";
  if (pcVar8 != (char *)0x0) {
    pcVar1 = pcVar8;
  }
  pcVar8 = "";
  if (pcVar9 != (char *)0x0) {
    pcVar8 = pcVar9;
  }
  pcVar10 = (char *)ExpatUtil::getAttr("unitSize",param_3);
  pcVar9 = "1";
  if (pcVar10 != (char *)0x0) {
    pcVar9 = pcVar10;
  }
  pcVar10 = (char *)ExpatUtil::getAttr("unitOffsetU",param_3);
  if (pcVar10 == (char *)0x0) {
    if ((__s1 == (char *)0x0) || (iVar5 = strcmp(__s1,"groundDetail"), iVar5 != 0)) {
      pcVar10 = "0.0";
    }
    else {
      pcVar10 = "0.5";
    }
  }
  pcVar11 = (char *)ExpatUtil::getAttr("unitOffsetV",param_3);
  if (pcVar11 == (char *)0x0) {
    if ((__s1 == (char *)0x0) || (iVar5 = strcmp(__s1,"groundDetail"), iVar5 != 0)) {
      pcVar11 = "0.0";
    }
    else {
      pcVar11 = "0.5";
    }
  }
  if (pcVar7 != (char *)0x0) {
    StringUtil::atof(pcVar9,&fStack_104);
    StringUtil::atof(pcVar10,&local_108);
    StringUtil::atof(pcVar11,&fStack_10c);
    local_110 = 0.5;
    ExpatUtil::getFloatAttr("blendContrast",&local_110,param_3);
    lVar12 = *(long *)((long)param_1 + 0x280);
    TerrainTransformGroupDesc::OverlayLayerDesc::OverlayLayerDesc
              ((OverlayLayerDesc *)&local_100,fStack_104,local_108,fStack_10c,pcVar6,__s1,pcVar7,
               pcVar1,pcVar8,local_110);
    puVar2 = *(undefined8 **)(lVar12 + 0xc0);
    if (puVar2 < *(undefined8 **)(lVar12 + 200)) {
      *(undefined4 *)(puVar2 + 1) = local_f8;
      *puVar2 = local_100;
      puVar2[4] = local_e0;
      puVar2[3] = uStack_e8;
      puVar2[2] = local_f0;
      local_f0 = 0;
      uStack_e8 = 0;
      puVar2[6] = uStack_d0;
      puVar2[5] = local_d8;
      puVar2[7] = local_c8;
      local_e0 = (void *)0x0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = (void *)0x0;
      puVar2[10] = local_b0;
      puVar2[9] = uStack_b8;
      puVar2[8] = local_c0;
      local_c0 = 0;
      uStack_b8 = 0;
      puVar2[0xd] = local_98;
      puVar2[0xc] = uStack_a0;
      puVar2[0xb] = local_a8;
      local_b0 = (void *)0x0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_98 = (void *)0x0;
      puVar2[0x10] = local_80;
      puVar2[0xf] = uStack_88;
      puVar2[0xe] = local_90;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = (void *)0x0;
      *(undefined4 *)(puVar2 + 0x11) = local_78;
      *(undefined8 **)(lVar12 + 0xc0) = puVar2 + 0x12;
    }
    else {
                    /* try { // try from 00936d44 to 00936d4b has its CatchHandler @ 00936e08 */
      std::__ndk1::
      vector<TerrainTransformGroupDesc::OverlayLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::OverlayLayerDesc>>
      ::__push_back_slow_path<TerrainTransformGroupDesc::OverlayLayerDesc>
                ((vector<TerrainTransformGroupDesc::OverlayLayerDesc,std::__ndk1::allocator<TerrainTransformGroupDesc::OverlayLayerDesc>>
                  *)(lVar12 + 0xb8),(OverlayLayerDesc *)&local_100);
      if ((local_90 & 1) != 0) {
        operator_delete(local_80);
      }
      if ((local_a8 & 1) != 0) {
        operator_delete(local_98);
      }
    }
    if ((local_c0 & 1) != 0) {
      operator_delete(local_b0);
    }
    if ((local_d8 & 1) != 0) {
      operator_delete(local_c8);
    }
    if ((local_f0 & 1) != 0) {
      operator_delete(local_e0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


