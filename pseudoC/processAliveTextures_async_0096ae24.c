// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processAliveTextures_async
// Entry Point: 0096ae24
// Size: 208 bytes
// Signature: undefined processAliveTextures_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processAliveTextures_async() */

void TextureStreamingManager::processAliveTextures_async(void)

{
  long lVar1;
  int iVar2;
  long in_x0;
  ulonglong uVar3;
  long lVar4;
  
  processWastingTextures_async();
  lVar4 = *(long *)(in_x0 + 0x1a8);
  lVar1 = *(long *)(in_x0 + 0x1b0);
  DAT_0210ee30 = (int)((ulong)(lVar1 - lVar4) >> 3) * -0x55555555;
  if ((*(char *)(in_x0 + 0x7c) == '\0') && (lVar4 != lVar1)) {
    do {
      uVar3 = *(ulonglong *)(lVar4 + 0x10);
      iVar2 = CommonPipelineData::getTextureStatus_async
                        ((CommonPipelineData *)(in_x0 + 0x218),uVar3);
      if (iVar2 == 1) {
        UpgradePipeline::cancelRequest_async((UpgradePipeline *)(in_x0 + 0x3d8),uVar3);
      }
      else if (iVar2 == 3) {
        DowngradePipeline::tryCancelRequest_async((DowngradePipeline *)(in_x0 + 0x688),uVar3);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar1);
  }
  processNeedingTextures_async();
  processOverBudgetTextures_async();
  return;
}


