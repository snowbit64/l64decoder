// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006f2818
// Size: 1216 bytes
// Signature: undefined __cdecl render(SharedRenderArgs * param_1)


/* FontOverlayRenderer::render(SharedRenderArgs const&) */

void FontOverlayRenderer::render(SharedRenderArgs *param_1)

{
  SharedRenderArgs *pSVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  SharedRenderArgs **ppSVar11;
  AdhocShader *this;
  int iVar12;
  long *plVar13;
  void *__dest;
  undefined4 *puVar14;
  ResourceManager *this_00;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  SharedRenderArgs *local_108;
  SharedRenderArgs *pSStack_100;
  uint local_f8;
  uint local_f4;
  SharedRenderArgs *local_f0;
  ulong local_e8;
  SharedRenderArgs *local_e0;
  long *local_d8;
  char *local_d0;
  undefined8 uStack_c8;
  char *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char *local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  
  lVar10 = tpidr_el0;
  local_80 = *(long *)(lVar10 + 0x28);
  if ((*(long *)(param_1 + 0x80) != 0) && (*(long *)(param_1 + 0x88) != 0)) {
    RenderDeviceManager::getInstance();
    plVar13 = (long *)RenderDeviceManager::getCurrentRenderDevice();
    plVar13 = (long *)(**(code **)(*plVar13 + 0x138))();
    uVar7 = *(uint *)(param_1 + 0x3fc);
    local_d8 = plVar13;
    if (uVar7 != 0) {
      uVar21 = (*(long *)(param_1 + 0x450) - *(long *)(param_1 + 0x448) >> 4) * -0x5555555555555555;
      if ((uint)uVar21 != 0) {
        (**(code **)(*plVar13 + 0xb0))(plVar13,*(undefined8 *)(param_1 + 0x3b0));
        (**(code **)(*plVar13 + 0xc0))(plVar13,*(undefined8 *)(param_1 + 0x3c0));
        (**(code **)(*plVar13 + 0xb8))(plVar13,*(undefined8 *)(param_1 + 0x3c8));
        uStack_a8 = *(undefined8 *)(param_1 + 0x80);
        pSStack_100 = param_1 + 0x1a0;
        uVar15 = 0;
        uVar23 = 0;
        local_b0 = "diffuseTexture";
        uStack_c8 = *(undefined8 *)(param_1 + 0x3d0);
        local_a0 = 0xffffffff;
        local_88 = 0xffffffff;
        local_98 = "maskTexture";
        local_90 = 0;
        local_e0 = (SharedRenderArgs *)0x0;
        local_d0 = "diffuseSampler";
        pSVar1 = param_1 + 0x400;
        local_c0 = "maskSampler";
        local_b8 = 0;
        local_108 = param_1 + 0xa0;
        local_e8 = uVar21 & 0xffffffff;
        local_f0 = param_1;
        do {
          plVar13 = local_d8;
          uVar9 = uVar7 - uVar23;
          if (0xfff < uVar9) {
            uVar9 = 0x1000;
          }
          __dest = (void *)(**(code **)(**(long **)(param_1 + 0x400) + 0x10))
                                     (*(long **)(param_1 + 0x400),local_d8,0,(ulong)(uVar9 << 4),1);
          param_1 = local_f0;
          memcpy(__dest,(void *)(*(long *)(local_f0 + 0x3f0) + (ulong)uVar23 * 0x10),
                 (ulong)(uVar9 << 4));
          (**(code **)(**(long **)(param_1 + 0x400) + 0x18))(*(long **)(param_1 + 0x400),plVar13);
          (**(code **)(*plVar13 + 0x50))(plVar13,pSVar1,1,*(undefined8 *)(param_1 + 0x88));
          (**(code **)(*plVar13 + 0x58))(plVar13,*(undefined8 *)(param_1 + 0x98));
          if (uVar15 < (uint)uVar21) {
            uVar9 = uVar9 + uVar23;
            lVar20 = (ulong)uVar15 * 0x30 + 0x18;
            uVar16 = (ulong)uVar15;
            uVar18 = local_e8;
            do {
              lVar19 = *(long *)(param_1 + 0x448);
              uVar2 = uVar16 + 1;
              uVar22 = uVar7;
              if (uVar2 < uVar18) {
                uVar22 = *(uint *)(lVar19 + lVar20 + 0x18);
              }
              if (uVar22 < uVar23) {
                uVar15 = (uint)uVar16;
              }
              else {
                uVar8 = *(uint *)(lVar19 + lVar20 + -0x18);
                if (uVar9 <= uVar8) break;
                uVar5 = uVar9;
                if (uVar22 <= uVar9) {
                  uVar5 = uVar22;
                }
                uVar6 = uVar23;
                if (uVar23 <= uVar8) {
                  uVar6 = uVar8;
                }
                if (uVar5 - uVar6 != 0) {
                  uVar17 = uVar6 - uVar23;
                  if (uVar23 <= uVar8) {
                    lVar3 = lVar19 + lVar20;
                    ppSVar11 = &local_108;
                    if (*(long *)(lVar3 + -0x10) != 0) {
                      ppSVar11 = &pSStack_100;
                    }
                    local_e0 = *ppSVar11;
                    local_f8 = uVar6 - uVar23;
                    (**(code **)(*local_d8 + 0x48))(local_d8,*(undefined8 *)(local_e0 + 8));
                    plVar13 = local_d8;
                    this = (AdhocShader *)local_e0;
                    local_90 = *(long *)(lVar3 + -0x10);
                    if (local_90 != 0) {
                      local_90 = *(long *)(local_90 + 0x68);
                    }
                    local_b8 = *(undefined8 *)(lVar3 + -8);
                    local_f4 = uVar15;
                    AdhocShader::bindResourcesPs
                              ((AdhocShader *)local_e0,(ICommandBuffer *)local_d8,
                               (ShaderTexture *)&local_b0,2,(ShaderStructBuffer *)0x0,0,
                               (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
                               (ShaderSampler *)&local_d0,2);
                    iVar12 = AdhocShader::getConstantBufferHandle(this,"FontConstants");
                    param_1 = local_f0;
                    uVar15 = local_f4;
                    uVar17 = local_f8;
                    if (iVar12 != -1) {
                      puVar14 = (undefined4 *)
                                (**(code **)(*plVar13 + 0xa0))
                                          (plVar13,iVar12,*(undefined8 *)(local_f0 + 0x3a0));
                      pcVar4 = (char *)(lVar19 + lVar20);
                      *puVar14 = *(undefined4 *)(pcVar4 + 4);
                      puVar14[1] = *(undefined4 *)(pcVar4 + 8);
                      puVar14[2] = 1.0 / *(float *)(pcVar4 + 0xc);
                      puVar14[3] = 1.0 / *(float *)(pcVar4 + 0x10);
                      uVar24 = 0;
                      if (*pcVar4 != '\0') {
                        uVar24 = 0x3f800000;
                      }
                      puVar14[4] = uVar24;
                      (**(code **)(*plVar13 + 0xa8))
                                (plVar13,iVar12,*(undefined8 *)(param_1 + 0x3a0));
                      uVar15 = local_f4;
                      uVar17 = local_f8;
                    }
                  }
                  plVar13 = local_d8;
                  (**(code **)(*local_d8 + 0xe8))
                            (local_d8,(uVar5 - uVar6 >> 2) * 6,(uVar17 >> 2) * 6,0,0,0);
                  uVar18 = local_e8;
                  if (uVar22 <= uVar9) {
                    AdhocShader::unbindResourcesPs
                              ((AdhocShader *)local_e0,(ICommandBuffer *)plVar13,
                               (ShaderTexture *)&local_b0,2,(ShaderStructBuffer *)0x0,0,
                               (ShaderTexture *)0x0,0,(ShaderConstantBuffer *)0x0,0,
                               (ShaderSampler *)&local_d0,2);
                    local_e0 = (SharedRenderArgs *)0x0;
                    uVar18 = local_e8;
                  }
                }
              }
              lVar20 = lVar20 + 0x30;
              uVar16 = uVar2;
            } while (uVar18 != uVar2);
          }
          uVar23 = uVar23 + 0x1000;
        } while (uVar23 < uVar7);
        lVar20 = 0;
        do {
          if (*(long *)(*(long *)(param_1 + 0x448) + lVar20 + 8) != 0) {
            this_00 = (ResourceManager *)ResourceManager::getInstance();
            ResourceManager::release
                      (this_00,*(Resource **)(*(long *)(param_1 + 0x448) + lVar20 + 8));
          }
          lVar20 = lVar20 + 0x30;
        } while (((uVar21 & 0xffffffff) + (uVar21 & 0xffffffff) * 2) * 0x10 - lVar20 != 0);
        *(undefined4 *)(param_1 + 0x3fc) = 0;
        *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x448);
      }
    }
  }
  if (*(long *)(lVar10 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


