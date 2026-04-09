// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processWastingTextures_async
// Entry Point: 0096b4a0
// Size: 316 bytes
// Signature: undefined processWastingTextures_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processWastingTextures_async() */

void TextureStreamingManager::processWastingTextures_async(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  long in_x0;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  
  piVar8 = *(int **)(in_x0 + 400);
  piVar1 = *(int **)(in_x0 + 0x198);
  uVar7 = (long)piVar1 - (long)piVar8;
  DAT_0210ee2c = (int)(uVar7 >> 3) * -0x55555555;
  if (uVar7 != 0) {
    do {
      uVar7 = *(ulong *)(piVar8 + 4);
      iVar3 = CommonPipelineData::getTextureStatus_async
                        ((CommonPipelineData *)(in_x0 + 0x218),uVar7);
      if (iVar3 == 0) {
LAB_0096b528:
        uVar4 = *(ulong *)(in_x0 + 0x230);
        uVar10 = NEON_cnt(uVar4,1);
        uVar9 = NEON_uaddlv(uVar10,1);
        if ((uint)CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) < 2) {
          uVar6 = uVar4 - 1 & uVar7;
        }
        else {
          uVar6 = uVar7;
          if (uVar4 <= uVar7) {
            uVar6 = 0;
            if (uVar4 != 0) {
              uVar6 = uVar7 / uVar4;
            }
            uVar6 = uVar7 - uVar6 * uVar4;
          }
        }
        plVar5 = *(long **)(*(long *)(in_x0 + 0x228) + uVar6 * 8);
        do {
          do {
            plVar5 = (long *)*plVar5;
          } while (plVar5[1] != uVar7);
        } while (plVar5[2] != uVar7);
        uVar2 = (*(int *)(plVar5 + 0x16) + 1U) - *(uint *)(plVar5 + 8);
        if ((*(uint *)(plVar5 + 8) <= *(int *)(plVar5 + 0x16) + 1U && uVar2 != 0) &&
           (*(char *)(in_x0 + 9) == '\0')) {
          if ((uint)-*piVar8 <= uVar2) {
            uVar2 = -*piVar8;
          }
          DowngradePipeline::tryCreateRequest_async
                    ((DowngradePipeline *)(in_x0 + 0x688),uVar7,uVar2);
        }
      }
      else if (iVar3 == 1) {
        UpgradePipeline::cancelRequest_async((UpgradePipeline *)(in_x0 + 0x3d8),uVar7);
        goto LAB_0096b528;
      }
      piVar8 = piVar8 + 6;
    } while (piVar8 != piVar1);
  }
  return;
}


