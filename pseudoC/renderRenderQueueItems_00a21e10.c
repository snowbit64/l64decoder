// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderRenderQueueItems
// Entry Point: 00a21e10
// Size: 3408 bytes
// Signature: undefined __thiscall renderRenderQueueItems(RenderQueue * this, RenderQueueItemAllocator * param_1, RenderTargetData * param_2, uint param_3, char * param_4, RenderStats * param_5, ICommandBuffer * param_6, IStructBuffer * param_7, uint param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenderQueue::renderRenderQueueItems(RenderQueueItemAllocator const&,
   RenderQueue::RenderTargetData const&, unsigned int, char const*, RenderStats&, ICommandBuffer*,
   IStructBuffer*, unsigned int) const */

void __thiscall
RenderQueue::renderRenderQueueItems
          (RenderQueue *this,RenderQueueItemAllocator *param_1,RenderTargetData *param_2,
          uint param_3,char *param_4,RenderStats *param_5,ICommandBuffer *param_6,
          IStructBuffer *param_7,uint param_8)

{
  uint uVar1;
  long *plVar2;
  MaterialShader *pMVar3;
  MaterialShader **ppMVar4;
  MaterialShader *pMVar5;
  uint uVar6;
  MaterialShader MVar7;
  MaterialShader MVar8;
  short sVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined auVar13 [16];
  undefined auVar14 [12];
  int iVar15;
  RenderPathManager *this_00;
  uint *puVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined4 *puVar21;
  ulong uVar22;
  MaterialShader **ppMVar23;
  long lVar24;
  uint uVar25;
  uint uVar26;
  MaterialShader *pMVar27;
  int *piVar28;
  uint uVar29;
  MaterialShader **ppMVar30;
  int *piVar31;
  GsMaterial *this_01;
  undefined auVar32 [16];
  undefined8 local_108;
  MaterialShader *local_f0;
  int local_e4;
  MaterialShader *local_d0;
  int local_90 [4];
  undefined4 uStack_80;
  uint uStack_7c;
  uint local_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  *(int *)(param_5 + 0x24) = *(int *)(param_5 + 0x24) + 1;
  (**(code **)(*(long *)param_6 + 0xd8))(param_6,param_4);
  this_00 = (RenderPathManager *)RenderPathManager::getInstance();
  puVar16 = (uint *)RenderPathManager::getRenderPass(this_00,param_3);
  lVar17 = RenderPathManager::getRenderPassMaterialAttributes(this_00,*puVar16);
  uVar18 = RenderPathManager::getBlendState(this_00,puVar16[1],*(bool *)(lVar17 + 5));
  (**(code **)(*(long *)param_6 + 0xc0))(param_6,uVar18);
  (**(code **)(*(long *)param_6 + 0xb0))(param_6,*(undefined8 *)(puVar16 + 2));
  uVar18 = RenderController::getShadowMap();
  if (param_3 - 2 < 4) {
    local_108 = *(undefined8 *)(*(long *)(this + 8) + 0xf0);
  }
  else {
    local_108 = 0;
  }
  lVar17 = *(long *)(this + 0x28);
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_78 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uVar6 = *(uint *)(lVar17 + 0x3d0);
  if ((uVar6 < 5) && (uVar26 = *(uint *)(lVar17 + 0x3d4), uVar26 < 3)) {
    lVar17 = (**(code **)(***(long ***)(lVar17 + 0x3a0) + 0x28))();
    uVar29 = *(uint *)(lVar17 + (ulong)*(uint *)(*(long *)(this + 0x28) + 0x3d0) * 8 + 0xa8);
    if (0 < (int)uVar29) {
      if (uVar26 == 1) {
        uVar26 = 3;
        auVar32._8_4_ = 3;
        auVar32._0_8_ = 0x200000001;
        auVar32._12_4_ = 4;
        uVar25 = 5;
      }
      else if (uVar26 == 0) {
        uVar25 = 5;
        uVar26 = 6;
        auVar32 = _DAT_004c4340;
      }
      else {
        if ((*(byte *)(*(long *)(this + 0x28) + 0x3a8) >> 3 & 1) == 0) {
          uVar26 = 0;
          auVar32 = _DAT_004c4dd0;
        }
        else {
          uVar26 = 1;
          if ((*(byte *)(*(long *)(this + 8) + 0x90) & 1) == 0) {
            uVar26 = 2;
          }
          auVar14._4_8_ = 0;
          auVar14._0_4_ = uVar26;
          auVar32._0_12_ = auVar14 << 0x40;
          auVar32._12_4_ = 1;
        }
        uVar25 = 2;
      }
      uStack_7c = uVar29;
      if (uVar25 <= uVar29) {
        uStack_7c = uVar25;
      }
      auVar13._4_4_ = uVar29;
      auVar13._0_4_ = uVar29;
      auVar13._8_4_ = uVar29;
      auVar13._12_4_ = uVar29;
      auVar32 = NEON_umin(auVar13,auVar32,4);
      if (uVar26 <= uVar29) {
        uVar29 = uVar26;
      }
      local_90[0] = 0;
      local_78 = uVar29;
      local_90[3] = auVar32._8_4_;
      uStack_80 = auVar32._12_4_;
      local_90[1] = auVar32._0_4_;
      local_90[2] = auVar32._4_4_;
    }
  }
  if (*(char *)(*(long *)(this + 0x10) + 0x50) != '\0') {
    RenderTextureController::getRefractionTexture();
  }
  plVar2 = *(long **)(param_1 + 0x58);
  ppMVar23 = (MaterialShader **)**(long **)(param_1 + 0x60);
  ppMVar4 = (MaterialShader **)(*(long **)(param_1 + 0x60))[1];
  if (ppMVar4 == ppMVar23) {
joined_r0x00a227a4:
    for (; ppMVar23 != ppMVar4; ppMVar23 = ppMVar23 + (ulong)uVar6 * 5) {
      lVar17 = *plVar2 + ((ulong)*(uint *)((long)ppMVar23 + 0x24) & 0x3fffffff) * 0xf0;
      uVar6 = *(uint *)(lVar17 + 0x9c);
      iVar15 = (**(code **)(**(long **)(*ppMVar23 + 0x88) + 0x58))();
      *(int *)(param_5 + 0x78) =
           *(int *)(param_5 + 0x78) + *(int *)(lVar17 + 0x9c) * iVar15 * *(int *)(lVar17 + 0x70);
    }
  }
  else {
    local_f0 = (MaterialShader *)0x0;
    local_d0 = (MaterialShader *)0x0;
    pMVar27 = (MaterialShader *)0x0;
    local_e4 = 7;
    ppMVar30 = ppMVar23;
    do {
      lVar17 = *plVar2;
      pMVar3 = *ppMVar30;
      pMVar5 = ppMVar30[1];
      uVar22 = (ulong)*(uint *)((long)ppMVar30 + 0x24) & 0x3fffffff;
      lVar24 = lVar17 + uVar22 * 0xf0;
      puVar16 = (uint *)(lVar24 + 0x9c);
      this_01 = *(GsMaterial **)(lVar24 + 0x90);
      ppMVar23 = ppMVar30 + (ulong)*puVar16 * 5;
      if (local_d0 == pMVar3) {
        if (local_f0 != ppMVar30[2]) goto LAB_00a2238c;
LAB_00a223ac:
        if (*(float *)(lVar17 + uVar22 * 0xf0 + 0xd0) == 0.0) {
          iVar15 = local_90[*(uint *)(this_01 + 0x170)];
          uVar20 = GsMaterial::getIsAlphaTested();
          if (((uVar20 & 1) != 0) && (1 < uVar6)) goto LAB_00a223e8;
        }
        else {
LAB_00a223e8:
          iVar15 = 0;
        }
        if (local_e4 != iVar15) {
          (**(code **)(*(long *)param_6 + 200))(param_6,iVar15);
          local_e4 = iVar15;
        }
        if (pMVar27 != pMVar5) {
          (**(code **)(*(long *)param_6 + 0xb8))(param_6,pMVar5);
          pMVar27 = pMVar5;
        }
        MVar7 = pMVar3[0x30];
        MVar8 = pMVar3[0x31];
        if (pMVar3[0x2f] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x60))
                    (param_6,pMVar3[0x2f],*(undefined8 *)(lVar17 + uVar22 * 0xf0 + 0xb0));
        }
        if (MVar7 != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x90))
                    (param_6,MVar7,*(undefined8 *)(lVar17 + uVar22 * 0xf0 + 0xb8));
        }
        if (MVar8 != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x90))(param_6,MVar8,param_7);
        }
        iVar15 = (**(code **)(**(long **)(pMVar3 + 0x88) + 0x58))();
        piVar28 = (int *)(lVar17 + uVar22 * 0xf0 + 0x70);
        uVar26 = *(int *)(param_5 + 0x78) + *puVar16 * iVar15 * *piVar28;
        if (180000000 < uVar26) goto joined_r0x00a227a4;
        lVar24 = lVar17 + uVar22 * 0xf0;
        *(uint *)(param_5 + 0x78) = uVar26;
        piVar31 = (int *)(lVar24 + 0x34);
        (**(code **)(*(long *)param_6 + 0x50))
                  (param_6,lVar24 + 0x38,*piVar31,*(undefined8 *)(lVar24 + 0x80));
        (**(code **)(*(long *)param_6 + 0x58))(param_6,*(undefined8 *)(lVar24 + 0x78));
        if (*(int *)(lVar24 + 0x30) == 1) {
          lVar17 = lVar17 + uVar22 * 0xf0;
          uVar26 = *(uint *)(lVar17 + 200);
          if (uVar26 != 0) {
            uVar29 = 0;
            uVar25 = *(uint *)(lVar17 + 0xcc);
            piVar28 = (int *)(lVar17 + 0xc0);
            uVar10 = uVar26;
            do {
              sVar9 = *(short *)(pMVar3 + 0x2c);
              uVar1 = uVar25;
              if (uVar10 <= uVar25) {
                uVar1 = uVar10;
              }
              if (sVar9 != -1) {
                piVar31 = (int *)(**(code **)(*(long *)param_6 + 0xa0))
                                           (param_6,sVar9,*(undefined8 *)(this + 0x60));
                *piVar31 = *piVar28;
                piVar31[1] = uVar29 + *(int *)(lVar17 + 0xc4);
                piVar31[2] = *piVar28 * uVar1 + -1;
                (**(code **)(*(long *)param_6 + 0xa8))(param_6,sVar9,*(undefined8 *)(this + 0x60));
              }
              (**(code **)(*(long *)param_6 + 0xe8))
                        (param_6,*(int *)(lVar17 + 100) * uVar1,0,*(uint *)(lVar17 + 0x74),0,0);
              uVar29 = uVar29 + uVar25;
              uVar10 = uVar10 - uVar25;
              uVar11 = 0;
              if (*(uint *)(RenderDeviceUtil::VERTICES_PER_PRIMITIVE_TYPE_RATIO +
                           (ulong)*(uint *)(lVar17 + 0x74) * 4) != 0) {
                uVar11 = (*(int *)(lVar17 + 100) * uVar1) /
                         *(uint *)(RenderDeviceUtil::VERTICES_PER_PRIMITIVE_TYPE_RATIO +
                                  (ulong)*(uint *)(lVar17 + 0x74) * 4);
              }
              *(uint *)(param_5 + 0x3c) = *(int *)(param_5 + 0x3c) + uVar11;
              iVar15 = *piVar28;
              *(int *)(param_5 + 0x2c) = *(int *)(param_5 + 0x2c) + 1;
              *(uint *)(param_5 + 0x34) = *(int *)(param_5 + 0x34) + uVar1;
              *(uint *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + iVar15 * uVar1;
            } while (uVar29 < uVar26);
          }
        }
        else {
          if (*(int *)(lVar24 + 0x30) == 0) {
            lVar17 = lVar17 + uVar22 * 0xf0;
            (**(code **)(*(long *)param_6 + 0xf0))
                      (param_6,*(undefined4 *)(lVar17 + 100),*(undefined4 *)(lVar17 + 0x68),*puVar16
                       ,*(undefined4 *)(lVar17 + 0xa4),*(undefined4 *)(lVar17 + 0x74));
            uVar26 = *puVar16;
            uVar29 = 0;
            if (*(uint *)(RenderDeviceUtil::VERTICES_PER_PRIMITIVE_TYPE_RATIO +
                         (ulong)*(uint *)(lVar17 + 0x74) * 4) != 0) {
              uVar29 = (*(int *)(lVar17 + 100) * uVar26) /
                       *(uint *)(RenderDeviceUtil::VERTICES_PER_PRIMITIVE_TYPE_RATIO +
                                (ulong)*(uint *)(lVar17 + 0x74) * 4);
            }
            *(uint *)(param_5 + 0x3c) = *(int *)(param_5 + 0x3c) + uVar29;
            *(uint *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + *piVar28 * uVar26;
            *(ulong *)(param_5 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_5 + 0x28) + *piVar31);
          }
          else {
            sVar9 = *(short *)(pMVar3 + 0x2a);
            if (sVar9 != -1) {
              puVar21 = (undefined4 *)
                        (**(code **)(*(long *)param_6 + 0xa0))
                                  (param_6,sVar9,*(undefined8 *)(this + 0x58));
              *puVar21 = *(undefined4 *)(lVar17 + uVar22 * 0xf0 + 0xa8);
              (**(code **)(*(long *)param_6 + 0xa8))(param_6,sVar9,*(undefined8 *)(this + 0x58));
            }
            lVar17 = lVar17 + uVar22 * 0xf0;
            (**(code **)(*(long *)param_6 + 0xf0))
                      (param_6,*(undefined4 *)(lVar17 + 100),*(undefined4 *)(lVar17 + 0x68),
                       *(undefined4 *)(lVar17 + 0x98),0,*(undefined4 *)(lVar17 + 0x74));
            uVar26 = *puVar16;
            uVar29 = 0;
            if (*(uint *)(RenderDeviceUtil::VERTICES_PER_PRIMITIVE_TYPE_RATIO +
                         (ulong)*(uint *)(lVar17 + 0x74) * 4) != 0) {
              uVar29 = (*(int *)(lVar17 + 100) * uVar26) /
                       *(uint *)(RenderDeviceUtil::VERTICES_PER_PRIMITIVE_TYPE_RATIO +
                                (ulong)*(uint *)(lVar17 + 0x74) * 4);
            }
            *(uint *)(param_5 + 0x3c) = *(int *)(param_5 + 0x3c) + uVar29;
            *(uint *)(param_5 + 0x40) = *(int *)(param_5 + 0x40) + *piVar28 * uVar26;
            *(ulong *)(param_5 + 0x28) =
                 CONCAT44((int)((ulong)*(undefined8 *)(param_5 + 0x28) >> 0x20) + 1,
                          (int)*(undefined8 *)(param_5 + 0x28) + *piVar31);
            uVar26 = *(uint *)(lVar17 + 0x98);
          }
          *(uint *)(param_5 + 0x30) = *(int *)(param_5 + 0x30) + uVar26;
        }
      }
      else {
        (**(code **)(*(long *)param_6 + 0x48))(param_6,*(undefined8 *)(pMVar3 + 0x88));
        (**(code **)(*(long *)param_6 + 0x88))
                  (param_6,*(undefined2 *)(pMVar3 + 0x26),*(undefined8 *)(this + 0x50));
        MVar7 = pMVar3[0x32];
        MVar8 = pMVar3[0x42];
        uVar19 = RenderController::getStructBufferForThreadIx(*(RenderController **)this,param_8);
        if (MVar7 != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x90))(param_6,MVar7,uVar19);
        }
        if (MVar8 != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x98))(param_6,MVar8,uVar19);
        }
        if (*(long *)(this + 0x20) != 0) {
          if (pMVar3[0x3c] != (MaterialShader)0xff) {
            (**(code **)(*(long *)param_6 + 0x68))
                      (param_6,pMVar3[0x3c],*(undefined8 *)(*(long *)(this + 0x20) + 0x60));
          }
          if (pMVar3[0x3d] != (MaterialShader)0xff) {
            (**(code **)(*(long *)param_6 + 0x68))
                      (param_6,pMVar3[0x3d],*(undefined8 *)(*(long *)(this + 0x20) + 0x68));
          }
          if (pMVar3[0x3e] != (MaterialShader)0xff) {
            (**(code **)(*(long *)param_6 + 0x98))
                      (param_6,pMVar3[0x3e],*(undefined8 *)(*(long *)(this + 0x20) + 0x58));
          }
        }
        if (pMVar3[0x39] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x68))(param_6,pMVar3[0x39],local_108);
        }
        if (pMVar3[0x3b] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x68))(param_6,pMVar3[0x3b],uVar18);
        }
        if (pMVar3[0x60] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x78))
                    (param_6,pMVar3[0x60],*(undefined8 *)(*(long *)this + 0x40));
        }
        if (pMVar3[0x62] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x80))
                    (param_6,pMVar3[0x62],*(undefined8 *)(*(long *)this + 0x40));
        }
        if (pMVar3[0x61] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x78))
                    (param_6,pMVar3[0x61],*(undefined8 *)(*(long *)this + 0x48));
        }
        if (pMVar3[99] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x80))
                    (param_6,pMVar3[99],*(undefined8 *)(*(long *)this + 0x48));
        }
        MVar7 = pMVar3[0x65];
        if (MVar7 != (MaterialShader)0xff) {
          uVar19 = RenderController::getShadowMapSampler();
          (**(code **)(*(long *)param_6 + 0x80))(param_6,MVar7,uVar19);
        }
        local_d0 = pMVar3;
        if (pMVar3[100] != (MaterialShader)0xff) {
          (**(code **)(*(long *)param_6 + 0x80))
                    (param_6,pMVar3[100],*(undefined8 *)(*(long *)this + 0x38));
        }
LAB_00a2238c:
        uVar20 = GsMaterial::setMaterialTextures(this_01,param_6,pMVar3);
        if ((uVar20 & 1) != 0) {
          local_f0 = ppMVar30[2];
          goto LAB_00a223ac;
        }
      }
      ppMVar30 = ppMVar23;
    } while (ppMVar23 != ppMVar4);
  }
  (**(code **)(*(long *)param_6 + 0x60))(param_6,0,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,1,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,2,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,3,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,4,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,5,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,6,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,7,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,8,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,9,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,10,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,0xb,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,0xc,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,0xd,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,0xe,0);
  (**(code **)(*(long *)param_6 + 0x60))(param_6,0xf,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,0,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,1,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,2,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,3,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,4,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,5,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,6,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,7,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,8,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,9,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,10,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,0xb,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,0xc,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,0xd,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,0xe,0);
  (**(code **)(*(long *)param_6 + 0x68))(param_6,0xf,0);
  (**(code **)(*(long *)param_6 + 200))(param_6,0);
  (**(code **)(*(long *)param_6 + 0xe0))(param_6);
  if (*(long *)(lVar12 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


