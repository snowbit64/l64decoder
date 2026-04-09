// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 009671a4
// Size: 252 bytes
// Signature: undefined update(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::update() */

void TextureStreamingManager::update(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char *in_x0;
  long lVar6;
  long lVar7;
  double dVar8;
  
  dVar8 = DAT_0210e9f0;
  if (*in_x0 != '\0') {
    lVar6 = EngineManager::getInstance();
    if (*(long *)(lVar6 + 0xb8) != 0) {
      EngineManager::getInstance();
      lVar6 = Renderer::getSharedRenderArgs();
      *(long *)(in_x0 + 0x138) = *(long *)(lVar6 + 0x90) + 1;
    }
    Semaphore::post();
    lVar6 = Watch::getCurrentTicks();
    if (in_x0[0x840] == '\0') {
      downgradePipeline_processNewRequests_main();
    }
    downgradePipeline_processWaitingReallocates_main();
    if ((byte)(in_x0[0x7c] | in_x0[0x840]) == 0) {
      upgradePipeline_processWorkerResults_main();
    }
    upgradePipeline_processWaitingReallocates_main();
    lVar7 = Watch::getCurrentTicks();
    dVar8 = (double)Watch::convertTicksToMs(lVar7 - lVar6);
    uVar5 = DAT_0210e9e8;
    iVar4 = DAT_0210e9e4;
    uVar2 = DAT_0210e9e0 + DAT_0210e9e4;
    uVar1 = DAT_0210e9e0 + 1;
    uVar3 = 0;
    if (DAT_0210e9e8 != 0) {
      uVar3 = uVar2 / DAT_0210e9e8;
    }
    s_stats_any = dVar8;
    DAT_0210e9e0 = uVar1;
    *(double *)(&DAT_0210e5e0 + (ulong)(uVar2 - uVar3 * DAT_0210e9e8) * 8) = dVar8;
    if (uVar5 < uVar1) {
      DAT_0210e9e0 = uVar5;
      uVar1 = 0;
      if (uVar5 != 0) {
        uVar1 = (iVar4 + 1U) / uVar5;
      }
      DAT_0210e9e4 = (iVar4 + 1U) - uVar1 * uVar5;
    }
    if (dVar8 <= DAT_0210e9f0) {
      dVar8 = DAT_0210e9f0;
    }
  }
  DAT_0210e9f0 = dVar8;
  return;
}


