// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processNeedingTextures_async
// Entry Point: 0096b690
// Size: 1216 bytes
// Signature: undefined processNeedingTextures_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::processNeedingTextures_async() */

void TextureStreamingManager::processNeedingTextures_async(void)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  TextureStreamingManager *in_x0;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long **pplVar11;
  undefined *puVar12;
  void *pvVar13;
  long lVar14;
  long *plVar15;
  uint *puVar16;
  uint uVar17;
  undefined *puVar18;
  undefined2 uVar19;
  undefined8 uVar20;
  int local_c1c;
  long local_c18;
  undefined8 local_c08;
  undefined8 *puStack_c00;
  undefined local_bf8;
  uint local_b00 [332];
  void *local_5d0;
  void *local_5c8;
  undefined8 local_5c0;
  uint local_5b8 [332];
  void *local_88;
  void *local_80;
  undefined8 local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  if (in_x0[0x7c] == (TextureStreamingManager)0x0) {
    puVar16 = *(uint **)(in_x0 + 0x178);
    puVar2 = *(uint **)(in_x0 + 0x180);
    local_5b8[0] = 0;
    local_88 = (void *)0x0;
    local_78 = 0;
    local_80 = (void *)0x0;
    local_b00[0] = 0;
    local_5d0 = (void *)0x0;
    local_5c0 = 0;
    local_5c8 = (void *)0x0;
    if (puVar16 == puVar2) {
      local_c18 = 0;
      local_c1c = 0;
    }
    else {
      local_c1c = 0;
      local_c18 = 0;
      do {
        puVar18 = *(undefined **)(puVar16 + 4);
                    /* try { // try from 0096b738 to 0096b75b has its CatchHandler @ 0096bb88 */
        iVar6 = CommonPipelineData::getTextureStatus_async
                          ((CommonPipelineData *)(in_x0 + 0x218),(ulonglong)puVar18);
        if ((iVar6 == 0) ||
           ((iVar6 == 3 &&
            (uVar7 = DowngradePipeline::tryCancelRequest_async
                               ((DowngradePipeline *)(in_x0 + 0x688),(ulonglong)puVar18),
            (uVar7 & 1) != 0)))) {
          puVar9 = *(undefined **)(in_x0 + 0x230);
          if (puVar9 == (undefined *)0x0) {
LAB_0096b804:
            plVar15 = (long *)0x0;
          }
          else {
            uVar20 = NEON_cnt(puVar9,1);
            uVar19 = NEON_uaddlv(uVar20,1);
            uVar7 = CONCAT62((int6)((ulong)uVar20 >> 0x10),uVar19) & 0xffffffff;
            if (uVar7 < 2) {
              puVar10 = (undefined *)((ulong)(puVar9 + -1) & (ulong)puVar18);
            }
            else {
              puVar10 = puVar18;
              if (puVar9 <= puVar18) {
                uVar8 = 0;
                if (puVar9 != (undefined *)0x0) {
                  uVar8 = (ulong)puVar18 / (ulong)puVar9;
                }
                puVar10 = puVar18 + -(uVar8 * (long)puVar9);
              }
            }
            pplVar11 = *(long ***)(*(long *)(in_x0 + 0x228) + (long)puVar10 * 8);
            if (pplVar11 == (long **)0x0) goto LAB_0096b804;
            plVar15 = *pplVar11;
            if (plVar15 != (long *)0x0) {
              do {
                puVar12 = (undefined *)plVar15[1];
                if (puVar12 == puVar18) {
                  if ((undefined *)plVar15[2] == puVar18) break;
                }
                else {
                  if (uVar7 < 2) {
                    puVar12 = (undefined *)((ulong)puVar12 & (ulong)(puVar9 + -1));
                  }
                  else if (puVar9 <= puVar12) {
                    uVar8 = 0;
                    if (puVar9 != (undefined *)0x0) {
                      uVar8 = (ulong)puVar12 / (ulong)puVar9;
                    }
                    puVar12 = puVar12 + -(uVar8 * (long)puVar9);
                  }
                  if (puVar12 != puVar10) goto LAB_0096b804;
                }
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
          }
          uVar4 = *(uint *)(undefined8 *)((long)plVar15 + 0xb4);
          if ((uVar4 == 0) || (in_x0[8] != (TextureStreamingManager)0x0)) {
                    /* try { // try from 0096b8f0 to 0096b91b has its CatchHandler @ 0096bb60 */
            if ((in_x0[8] == (TextureStreamingManager)0x0) &&
               (((local_5b8[0] < 5 && (uVar4 == 0)) &&
                (uVar4 = *(uint *)(plVar15 + 10) >>
                         (ulong)(*(int *)(plVar15 + 0xc) - *(int *)(plVar15 + 0x16) & 0x1f),
                uVar3 = *(uint *)((long)plVar15 + 0x54) >>
                        (ulong)(*(int *)(plVar15 + 0xc) - *(int *)(plVar15 + 0x16) & 0x1f),
                local_c08 = puVar18,
                iVar6 = FUN_00965554(&puStack_c00,0x100,0x100,"%ux%u => %ux%u",uVar4,uVar3,
                                     uVar4 << (ulong)(*puVar16 & 0x1f),
                                     uVar3 << (ulong)(*puVar16 & 0x1f)), 0 < iVar6)))) {
              SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u>::push_back
                        ((SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u> *)
                         local_5b8,(TextureAndFeedback *)&local_c08);
            }
          }
          else {
            lVar14 = *(long *)(in_x0 + 0x220);
            uVar3 = *(uint *)(in_x0 + 0x5a8);
            puVar1 = (undefined8 *)((long)plVar15 + 0xb4);
            if (*puVar16 <= uVar4) {
              puVar1 = &local_c08;
            }
            local_c08 = (undefined *)CONCAT44(local_c08._4_4_,*puVar16);
            uVar4 = *(uint *)puVar1;
            iVar6 = *(int *)(in_x0 + 0x828);
                    /* try { // try from 0096b840 to 0096b84f has its CatchHandler @ 0096bb70 */
            uVar7 = getSafeMemoryBudget(in_x0,0xc800000,(bool *)&local_c08);
            if (uVar4 == 0) {
              uVar17 = 0;
            }
            else {
              uVar17 = uVar4;
              do {
                    /* try { // try from 0096b868 to 0096b873 has its CatchHandler @ 0096bb8c */
                uVar8 = computeMipRangeSize((StreamingDesc *)(plVar15 + 3),uVar17);
                uVar8 = ((lVar14 + (ulong)uVar3) - (long)iVar6) + (uVar8 & 0xffffffff);
                uVar17 = uVar17 - (uVar7 <= uVar8);
                if (uVar8 < uVar7) break;
              } while (uVar17 != 0);
              if (uVar17 != 0) {
                    /* try { // try from 0096b898 to 0096b8a7 has its CatchHandler @ 0096bb64 */
                UpgradePipeline::tryCreateRequest_async
                          ((UpgradePipeline *)(in_x0 + 0x3d8),(ulonglong)puVar18,uVar17);
              }
            }
            if (uVar17 != uVar4) {
                    /* try { // try from 0096b934 to 0096b93f has its CatchHandler @ 0096bb6c */
              uVar7 = computeMipRangeSize((StreamingDesc *)(plVar15 + 3),uVar4);
              local_c18 = local_c18 + (uVar7 & 0xffffffff);
              local_c1c = local_c1c + 1;
                    /* try { // try from 0096b99c to 0096b9c7 has its CatchHandler @ 0096bb68 */
              if ((local_b00[0] < 5) &&
                 (uVar3 = *(uint *)(plVar15 + 10) >>
                          (ulong)(*(int *)(plVar15 + 0xc) - *(int *)(plVar15 + 0x16) & 0x1f),
                 uVar17 = *(uint *)((long)plVar15 + 0x54) >>
                          (ulong)(*(int *)(plVar15 + 0xc) - *(int *)(plVar15 + 0x16) & 0x1f),
                 local_c08 = puVar18,
                 iVar6 = FUN_00965554((double)((float)(uVar7 & 0xffffffff) * 9.536743e-07),
                                      &puStack_c00,0x100,0x100,"%ux%u => %ux%u +%.2f MB",uVar3,
                                      uVar17,uVar3 << (ulong)(uVar4 & 0x1f),
                                      uVar17 << (ulong)(uVar4 & 0x1f)), 0 < iVar6)) {
                SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u>::push_back
                          ((SmallVector<TextureStreamingManager::Stats::TextureAndFeedback,5u> *)
                           local_b00,(TextureAndFeedback *)&local_c08);
              }
            }
          }
        }
        puVar16 = puVar16 + 6;
      } while (puVar16 != puVar2);
    }
    local_bf8 = 0;
    local_c08 = &DAT_0210f820;
    puStack_c00 = &DAT_0210f848;
                    /* try { // try from 0096b9f4 to 0096b9f7 has its CatchHandler @ 0096bb5c */
    Mutex::enterCriticalSection();
    pvVar13 = (void *)((ulong)local_5b8 | 4);
    if (5 < (ulong)local_5b8[0]) {
      pvVar13 = local_88;
    }
    DAT_0210f850 = DAT_0210f848;
    if (local_5b8[0] != 0) {
      lVar14 = (ulong)local_5b8[0] * 0x108;
      do {
                    /* try { // try from 0096ba2c to 0096ba37 has its CatchHandler @ 0096bb78 */
        FUN_0096cab8(&DAT_0210f848,pvVar13);
        pvVar13 = (void *)((long)pvVar13 + 0x108);
        lVar14 = lVar14 + -0x108;
      } while (lVar14 != 0);
    }
    DAT_0210ee28 = (int)((ulong)(*(long *)(in_x0 + 0x180) - *(long *)(in_x0 + 0x178)) >> 3) *
                   -0x55555555;
                    /* try { // try from 0096ba68 to 0096ba6b has its CatchHandler @ 0096bb58 */
    Mutex::leaveCriticalSection();
    local_c08 = &DAT_0210f860;
    puStack_c00 = &DAT_0210f888;
    local_bf8 = 0;
                    /* try { // try from 0096ba84 to 0096ba87 has its CatchHandler @ 0096bb54 */
    Mutex::enterCriticalSection();
    pvVar13 = (void *)((ulong)local_b00 | 4);
    if (5 < (ulong)local_b00[0]) {
      pvVar13 = local_5d0;
    }
    DAT_0210f890 = DAT_0210f888;
    if (local_b00[0] != 0) {
      lVar14 = (ulong)local_b00[0] * 0x108;
      do {
                    /* try { // try from 0096babc to 0096bac7 has its CatchHandler @ 0096bb74 */
        FUN_0096cab8(&DAT_0210f888,pvVar13);
        pvVar13 = (void *)((long)pvVar13 + 0x108);
        lVar14 = lVar14 + -0x108;
      } while (lVar14 != 0);
    }
    DAT_0210ee78 = local_c18;
    DAT_0210ee3c = local_c1c;
                    /* try { // try from 0096baec to 0096baef has its CatchHandler @ 0096bb50 */
    Mutex::leaveCriticalSection();
    local_b00[0] = 0;
    if (local_5d0 != (void *)0x0) {
      local_5c8 = local_5d0;
      operator_delete(local_5d0);
    }
    local_5b8[0] = 0;
    if (local_88 != (void *)0x0) {
      local_80 = local_88;
      operator_delete(local_88);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


