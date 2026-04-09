// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRenderPassData
// Entry Point: 00acded0
// Size: 2496 bytes
// Signature: undefined __thiscall createRenderPassData(VulkanCommandBuffer * this, RenderTargetDesc * param_1, uint param_2, RenderPassData * param_3, uint * param_4)


/* VulkanCommandBuffer::createRenderPassData(RenderTargetDesc const&, unsigned int,
   VulkanCommandBuffer::RenderPassData&, unsigned int&) */

void __thiscall
VulkanCommandBuffer::createRenderPassData
          (VulkanCommandBuffer *this,RenderTargetDesc *param_1,uint param_2,RenderPassData *param_3,
          uint *param_4)

{
  uint uVar1;
  uint uVar2;
  RenderTargetDesc RVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  RenderPassData *pRVar13;
  long *plVar14;
  uint *puVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long *plVar22;
  LAYOUT LVar23;
  long *plVar24;
  float fVar25;
  uint local_45c;
  undefined8 local_458;
  uint local_450;
  uint local_44c;
  uint local_43c;
  long *local_438;
  uint local_428;
  undefined4 uStack_424;
  VkImageLayout aVStack_41c [4];
  uint local_418;
  uint uStack_414;
  uint local_410;
  LAYOUT local_40c;
  uint local_400;
  uint local_3fc;
  undefined8 local_3f8;
  undefined8 local_3f0;
  uint local_3e8;
  LAYOUT local_3e4;
  undefined4 local_3e0;
  undefined4 local_3d8 [2];
  undefined8 local_3d0;
  undefined4 local_3c8;
  undefined8 local_3c0;
  uint local_3b8;
  undefined8 *local_3b0;
  uint local_3a8;
  uint uStack_3a4;
  undefined4 local_3a0;
  undefined8 local_398;
  uint local_390;
  undefined4 local_38c;
  uint local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined8 local_378;
  undefined4 local_370;
  undefined8 local_368;
  uint local_360;
  uint *local_358;
  undefined8 *puStack_350;
  uint *local_348;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330 [2];
  undefined8 local_328;
  undefined4 local_320;
  uint local_31c;
  uint *local_318;
  undefined4 local_310;
  undefined8 *local_308;
  uint local_300;
  undefined8 *local_2f8;
  uint local_2f0;
  undefined local_2ec;
  uint local_2e8 [10];
  uint local_2c0;
  uint local_2bc;
  uint local_2b8;
  uint local_2b4;
  undefined8 local_2b0 [10];
  undefined8 local_260;
  uint local_240 [8];
  uint local_220 [3];
  undefined8 local_214;
  undefined8 local_20c;
  uint local_204 [93];
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  *(undefined8 *)(param_3 + 0xe0) = 0;
  *(undefined4 *)(param_3 + 0xec) = 0;
  local_330[0] = 0x26;
  *(undefined4 *)(param_3 + 0x168) = 0;
  local_3d8[0] = 0x25;
  uVar9 = *(uint *)param_1;
  local_328 = 0;
  local_320 = 0;
  local_378 = 0;
  local_370 = 0;
  local_368 = 0;
  local_340 = 0;
  local_338 = 0;
  local_398 = 0xffffffff;
  local_380 = 0;
  local_3d0 = 0;
  local_3c8 = 0;
  if (uVar9 == 0) {
    uVar11 = 0;
    uVar16 = 0;
    local_43c = 0;
    bVar6 = false;
    local_438 = (long *)0x0;
    local_458 = 0;
    local_450 = 0;
    local_44c = 0;
    local_45c = 0xffffffff;
  }
  else {
    uVar21 = 0;
    uVar16 = 0;
    uVar11 = 0;
    puVar15 = (uint *)(param_1 + 0x1c);
    local_45c = 0xffffffff;
    local_458 = 0;
    local_450 = 0;
    local_44c = 0;
    local_438 = (long *)0x0;
    bVar6 = false;
    local_43c = 0;
    do {
      if (*(char *)(puVar15 + 6) == '\0') {
        plVar22 = *(long **)(puVar15 + -5);
        if (local_438 == (long *)0x0) {
          local_45c = (**(code **)(*plVar22 + 0x58))(plVar22);
          local_43c = puVar15[1];
          local_438 = plVar22;
        }
        if (puVar15[2] == 1) {
          iVar7 = *(int *)(plVar22 + 0x15);
          if (iVar7 == 2) {
            pRVar13 = param_3 + (ulong)uVar16 * 0x10;
            *(int *)(pRVar13 + 0x40) = (int)*(float *)(plVar22 + 0xf);
            *(int *)(pRVar13 + 0x44) = (int)*(float *)((long)plVar22 + 0x7c);
            *(int *)(pRVar13 + 0x48) = (int)*(float *)(plVar22 + 0x10);
            fVar25 = *(float *)((long)plVar22 + 0x84);
          }
          else {
            if (iVar7 != 1) {
              if (iVar7 == 0) {
                *(undefined4 *)(param_3 + (ulong)uVar16 * 0x10 + 0x40) =
                     *(undefined4 *)(plVar22 + 0xf);
                *(undefined4 *)(param_3 + (ulong)uVar16 * 0x10 + 0x44) =
                     *(undefined4 *)((long)plVar22 + 0x7c);
                *(undefined4 *)(param_3 + (ulong)uVar16 * 0x10 + 0x48) =
                     *(undefined4 *)(plVar22 + 0x10);
                *(undefined4 *)(param_3 + (ulong)uVar16 * 0x10 + 0x4c) =
                     *(undefined4 *)((long)plVar22 + 0x84);
              }
              goto LAB_00ace0e4;
            }
            pRVar13 = param_3 + (ulong)uVar16 * 0x10;
            *(int *)(pRVar13 + 0x40) = (int)*(float *)(plVar22 + 0xf);
            *(int *)(pRVar13 + 0x44) = (int)*(float *)((long)plVar22 + 0x7c);
            *(int *)(pRVar13 + 0x48) = (int)*(float *)(plVar22 + 0x10);
            fVar25 = *(float *)((long)plVar22 + 0x84);
          }
          *(int *)(pRVar13 + 0x4c) = (int)fVar25;
        }
LAB_00ace0e4:
        uVar9 = puVar15[-1];
        VulkanTextureObject::acquireRenderTargetView
                  ((VulkanTextureObject *)plVar22,(RenderTargetView *)&local_3f0,local_43c,uVar9,
                   *puVar15);
        local_428 = 0;
        local_3f8 = 0;
        local_2b0[uVar16] = local_3f0;
        VulkanTextureObject::getLayoutDetails
                  (5,0xffffffff,(VkImageLayout *)&local_428,(uint *)((long)&local_3f8 + 4),
                   (uint *)&local_3f8);
        uVar20 = local_428;
        uVar19 = local_428;
        if (*(int *)(this + 0x1f0) != 1) {
          VulkanTextureObject::getLayoutDetails
                    (local_3e4,0xffffffff,(VkImageLayout *)&local_400,&local_418,&local_3fc);
          if (((puVar15[2] == 0) || ((uVar19 = local_400, puVar15[2] == 1 && (param_2 == 0)))) &&
             (iVar7 = (**(code **)(*plVar22 + 0x10))(plVar22), uVar19 = local_400, iVar7 != 1)) {
            if (VulkanTextureObject::s_layoutInfo[(ulong)local_3e4 * 0x10 + 0xc] == '\0') {
              uVar19 = 0;
              goto LAB_00ace194;
            }
            uVar19 = 0;
          }
          else {
LAB_00ace194:
            local_450 = local_3fc | local_450;
          }
          local_44c = local_418 | local_44c;
          local_458 = CONCAT44((uint)local_3f8 | local_458._4_4_,local_3f8._4_4_ | (uint)local_458);
        }
        uVar18 = (ulong)uVar16;
        uVar8 = *(uint *)(param_3 + 0x168);
        uVar17 = (ulong)uVar11;
        local_240[(ulong)uVar11 * 2] = uVar16;
        local_240[(ulong)uVar11 * 2 + 1] = local_428;
        *(long **)(param_3 + (ulong)uVar8 * 0x18 + 0x170) = plVar22;
        *(uint *)(param_3 + (ulong)uVar8 * 0x18 + 0x17c) = uVar9;
        *(undefined4 *)(param_3 + (ulong)uVar8 * 0x18 + 0x178) = 5;
        uVar9 = puVar15[1];
        *(uint *)(param_3 + 0x168) = uVar8 + 1;
        local_220[uVar18 * 9] = 0;
        local_220[uVar18 * 9 + 1] = local_3e8;
        *(uint *)(param_3 + (ulong)uVar8 * 0x18 + 0x180) = uVar9;
        uVar8 = (**(code **)(*plVar22 + 0x58))(plVar22);
        uVar9 = puVar15[2];
        local_220[uVar18 * 9 + 2] = uVar8;
        if (uVar9 == 0) {
          uVar12 = 2;
        }
        else {
          uVar12 = 0;
          if (uVar9 == 1) {
            uVar12 = (uint)(param_2 == 0);
          }
        }
        uVar1 = local_220[uVar18 * 9 + 1];
        lVar4 = uVar18 * 0x24;
        uVar2 = puVar15[3];
        plVar24 = *(long **)(puVar15 + -3);
        local_204[uVar18 * 9] = uVar19;
        local_204[uVar18 * 9 + 1] = uVar20;
        uVar9 = uVar16 + 1;
        uVar18 = (ulong)uVar9;
        *(undefined8 *)((long)&local_20c + lVar4) = 0x100000002;
        local_2e8[uVar17 * 2] = uVar1;
        local_2e8[uVar17 * 2 + 1] = uVar8;
        *(uint *)((long)&local_214 + lVar4) = uVar12;
        *(uint *)((long)&local_214 + lVar4 + 4) = (uint)(uVar2 == 0);
        if (plVar24 == (long *)0x0) {
          (&local_260)[uVar17] = 0xffffffff;
          uVar16 = uVar9;
        }
        else if (local_45c < 2) {
          uVar16 = uVar9;
          if (plVar22 != plVar24) {
            uVar16 = *(uint *)(param_3 + 0xec);
            *(uint *)(param_3 + 0xec) = uVar16 + 1;
            *(long **)(param_3 + (ulong)uVar16 * 0x18 + 0xf0) = plVar22;
            *(long **)(param_3 + (ulong)uVar16 * 0x18 + 0xf8) = plVar24;
            *(undefined4 *)(param_3 + (ulong)uVar16 * 0x18 + 0x100) = local_3e0;
            *(uint *)(param_3 + (ulong)uVar16 * 0x18 + 0x104) = local_43c;
            uVar16 = uVar9;
          }
        }
        else {
          VulkanTextureObject::acquireRenderTargetView
                    ((VulkanTextureObject *)plVar24,(RenderTargetView *)&local_418,0,0,0);
          uVar20 = local_428;
          iVar7 = *(int *)(this + 0x1f0);
          local_2b0[uVar18] = CONCAT44(uStack_414,local_418);
          if (iVar7 != 1) {
            VulkanTextureObject::getLayoutDetails
                      (local_40c,0xffffffff,aVStack_41c,&local_3fc,&local_400);
            local_44c = local_3fc | local_44c;
            uVar19 = local_400;
            if (VulkanTextureObject::s_layoutInfo[(ulong)local_40c * 0x10 + 0xc] != '\0') {
              uVar19 = 0;
            }
            local_450 = uVar19 | local_450;
          }
          uVar19 = *(uint *)(param_3 + 0x168);
          *(uint *)(&local_260 + uVar17) = uVar9;
          *(uint *)((long)&local_260 + uVar17 * 8 + 4) = local_428;
          *(uint *)(param_3 + 0x168) = uVar19 + 1;
          *(long **)(param_3 + (ulong)uVar19 * 0x18 + 0x170) = plVar24;
          *(undefined8 *)(param_3 + (ulong)uVar19 * 0x18 + 0x178) = 5;
          *(undefined4 *)(param_3 + (ulong)uVar19 * 0x18 + 0x180) = 0;
          local_220[uVar18 * 9] = 0;
          local_220[uVar18 * 9 + 1] = local_410;
          uVar9 = (**(code **)(*plVar24 + 0x58))(plVar24);
          local_220[uVar18 * 9 + 2] = uVar9;
          local_204[uVar18 * 9] = 0;
          local_204[uVar18 * 9 + 1] = uVar20;
          *(undefined8 *)((long)&local_20c + uVar18 * 0x24) = 0x100000002;
          *(undefined8 *)((long)&local_214 + uVar18 * 0x24) = 2;
          bVar6 = true;
          uVar16 = uVar16 + 2;
        }
        uVar11 = uVar11 + 1;
        uVar9 = *(uint *)param_1;
      }
      uVar21 = uVar21 + 1;
      puVar15 = puVar15 + 0xc;
    } while (uVar21 < uVar9);
  }
  plVar22 = *(long **)(param_1 + 200);
  if (plVar22 == (long *)0x0) {
    puVar15 = (uint *)0x0;
  }
  else {
    plVar24 = plVar22;
    if (local_438 != (long *)0x0) {
      plVar24 = local_438;
    }
    if (*(int *)(param_1 + 0xd8) == 1) {
      *(undefined4 *)(param_3 + (ulong)uVar16 * 0x10 + 0x40) = *(undefined4 *)(plVar22 + 0x11);
    }
    uVar21 = (ulong)uVar16;
    VulkanTextureObject::acquireRenderTargetView
              ((VulkanTextureObject *)plVar22,(RenderTargetView *)&local_3f0,0,0,0);
    RVar3 = param_1[0xe8];
    local_2b0[uVar21] = local_3f0;
    if (RVar3 == (RenderTargetDesc)0x0) {
      LVar23 = 6;
    }
    else {
      LVar23 = 7;
      *(long **)(param_3 + 0xe0) = plVar22;
    }
    local_428 = 0;
    local_3f8 = 0;
    VulkanTextureObject::getLayoutDetails
              (LVar23,0xffffffff,(VkImageLayout *)&local_428,(uint *)((long)&local_3f8 + 4),
               (uint *)&local_3f8);
    uVar9 = local_428;
    uVar20 = local_428;
    if (*(int *)(this + 0x1f0) != 1) {
      VulkanTextureObject::getLayoutDetails
                (local_3e4,0xffffffff,(VkImageLayout *)&local_400,&local_418,&local_3fc);
      if (((*(int *)(param_1 + 0xd8) != 0) && ((*(int *)(param_1 + 0xd8) != 1 || (param_2 != 0))))
         || (local_400 = 0, VulkanTextureObject::s_layoutInfo[(ulong)local_3e4 * 0x10 + 0xc] == '\0'
            )) {
        local_450 = local_3fc | local_450;
      }
      local_44c = local_418 | local_44c;
      local_458 = CONCAT44((uint)local_3f8 | local_458._4_4_,local_3f8._4_4_ | (uint)local_458);
      uVar20 = local_400;
    }
    uStack_414 = local_428;
    uVar19 = *(uint *)(param_3 + 0x168);
    local_220[uVar21 * 9] = 0;
    *(uint *)(param_3 + 0x168) = uVar19 + 1;
    *(long **)(param_3 + (ulong)uVar19 * 0x18 + 0x170) = plVar22;
    *(LAYOUT *)(param_3 + (ulong)uVar19 * 0x18 + 0x178) = LVar23;
    *(undefined4 *)(param_3 + (ulong)uVar19 * 0x18 + 0x180) = 0;
    *(undefined4 *)(param_3 + (ulong)uVar19 * 0x18 + 0x17c) = 0;
    local_220[uVar21 * 9 + 1] = local_3e8;
    local_418 = uVar16;
    local_2bc = (**(code **)(*plVar22 + 0x58))(plVar22);
    iVar7 = *(int *)(param_1 + 0xd8);
    local_220[uVar21 * 9 + 2] = local_2bc;
    if (iVar7 == 0) {
      uVar19 = 2;
    }
    else {
      uVar19 = 0;
      if (iVar7 == 1) {
        uVar19 = (uint)(param_2 == 0);
      }
    }
    local_2c0 = local_220[uVar21 * 9 + 1];
    lVar4 = uVar21 * 0x24;
    iVar7 = *(int *)(param_1 + 0xdc);
    uVar16 = uVar16 + 1;
    plVar14 = *(long **)(param_1 + 0xd0);
    local_204[uVar21 * 9] = uVar20;
    local_204[uVar21 * 9 + 1] = uVar9;
    *(undefined8 *)((long)&local_20c + lVar4) = 0x100000002;
    *(uint *)((long)&local_214 + lVar4) = uVar19;
    *(uint *)((long)&local_214 + lVar4 + 4) = (uint)(iVar7 == 0);
    if (((plVar14 != (long *)0x0) && (local_45c < 2)) && (plVar22 != plVar14)) {
      uVar9 = *(uint *)(param_3 + 0xec);
      *(uint *)(param_3 + 0xec) = uVar9 + 1;
      *(long **)(param_3 + (ulong)uVar9 * 0x18 + 0xf0) = plVar22;
      *(long **)(param_3 + (ulong)uVar9 * 0x18 + 0xf8) = plVar14;
      *(undefined8 *)(param_3 + (ulong)uVar9 * 0x18 + 0x100) = 0;
    }
    puVar15 = &local_418;
    local_438 = plVar24;
  }
  uVar10 = (**(code **)(*local_438 + 0x58))();
  local_358 = local_240;
  puStack_350 = &local_260;
  *(uint *)(param_3 + 0x260) = uVar11;
  if (!bVar6) {
    puStack_350 = (undefined8 *)0x0;
  }
  *(undefined4 *)(param_3 + 0xe8) = uVar10;
  local_318 = local_220;
  local_308 = &local_378;
  local_310 = 1;
  if (*(int *)(this + 0x1f0) == 0) {
    local_390 = local_44c;
    local_38c = (uint)local_458;
    local_2f8 = &local_398;
    local_388 = local_450;
    local_384 = local_458._4_4_;
  }
  else {
    local_2f8 = (undefined8 *)0x0;
  }
  local_300 = (uint)(*(int *)(this + 0x1f0) == 0);
  local_2b8 = local_44c;
  local_2b4 = local_450;
  local_360 = uVar11;
  local_348 = puVar15;
  local_31c = uVar16;
  local_2f0 = uVar11;
  local_2ec = plVar22 != (long *)0x0;
  uVar9 = registerRenderPassDesc(this,(RenderPassDesc *)&local_2f0);
  *param_4 = uVar9;
  (*vkCreateRenderPass)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),local_330,0,&local_3f0);
  uVar9 = (**(code **)(*local_438 + 0x20))(local_438);
  uVar9 = uVar9 >> (ulong)(local_43c & 0x1f);
  uVar11 = (**(code **)(*local_438 + 0x28))(local_438);
  local_3b0 = local_2b0;
  uVar11 = uVar11 >> (ulong)(local_43c & 0x1f);
  local_3c0 = local_3f0;
  local_3a0 = 1;
  local_3b8 = uVar16;
  local_3a8 = uVar9;
  uStack_3a4 = uVar11;
  (*vkCreateFramebuffer)(*(undefined8 *)(*(long *)(this + 0x98) + 0x18),local_3d8,0,&local_428);
  *(undefined4 *)param_3 = 0x2b;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = local_3f0;
  *(uint *)(param_3 + 0x28) = uVar9;
  *(uint *)(param_3 + 0x2c) = uVar11;
  *(ulong *)(param_3 + 0x18) = CONCAT44(uStack_424,local_428);
  *(undefined8 *)(param_3 + 0x20) = 0;
  *(uint *)(param_3 + 0x30) = uVar16;
  *(RenderPassData **)(param_3 + 0x38) = param_3 + 0x40;
  if (*(long *)(lVar5 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


