// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read
// Entry Point: 008af28c
// Size: 700 bytes
// Signature: undefined __cdecl read(uchar * param_1, int param_2, int param_3, GLSHeader * param_4, GranularSynthesisRuntimeSettings * param_5, GranularSynthesisRuntimeSettings * param_6, SteadyLoopRuntimeSettings * param_7, StaticSoundRuntimeSettings * param_8, StaticSoundRuntimeSettings * param_9, LoadSimulationRuntimeSettings * param_10, FadeRuntimeSettings * param_11, SteadyLoopRuntimeSettings * param_12, LoadSimulationRuntimeSettings * param_13)


/* LoopSynthesisBinaryUtil::read(unsigned char const*, int, int, LoopSynthesisBinaryUtil::GLSHeader
   const&, GranularSynthesisRuntimeSettings*, GranularSynthesisRuntimeSettings*,
   SteadyLoopRuntimeSettings*, StaticSoundRuntimeSettings*, StaticSoundRuntimeSettings*,
   LoadSimulationRuntimeSettings*, LoopSynthesisRuntimeSettings::FadeRuntimeSettings&,
   SteadyLoopRuntimeSettings*, LoadSimulationRuntimeSettings*) */

ulong LoopSynthesisBinaryUtil::read
                (uchar *param_1,int param_2,int param_3,GLSHeader *param_4,
                GranularSynthesisRuntimeSettings *param_5,GranularSynthesisRuntimeSettings *param_6,
                SteadyLoopRuntimeSettings *param_7,StaticSoundRuntimeSettings *param_8,
                StaticSoundRuntimeSettings *param_9,LoadSimulationRuntimeSettings *param_10,
                FadeRuntimeSettings *param_11,SteadyLoopRuntimeSettings *param_12,
                LoadSimulationRuntimeSettings *param_13)

{
  uchar *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  iVar5 = *(int *)(param_4 + 8);
  if (iVar5 == 1) {
    iVar5 = GranularSynthesisRuntimeSettings::loadGls
                      (param_5,param_1,param_3,param_2,*(uint *)(param_4 + 4),
                       *(uint *)(param_4 + 0x1c),*(uint *)(param_4 + 0x18),0,
                       *(int *)(param_4 + 0x10),*(uint *)(param_4 + 0x14));
    if (iVar5 == -1) {
      return 0xffffffff;
    }
    iVar4 = iVar5 + param_3;
    if (param_2 < iVar4) {
      return 0xffffffff;
    }
    iVar6 = GranularSynthesisRuntimeSettings::loadGls
                      (param_6,param_1 + iVar5,iVar4,param_2,*(uint *)(param_4 + 4),
                       *(uint *)(param_4 + 0x2c),*(uint *)(param_4 + 0x28),0,
                       *(int *)(param_4 + 0x20),*(uint *)(param_4 + 0x24));
    if (iVar6 == -1) {
      return 0xffffffff;
    }
    param_3 = iVar6 + iVar4;
    if (param_2 < param_3) {
      return 0xffffffff;
    }
    param_1 = param_1 + iVar5 + iVar6;
    iVar6 = iVar6 + iVar5;
    iVar5 = *(int *)(param_4 + 8);
  }
  else {
    iVar6 = 0;
  }
  if (iVar5 == 2) {
    uVar11 = SteadyLoopRuntimeSettings::loadGls
                       (param_7,param_1,param_3,param_2,*(uint *)(param_4 + 0x30),
                        *(uint *)(param_4 + 4));
    iVar5 = (int)uVar11;
    if (iVar5 == -1) {
      return uVar11;
    }
    param_3 = iVar5 + param_3;
    if (param_2 < param_3) {
      return 0xffffffff;
    }
    iVar6 = iVar5 + iVar6;
    param_1 = param_1 + iVar5;
  }
  iVar5 = StaticSoundRuntimeSettings::loadGls((uchar *)param_8,(int)param_1,param_3,param_2);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  iVar4 = iVar5 + param_3;
  if (iVar4 <= param_2) {
    puVar1 = param_1 + iVar5;
    iVar7 = StaticSoundRuntimeSettings::loadGls((uchar *)param_9,(int)puVar1,iVar4,param_2);
    if (iVar7 == -1) {
      return 0xffffffff;
    }
    iVar4 = iVar7 + iVar4;
    if (param_2 < iVar4) {
      return 0xffffffff;
    }
    iVar8 = LoadSimulationRuntimeSettings::loadGls
                      ((uchar *)param_10,(int)(puVar1 + iVar7),iVar4,param_2);
    if (iVar8 == -1) {
      return 0xffffffff;
    }
    iVar4 = iVar8 + iVar4;
    if (iVar4 <= param_2) {
      if ((long)iVar4 + 0x14U <= (ulong)(long)param_2) {
        puVar2 = (undefined8 *)(puVar1 + iVar7 + iVar8);
        iVar4 = iVar4 + 0x14;
        uVar13 = puVar2[1];
        uVar12 = *puVar2;
        *(undefined4 *)(param_11 + 0x10) = *(undefined4 *)(puVar2 + 2);
        *(undefined8 *)(param_11 + 8) = uVar13;
        *(undefined8 *)param_11 = uVar12;
        if (iVar4 <= param_2) {
          iVar9 = SteadyLoopRuntimeSettings::loadGls
                            (param_12,(uchar *)((long)puVar2 + 0x14),iVar4,param_2,
                             *(uint *)(param_4 + 0x34),*(uint *)(param_4 + 4));
          if (iVar9 == -1) {
            return 0xffffffff;
          }
          iVar4 = iVar9 + iVar4;
          if (param_2 < iVar4) {
            return 0xffffffff;
          }
          iVar10 = LoadSimulationRuntimeSettings::loadGls
                             ((uchar *)param_13,(int)(uchar *)((long)puVar2 + 0x14) + iVar9,iVar4,
                              param_2);
          uVar3 = iVar6 + iVar5 + iVar7 + iVar8 + iVar9 + iVar10 + 0x14;
          if (param_2 < iVar10 + iVar4 || iVar10 == -1) {
            uVar3 = 0xffffffff;
          }
          return (ulong)uVar3;
        }
      }
      return 0xffffffff;
    }
    return 0xffffffff;
  }
  return 0xffffffff;
}


