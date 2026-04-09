// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: renderRenderOverlays
// Entry Point: 006f79e8
// Size: 540 bytes
// Signature: undefined __thiscall renderRenderOverlays(TextureOverlayRenderer * this, IRenderDevice * param_1, Renderer * param_2)


/* TextureOverlayRenderer::renderRenderOverlays(IRenderDevice*, Renderer*) */

void __thiscall
TextureOverlayRenderer::renderRenderOverlays
          (TextureOverlayRenderer *this,IRenderDevice *param_1,Renderer *param_2)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  Camera *pCVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  long lStack_128;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(this + 0x500);
  lVar7 = *(long *)(this + 0x4f8);
  if (lVar8 != lVar7) {
    uVar9 = 0;
    puVar10 = (undefined8 *)((ulong)&local_1a0 | 4);
    do {
      lVar6 = *(long *)(lVar7 + uVar9 * 8);
      pCVar4 = *(Camera **)(lVar6 + 0xa0);
      *(undefined *)(lVar6 + 0xeb) = 0;
      if (pCVar4 != (Camera *)0x0) {
        uStack_80 = 0;
        uStack_88 = 0x3f800000;
        uStack_e0 = 0x3f80000000000000;
        local_e8 = 0;
        local_1a0 = local_1a0 & 0xffffffffffff0000;
        *(undefined4 *)(puVar10 + 0x12) = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_f0 = 0x3f800000;
        local_f8 = 0;
        uStack_100 = 0;
        local_c8 = 0x3f8000003f800000;
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        puVar10[5] = 0;
        puVar10[4] = 0;
        puVar10[7] = 0;
        puVar10[6] = 0;
        puVar10[9] = 0;
        puVar10[8] = 0;
        puVar10[0xb] = 0;
        puVar10[10] = 0;
        cVar1 = *(char *)(lVar6 + 0xe8);
        puVar10[0xd] = 0;
        puVar10[0xc] = 0;
        puVar10[0xf] = 0;
        puVar10[0xe] = 0;
        puVar10[0x11] = 0;
        puVar10[0x10] = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        if (cVar1 == '\0') {
          lVar7 = 0;
          uVar5 = 1;
          local_190 = *(undefined8 *)(lVar6 + 0x88);
          local_148 = *(undefined8 *)(lVar6 + 0x98);
          uStack_198 = CONCAT44(1,(undefined4)uStack_198);
          local_170 = local_190;
          local_140 = local_148;
        }
        else {
          lVar7 = *(long *)(lVar6 + 0xd8);
          uVar5 = 5;
          uStack_158 = *(undefined8 *)(lVar7 + 0x18c8);
          local_160 = *(undefined8 *)(lVar7 + 0x18c0);
          local_148 = *(undefined8 *)(lVar7 + 0x18d8);
          uStack_150 = *(undefined8 *)(lVar7 + 0x18d0);
          uStack_138 = *(undefined8 *)(lVar7 + 0x18e8);
          local_140 = *(undefined8 *)(lVar7 + 0x18e0);
          uStack_198 = *(undefined8 *)(lVar7 + 0x1888);
          local_1a0 = *(ulong *)(lVar7 + 0x1880);
          uStack_188 = *(undefined8 *)(lVar7 + 0x1898);
          local_190 = *(undefined8 *)(lVar7 + 0x1890);
          uStack_178 = *(undefined8 *)(lVar7 + 0x18a8);
          local_180 = *(undefined8 *)(lVar7 + 0x18a0);
          uStack_168 = *(undefined8 *)(lVar7 + 0x18b8);
          local_170 = *(undefined8 *)(lVar7 + 0x18b0);
          local_130 = *(undefined8 *)(lVar7 + 0x18f0);
          lStack_128 = lVar7;
        }
        uVar11 = 0x11;
        if (*(char *)(lVar6 + 0xe9) == '\0') {
          uVar11 = 1;
        }
        local_108 = CONCAT44(0x3f800000,*(undefined4 *)(lVar6 + 0xb0));
        uStack_c0 = uStack_100;
        local_b8 = local_f8;
        uStack_b0 = uStack_f0;
        local_a8 = local_e8;
        uStack_a0 = uStack_e0;
        Renderer::renderSceneToTexture
                  (param_2,pCVar4,(IDisplay *)0x0,(PlaneRenderInfo *)&local_1a0,(PixelViewport *)0x0
                   ,uVar11,uVar5,*(uint *)(lVar6 + 0xb4),*(uint *)(lVar6 + 0xb8),lVar7 != 0,
                   lVar7 != 0);
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x138))(param_1);
        (**(code **)(*plVar3 + 0x120))(plVar3,1,&local_190,0,0,0,1);
        lVar8 = *(long *)(this + 0x500);
        lVar7 = *(long *)(this + 0x4f8);
      }
      uVar9 = (ulong)((int)uVar9 + 1);
    } while (uVar9 < (ulong)(lVar8 - lVar7 >> 3));
    if (lVar8 - lVar7 != 0) {
      *(long *)(this + 0x500) = lVar7;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


