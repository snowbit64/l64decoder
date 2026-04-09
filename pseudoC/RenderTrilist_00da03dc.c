// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderTrilist
// Entry Point: 00da03dc
// Size: 784 bytes
// Signature: undefined __cdecl RenderTrilist(TriList * param_1, ScissorRect * param_2)


/* MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTrilist(MaskedOcclusionCulling::TriList
   const&, MaskedOcclusionCulling::ScissorRect const*) */

void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTrilist
               (TriList *param_1,ScissorRect *param_2)

{
  ScissorRect *pSVar1;
  long lVar2;
  undefined auVar3 [16];
  uint uVar4;
  ScissorRect *in_x2;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined auVar10 [16];
  undefined in_q1 [16];
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float local_80;
  float fStack_7c;
  float fStack_70;
  float fStack_6c;
  long local_68;
  TriList *pTVar5;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pSVar1 = (ScissorRect *)(param_1 + 0x140);
  if (in_x2 != (ScissorRect *)0x0) {
    pSVar1 = in_x2;
  }
  uVar4 = *(uint *)(param_2 + 4);
  pTVar5 = param_1;
  if (uVar4 != 0) {
    iVar7 = 0;
    uVar8 = 0;
    uVar9 = 0x23;
    auVar13._8_4_ = 0.00390625;
    auVar13._0_8_ = 0x3b8000003b800000;
    auVar13._12_4_ = 0.00390625;
    do {
      uVar4 = uVar4 + iVar7;
      if (3 < uVar4) {
        uVar4 = 4;
      }
      if (uVar4 != 0) {
        lVar6 = *(long *)(param_2 + 8);
        local_130 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x23) * 4);
        local_160 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x22) * 4);
        local_100 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x21) * 4);
        local_120 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x20) * 4);
        local_150 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1f) * 4);
        local_f0 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1e) * 4);
        local_110 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1d) * 4);
        local_140 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1c) * 4);
        local_e0 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1b) * 4);
        if (1 < uVar4) {
          uStack_12c = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1a) * 4);
          uStack_15c = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x19) * 4);
          local_fc = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x1a | 2) * 4);
          uStack_11c = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x17) * 4);
          uStack_14c = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x16) * 4);
          local_ec = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x15) * 4);
          local_10c = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x14) * 4);
          local_13c = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x13) * 4);
          local_dc = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x12) * 4);
          if (uVar4 != 2) {
            uStack_128 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x11) * 4);
            uStack_158 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0x10) * 4);
            local_f8 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0xf) * 4);
            uStack_118 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0xe) * 4);
            uStack_148 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0xd) * 4);
            local_e8 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0xc) * 4);
            local_108 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 0xb) * 4);
            local_138 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 10) * 4);
            local_d8 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 9) * 4);
            if (3 < uVar4) {
              uStack_124 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 8) * 4);
              uStack_154 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 7) * 4);
              local_f4 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 6) * 4);
              uStack_114 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 5) * 4);
              uStack_144 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 4) * 4);
              local_e4 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 3) * 4);
              local_104 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 2) * 4);
              local_134 = *(undefined4 *)(lVar6 + (ulong)(uVar9 - 1) * 4);
              local_d4 = *(undefined4 *)(lVar6 + (ulong)uVar9 * 4);
            }
          }
        }
        in_q1._4_4_ = uStack_12c;
        in_q1._0_4_ = local_130;
        in_q1._8_4_ = (float)uStack_128;
        in_q1._12_4_ = (float)uStack_124;
        auVar13._4_4_ = uStack_15c;
        auVar13._0_4_ = local_160;
        auVar13._8_4_ = (float)uStack_158;
        auVar13._12_4_ = (float)uStack_154;
      }
      auVar14._4_4_ = uStack_11c;
      auVar14._0_4_ = local_120;
      auVar14._8_4_ = uStack_118;
      auVar14._12_4_ = uStack_114;
      auVar15._4_4_ = local_10c;
      auVar15._0_4_ = local_110;
      auVar15._8_4_ = local_108;
      auVar15._12_4_ = local_104;
      auVar11 = NEON_scvtf(in_q1,4);
      auVar10 = NEON_scvtf(auVar13,4);
      auVar13 = NEON_scvtf(auVar14,4);
      auVar14 = NEON_scvtf(auVar15,4);
      auVar12._4_4_ = uStack_14c;
      auVar12._0_4_ = local_150;
      auVar12._8_4_ = uStack_148;
      auVar12._12_4_ = uStack_144;
      auVar3._4_4_ = local_13c;
      auVar3._0_4_ = local_140;
      auVar3._8_4_ = local_138;
      auVar3._12_4_ = local_134;
      local_a0 = auVar11._0_4_ * 0.00390625;
      fStack_9c = auVar11._4_4_ * 0.00390625;
      fStack_90 = auVar13._0_4_ * 0.00390625;
      fStack_8c = auVar13._4_4_ * 0.00390625;
      auVar15 = NEON_scvtf(auVar12,4);
      auVar13._0_8_ = CONCAT44(auVar10._4_4_ * 0.00390625,auVar10._0_4_ * 0.00390625);
      auVar13._8_4_ = auVar10._8_4_ * 0.00390625;
      auVar13._12_4_ = auVar10._12_4_ * 0.00390625;
      local_80 = auVar14._0_4_ * 0.00390625;
      fStack_7c = auVar14._4_4_ * 0.00390625;
      fStack_70 = auVar14._8_4_ * 0.00390625;
      fStack_6c = auVar14._12_4_ * 0.00390625;
      auVar12 = NEON_scvtf(auVar3,4);
      fStack_c0 = auVar15._0_4_ * 0.00390625;
      fStack_bc = auVar15._4_4_ * 0.00390625;
      in_q1._0_8_ = CONCAT44(auVar12._4_4_ * 0.00390625,auVar12._0_4_ * 0.00390625);
      in_q1._8_4_ = auVar12._8_4_ * 0.00390625;
      in_q1._12_4_ = auVar12._12_4_ * 0.00390625;
      uStack_c8 = auVar13._8_8_;
      uStack_a8 = in_q1._8_8_;
      local_d0 = auVar13._0_8_;
      local_b0 = in_q1._0_8_;
      uVar4 = RasterizeTriangleBatch<false>
                        ((MaskedOcclusionCullingPrivate *)param_1,(__Int32x4_t *)&local_130,
                         (__Int32x4_t *)&local_160,(__Float32x4_t *)&local_a0,
                         (__Float32x4_t *)&local_d0,(__Float32x4_t *)&local_100,
                         ~(-1 << (ulong)(uVar4 & 0x1f)),pSVar1);
      pTVar5 = (TriList *)(ulong)uVar4;
      uVar4 = *(uint *)(param_2 + 4);
      uVar8 = uVar8 + 4;
      uVar9 = uVar9 + 0x24;
      iVar7 = iVar7 + -4;
    } while (uVar8 < uVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pTVar5);
}


