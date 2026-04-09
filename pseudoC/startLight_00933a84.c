// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: startLight
// Entry Point: 00933a84
// Size: 1796 bytes
// Signature: undefined __cdecl startLight(void * param_1, char * param_2, char * * param_3)


/* I3DSceneGraphFactory::startLight(void*, char const*, char const**) */

void I3DSceneGraphFactory::startLight(void *param_1,char *param_2,char **param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
  char *pcVar13;
  long lVar14;
  ulong uVar15;
  LightSource *this;
  long *plVar16;
  ulong uVar17;
  float *pfVar18;
  float fVar19;
  LIGHT_TYPE local_174;
  bool local_170 [4];
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float fStack_150;
  float local_14c;
  float local_148;
  float local_144;
  uint local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float fStack_12c;
  char **local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  float local_b4 [5];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined8 local_90;
  float local_88 [2];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  local_128 = param_3;
  pcVar12 = (char *)ExpatUtil::getAttr("name",param_3);
  if (pcVar12 == (char *)0x0) goto LAB_00934150;
  pcVar13 = (char *)ExpatUtil::getAttr("type",param_3);
  if (pcVar13 == (char *)0x0) {
    local_174 = 1;
    bVar4 = false;
LAB_00933b30:
    bVar3 = false;
  }
  else {
    iVar10 = strcasecmp(pcVar13,"directional");
    bVar3 = true;
    if (iVar10 != 0) {
      iVar10 = strcasecmp(pcVar13,"spot");
      bVar4 = iVar10 == 0;
      local_174 = 1;
      if (bVar4) {
        local_174 = 2;
      }
      goto LAB_00933b30;
    }
    bVar4 = false;
    local_174 = 0;
  }
  local_90 = NEON_fmov(0x3f800000,4);
  local_88[0] = 1.0;
  pcVar13 = (char *)ExpatUtil::getAttr("color",param_3);
  if ((pcVar13 != (char *)0x0) ||
     (pcVar13 = (char *)ExpatUtil::getAttr("diffuseColor",param_3), pcVar13 != (char *)0x0)) {
    lVar14 = StringUtil::atof(pcVar13,(float *)&local_90);
    lVar14 = StringUtil::atof((char *)(lVar14 + 1),(float *)((ulong)&local_90 | 4));
    StringUtil::atof((char *)(lVar14 + 1),local_88);
  }
  bVar2 = true;
  bVar7 = ExpatUtil::getBoolAttrRet("emitDiffuse",true,param_3);
  bVar8 = ExpatUtil::getBoolAttrRet("emitSpecular",true,param_3);
  bVar9 = ExpatUtil::getBoolAttrRet("castShadowMap",false,param_3);
  local_130 = 2.0;
  fStack_12c = 0.005;
  local_138 = 80.0;
  fStack_134 = 0.02;
  local_13c = 200.0;
  local_14c = 50.0;
  local_148 = 50.0;
  local_140 = 1;
  local_160 = 1.0;
  local_144 = 0.9;
  local_154 = 300.0;
  fStack_150 = -700.0;
  local_15c = 0.3;
  local_158 = 1.0;
  if ((bVar9 & 1) == 0) {
    bVar6 = false;
    bVar5 = false;
    uVar11 = 0x200;
  }
  else {
    pcVar13 = (char *)ExpatUtil::getAttr("depthMapBias",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&fStack_12c);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("depthMapSlopeScaleBias",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_130);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("depthMapSlopeClamp",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&fStack_134);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("depthMapResolution",param_3);
    if (pcVar13 == (char *)0x0) {
      uVar11 = 0x200;
    }
    else {
      uVar11 = atoi(pcVar13);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("shadowPerspective",param_3);
    if (pcVar13 == (char *)0x0) {
      bVar5 = false;
    }
    else {
      iVar10 = strcasecmp(pcVar13,"true");
      bVar5 = iVar10 == 0;
    }
    pcVar13 = (char *)ExpatUtil::getAttr("shadowFarDistance",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_138);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("shadowExtrusionDistance",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_13c);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssLightSize",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_148);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssLightDistance",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_14c);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssShadowNear",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&fStack_150);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssShadowFar",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_154);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssDepthBiasFactor",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_158);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssExpandCascadeFactor",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_15c);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("pcssMaxPenumbraSize",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_160);
    }
    ExpatUtil::getUIntAttr("numShadowMapSplits",&local_140,param_3);
    if (local_140 < 2) {
      bVar6 = false;
      bVar2 = true;
    }
    else {
      uVar17 = 0;
      pfVar18 = local_b4;
      do {
        pfVar18 = pfVar18 + 1;
        FUN_0093419c(&local_110);
        uVar15 = ExpatUtil::getFloatAttr((char *)&local_110,pfVar18,param_3);
        if (((uVar15 & 1) == 0) || ((uVar17 != 0 && (*pfVar18 < pfVar18[-1])))) {
          ExpatUtil::getFloatAttr("shadowMapSplitDistancesParameter",&local_144,param_3);
          bVar2 = true;
          goto LAB_00933eb4;
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < local_140 - 1);
      bVar2 = false;
LAB_00933eb4:
      iVar10 = ExpatUtil::getFloatArrayAttr
                         ("lastShadowMapSplitBboxMin",(float *)&local_c0,3,',',param_3);
      if (iVar10 == 0) {
        bVar6 = false;
      }
      else {
        iVar10 = ExpatUtil::getFloatArrayAttr
                           ("lastShadowMapSplitBboxMax",(float *)&local_d0,3,',',param_3);
        bVar6 = iVar10 != 0;
      }
    }
  }
  pcVar13 = (char *)ExpatUtil::getAttr("range",param_3);
  local_164 = 1.0;
  if (pcVar13 != (char *)0x0) {
    StringUtil::atof(pcVar13,&local_164);
  }
  local_170[0] = false;
  local_16c = 4.0;
  local_168 = 60.0;
  if (bVar4) {
    pcVar13 = (char *)ExpatUtil::getAttr("coneAngle",param_3);
    if (pcVar13 != (char *)0x0) {
      StringUtil::atof(pcVar13,&local_168);
    }
    pcVar13 = (char *)ExpatUtil::getAttr("dropOff",param_3);
    if (pcVar13 == (char *)0x0) {
      bVar4 = false;
      fVar19 = 4.0;
    }
    else {
      StringUtil::atof(pcVar13,&local_16c);
      bVar4 = false;
      fVar19 = local_16c;
    }
  }
  else {
    fVar19 = 4.0;
    if (bVar3) {
      ExpatUtil::getBoolAttr("scattering",local_170,param_3);
      bVar4 = local_170[0] != false;
    }
    else {
      bVar4 = false;
    }
  }
  this = (LightSource *)operator_new(0x248);
                    /* try { // try from 00933fe0 to 00934017 has its CatchHandler @ 00934188 */
  LightSource::LightSource
            (this,pcVar12,local_174,(Vector3 *)&local_90,(bool)(bVar7 & 1),(bool)(bVar8 & 1),
             (bool)(bVar9 & 1),fStack_12c,local_130,fStack_134,uVar11,bVar5,local_164,local_168,
             fVar19,local_138,local_13c,local_140,local_144,bVar4);
  LightSource::setPCSSLightSize(this,local_148);
  LightSource::setPCSSLightDistance(this,local_14c);
  LightSource::setPCSSDepthBiasFactor(this,local_158);
  LightSource::setPCSSMaxPenumbraSize(this,local_160);
  if (!bVar2) {
    LightSource::setShadowMapAutoSplitDistances(this,false);
    LightSource::setShadowMapSplitDistance(this,0,local_b4[1]);
    LightSource::setShadowMapSplitDistance(this,1,local_b4[2]);
    LightSource::setShadowMapSplitDistance(this,2,local_b4[3]);
    LightSource::setShadowMapSplitDistance(this,3,local_b4[4]);
    LightSource::setShadowMapSplitDistance(this,4,local_a0);
    LightSource::setShadowMapSplitDistance(this,5,local_9c);
    LightSource::setShadowMapSplitDistance(this,6,local_98);
    LightSource::setShadowMapSplitDistance(this,7,local_94);
  }
  if (bVar6) {
    local_110 = local_c0;
    local_108 = local_b8;
    local_120 = local_d0;
    local_118 = local_c8;
    LightSource::setLastShadowMapSplitFixedBbox(this,(Vector3 *)&local_110,(Vector3 *)&local_120);
  }
  readTransformGroup((I3DReader *)&local_128,(I3DLoad *)param_1,(TransformGroup *)this,false,false,
                     true,false);
  plVar16 = *(long **)(*(long *)((long)param_1 + 0x280) + 0x60);
  (**(code **)(*plVar16 + 0x18))(plVar16,this,0xffffffff);
  *(LightSource **)(*(long *)((long)param_1 + 0x280) + 0x60) = this;
LAB_00934150:
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


