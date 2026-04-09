// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBehaviorMinQuality_async
// Entry Point: 0096a5c0
// Size: 428 bytes
// Signature: undefined processBehaviorMinQuality_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processBehaviorMinQuality_async() */

void TextureStreamingManager::processBehaviorMinQuality_async(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long in_x0;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long **pplVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long *plVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  
  plVar12 = *(long **)(in_x0 + 0x238);
  DAT_0210ee64 = 0;
  if (plVar12 != (long *)0x0) {
    do {
      uVar6 = *(ulong *)(in_x0 + 0x230);
      uVar11 = plVar12[2];
      if (uVar6 == 0) {
LAB_0096a6d8:
        plVar13 = (long *)0x0;
      }
      else {
        uVar15 = NEON_cnt(uVar6,1);
        uVar14 = NEON_uaddlv(uVar15,1);
        uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
        if (uVar7 < 2) {
          uVar8 = uVar6 - 1 & uVar11;
        }
        else {
          uVar8 = uVar11;
          if (uVar6 <= uVar11) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar11 / uVar6;
            }
            uVar8 = uVar11 - uVar8 * uVar6;
          }
        }
        pplVar9 = *(long ***)(*(long *)(in_x0 + 0x228) + uVar8 * 8);
        if (pplVar9 == (long **)0x0) goto LAB_0096a6d8;
        plVar13 = *pplVar9;
        if (plVar13 != (long *)0x0) {
          do {
            uVar10 = plVar13[1];
            if (uVar10 == uVar11) {
              if (plVar13[2] == uVar11) break;
            }
            else {
              if (uVar7 < 2) {
                uVar10 = uVar10 & uVar6 - 1;
              }
              else if (uVar6 <= uVar10) {
                uVar4 = 0;
                if (uVar6 != 0) {
                  uVar4 = uVar10 / uVar6;
                }
                uVar10 = uVar10 - uVar4 * uVar6;
              }
              if (uVar10 != uVar8) goto LAB_0096a6d8;
            }
            plVar13 = (long *)*plVar13;
          } while (plVar13 != (long *)0x0);
        }
      }
      iVar5 = CommonPipelineData::getTextureStatus_async
                        ((CommonPipelineData *)(in_x0 + 0x218),uVar11);
      if (iVar5 == 0) {
LAB_0096a710:
        uVar2 = *(uint *)(plVar13 + 8);
        uVar1 = *(int *)(plVar13 + 0x16) + 1;
        uVar3 = uVar1 - uVar2;
        if (uVar3 != 0) {
          if (uVar1 < uVar2 || uVar3 == 0) {
            if (*(char *)(in_x0 + 8) == '\0') {
              UpgradePipeline::tryCreateRequest_async
                        ((UpgradePipeline *)(in_x0 + 0x3d8),uVar11,uVar2 - uVar1);
            }
          }
          else if (*(char *)(in_x0 + 9) == '\0') {
            DowngradePipeline::tryCreateRequest_async
                      ((DowngradePipeline *)(in_x0 + 0x688),uVar11,uVar3);
          }
          goto LAB_0096a608;
        }
      }
      else {
        if ((iVar5 == 1) && (*(uint *)(plVar13 + 8) <= *(uint *)(plVar13 + 0x16))) {
          UpgradePipeline::cancelRequest_async((UpgradePipeline *)(in_x0 + 0x3d8),uVar11);
          goto LAB_0096a710;
        }
LAB_0096a608:
        uVar1 = *(int *)((long)plVar13 + 0x3c) - 1;
        iVar5 = 0;
        if (uVar1 <= *(uint *)(plVar13 + 0x16)) {
          iVar5 = *(uint *)(plVar13 + 0x16) - uVar1;
        }
        DAT_0210ee64 = DAT_0210ee64 + iVar5;
      }
      plVar12 = (long *)*plVar12;
    } while (plVar12 != (long *)0x0);
  }
  return;
}


