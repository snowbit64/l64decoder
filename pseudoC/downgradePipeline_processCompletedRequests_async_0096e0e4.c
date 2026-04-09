// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: downgradePipeline_processCompletedRequests_async
// Entry Point: 0096e0e4
// Size: 344 bytes
// Signature: undefined downgradePipeline_processCompletedRequests_async(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::downgradePipeline_processCompletedRequests_async() */

void TextureStreamingManager::downgradePipeline_processCompletedRequests_async(void)

{
  ulonglong *puVar1;
  long in_x0;
  ulong uVar2;
  ulonglong unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long lVar3;
  int iVar4;
  
  do {
    Mutex::enterCriticalSection();
    lVar3 = *(long *)(in_x0 + 0x820);
    if (lVar3 == 0) {
      iVar4 = 3;
    }
    else {
      uVar2 = *(ulong *)(in_x0 + 0x818);
      puVar1 = (ulonglong *)
               (*(long *)((long)*(void ***)(in_x0 + 0x800) + (uVar2 >> 4 & 0xffffffffffffff8)) +
               (uVar2 & 0x7f) * 0x20);
      unaff_w24 = *(uint *)(puVar1 + 1);
      unaff_w23 = *(uint *)((long)puVar1 + 0xc);
      unaff_x22 = *puVar1;
      *(long *)(in_x0 + 0x820) = lVar3 + -1;
      *(ulong *)(in_x0 + 0x818) = uVar2 + 1;
      if (uVar2 + 1 < 0x100) {
        iVar4 = 0;
      }
      else {
        operator_delete(**(void ***)(in_x0 + 0x800));
        iVar4 = 0;
        *(long *)(in_x0 + 0x800) = *(long *)(in_x0 + 0x800) + 8;
        *(long *)(in_x0 + 0x818) = *(long *)(in_x0 + 0x818) + -0x80;
      }
    }
                    /* try { // try from 0096e1ac to 0096e1b3 has its CatchHandler @ 0096e23c */
    Mutex::leaveCriticalSection();
    if (lVar3 != 0) {
      _DAT_0210ee54 = CONCAT44((int)((ulong)_DAT_0210ee54 >> 0x20) + 1,(int)_DAT_0210ee54 + -1);
      FUN_00f27700(unaff_w23,in_x0 + 0x828);
      DAT_0210ee60 = *(undefined4 *)(in_x0 + 0x828);
      CommonPipelineData::onChangeRequestSucceeded_async
                (*(CommonPipelineData **)(in_x0 + 0x688),unaff_x22,unaff_w23,unaff_w24,4);
      logFeedback("[DowngradePipeline] 3: finish request for texture [id: %llu]: %i mips (%i B)",
                  unaff_x22,(ulong)unaff_w24,(ulong)unaff_w23);
      FUN_00f27700(0xffffffff,in_x0 + 0x82c);
      iVar4 = 0;
    }
  } while (iVar4 == 0);
  return;
}


