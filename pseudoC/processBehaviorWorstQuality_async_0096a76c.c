// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBehaviorWorstQuality_async
// Entry Point: 0096a76c
// Size: 380 bytes
// Signature: undefined processBehaviorWorstQuality_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processBehaviorWorstQuality_async() */

void TextureStreamingManager::processBehaviorWorstQuality_async(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long in_x0;
  ulong uVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  plVar12 = *(long **)(in_x0 + 0x238);
  DAT_0210ee64 = 0;
  if (plVar12 != (long *)0x0) {
    do {
      uVar6 = *(ulong *)(in_x0 + 0x230);
      uVar10 = plVar12[2];
      if (uVar6 == 0) {
LAB_0096a86c:
        plVar11 = (long *)0x0;
      }
      else {
        uVar14 = NEON_cnt(uVar6,1);
        uVar13 = NEON_uaddlv(uVar14,1);
        uVar15 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13);
        if ((uVar15 & 0xffffffff) < 2) {
          uVar7 = uVar6 - 1 & uVar10;
        }
        else {
          uVar7 = uVar10;
          if (uVar6 <= uVar10) {
            uVar7 = 0;
            if (uVar6 != 0) {
              uVar7 = uVar10 / uVar6;
            }
            uVar7 = uVar10 - uVar7 * uVar6;
          }
        }
        pplVar8 = *(long ***)(*(long *)(in_x0 + 0x228) + uVar7 * 8);
        if (pplVar8 == (long **)0x0) goto LAB_0096a86c;
        plVar11 = *pplVar8;
        if (plVar11 != (long *)0x0) {
          do {
            uVar9 = plVar11[1];
            if (uVar9 == uVar10) {
              if (plVar11[2] == uVar10) break;
            }
            else {
              if ((uVar15 & 0xffffffff) < 2) {
                uVar9 = uVar9 & uVar6 - 1;
              }
              else if (uVar6 <= uVar9) {
                uVar4 = 0;
                if (uVar6 != 0) {
                  uVar4 = uVar9 / uVar6;
                }
                uVar9 = uVar9 - uVar4 * uVar6;
              }
              if (uVar9 != uVar7) goto LAB_0096a86c;
            }
            plVar11 = (long *)*plVar11;
          } while (plVar11 != (long *)0x0);
        }
      }
      iVar5 = CommonPipelineData::getTextureStatus_async
                        ((CommonPipelineData *)(in_x0 + 0x218),uVar10);
      uVar2 = *(uint *)(plVar11 + 0x16);
      uVar3 = *(int *)((long)plVar11 + 0x3c) - 1;
      uVar1 = 0;
      if (uVar3 <= uVar2) {
        uVar1 = uVar2 - uVar3;
      }
      if (iVar5 == 0) {
LAB_0096a8a8:
        if ((uVar3 < uVar2) && (*(char *)(in_x0 + 9) == '\0')) {
          DowngradePipeline::tryCreateRequest_async
                    ((DowngradePipeline *)(in_x0 + 0x688),uVar10,uVar1);
          goto LAB_0096a7b0;
        }
      }
      else {
        if (iVar5 == 1) {
          UpgradePipeline::cancelRequest_async((UpgradePipeline *)(in_x0 + 0x3d8),uVar10);
          goto LAB_0096a8a8;
        }
LAB_0096a7b0:
        DAT_0210ee64 = DAT_0210ee64 + uVar1;
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


