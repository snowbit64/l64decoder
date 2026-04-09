// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initDesktopProfile
// Entry Point: 00755790
// Size: 3588 bytes
// Signature: undefined __thiscall initDesktopProfile(HardwareScalability * this, PERFORMANCE_CLASS param_1, IRenderDevice * param_2)


/* HardwareScalability::initDesktopProfile(HardwareScalability::PERFORMANCE_CLASS, IRenderDevice*)
    */

void __thiscall
HardwareScalability::initDesktopProfile
          (HardwareScalability *this,PERFORMANCE_CLASS param_1,IRenderDevice *param_2)

{
  HardwareScalability *pHVar1;
  HardwareSettings *pHVar2;
  HardwareScalability *pHVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  PERFORMANCE_CLASS PVar11;
  undefined4 uVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined auVar16 [16];
  char acStack_d8 [128];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if ((int)param_1 < 4) {
    *(PERFORMANCE_CLASS *)(this + 0x18) = param_1;
    *(undefined2 *)(this + 0x10) = 1;
    initAndroidProfile(this,param_1);
  }
  else {
    pHVar1 = this + 0xe9;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,param_1,"%s.graphic.scalability.performanceClass",pHVar3);
    pcVar9 = (char *)(**(code **)(**(long **)(this + 0x100) + 0x10))
                               (*(long **)(this + 0x100),acStack_d8,0);
    if ((pcVar9 == (char *)0x0) || (iVar6 = strcasecmp(pcVar9,"auto"), iVar6 == 0)) {
      this[0x11] = (HardwareScalability)0x0;
      *(PERFORMANCE_CLASS *)(this + 0x18) = *(PERFORMANCE_CLASS *)(this + 0x14);
      initAndroidProfile(this,*(PERFORMANCE_CLASS *)(this + 0x14));
      this[0x11] = (HardwareScalability)0x1;
    }
    else {
      uVar10 = StringUtil::iStartsWith(pcVar9,"mobile_");
      if ((uVar10 & 1) == 0) {
        iVar6 = strcasecmp(pcVar9,s_performanceClassNames);
        if (iVar6 == 0) {
          PVar11 = 0;
        }
        else {
          iVar6 = strcasecmp(pcVar9,PTR_s_Medium_0103ee28);
          if (iVar6 == 0) {
            PVar11 = 1;
          }
          else {
            iVar6 = strcasecmp(pcVar9,PTR_DAT_0103ee30);
            if (iVar6 == 0) {
              PVar11 = 2;
            }
            else {
              iVar6 = strcasecmp(pcVar9,PTR_s_Very_High_0103ee38);
              PVar11 = 3;
              if (iVar6 != 0) {
                PVar11 = 1;
              }
            }
          }
        }
        this[0x11] = (HardwareScalability)0x0;
        *(PERFORMANCE_CLASS *)(this + 0x18) = PVar11;
        initAndroidProfile(this,PVar11);
      }
      else {
        this[0x11] = (HardwareScalability)0x0;
        *(undefined4 *)(this + 0x18) = 0;
        initAndroidProfile(this,0);
        this[0x11] = (HardwareScalability)0x0;
        *(undefined4 *)this = 0;
        this[4] = (HardwareScalability)0x0;
        iVar6 = strcasecmp(pcVar9,"mobile_low");
        if (iVar6 == 0) {
          *(undefined8 *)(this + 200) = 0x40000000;
          *(undefined8 *)(this + 0xc0) = 0;
          *(undefined8 *)(this + 0xd8) = 0;
          *(undefined8 *)(this + 0xd0) = 0x3f800000459c4000;
          *(undefined8 *)(this + 0xe0) = 0;
          *(undefined8 *)(this + 0x88) = 0;
          *(undefined8 *)(this + 0x80) = 0x500000002;
          *(undefined8 *)(this + 0x98) = 0x203f800000;
          *(undefined8 *)(this + 0x90) = 0x300000004;
          *(undefined8 *)(this + 0xa8) = 0;
          *(undefined8 *)(this + 0xa0) = 0x2000000001;
          *(undefined8 *)(this + 0xb8) = 0x3f00000000000001;
          *(undefined8 *)(this + 0xb0) = 0x10100;
          *(undefined8 *)(this + 0x48) = 0;
          *(undefined8 *)(this + 0x40) = 0x3f0000003fc00000;
          *(undefined8 *)(this + 0x58) = 0x100000004;
          *(undefined8 *)(this + 0x50) = 0x80000000000;
          uVar12 = 0x3f400000;
          *(undefined8 *)(this + 0x68) = 0;
          *(undefined8 *)(this + 0x60) = 0x100000000;
          *(undefined8 *)(this + 0x78) = 0x100000000;
          *(undefined8 *)(this + 0x70) = 3;
          *(undefined8 *)(this + 0x28) = 0x3f4000003f400000;
          *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
          *(undefined8 *)(this + 0x38) = 0x3f800000;
          *(undefined8 *)(this + 0x30) = 0x3f4000003f400000;
        }
        else {
          iVar6 = strcasecmp(pcVar9,"mobile_medium");
          if (iVar6 == 0) {
            *(undefined8 *)(this + 0x48) = 0x3f4ccccd;
            *(undefined8 *)(this + 0x40) = 0x3f0000003fc00000;
            *(undefined8 *)(this + 0x58) = 0x100000004;
            *(undefined8 *)(this + 0x50) = 0x80000000000;
            *(undefined8 *)(this + 0x28) = 0x3f4000003f400000;
            *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
            *(undefined8 *)(this + 0x38) = 0x3f800000;
            *(undefined8 *)(this + 0x30) = 0x3f6666663f400000;
            *(undefined8 *)(this + 0x88) = 0;
            *(undefined8 *)(this + 0x80) = 0x500000002;
            *(undefined8 *)(this + 0x98) = 0x203f800000;
            *(undefined8 *)(this + 0x90) = 0x200000004;
            *(undefined8 *)(this + 0xe0) = 0;
            *(undefined8 *)(this + 0x68) = 0;
            *(undefined8 *)(this + 0x60) = 0x100000000;
            *(undefined8 *)(this + 0x78) = 0x100000001;
            *(undefined8 *)(this + 0x70) = 3;
            uVar12 = 0x3f666666;
            *(undefined8 *)(this + 0xa8) = 0;
            *(undefined8 *)(this + 0xa0) = 0x2000000001;
            *(undefined8 *)(this + 0xb8) = 0x3f00000000000001;
            *(undefined8 *)(this + 0xb0) = 0x10100;
            *(undefined8 *)(this + 200) = 0x80000000;
            *(undefined8 *)(this + 0xc0) = 0;
            *(undefined8 *)(this + 0xd8) = 0;
            *(undefined8 *)(this + 0xd0) = 0x3f800000459c4000;
          }
          else {
            iVar6 = strcasecmp(pcVar9,"mobile_high");
            if (iVar6 == 0) {
              *(undefined8 *)(this + 0x28) = 0x3f8000003f800000;
              *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
              *(undefined8 *)(this + 0x38) = 0x3f800000;
              *(undefined8 *)(this + 0x30) = 0x3f8000003f800000;
              *(undefined8 *)(this + 0x48) = 0x13f800000;
              *(undefined8 *)(this + 0x40) = 0x3f0000003fc00000;
              *(undefined8 *)(this + 0x58) = 0x100000004;
              *(undefined8 *)(this + 0x50) = 0x80000000000;
              *(undefined8 *)(this + 0x68) = 1;
              *(undefined8 *)(this + 0x60) = 0x100000000;
              *(undefined8 *)(this + 0x78) = 0x100000001;
              *(undefined8 *)(this + 0x70) = 3;
              *(undefined8 *)(this + 0x88) = 0;
              *(undefined8 *)(this + 0x80) = 0x500000002;
              *(undefined8 *)(this + 0x98) = 0x203f800000;
              *(undefined8 *)(this + 0x90) = 0x100000004;
              *(undefined8 *)(this + 0xa8) = 0x300000000;
              *(undefined8 *)(this + 0xa0) = 0x2000000001;
              *(undefined8 *)(this + 0xb8) = 0x3f00000000000001;
              *(undefined8 *)(this + 0xb0) = 0x10100;
              *(undefined8 *)(this + 0xe0) = 0;
              *(undefined8 *)(this + 200) = 0xc0000000;
              *(undefined8 *)(this + 0xc0) = 0;
              *(undefined8 *)(this + 0xd8) = 0;
              *(undefined8 *)(this + 0xd0) = 0x3f800000459c4000;
              uVar12 = 0x3f800000;
            }
            else {
              iVar6 = strcasecmp(pcVar9,"mobile_very_high");
              *(undefined8 *)(this + 0x28) = 0x3f8000003f800000;
              *(undefined8 *)(this + 0x20) = 0x3f8000003f800000;
              *(undefined8 *)(this + 0x38) = 0x13f8ccccd;
              *(undefined8 *)(this + 0x30) = 0x3f8ccccd3f800000;
              *(undefined8 *)(this + 0xe0) = 0;
              *(undefined8 *)(this + 0x68) = 0x200000001;
              *(undefined8 *)(this + 0x60) = 0x100000001;
              *(undefined8 *)(this + 0x78) = 0x100000001;
              *(undefined8 *)(this + 0x70) = 3;
              *(undefined8 *)(this + 0x48) = 0x13f800000;
              *(undefined8 *)(this + 0x40) = 0x3f0000003fc00000;
              *(undefined8 *)(this + 0x58) = 0x100000004;
              *(undefined8 *)(this + 0x50) = 0x80000000000;
              *(undefined8 *)(this + 0xa8) = 0x400000000;
              *(undefined8 *)(this + 0xa0) = 0x2000000001;
              *(undefined8 *)(this + 0x88) = 0;
              *(undefined8 *)(this + 0x80) = 0x500000002;
              *(undefined8 *)(this + 0x98) = 0x203f800000;
              *(undefined8 *)(this + 0x90) = 4;
              *(undefined8 *)(this + 0xb8) = 0x3f00000000000001;
              *(undefined8 *)(this + 0xb0) = 0x10100;
              *(undefined8 *)(this + 200) = 0xc0000000;
              *(undefined8 *)(this + 0xc0) = 1;
              *(undefined8 *)(this + 0xd8) = 0;
              *(undefined8 *)(this + 0xd0) = 0x3f800000459c4000;
              if (iVar6 == 0) {
                uVar12 = 0x3f8ccccd;
              }
              else {
                *(undefined8 *)(this + 0x7c) = 0x100000001;
                *(undefined8 *)(this + 0x48) = 0x240000000;
                *(undefined4 *)(this + 0x58) = 0x10;
                *(undefined4 *)(this + 0x6c) = 4;
                *(undefined8 *)(this + 0xa8) = 0x500000013;
                uVar12 = 0x3fa66666;
                *(undefined8 *)(this + 0x30) = 0x3fa6666640000000;
                *(undefined8 *)(this + 0x28) = 0x3fa666663fa66666;
                *(undefined4 *)(this + 0xc0) = 2;
                this[4] = (HardwareScalability)0x1;
              }
            }
          }
        }
        *(undefined4 *)(this + 0x38) = uVar12;
        this[0x1c] = (HardwareScalability)0x1;
      }
    }
    FUN_007565a0(acStack_d8);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x20))
    ;
    *(undefined4 *)(this + 0x20) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1,"%s.graphic.scalability.rtScaling",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x24))
    ;
    *(undefined4 *)(this + 0x24) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_00,"%s.graphic.scalability.viewDistanceCoeff",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x28))
    ;
    *(undefined4 *)(this + 0x28) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_01,"%s.graphic.scalability.lodDistanceCoeff",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x2c))
    ;
    *(undefined4 *)(this + 0x2c) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_02,"%s.graphic.scalability.terrainLODDistanceCoeff",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x30))
    ;
    *(undefined4 *)(this + 0x30) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_03,"%s.graphic.scalability.foliageViewDistanceCoeff",pHVar3)
    ;
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x34))
    ;
    *(undefined4 *)(this + 0x34) = uVar12;
    *(undefined4 *)(this + 0x38) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_04,"%s.graphic.scalability.volumeMeshTessellationCoeff",
                 pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x40))
    ;
    *(undefined4 *)(this + 0x40) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_05,"%s.graphic.scalability.tyreTracksSegmentsCoeff",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x44))
    ;
    *(undefined4 *)(this + 0x44) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_06,"%s.graphic.scalability.shadowQuality",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x48))
    ;
    *(undefined4 *)(this + 0x48) = uVar12;
    auVar16 = ValarShadingRateController::getIsSupported(param_2);
    uVar14 = auVar16._8_8_;
    if ((auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      *(undefined4 *)(this + 0xdc) = 0;
    }
    else {
      pHVar3 = pHVar1;
      if (((byte)this[0xe8] & 1) != 0) {
        pHVar3 = *(HardwareScalability **)(this + 0xf8);
      }
      FUN_007565a0(acStack_d8,uVar14,"%s.graphic.scalability.valarQuality",pHVar3);
      uVar7 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xdc));
      uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      if (2 < uVar7) {
        uVar7 = 3;
      }
      *(uint *)(this + 0xdc) = uVar7;
      uVar14 = extraout_x1_07;
    }
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,uVar14,"%s.graphic.scalability.shadowDistanceQuality",pHVar3);
    uVar7 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x4c));
    if (1 < (int)uVar7) {
      uVar7 = 2;
    }
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    *(uint *)(this + 0x4c) = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    FUN_007565a0(acStack_d8,extraout_x1_08,"%s.graphic.scalability.shadowFocusBox",pHVar3);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0x50]);
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    this[0x50] = (HardwareScalability)(bVar5 & 1);
    FUN_007565a0(acStack_d8,extraout_x1_09,"%s.graphic.scalability.shadowMapSize",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x54));
    *(undefined4 *)(this + 0x54) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_10,"%s.graphic.scalability.shadowMapFilterSize",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x58));
    *(undefined4 *)(this + 0x58) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_11,"%s.graphic.scalability.shadowFilterQuality",pHVar3);
    iVar8 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xd8));
    iVar6 = 0;
    if (iVar8 < 3) {
      iVar6 = iVar8;
    }
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    *(int *)(this + 0xd8) = iVar6;
    FUN_007565a0(acStack_d8,extraout_x1_12,"%s.graphic.scalability.maxNumShadowLights",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x5c));
    *(undefined4 *)(this + 0x5c) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_13,"%s.graphic.scalability.allowFoliageShadows",pHVar3);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0x3c]);
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    this[0x3c] = (HardwareScalability)(bVar5 & 1);
    FUN_007565a0(acStack_d8,extraout_x1_14,"%s.graphic.scalability.shaderQuality",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x60));
    *(undefined4 *)(this + 0x60) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_15,"%s.graphic.scalability.skipMipmaps",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 100));
    *(undefined4 *)(this + 100) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_16,"%s.graphic.scalability.useTrilinearFiltering",pHVar3);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0x68]);
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    this[0x68] = (HardwareScalability)(bVar5 & 1);
    FUN_007565a0(acStack_d8,extraout_x1_17,"%s.graphic.scalability.anisotropy",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x6c));
    *(undefined4 *)(this + 0x6c) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_18,"%s.graphic.scalability.reflectionMapRatio",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x74))
    ;
    *(undefined4 *)(this + 0x74) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_19,"%s.graphic.scalability.terrainQuality",pHVar3);
    uVar7 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x78));
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    if (2 < uVar7) {
      uVar7 = 3;
    }
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    *(uint *)(this + 0x78) = uVar7;
    FUN_007565a0(acStack_d8,extraout_x1_20,"%s.graphic.scalability.msaa",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x7c));
    *(undefined4 *)(this + 0x7c) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_21,"%s.graphic.scalability.postProcessAA",pHVar3);
    if (*(uint *)(this + 0x80) < 4) {
      pcVar9 = (&PTR_DAT_00fdaf38)[(int)*(uint *)(this + 0x80)];
    }
    else {
      pcVar9 = "";
    }
    pcVar9 = (char *)Properties::getString(*(Properties **)(this + 0x100),acStack_d8,pcVar9);
    uVar12 = gePostProcessAntiAliasingFromString(pcVar9);
    *(undefined4 *)(this + 0x80) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_22,"%s.graphic.scalability.sgsrQuality",pHVar3);
    if (*(uint *)(this + 0x94) < 5) {
      pcVar9 = (&PTR_DAT_00fdaf58)[(int)*(uint *)(this + 0x94)];
    }
    else {
      pcVar9 = "";
    }
    pcVar9 = (char *)Properties::getString(*(Properties **)(this + 0x100),acStack_d8,pcVar9);
    uVar12 = getSGSRQualityFromString(pcVar9);
    *(undefined4 *)(this + 0x94) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_23,"%s.graphic.scalability.sharpness",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0x98))
    ;
    *(undefined4 *)(this + 0x98) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_24,"%s.graphic.scalability.maxNumLights",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_25,"%s.graphic.scalability.maxNumDirLights",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xa0));
    *(undefined4 *)(this + 0xa0) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_26,"%s.graphic.scalability.maxNumLightsPerCluster",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xa4));
    *(undefined4 *)(this + 0xa4) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_27,"%s.graphic.scalability.ssaoQuality",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xa8));
    *(undefined4 *)(this + 0xa8) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_28,"%s.graphic.scalability.bloomQuality",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xac));
    *(undefined4 *)(this + 0xac) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_29,"%s.graphic.scalability.halfResDof",pHVar3);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0xba]);
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    this[0xba] = (HardwareScalability)(bVar5 & 1);
    FUN_007565a0(acStack_d8,extraout_x1_30,"%s.graphic.scalability.ssaoResolutionScaling",pHVar3);
    uVar12 = Properties::getFloat(*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0xbc))
    ;
    *(undefined4 *)(this + 0xbc) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_31,"%s.graphic.scalability.shadingRateQuality",pHVar3);
    uVar12 = Properties::getUInt(*(Properties **)(this + 0x100),acStack_d8,*(uint *)(this + 0xc0));
    *(undefined4 *)(this + 0xc0) = uVar12;
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,extraout_x1_32,"%s.graphic.scalability.dof",pHVar3);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0xb0]);
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    this[0xb0] = (HardwareScalability)(bVar5 & 1);
    FUN_007565a0(acStack_d8,extraout_x1_33,"%s.graphic.scalability.cloudQuality",pHVar3);
    uVar12 = Properties::getInt(*(Properties **)(this + 0x100),acStack_d8,*(int *)(this + 0xb4));
    *(undefined4 *)(this + 0xb4) = uVar12;
    auVar16 = (**(code **)(*(long *)param_2 + 0x28))(param_2);
    uVar14 = auVar16._8_8_;
    if (*(char *)(auVar16._0_8_ + 0x53) != '\0') {
      pHVar3 = pHVar1;
      if (((byte)this[0xe8] & 1) != 0) {
        pHVar3 = *(HardwareScalability **)(this + 0xf8);
      }
      FUN_007565a0(acStack_d8,uVar14,"%s.graphic.scalability.supportTextureStreaming",pHVar3);
      bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0xb1])
      ;
      pHVar3 = pHVar1;
      if (((byte)this[0xe8] & 1) != 0) {
        pHVar3 = *(HardwareScalability **)(this + 0xf8);
      }
      this[0xb1] = (HardwareScalability)(bVar5 & 1);
      FUN_007565a0(acStack_d8,extraout_x1_34,"%s.graphic.scalability.textureStreamingMemoryBudget",
                   pHVar3);
      auVar16 = Properties::getUInt64
                          (*(Properties **)(this + 0x100),acStack_d8,*(ulonglong *)(this + 200));
      *(long *)(this + 200) = auVar16._0_8_;
      pHVar3 = pHVar1;
      if (((byte)this[0xe8] & 1) != 0) {
        pHVar3 = *(HardwareScalability **)(this + 0xf8);
      }
      FUN_007565a0(acStack_d8,auVar16._8_8_,"%s.graphic.scalability.textureStreamingDowngradeDelay",
                   pHVar3);
      uVar12 = Properties::getFloat
                         (*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0xd0));
      *(undefined4 *)(this + 0xd0) = uVar12;
      pHVar3 = pHVar1;
      if (((byte)this[0xe8] & 1) != 0) {
        pHVar3 = *(HardwareScalability **)(this + 0xf8);
      }
      FUN_007565a0(acStack_d8,extraout_x1_35,
                   "%s.graphic.scalability.textureStreamingTexelToPixelRatio",pHVar3);
      uVar12 = Properties::getFloat
                         (*(Properties **)(this + 0x100),acStack_d8,*(float *)(this + 0xd4));
      *(undefined4 *)(this + 0xd4) = uVar12;
      uVar14 = extraout_x1_36;
    }
    pHVar3 = pHVar1;
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar3 = *(HardwareScalability **)(this + 0xf8);
    }
    FUN_007565a0(acStack_d8,uVar14,"%s.graphic.scalability.envMapBlending",pHVar3);
    pHVar2 = (HardwareSettings *)(this + 0x20);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0xb2]);
    if (((byte)this[0xe8] & 1) != 0) {
      pHVar1 = *(HardwareScalability **)(this + 0xf8);
    }
    this[0xb2] = (HardwareScalability)(bVar5 & 1);
    FUN_007565a0(acStack_d8,extraout_x1_37,"%s.graphic.scalability.dynamicSpecularEnvMap",pHVar1);
    bVar5 = Properties::getBoolDefault(*(Properties **)(this + 0x100),acStack_d8,(bool)this[0xb3]);
    *(undefined4 *)(this + 0x18) = 0;
    this[0xb3] = (HardwareScalability)(bVar5 & 1);
    uVar12 = getSettingsDistance((HardwareSettings *)s_mobileClassSettings,pHVar2);
    fVar15 = (float)NEON_fminnm(uVar12,0x7f7fffff);
    fVar13 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 200),pHVar2);
    if (fVar13 < fVar15) {
      *(undefined4 *)(this + 0x18) = 1;
      fVar15 = fVar13;
    }
    fVar13 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 400),pHVar2);
    if (fVar13 < fVar15) {
      *(undefined4 *)(this + 0x18) = 2;
      fVar15 = fVar13;
    }
    fVar13 = (float)getSettingsDistance((HardwareSettings *)(s_mobileClassSettings + 600),pHVar2);
    if (fVar13 < fVar15) {
      *(undefined4 *)(this + 0x18) = 3;
      fVar15 = fVar13;
    }
    this[0x1c] = (HardwareScalability)(0.0001 < fVar15);
  }
  *(undefined4 *)this = 8;
  uVar14 = NEON_cmlt(CONCAT44((uint)(*(int *)(this + 0x14) < 2) << 0x1f,
                              (uint)(*(int *)(this + 0x14) < 2) << 0x1f),0,4);
  uVar14 = NEON_bsl(uVar14,0x2d000000500,0x43800000780,1);
  *(undefined8 *)(this + 8) = uVar14;
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


