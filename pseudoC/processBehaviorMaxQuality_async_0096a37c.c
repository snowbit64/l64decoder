// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processBehaviorMaxQuality_async
// Entry Point: 0096a37c
// Size: 580 bytes
// Signature: undefined processBehaviorMaxQuality_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processBehaviorMaxQuality_async() */

void TextureStreamingManager::processBehaviorMaxQuality_async(void)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  TextureStreamingManager *in_x0;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long **pplVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  int iVar13;
  long *plVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  long local_88;
  int local_7c;
  bool abStack_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  plVar11 = *(long **)(in_x0 + 0x238);
  DAT_0210ee64 = 0;
  if (plVar11 == (long *)0x0) {
    iVar13 = 0;
    local_88 = 0;
    local_7c = 0;
  }
  else {
    iVar13 = 0;
    local_7c = 0;
    local_88 = 0;
    do {
      uVar6 = *(ulong *)(in_x0 + 0x230);
      uVar12 = plVar11[2];
      if (uVar6 == 0) {
LAB_0096a4c8:
        plVar14 = (long *)0x0;
      }
      else {
        uVar16 = NEON_cnt(uVar6,1);
        uVar15 = NEON_uaddlv(uVar16,1);
        uVar5 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
        if (uVar5 < 2) {
          uVar8 = uVar6 - 1 & uVar12;
        }
        else {
          uVar8 = uVar12;
          if (uVar6 <= uVar12) {
            uVar8 = 0;
            if (uVar6 != 0) {
              uVar8 = uVar12 / uVar6;
            }
            uVar8 = uVar12 - uVar8 * uVar6;
          }
        }
        pplVar9 = *(long ***)(*(long *)(in_x0 + 0x228) + uVar8 * 8);
        if (pplVar9 == (long **)0x0) goto LAB_0096a4c8;
        plVar14 = *pplVar9;
        if (plVar14 != (long *)0x0) {
          do {
            uVar10 = plVar14[1];
            if (uVar10 == uVar12) {
              if (plVar14[2] == uVar12) break;
            }
            else {
              if (uVar5 < 2) {
                uVar10 = uVar10 & uVar6 - 1;
              }
              else if (uVar6 <= uVar10) {
                uVar2 = 0;
                if (uVar6 != 0) {
                  uVar2 = uVar10 / uVar6;
                }
                uVar10 = uVar10 - uVar2 * uVar6;
              }
              if (uVar10 != uVar8) goto LAB_0096a4c8;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
      iVar4 = CommonPipelineData::getTextureStatus_async
                        ((CommonPipelineData *)(in_x0 + 0x218),uVar12);
      if ((iVar4 == 0) ||
         ((iVar4 == 3 &&
          (uVar6 = DowngradePipeline::tryCancelRequest_async
                             ((DowngradePipeline *)(in_x0 + 0x688),uVar12), (uVar6 & 1) != 0)))) {
        if ((*(int *)((long)plVar14 + 0xb4) == 0) || (in_x0[8] != (TextureStreamingManager)0x0)) {
          iVar13 = iVar13 + 1;
        }
        else {
          uVar6 = computeMipRangeSize((StreamingDesc *)(plVar14 + 3),*(int *)((long)plVar14 + 0xb4))
          ;
          lVar7 = *(long *)(in_x0 + 0x220);
          uVar1 = *(uint *)(in_x0 + 0x5a8);
          iVar4 = *(int *)(in_x0 + 0x828);
          uVar5 = getSafeMemoryBudget(in_x0,0xc800000,abStack_6c);
          if ((lVar7 + (uVar6 & 0xffffffff) + (ulong)uVar1) - (long)iVar4 <= uVar5) {
            UpgradePipeline::tryCreateRequest_async
                      ((UpgradePipeline *)(in_x0 + 0x3d8),uVar12,*(uint *)((long)plVar14 + 0xb4));
            goto LAB_0096a3f8;
          }
          local_7c = local_7c + 1;
          local_88 = local_88 + (uVar6 & 0xffffffff);
        }
      }
      else {
LAB_0096a3f8:
        uVar1 = *(int *)((long)plVar14 + 0x3c) - 1;
        iVar4 = 0;
        if (uVar1 <= *(uint *)(plVar14 + 0x16)) {
          iVar4 = *(uint *)(plVar14 + 0x16) - uVar1;
        }
        DAT_0210ee64 = DAT_0210ee64 + iVar4;
      }
      plVar11 = (long *)*plVar11;
    } while (plVar11 != (long *)0x0);
  }
  DAT_0210ee30 = iVar13;
  DAT_0210ee78 = local_88;
  DAT_0210ee28 = local_7c;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


