// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: upgradePipeline_processCompletedRequests_async
// Entry Point: 0096d250
// Size: 380 bytes
// Signature: undefined upgradePipeline_processCompletedRequests_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::upgradePipeline_processCompletedRequests_async() */

void TextureStreamingManager::upgradePipeline_processCompletedRequests_async(void)

{
  long in_x0;
  ulong uVar1;
  ulonglong *puVar2;
  ulonglong unaff_x22;
  uint unaff_w23;
  uint unaff_w24;
  long lVar3;
  int iVar4;
  ulonglong unaff_x28;
  
  do {
    Mutex::enterCriticalSection();
    lVar3 = *(long *)(in_x0 + 0x5a0);
    if (lVar3 == 0) {
      iVar4 = 3;
    }
    else {
      uVar1 = *(ulong *)(in_x0 + 0x598);
      puVar2 = (ulonglong *)
               ((long)(*(void ***)(in_x0 + 0x580))[uVar1 / 0xaa] + (uVar1 % 0xaa) * 0x18);
      unaff_w23 = *(uint *)(puVar2 + 1);
      unaff_w24 = *(uint *)((long)puVar2 + 0xc);
      unaff_x22 = *puVar2;
      unaff_x28 = puVar2[2];
      *(long *)(in_x0 + 0x5a0) = lVar3 + -1;
      *(ulong *)(in_x0 + 0x598) = uVar1 + 1;
      if (uVar1 + 1 < 0x154) {
        iVar4 = 0;
      }
      else {
        operator_delete(**(void ***)(in_x0 + 0x580));
        iVar4 = 0;
        *(long *)(in_x0 + 0x580) = *(long *)(in_x0 + 0x580) + 8;
        *(long *)(in_x0 + 0x598) = *(long *)(in_x0 + 0x598) + -0xaa;
      }
    }
                    /* try { // try from 0096d330 to 0096d337 has its CatchHandler @ 0096d3cc */
    Mutex::leaveCriticalSection();
    if (lVar3 != 0) {
      lVar3 = Watch::getCurrentTicks();
      DAT_0210ee50 = *(int *)(in_x0 + 0x5a8) - unaff_w24;
      *(int *)(in_x0 + 0x5a8) = DAT_0210ee50;
      CommonPipelineData::onChangeRequestSucceeded_async
                (*(CommonPipelineData **)(in_x0 + 0x3d8),unaff_x22,unaff_w24,unaff_w23,2);
      DAT_0210ee44 = CONCAT44((int)((ulong)DAT_0210ee44 >> 0x20) + 1,(int)DAT_0210ee44 + -1);
      logFeedback("[UpgradePipeline] 4ab: finish upgrade of texture [id: %llu]: +%i mips (+%i B) in %u ticks"
                  ,unaff_x22,(ulong)unaff_w23,(ulong)unaff_w24,lVar3 - unaff_x28);
      FUN_00f27700(0xffffffff,in_x0 + 0x608);
      iVar4 = 0;
    }
  } while (iVar4 == 0);
  return;
}


