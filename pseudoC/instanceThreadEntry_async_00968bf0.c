// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: instanceThreadEntry_async
// Entry Point: 00968bf0
// Size: 576 bytes
// Signature: undefined instanceThreadEntry_async(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::instanceThreadEntry_async() */

void TextureStreamingManager::instanceThreadEntry_async(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  void **ppvVar6;
  int iVar7;
  long in_x0;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  double dVar14;
  
  uVar8 = ThreadUtil::getCurrentThreadId();
  *(undefined8 *)(in_x0 + 0x80) = uVar8;
  UpgradePipeline::initLoadMipsSharedBuffer_async();
  Semaphore::wait();
  if (*(char *)(in_x0 + 0xe0) == '\0') {
    do {
      lVar9 = Watch::getCurrentTicks();
      uVar8 = *(undefined8 *)(in_x0 + 0x830);
      if (*(char *)(in_x0 + 0x148) != '\0') {
        plVar12 = *(long **)(in_x0 + 0x160);
        *(undefined *)(in_x0 + 0x148) = 0;
        for (; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          std::__ndk1::
          __hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
          ::__emplace_unique_key_args<unsigned_long_long,unsigned_long_long_const&>
                    ((__hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                      *)(in_x0 + 0x1c8),(ulonglong *)(plVar12 + 2),(ulonglong *)(plVar12 + 2));
        }
        if (*(long *)(in_x0 + 0x168) != 0) {
          ppvVar6 = (void **)*(void **)(in_x0 + 0x160);
          while (ppvVar6 != (void **)0x0) {
            pvVar13 = *ppvVar6;
            operator_delete(ppvVar6);
            ppvVar6 = (void **)pvVar13;
          }
          lVar10 = *(long *)(in_x0 + 0x158);
          *(undefined8 *)(in_x0 + 0x160) = 0;
          if (lVar10 != 0) {
            lVar11 = 0;
            do {
              *(undefined8 *)(*(long *)(in_x0 + 0x150) + lVar11 * 8) = 0;
              lVar11 = lVar11 + 1;
            } while (lVar10 != lVar11);
          }
          *(undefined8 *)(in_x0 + 0x168) = 0;
        }
        DAT_0210ee38 = (undefined4)*(undefined8 *)(in_x0 + 0x1e0);
        _DAT_0210ee20 = 0;
      }
      processTextureUsageContributions_async();
      registryPipeline_processUnregisteredTextures_async();
      registryPipeline_processRegisteredTextures_async();
      if (*(char *)(in_x0 + 2) == '\0') {
        processAllTextures_async();
        cVar4 = *(char *)(in_x0 + 0x840);
      }
      else {
        cVar4 = *(char *)(in_x0 + 0x840);
      }
      if (cVar4 != '\0') {
        downgradePipeline_processNewRequests_async();
      }
      downgradePipeline_processCompletedRequests_async();
      upgradePipeline_processCancels_async();
      if (*(char *)(in_x0 + 0x7c) == '\0') {
        upgradePipeline_processRequests_async();
        cVar4 = *(char *)(in_x0 + 0x840);
      }
      else {
        cVar4 = *(char *)(in_x0 + 0x840);
      }
      if (cVar4 != '\0') {
        upgradePipeline_processWorkerResults_async();
      }
      upgradePipeline_processCompletedRequests_async();
      processNewReallocateRequests_async();
      lVar10 = Watch::getCurrentTicks();
      dVar14 = (double)Watch::convertTicksToMs(lVar10 - lVar9);
      uVar3 = _DAT_0210ee08;
      iVar7 = _DAT_0210ee04;
      uVar2 = DAT_0210ee00 + _DAT_0210ee04;
      uVar1 = DAT_0210ee00 + 1;
      uVar5 = 0;
      if (_DAT_0210ee08 != 0) {
        uVar5 = uVar2 / _DAT_0210ee08;
      }
      DAT_0210e9f8 = dVar14;
      DAT_0210ee00 = uVar1;
      *(double *)(&DAT_0210ea00 + (ulong)(uVar2 - uVar5 * _DAT_0210ee08) * 8) = dVar14;
      if (uVar3 < uVar1) {
        uVar1 = 0;
        if (uVar3 != 0) {
          uVar1 = (iVar7 + 1U) / uVar3;
        }
        _DAT_0210ee04 = (iVar7 + 1U) - uVar1 * uVar3;
        DAT_0210ee00 = uVar3;
      }
      if (dVar14 <= DAT_0210ee10) {
        dVar14 = DAT_0210ee10;
      }
      DAT_0210ee10 = dVar14;
      if (*(char *)(in_x0 + 2) == '\0') {
        *(undefined8 *)(in_x0 + 0x838) = uVar8;
      }
      Semaphore::wait();
    } while (*(char *)(in_x0 + 0xe0) == '\0');
  }
  Mutex::enterCriticalSection();
  if (*(void **)(in_x0 + 0x680) != (void *)0x0) {
    operator_delete__(*(void **)(in_x0 + 0x680));
  }
  *(undefined8 *)(in_x0 + 0x680) = 0;
  *(undefined4 *)(in_x0 + 0x67c) = 0;
  *(undefined *)(in_x0 + 0x678) = 0;
                    /* try { // try from 00968c58 to 00968c5f has its CatchHandler @ 00968e30 */
  Mutex::leaveCriticalSection();
  return;
}


