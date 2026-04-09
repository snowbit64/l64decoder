// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: render
// Entry Point: 006f3490
// Size: 1032 bytes
// Signature: undefined __thiscall render(ImageOverlay * this, SharedRenderArgs * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageOverlay::render(SharedRenderArgs const&) */

void __thiscall ImageOverlay::render(ImageOverlay *this,SharedRenderArgs *param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ITextureObject *pIVar5;
  ISamplerObject *pIVar6;
  long lVar7;
  ulong uVar8;
  TextureOverlayRenderer *this_00;
  float *pfVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_d0 [4];
  float local_c0 [4];
  float local_b0 [4];
  float local_a0 [4];
  long local_90;
  
  lVar7 = tpidr_el0;
  local_90 = *(long *)(lVar7 + 0x28);
  plVar3 = (long *)(**(code **)(*(long *)this + 0x18))();
  iVar2 = (**(code **)(*plVar3 + 0x10))();
  if (iVar2 == 2) {
    fVar15 = *(float *)(this + 0x20);
    fVar14 = *(float *)(this + 0x24);
    if (((DAT_010521f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_010521f8), iVar2 != 0)) {
      DAT_01052060 = 0x100000002;
      DAT_010520a4 = 0x100000000;
      DAT_01052068 = 0x3f800000;
      _DAT_01052094 = 0;
      _DAT_0105208c = 0x3f80000000000000;
      _DAT_010520c8 = 0x3f80000000000000;
      _DAT_010520c0 = 0xbf800000;
      _DAT_010520d8 = 0;
      _DAT_010520d0 = 0x3f80000000000000;
      DAT_01052108 = 0x3f800000;
      DAT_0105214c = 0x3f800000;
      DAT_010520e8 = 0x200000001;
      DAT_010520ac = 0xbf800000;
      DAT_0105209c = 0xbf800000;
      uRam00000000010520f8 = 0xbf80000000000000;
      _DAT_010520f0 = 0x3f80000000000000;
      DAT_010520e0 = 0xbf800000;
      uRam0000000001052124 = 0x3f80000000000000;
      _DAT_0105211c = 0xbf800000;
      DAT_0105212c = 1;
      _DAT_01052084 = 0xbf80000000000000;
      _DAT_0105207c = 0x3f800000;
      uRam0000000001052180 = 0xbf8000003f800000;
      _DAT_01052178 = 0;
      uRam0000000001052168 = 0xbf80000000000000;
      _DAT_01052160 = 0x3f800000;
      DAT_01052100 = 0;
      uRam0000000001052190 = 0x3f800000;
      _DAT_01052188 = 0;
      uRam000000000105213c = 0xbf80000000000000;
      _DAT_01052134 = 0xbf80000000000000;
      DAT_01052144 = 0;
      uRam00000000010521a0 = 0x3f800000;
      _DAT_01052198 = 0;
      DAT_01052170 = 0x100000001;
      DAT_01052074 = 0;
      DAT_010521b4 = 0x100000003;
      DAT_0105206c = 0;
      DAT_010520b0 = 0;
      DAT_010520b8 = 0;
      DAT_01052114 = 0;
      DAT_0105210c = 0;
      DAT_01052150 = 0;
      DAT_01052158 = 0;
      DAT_010521a8 = 0xbf80000000000000;
      DAT_010521b0 = 0;
      uRam00000000010521c4 = 0x3f800000bf800000;
      _DAT_010521bc = 0;
      uRam00000000010521d4 = 0xbf800000;
      _DAT_010521cc = 0;
      uRam00000000010521e4 = 0x3f800000;
      _DAT_010521dc = 0;
      DAT_010521ec = 0xbf80000000000000;
      DAT_010521f4 = 0;
      __cxa_guard_release(&DAT_010521f8);
    }
    uVar8 = 0;
    pfVar9 = (float *)&DAT_01052080;
    do {
      uVar1 = (uint)(uVar8 >> 1) & 0x7fffffff;
      local_b0[0] = pfVar9[-6] + pfVar9[-3];
      local_b0[1] = pfVar9[-5] + pfVar9[-2];
      local_d0[0] = pfVar9[-6] + *pfVar9;
      local_d0[1] = pfVar9[-5] + pfVar9[1];
      local_b0[2] = pfVar9[-4] + pfVar9[-1];
      local_a0[0] = local_b0[0] + pfVar9[3];
      local_a0[1] = local_b0[1] + pfVar9[4];
      local_d0[2] = pfVar9[-4] + pfVar9[2];
      local_b0[0] = local_b0[0] + pfVar9[6];
      local_a0[2] = local_b0[2] + pfVar9[5];
      local_c0[0] = pfVar9[3] + local_d0[0];
      local_b0[1] = local_b0[1] + pfVar9[7];
      local_b0[2] = local_b0[2] + pfVar9[8];
      local_c0[1] = pfVar9[4] + local_d0[1];
      local_d0[0] = pfVar9[6] + local_d0[0];
      local_d0[1] = pfVar9[7] + local_d0[1];
      local_c0[2] = pfVar9[5] + local_d0[2];
      local_d0[2] = pfVar9[8] + local_d0[2];
      if (uVar1 == 2) {
        lVar10 = 0;
        lVar11 = 1;
      }
      else if (uVar1 == 1) {
        lVar10 = 0;
        lVar11 = 2;
      }
      else {
        lVar10 = 1;
        lVar11 = 2;
      }
      uVar12 = NEON_ucvtf(pfVar9[-8]);
      uVar13 = NEON_ucvtf(pfVar9[-7]);
      fVar16 = (float)NEON_fmadd(fVar15 * 0.25,uVar12,*(undefined4 *)(this + 0x28));
      fVar17 = (float)NEON_fmadd(fVar14 / 3.0,uVar13,*(undefined4 *)(this + 0x2c));
      lVar4 = EngineManager::getInstance();
      this_00 = *(TextureOverlayRenderer **)(lVar4 + 0x100);
      pIVar5 = (ITextureObject *)(**(code **)(*(long *)this + 0x18))(this);
      pIVar6 = (ISamplerObject *)(**(code **)(*(long *)this + 0x20))(this);
      TextureOverlayRenderer::enqueueOverlay
                (this_00,pIVar5,pIVar6,(uint)uVar8,fVar16,fVar17,fVar15 * 0.25,fVar14 / 3.0,
                 *(uint *)(this + 0x60),*(uint *)(this + 100),*(uint *)(this + 0x68),
                 *(uint *)(this + 0x6c),*(float *)((ulong)local_b0 | lVar10 << 2),local_b0[lVar11],
                 *(float *)((ulong)local_a0 | lVar10 << 2),local_a0[lVar11],
                 *(float *)((ulong)local_d0 | lVar10 << 2),local_d0[lVar11],
                 *(float *)((ulong)local_c0 | lVar10 << 2),local_c0[lVar11],*(float *)(this + 0x54),
                 *(float *)(this + 0x58),*(float *)(this + 0x5c),*(float *)(this + 0x70),false,
                 param_1);
      uVar8 = uVar8 + 1;
      pfVar9 = pfVar9 + 0x11;
    } while (uVar8 != 6);
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  else {
    Overlay::render((Overlay *)this,param_1);
    lVar7 = *(long *)(lVar7 + 0x28);
  }
  if (lVar7 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


