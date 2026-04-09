// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextPage
// Entry Point: 00c722d0
// Size: 296 bytes
// Signature: undefined __thiscall getNextPage(TheoraVideoDecoder * this, ogg_page * param_1)


/* TheoraVideoDecoder::getNextPage(ogg_page&) */

bool __thiscall TheoraVideoDecoder::getNextPage(TheoraVideoDecoder *this,ogg_page *param_1)

{
  TheoraVideoDecoder *pTVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  void *__dest;
  void *pvVar5;
  void **ppvVar6;
  void *pvVar7;
  void **ppvVar8;
  
  pTVar1 = this + 8;
  ppvVar2 = (void **)(this + 0xe8);
  do {
    iVar4 = ogg_sync_pageout(pTVar1,param_1);
    if (iVar4 == 1) break;
    __dest = (void *)ogg_sync_buffer(pTVar1,0x10000);
    pvVar7 = *ppvVar2;
    while (ppvVar8 = ppvVar2, pvVar7 == (void *)0x0) {
      ppvVar8 = *(void ***)(this + 0xe0);
      do {
        pvVar7 = *ppvVar8;
        pvVar5 = (void *)FUN_00f275d0(pvVar7,0,ppvVar8);
      } while (pvVar7 != pvVar5);
      *ppvVar2 = pvVar7;
      ppvVar8 = ppvVar2;
      if (pvVar7 != (void *)0x0) break;
      ThreadUtil::usleep(100);
      pvVar7 = *ppvVar2;
    }
    do {
      pvVar5 = pvVar7;
      ppvVar6 = ppvVar8;
      pvVar7 = *(void **)((long)pvVar5 + 0x10008);
      ppvVar8 = (void **)((long)pvVar5 + 0x10008);
    } while (pvVar7 != (void *)0x0);
    *ppvVar6 = (void *)0x0;
    FUN_00f27700(0xffffffff,*(long *)(this + 0xe0) + 8);
    Semaphore::post();
    uVar3 = *(uint *)((long)pvVar5 + 0x10000);
    memcpy(__dest,pvVar5,(ulong)uVar3);
    operator_delete(pvVar5);
    ogg_sync_wrote(pTVar1,(ulong)uVar3);
  } while (uVar3 != 0);
  return iVar4 == 1;
}


