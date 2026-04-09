// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangleBatch<true>
// Entry Point: 00da5450
// Size: 2320 bytes
// Signature: int __thiscall RasterizeTriangleBatch<true>(MaskedOcclusionCullingPrivate * this, __Int32x4_t * param_1, __Int32x4_t * param_2, __Float32x4_t * param_3, __Float32x4_t * param_4, __Float32x4_t * param_5, uint param_6, ScissorRect * param_7)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int 
   MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangleBatch<true>(__Int32x4_t*,
   __Int32x4_t*, __Float32x4_t*, __Float32x4_t*, __Float32x4_t*, unsigned int,
   MaskedOcclusionCulling::ScissorRect const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangleBatch<true>
          (MaskedOcclusionCullingPrivate *this,__Int32x4_t *param_1,__Int32x4_t *param_2,
          __Float32x4_t *param_3,__Float32x4_t *param_4,__Float32x4_t *param_5,uint param_6,
          ScissorRect *param_7)

{
  undefined4 uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  undefined auVar9 [16];
  int iVar12;
  int iVar13;
  float fVar14;
  int iVar16;
  int iVar17;
  undefined auVar15 [16];
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  int iVar45;
  int iVar48;
  int iVar49;
  undefined auVar46 [16];
  int iVar50;
  undefined auVar47 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [12];
  undefined auVar54 [16];
  undefined auVar56 [16];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined auVar58 [16];
  undefined auVar62 [12];
  float fVar64;
  float fVar68;
  float fVar69;
  undefined auVar65 [12];
  float fVar70;
  int iVar71;
  undefined auVar67 [16];
  undefined auVar72 [12];
  undefined auVar73 [16];
  undefined auVar74 [16];
  undefined auVar76 [16];
  undefined auVar77 [16];
  undefined auVar78 [16];
  undefined auVar79 [16];
  undefined auVar80 [16];
  undefined auVar81 [16];
  undefined auVar82 [16];
  undefined uVar83;
  undefined uVar90;
  undefined uVar91;
  undefined auVar84 [16];
  undefined auVar85 [16];
  undefined auVar86 [16];
  undefined auVar87 [16];
  undefined auVar88 [16];
  int iVar96;
  int iVar97;
  undefined auVar92 [16];
  undefined auVar93 [16];
  undefined auVar94 [16];
  undefined auVar95 [16];
  int iVar98;
  int iVar99;
  undefined auVar100 [12];
  int iVar105;
  undefined auVar102 [16];
  undefined auVar104 [16];
  float fVar106;
  int iVar107;
  float fVar109;
  int iVar110;
  float fVar111;
  float fVar112;
  undefined auVar108 [16];
  float fVar113;
  undefined auVar114 [12];
  float fVar119;
  float fVar120;
  float fVar121;
  undefined auVar115 [16];
  undefined auVar116 [16];
  undefined auVar118 [16];
  float fVar122;
  undefined auVar123 [16];
  float fVar124;
  int iVar125;
  float fVar129;
  int iVar130;
  float fVar131;
  float fVar132;
  undefined auVar126 [16];
  undefined auVar127 [16];
  undefined auVar128 [16];
  int iVar133;
  float fVar134;
  int iVar135;
  float fVar139;
  float fVar141;
  float fVar142;
  undefined auVar136 [16];
  int iVar140;
  undefined auVar138 [16];
  float fVar143;
  int iVar144;
  int iVar145;
  float fVar150;
  int iVar151;
  float fVar152;
  int iVar153;
  undefined auVar146 [16];
  undefined8 uVar154;
  undefined auVar147 [16];
  float fVar155;
  undefined auVar148 [16];
  undefined auVar149 [16];
  int iVar156;
  float fVar157;
  int iVar158;
  float fVar167;
  float fVar168;
  undefined auVar160 [16];
  undefined auVar161 [16];
  float fVar169;
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar164 [16];
  undefined auVar166 [16];
  undefined auVar170 [16];
  undefined auVar171 [16];
  int iVar172;
  int iVar177;
  int iVar178;
  undefined auVar173 [16];
  undefined auVar174 [16];
  int iVar179;
  undefined auVar175 [16];
  undefined auVar176 [16];
  float local_320;
  float fStack_31c;
  float local_310;
  float fStack_30c;
  int iStack_300;
  int iStack_2fc;
  int local_2f0 [4];
  int local_2e0 [4];
  int aiStack_2d0 [4];
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  float afStack_290 [4];
  float local_280 [4];
  float local_270 [4];
  float afStack_260 [4];
  float local_250 [4];
  int aiStack_240 [4];
  int local_230;
  int iStack_22c;
  int iStack_220;
  int iStack_21c;
  int local_210;
  int iStack_20c;
  int local_200;
  int iStack_1fc;
  int iStack_1f0;
  int iStack_1ec;
  int local_1e0;
  int iStack_1dc;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  int local_1a0;
  int iStack_19c;
  int iStack_190;
  int iStack_18c;
  int local_180;
  int iStack_17c;
  int local_170;
  int iStack_16c;
  int iStack_160;
  int iStack_15c;
  int local_150;
  int iStack_14c;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong uStack_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long local_b0;
  undefined auVar55 [16];
  undefined auVar63 [16];
  undefined auVar66 [16];
  undefined auVar75 [16];
  undefined auVar89 [16];
  undefined auVar101 [16];
  undefined auVar103 [16];
  undefined auVar117 [16];
  undefined auVar137 [16];
  undefined auVar159 [12];
  undefined auVar165 [16];
  
  lVar2 = tpidr_el0;
  local_b0 = *(long *)(lVar2 + 0x28);
  if (((ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
        ::SIMD_PAD_W_MASK & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                   ::SIMD_PAD_W_MASK), iVar8 != 0)) {
    auVar87._8_4_ = 0xffffffe0;
    auVar87._0_8_ = 0xffffffe0ffffffe0;
    auVar87._12_4_ = 0xffffffe0;
    ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
    ::SIMD_PAD_W_MASK._8_8_ = auVar87._8_8_;
    ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
    ::SIMD_PAD_W_MASK._0_8_ = 0xffffffe0ffffffe0;
    __cxa_guard_release(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                         ::SIMD_PAD_W_MASK);
  }
  if (((ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
        ::SIMD_PAD_H_MASK & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                   ::SIMD_PAD_H_MASK), iVar8 != 0)) {
    auVar93._8_4_ = 0xfffffffc;
    auVar93._0_8_ = 0xfffffffcfffffffc;
    auVar93._12_4_ = 0xfffffffc;
    ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
    ::SIMD_PAD_H_MASK._8_8_ = auVar93._8_8_;
    ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
    ::SIMD_PAD_H_MASK._0_8_ = 0xfffffffcfffffffc;
    __cxa_guard_release(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                         ::SIMD_PAD_H_MASK);
  }
  auVar87 = *(undefined (*) [16])(param_3 + 0x10);
  auVar93 = *(undefined (*) [16])(param_3 + 0x20);
  auVar108._8_4_ = 0xfffffffb;
  auVar108._0_8_ = 0xfffffffbfffffffb;
  auVar108._12_4_ = 0xfffffffb;
  auVar123._8_4_ = 0xfffffffe;
  auVar123._0_8_ = 0xfffffffefffffffe;
  auVar123._12_4_ = 0xfffffffe;
  auVar95 = *(undefined (*) [16])param_4;
  auVar77 = *(undefined (*) [16])(param_4 + 0x10);
  auVar15 = NEON_fmax(auVar87,auVar93,4);
  auVar9 = NEON_fmin(auVar87,auVar93,4);
  auVar80 = *(undefined (*) [16])(param_4 + 0x20);
  auVar161 = *(undefined (*) [16])param_3;
  auVar84 = NEON_fmax(auVar77,auVar80,4);
  auVar46 = NEON_fmin(auVar77,auVar80,4);
  auVar15 = NEON_fmax(auVar161,auVar15,4);
  auVar9 = NEON_fmin(auVar161,auVar9,4);
  auVar84 = NEON_fmax(auVar95,auVar84,4);
  auVar46 = NEON_fmin(auVar95,auVar46,4);
  uVar1 = *(undefined4 *)param_7;
  auVar51._4_4_ = uVar1;
  auVar51._0_4_ = uVar1;
  auVar51._8_4_ = uVar1;
  auVar51._12_4_ = uVar1;
  iVar8 = (int)auVar9._0_4_;
  iVar10 = (int)auVar9._4_4_;
  iVar11 = (int)auVar9._8_4_;
  iVar12 = (int)auVar9._12_4_;
  iVar45 = (int)auVar46._0_4_;
  iVar48 = (int)auVar46._4_4_;
  iVar49 = (int)auVar46._8_4_;
  iVar50 = (int)auVar46._12_4_;
  iVar13 = (int)auVar15._0_4_ + 0x20;
  iVar16 = (int)auVar15._4_4_ + 0x20;
  iVar17 = (int)auVar15._8_4_ + 0x20;
  iVar18 = (int)auVar15._12_4_ + 0x20;
  iVar19 = (int)auVar84._0_4_ + 4;
  iVar20 = (int)auVar84._4_4_ + 4;
  iVar21 = (int)auVar84._8_4_ + 4;
  iVar22 = (int)auVar84._12_4_ + 4;
  uVar1 = *(undefined4 *)(param_7 + 4);
  auVar84._4_4_ = uVar1;
  auVar84._0_4_ = uVar1;
  auVar84._8_4_ = uVar1;
  auVar84._12_4_ = uVar1;
  auVar9[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_ & (byte)iVar8;
  auVar9[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,1) & (byte)((uint)iVar8 >> 8);
  auVar9[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,2) & (byte)((uint)iVar8 >> 0x10);
  auVar9[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,3) & (byte)((uint)iVar8 >> 0x18);
  auVar9[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,4) & (byte)iVar10;
  auVar9[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,5) & (byte)((uint)iVar10 >> 8);
  auVar9[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,6) & (byte)((uint)iVar10 >> 0x10);
  auVar9[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,7) & (byte)((uint)iVar10 >> 0x18);
  auVar9[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._8_8_ & (byte)iVar11;
  auVar9[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._8_8_,1) & (byte)((uint)iVar11 >> 8);
  auVar9[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,2) & (byte)((uint)iVar11 >> 0x10);
  auVar9[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,3) & (byte)((uint)iVar11 >> 0x18);
  auVar9[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,4) & (byte)iVar12;
  auVar9[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,5) & (byte)((uint)iVar12 >> 8);
  auVar9[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,6) & (byte)((uint)iVar12 >> 0x10);
  auVar9[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,7) & (byte)((uint)iVar12 >> 0x18);
  uVar1 = *(undefined4 *)(param_7 + 8);
  auVar173._4_4_ = uVar1;
  auVar173._0_4_ = uVar1;
  auVar173._8_4_ = uVar1;
  auVar173._12_4_ = uVar1;
  auVar47[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_ & (byte)iVar45;
  auVar47[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,1) & (byte)((uint)iVar45 >> 8);
  auVar47[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,2) & (byte)((uint)iVar45 >> 0x10);
  auVar47[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,3) & (byte)((uint)iVar45 >> 0x18);
  auVar47[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,4) & (byte)iVar48;
  auVar47[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,5) & (byte)((uint)iVar48 >> 8);
  auVar47[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,6) & (byte)((uint)iVar48 >> 0x10);
  auVar47[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,7) & (byte)((uint)iVar48 >> 0x18);
  auVar47[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_ & (byte)iVar49;
  auVar47[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_,1) & (byte)((uint)iVar49 >> 8);
  auVar47[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,2) & (byte)((uint)iVar49 >> 0x10);
  auVar47[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,3) & (byte)((uint)iVar49 >> 0x18);
  auVar47[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,4) & (byte)iVar50;
  auVar47[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,5) & (byte)((uint)iVar50 >> 8);
  auVar47[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,6) & (byte)((uint)iVar50 >> 0x10);
  auVar47[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,7) & (byte)((uint)iVar50 >> 0x18);
  auVar15[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_ & (byte)iVar13;
  auVar15[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,1) & (byte)((uint)iVar13 >> 8);
  auVar15[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,2) & (byte)((uint)iVar13 >> 0x10);
  auVar15[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,3) & (byte)((uint)iVar13 >> 0x18);
  auVar15[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,4) & (byte)iVar16;
  auVar15[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,5) & (byte)((uint)iVar16 >> 8);
  auVar15[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,6) & (byte)((uint)iVar16 >> 0x10);
  auVar15[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,7) & (byte)((uint)iVar16 >> 0x18);
  auVar15[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_ & (byte)iVar17;
  auVar15[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,1) & (byte)((uint)iVar17 >> 8);
  auVar15[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,2) & (byte)((uint)iVar17 >> 0x10);
  auVar15[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,3) & (byte)((uint)iVar17 >> 0x18);
  auVar15[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,4) & (byte)iVar18;
  auVar15[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,5) & (byte)((uint)iVar18 >> 8);
  auVar15[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,6) & (byte)((uint)iVar18 >> 0x10);
  auVar15[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,7) & (byte)((uint)iVar18 >> 0x18);
  auVar46[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_ & (byte)iVar19;
  auVar46[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,1) & (byte)((uint)iVar19 >> 8);
  auVar46[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,2) & (byte)((uint)iVar19 >> 0x10);
  auVar46[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,3) & (byte)((uint)iVar19 >> 0x18);
  auVar46[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,4) & (byte)iVar20;
  auVar46[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,5) & (byte)((uint)iVar20 >> 8);
  auVar46[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,6) & (byte)((uint)iVar20 >> 0x10);
  auVar46[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,7) & (byte)((uint)iVar20 >> 0x18);
  auVar46[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_ & (byte)iVar21;
  auVar46[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_,1) & (byte)((uint)iVar21 >> 8);
  auVar46[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,2) & (byte)((uint)iVar21 >> 0x10);
  auVar46[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,3) & (byte)((uint)iVar21 >> 0x18);
  auVar46[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,4) & (byte)iVar22;
  auVar46[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,5) & (byte)((uint)iVar22 >> 8);
  auVar46[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,6) & (byte)((uint)iVar22 >> 0x10);
  auVar46[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,7) & (byte)((uint)iVar22 >> 0x18);
  uVar1 = *(undefined4 *)(param_7 + 0xc);
  auVar94._4_4_ = uVar1;
  auVar94._0_4_ = uVar1;
  auVar94._8_4_ = uVar1;
  auVar94._12_4_ = uVar1;
  auVar51 = NEON_smax(auVar9,auVar51,4);
  auVar47 = NEON_smax(auVar47,auVar84,4);
  auVar15 = NEON_smin(auVar15,auVar173,4);
  auVar84 = NEON_smin(auVar46,auVar94,4);
  auVar9 = NEON_sshl(auVar51,auVar108,4);
  auVar46 = NEON_sshl(auVar47,auVar123,4);
  auVar85 = NEON_sshl(auVar15,auVar108,4);
  auVar15 = NEON_sshl(auVar84,auVar123,4);
  iVar8 = auVar9._0_4_;
  aiStack_240[0] = auVar85._0_4_ - iVar8;
  iVar10 = auVar9._4_4_;
  aiStack_240[1] = auVar85._4_4_ - iVar10;
  local_230 = auVar85._8_4_ - auVar9._8_4_;
  iStack_22c = auVar85._12_4_ - auVar9._12_4_;
  local_250[0] = (float)(auVar15._0_4_ - auVar46._0_4_);
  local_250[1] = (float)(auVar15._4_4_ - auVar46._4_4_);
  iVar17 = aiStack_240[0] + -1;
  iVar18 = aiStack_240[1] + -1;
  iVar19 = local_230 + -1;
  iVar20 = iStack_22c + -1;
  iVar11 = (int)local_250[0] + -1;
  iVar12 = (int)local_250[1] + -1;
  iVar13 = (auVar15._8_4_ - auVar46._8_4_) + -1;
  iVar16 = (auVar15._12_4_ - auVar46._12_4_) + -1;
  auVar85[0] = (byte)iVar11 | (byte)iVar17;
  auVar85[1] = (byte)((uint)iVar11 >> 8) | (byte)((uint)iVar17 >> 8);
  auVar85[2] = (byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar17 >> 0x10);
  auVar85[3] = (byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar17 >> 0x18);
  auVar85[4] = (byte)iVar12 | (byte)iVar18;
  auVar85[5] = (byte)((uint)iVar12 >> 8) | (byte)((uint)iVar18 >> 8);
  auVar85[6] = (byte)((uint)iVar12 >> 0x10) | (byte)((uint)iVar18 >> 0x10);
  auVar85[7] = (byte)((uint)iVar12 >> 0x18) | (byte)((uint)iVar18 >> 0x18);
  auVar85[8] = (byte)iVar13 | (byte)iVar19;
  auVar85[9] = (byte)((uint)iVar13 >> 8) | (byte)((uint)iVar19 >> 8);
  auVar85[10] = (byte)((uint)iVar13 >> 0x10) | (byte)((uint)iVar19 >> 0x10);
  auVar85[11] = (byte)((uint)iVar13 >> 0x18) | (byte)((uint)iVar19 >> 0x18);
  auVar85[12] = (byte)iVar16 | (byte)iVar20;
  auVar85[13] = (byte)((uint)iVar16 >> 8) | (byte)((uint)iVar20 >> 8);
  auVar85[14] = (byte)((uint)iVar16 >> 0x10) | (byte)((uint)iVar20 >> 0x10);
  auVar85[15] = (byte)((uint)iVar16 >> 0x18) | (byte)((uint)iVar20 >> 0x18);
  auVar84 = NEON_cmlt(auVar85,0,4);
  bVar29 = SUB161(_DAT_004c4480,0);
  auVar115[0] = auVar84[0] & bVar29;
  bVar30 = SUB161(_DAT_004c4480,1);
  auVar115[1] = auVar84[1] & bVar30;
  bVar31 = SUB161(_DAT_004c4480,2);
  auVar115[2] = auVar84[2] & bVar31;
  bVar32 = SUB161(_DAT_004c4480,3);
  auVar115[3] = auVar84[3] & bVar32;
  bVar33 = SUB161(_DAT_004c4480,4);
  auVar115[4] = auVar84[4] & bVar33;
  bVar34 = SUB161(_DAT_004c4480,5);
  auVar115[5] = auVar84[5] & bVar34;
  bVar35 = SUB161(_DAT_004c4480,6);
  auVar115[6] = auVar84[6] & bVar35;
  bVar36 = SUB161(_DAT_004c4480,7);
  auVar115[7] = auVar84[7] & bVar36;
  bVar37 = SUB161(_DAT_004c4480,8);
  auVar115[8] = auVar84[8] & bVar37;
  bVar38 = SUB161(_DAT_004c4480,9);
  auVar115[9] = auVar84[9] & bVar38;
  bVar39 = SUB161(_DAT_004c4480,10);
  auVar115[10] = auVar84[10] & bVar39;
  bVar40 = SUB161(_DAT_004c4480,0xb);
  auVar115[11] = auVar84[11] & bVar40;
  bVar41 = SUB161(_DAT_004c4480,0xc);
  auVar115[12] = auVar84[12] & bVar41;
  bVar42 = SUB161(_DAT_004c4480,0xd);
  auVar115[13] = auVar84[13] & bVar42;
  bVar43 = SUB161(_DAT_004c4480,0xe);
  auVar115[14] = auVar84[14] & bVar43;
  bVar44 = SUB161(_DAT_004c4480,0xf);
  auVar115[15] = auVar84[15] & bVar44;
  auVar84 = NEON_ext(auVar115,auVar115,8,1);
  uVar7 = (CONCAT13(auVar84[3] | auVar115[3] | auVar84[7] | auVar115[7],
                    CONCAT12(auVar84[2] | auVar115[2] | auVar84[6] | auVar115[6],
                             CONCAT11(auVar84[1] | auVar115[1] | auVar84[5] | auVar115[5],
                                      auVar84[0] | auVar115[0] | auVar84[4] | auVar115[4]))) ^ 0xf)
          & param_6;
  if (uVar7 == 0) {
    uVar6 = 3;
    if (*(long *)(lVar2 + 0x28) != local_b0) goto LAB_00da5c7c;
  }
  else {
    auVar85 = *(undefined (*) [16])param_2;
    auVar84 = *(undefined (*) [16])(param_2 + 0x10);
    fVar122 = auVar161._0_4_;
    fVar106 = auVar93._0_4_ - fVar122;
    fVar14 = auVar161._4_4_;
    fVar109 = auVar93._4_4_ - fVar14;
    fVar23 = auVar161._8_4_;
    fVar111 = auVar93._8_4_ - fVar23;
    fVar24 = auVar161._12_4_;
    fVar112 = auVar93._12_4_ - fVar24;
    auVar123 = NEON_scvtf(auVar47,4);
    fVar25 = auVar95._0_4_;
    fVar113 = auVar77._0_4_ - fVar25;
    fVar26 = auVar95._4_4_;
    fVar119 = auVar77._4_4_ - fVar26;
    fVar27 = auVar95._8_4_;
    fVar120 = auVar77._8_4_ - fVar27;
    fVar28 = auVar95._12_4_;
    fVar121 = auVar77._12_4_ - fVar28;
    fVar134 = auVar80._0_4_ - fVar25;
    fVar139 = auVar80._4_4_ - fVar26;
    fVar141 = auVar80._8_4_ - fVar27;
    fVar142 = auVar80._12_4_ - fVar28;
    fVar124 = auVar87._0_4_ - fVar122;
    fVar129 = auVar87._4_4_ - fVar14;
    fVar131 = auVar87._8_4_ - fVar23;
    fVar132 = auVar87._12_4_ - fVar24;
    auVar87 = *(undefined (*) [16])(param_2 + 0x20);
    iVar11 = auVar84._0_4_ - auVar85._0_4_;
    iVar12 = auVar84._4_4_ - auVar85._4_4_;
    iVar13 = auVar84._8_4_ - auVar85._8_4_;
    iVar16 = auVar84._12_4_ - auVar85._12_4_;
    auVar92._0_4_ = auVar87._0_4_ - auVar85._0_4_;
    auVar92._4_4_ = auVar87._4_4_ - auVar85._4_4_;
    auVar92._8_4_ = auVar87._8_4_ - auVar85._8_4_;
    auVar92._12_4_ = auVar87._12_4_ - auVar85._12_4_;
    auVar170._8_4_ = 0xfffffff6;
    auVar170._0_8_ = 0xfffffff6fffffff6;
    auVar170._12_4_ = 0xfffffff6;
    auVar86[0] = (byte)auVar92._0_4_ | (byte)iVar11;
    auVar86[1] = (byte)((uint)auVar92._0_4_ >> 8) | (byte)((uint)iVar11 >> 8);
    auVar86[2] = (byte)((uint)auVar92._0_4_ >> 0x10) | (byte)((uint)iVar11 >> 0x10);
    auVar86[3] = (byte)((uint)auVar92._0_4_ >> 0x18) | (byte)((uint)iVar11 >> 0x18);
    auVar86[4] = (byte)auVar92._4_4_ | (byte)iVar12;
    auVar86[5] = (byte)((uint)auVar92._4_4_ >> 8) | (byte)((uint)iVar12 >> 8);
    auVar86[6] = (byte)((uint)auVar92._4_4_ >> 0x10) | (byte)((uint)iVar12 >> 0x10);
    auVar86[7] = (byte)((uint)auVar92._4_4_ >> 0x18) | (byte)((uint)iVar12 >> 0x18);
    auVar86[8] = (byte)auVar92._8_4_ | (byte)iVar13;
    auVar86[9] = (byte)((uint)auVar92._8_4_ >> 8) | (byte)((uint)iVar13 >> 8);
    auVar86[10] = (byte)((uint)auVar92._8_4_ >> 0x10) | (byte)((uint)iVar13 >> 0x10);
    auVar86[11] = (byte)((uint)auVar92._8_4_ >> 0x18) | (byte)((uint)iVar13 >> 0x18);
    auVar86[12] = (byte)auVar92._12_4_ | (byte)iVar16;
    auVar86[13] = (byte)((uint)auVar92._12_4_ >> 8) | (byte)((uint)iVar16 >> 8);
    auVar86[14] = (byte)((uint)auVar92._12_4_ >> 0x10) | (byte)((uint)iVar16 >> 0x10);
    auVar86[15] = (byte)((uint)auVar92._12_4_ >> 0x18) | (byte)((uint)iVar16 >> 0x18);
    auVar93 = NEON_cmeq(auVar92,0,2);
    auVar87 = NEON_cmlt(auVar86,0,4);
    auVar146._0_8_ =
         CONCAT17(auVar93[7] | auVar87[7],
                  CONCAT16(auVar93[6] | auVar87[6],
                           CONCAT15(auVar93[5] | auVar87[5],
                                    CONCAT14(auVar93[4] | auVar87[4],
                                             CONCAT13(auVar93[3] | auVar87[3],
                                                      CONCAT12(auVar93[2] | auVar87[2],
                                                               CONCAT11(auVar93[1] | auVar87[1],
                                                                        auVar93[0] | auVar87[0])))))
                          ));
    auVar146[8] = auVar93[8] | auVar87[8];
    auVar146[9] = auVar93[9] | auVar87[9];
    auVar146[10] = auVar93[10] | auVar87[10];
    auVar146[11] = auVar93[11] | auVar87[11];
    auVar146[12] = auVar93[12] | auVar87[12];
    auVar146[13] = auVar93[13] | auVar87[13];
    auVar146[14] = auVar93[14] | auVar87[14];
    auVar146[15] = auVar93[15] | auVar87[15];
    auVar87 = *(undefined (*) [16])param_5;
    auVar93 = *(undefined (*) [16])(param_5 + 0x10);
    uVar154 = auVar146._8_8_;
    auVar160._8_8_ = uVar154;
    auVar160._0_8_ = auVar146._0_8_;
    auVar76._8_8_ = uVar154;
    auVar76._0_8_ = auVar146._0_8_;
    auVar79._8_8_ = uVar154;
    auVar79._0_8_ = auVar146._0_8_;
    auVar127._8_8_ = uVar154;
    auVar127._0_8_ = auVar146._0_8_;
    auVar161 = NEON_bsl(auVar160,*(undefined (*) [16])param_1,*(undefined (*) [16])(param_1 + 0x20),
                        1);
    auVar77 = NEON_bsl(auVar76,*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])param_1,1)
    ;
    auVar80 = NEON_bsl(auVar79,*(undefined (*) [16])(param_1 + 0x20),
                       *(undefined (*) [16])(param_1 + 0x10),1);
    auVar95 = *(undefined (*) [16])(param_5 + 0x20);
    auVar94 = NEON_scvtf(auVar51,4);
    uVar6 = 3;
    *(long *)(param_1 + 0x28) = auVar161._8_8_;
    *(long *)(param_1 + 0x20) = auVar161._0_8_;
    fVar64 = auVar87._0_4_;
    fVar57 = auVar93._0_4_ - fVar64;
    fVar68 = auVar87._4_4_;
    fVar59 = auVar93._4_4_ - fVar68;
    fVar69 = auVar87._8_4_;
    fVar60 = auVar93._8_4_ - fVar69;
    fVar70 = auVar87._12_4_;
    fVar61 = auVar93._12_4_ - fVar70;
    *(long *)(param_1 + 8) = auVar77._8_8_;
    *(long *)param_1 = auVar77._0_8_;
    *(long *)(param_1 + 0x18) = auVar80._8_8_;
    *(long *)(param_1 + 0x10) = auVar80._0_8_;
    auVar85 = NEON_fmov(0x40800000,4);
    auVar80 = NEON_bsl(auVar127,*(undefined (*) [16])(param_2 + 0x10),*(undefined (*) [16])param_2,1
                      );
    auVar161 = NEON_bit(*(undefined (*) [16])(param_2 + 0x10),*(undefined (*) [16])(param_2 + 0x20),
                        auVar146,1);
    auVar77 = NEON_bit(*(undefined (*) [16])(param_2 + 0x20),*(undefined (*) [16])param_2,auVar146,1
                      );
    iVar11 = auVar161._0_4_ - auVar80._0_4_;
    iVar12 = auVar161._4_4_ - auVar80._4_4_;
    iVar13 = auVar161._8_4_ - auVar80._8_4_;
    iVar16 = auVar161._12_4_ - auVar80._12_4_;
    *(long *)(param_2 + 8) = auVar80._8_8_;
    *(long *)param_2 = auVar80._0_8_;
    *(undefined (*) [16])(param_2 + 0x10) = auVar161;
    auVar54._0_4_ = auVar77._0_4_ - auVar80._0_4_;
    auVar54._4_4_ = auVar77._4_4_ - auVar80._4_4_;
    auVar54._8_4_ = auVar77._8_4_ - auVar80._8_4_;
    auVar54._12_4_ = auVar77._12_4_ - auVar80._12_4_;
    *(long *)(param_2 + 0x28) = auVar77._8_8_;
    *(long *)(param_2 + 0x20) = auVar77._0_8_;
    auVar147._0_4_ = fVar124 * fVar134 - fVar106 * fVar113;
    auVar147._4_4_ = fVar129 * fVar139 - fVar109 * fVar119;
    auVar147._8_4_ = fVar131 * fVar141 - fVar111 * fVar120;
    auVar147._12_4_ = fVar132 * fVar142 - fVar112 * fVar121;
    fVar157 = auVar95._0_4_ - fVar64;
    fVar167 = auVar95._4_4_ - fVar68;
    fVar168 = auVar95._8_4_ - fVar69;
    fVar169 = auVar95._12_4_ - fVar70;
    auVar52[0] = (byte)auVar54._0_4_ | (byte)iVar11;
    auVar52[1] = (byte)((uint)auVar54._0_4_ >> 8) | (byte)((uint)iVar11 >> 8);
    auVar52[2] = (byte)((uint)auVar54._0_4_ >> 0x10) | (byte)((uint)iVar11 >> 0x10);
    auVar52[3] = (byte)((uint)auVar54._0_4_ >> 0x18) | (byte)((uint)iVar11 >> 0x18);
    auVar52[4] = (byte)auVar54._4_4_ | (byte)iVar12;
    auVar52[5] = (byte)((uint)auVar54._4_4_ >> 8) | (byte)((uint)iVar12 >> 8);
    auVar52[6] = (byte)((uint)auVar54._4_4_ >> 0x10) | (byte)((uint)iVar12 >> 0x10);
    auVar52[7] = (byte)((uint)auVar54._4_4_ >> 0x18) | (byte)((uint)iVar12 >> 0x18);
    auVar52[8] = (byte)auVar54._8_4_ | (byte)iVar13;
    auVar52[9] = (byte)((uint)auVar54._8_4_ >> 8) | (byte)((uint)iVar13 >> 8);
    auVar52[10] = (byte)((uint)auVar54._8_4_ >> 0x10) | (byte)((uint)iVar13 >> 0x10);
    auVar52[11] = (byte)((uint)auVar54._8_4_ >> 0x18) | (byte)((uint)iVar13 >> 0x18);
    auVar52[12] = (byte)auVar54._12_4_ | (byte)iVar16;
    auVar52[13] = (byte)((uint)auVar54._12_4_ >> 8) | (byte)((uint)iVar16 >> 8);
    auVar52[14] = (byte)((uint)auVar54._12_4_ >> 0x10) | (byte)((uint)iVar16 >> 0x10);
    auVar52[15] = (byte)((uint)auVar54._12_4_ >> 0x18) | (byte)((uint)iVar16 >> 0x18);
    auVar161 = NEON_cmeq(auVar54,0,2);
    auVar84 = NEON_frecpe(auVar147,4);
    auVar80 = NEON_cmlt(auVar52,0,4);
    auVar77._0_8_ =
         CONCAT17(auVar161[7] | auVar80[7],
                  CONCAT16(auVar161[6] | auVar80[6],
                           CONCAT15(auVar161[5] | auVar80[5],
                                    CONCAT14(auVar161[4] | auVar80[4],
                                             CONCAT13(auVar161[3] | auVar80[3],
                                                      CONCAT12(auVar161[2] | auVar80[2],
                                                               CONCAT11(auVar161[1] | auVar80[1],
                                                                        auVar161[0] | auVar80[0]))))
                                   )));
    auVar77[8] = auVar161[8] | auVar80[8];
    auVar77[9] = auVar161[9] | auVar80[9];
    auVar77[10] = auVar161[10] | auVar80[10];
    auVar77[11] = auVar161[11] | auVar80[11];
    auVar77[12] = auVar161[12] | auVar80[12];
    auVar77[13] = auVar161[13] | auVar80[13];
    auVar77[14] = auVar161[14] | auVar80[14];
    auVar77[15] = auVar161[15] | auVar80[15];
    auVar80 = NEON_frecps(auVar84,auVar147,4);
    auVar162._8_8_ = auVar77._8_8_;
    auVar162._0_8_ = auVar77._0_8_;
    fVar143 = auVar84._0_4_ * auVar80._0_4_;
    fVar150 = auVar84._4_4_ * auVar80._4_4_;
    fVar152 = auVar84._8_4_ * auVar80._8_4_;
    fVar155 = auVar84._12_4_ * auVar80._12_4_;
    auVar80 = NEON_bsl(auVar162,*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])param_1,1
                      );
    auVar84 = NEON_bit(*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])(param_1 + 0x20),
                       auVar77,1);
    auVar161 = NEON_bit(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])param_1,auVar77,1
                       );
    auVar173 = NEON_fmin(auVar93,auVar95,4);
    auVar93 = NEON_fmax(auVar93,auVar95,4);
    *(long *)(param_1 + 8) = auVar80._8_8_;
    *(long *)param_1 = auVar80._0_8_;
    *(long *)(param_1 + 0x18) = auVar84._8_8_;
    *(long *)(param_1 + 0x10) = auVar84._0_8_;
    *(long *)(param_1 + 0x28) = auVar161._8_8_;
    *(long *)(param_1 + 0x20) = auVar161._0_8_;
    auVar126._8_8_ = auVar77._8_8_;
    auVar126._0_8_ = auVar77._0_8_;
    afStack_260[0] = (fVar134 * fVar57 - fVar113 * fVar157) * fVar143;
    afStack_260[1] = (fVar139 * fVar59 - fVar119 * fVar167) * fVar150;
    local_250[0] = (fVar141 * fVar60 - fVar120 * fVar168) * fVar152;
    local_250[1] = (fVar142 * fVar61 - fVar121 * fVar169) * fVar155;
    fVar143 = (fVar124 * fVar157 - fVar106 * fVar57) * fVar143;
    fVar150 = (fVar129 * fVar167 - fVar109 * fVar59) * fVar150;
    fVar152 = (fVar131 * fVar168 - fVar111 * fVar60) * fVar152;
    fVar155 = (fVar132 * fVar169 - fVar112 * fVar61) * fVar155;
    auVar93 = NEON_fmax(auVar87,auVar93,4);
    auVar81._0_4_ = afStack_260[0] * 8.0;
    auVar81._4_4_ = afStack_260[1] * 8.0;
    auVar81._8_4_ = local_250[0] * 8.0;
    auVar81._12_4_ = local_250[1] * 8.0;
    auVar127 = NEON_bsl(auVar126,*(undefined (*) [16])param_2,*(undefined (*) [16])(param_2 + 0x20),
                        1);
    auVar161 = NEON_bif(*(undefined (*) [16])(param_2 + 0x20),*(undefined (*) [16])(param_2 + 0x10),
                        auVar77,1);
    auVar148._0_8_ = CONCAT44(fVar150 * auVar85._4_4_,fVar143 * auVar85._0_4_);
    auVar148._8_4_ = fVar152 * auVar85._8_4_;
    auVar148._12_4_ = fVar155 * auVar85._12_4_;
    auVar80 = NEON_fmax(auVar81,ZEXT816(0),4);
    *(long *)(param_2 + 0x28) = auVar127._8_8_;
    *(long *)(param_2 + 0x20) = auVar127._0_8_;
    auVar136._0_4_ = auVar127._0_4_ - auVar161._0_4_;
    auVar136._4_4_ = auVar127._4_4_ - auVar161._4_4_;
    auVar136._8_4_ = auVar127._8_4_ - auVar161._8_4_;
    auVar136._12_4_ = auVar127._12_4_ - auVar161._12_4_;
    auVar95 = NEON_bit(*(undefined (*) [16])param_2,*(undefined (*) [16])(param_2 + 0x10),auVar77,1)
    ;
    auVar84 = NEON_fmin(auVar87,auVar173,4);
    auVar173 = NEON_cmlt(auVar136,0,4);
    auVar77 = NEON_fmax(auVar148,ZEXT816(0),4);
    *(long *)(param_2 + 8) = auVar95._8_8_;
    *(long *)param_2 = auVar95._0_8_;
    *(long *)(param_2 + 0x18) = auVar161._8_8_;
    *(long *)(param_2 + 0x10) = auVar161._0_8_;
    auVar87 = *(undefined (*) [16])(param_1 + 0x20);
    uStack_2b8 = auVar93._8_8_;
    uStack_2a8 = auVar84._8_8_;
    uStack_2b0 = auVar84._0_8_;
    iVar11 = auVar95._0_4_;
    iVar19 = auVar161._0_4_ - iVar11;
    iVar12 = auVar95._4_4_;
    iVar20 = auVar161._4_4_ - iVar12;
    auVar78._0_8_ = CONCAT44(iVar20,iVar19);
    iVar13 = auVar95._8_4_;
    auVar78._8_4_ = auVar161._8_4_ - iVar13;
    iVar16 = auVar95._12_4_;
    auVar78._12_4_ = auVar161._12_4_ - iVar16;
    iVar135 = MP_INT_ABS(auVar136._0_4_);
    iVar140 = MP_INT_ABS(auVar136._4_4_);
    auVar137._0_8_ = CONCAT44(iVar140,iVar135);
    auVar137._8_4_ = MP_INT_ABS(auVar136._8_4_);
    auVar137._12_4_ = MP_INT_ABS(auVar136._12_4_);
    uStack_298 = auVar148._8_8_;
    local_2a0 = auVar148._0_8_;
    afStack_290[0] = afStack_260[0] * 32.0;
    afStack_290[1] = afStack_260[1] * 32.0;
    afStack_290[2] = local_250[0] * 32.0;
    afStack_290[3] = local_250[1] * 32.0;
    auVar162 = NEON_bsl(auVar173,auVar127,auVar161,1);
    auVar95 = *(undefined (*) [16])param_1;
    auVar93 = *(undefined (*) [16])(param_1 + 0x10);
    auVar115 = NEON_scvtf(auVar78,4);
    auVar108 = NEON_scvtf(auVar137,4);
    auVar161 = NEON_smax(auVar162,ZEXT816(0),4);
    iVar99 = auVar127._0_4_ - iVar11;
    iVar105 = auVar127._4_4_ - iVar12;
    auVar101._0_8_ = CONCAT44(iVar105,iVar99);
    auVar101._8_4_ = auVar127._8_4_ - iVar13;
    auVar101._12_4_ = auVar127._12_4_ - iVar16;
    local_270[0] = (auVar94._8_4_ - fVar23) * local_250[0] +
                   fVar69 + (auVar123._8_4_ - fVar27) * fVar152 + auVar80._8_4_ + auVar77._8_4_;
    local_270[1] = (auVar94._12_4_ - fVar24) * local_250[1] +
                   fVar70 + (auVar123._12_4_ - fVar28) * fVar155 + auVar80._12_4_ + auVar77._12_4_;
    local_280[0] = (auVar94._0_4_ - fVar122) * afStack_260[0] +
                   fVar64 + (auVar123._0_4_ - fVar25) * fVar143 + auVar80._0_4_ + auVar77._0_4_;
    local_280[1] = (auVar94._4_4_ - fVar14) * afStack_260[1] +
                   fVar68 + (auVar123._4_4_ - fVar26) * fVar150 + auVar80._4_4_ + auVar77._4_4_;
    auVar80[0] = auVar173[0] & bVar29;
    auVar80[1] = auVar173[1] & bVar30;
    auVar80[2] = auVar173[2] & bVar31;
    auVar80[3] = auVar173[3] & bVar32;
    auVar80[4] = auVar173[4] & bVar33;
    auVar80[5] = auVar173[5] & bVar34;
    auVar80[6] = auVar173[6] & bVar35;
    auVar80[7] = auVar173[7] & bVar36;
    auVar80[8] = auVar173[8] & bVar37;
    auVar80[9] = auVar173[9] & bVar38;
    auVar80[10] = auVar173[10] & bVar39;
    auVar80[11] = auVar173[11] & bVar40;
    auVar80[12] = auVar173[12] & bVar41;
    auVar80[13] = auVar173[13] & bVar42;
    auVar80[14] = auVar173[14] & bVar43;
    auVar80[15] = auVar173[15] & bVar44;
    auVar77 = NEON_sshl(auVar161,auVar170,4);
    auVar171._0_4_ = auVar87._0_4_ - auVar93._0_4_;
    auVar171._4_4_ = auVar87._4_4_ - auVar93._4_4_;
    auVar171._8_4_ = auVar87._8_4_ - auVar93._8_4_;
    auVar171._12_4_ = auVar87._12_4_ - auVar93._12_4_;
    uStack_c8 = auVar137._8_8_;
    local_d0 = auVar137._0_8_;
    uStack_b8 = auVar101._8_8_;
    uStack_c0 = auVar101._0_8_;
    iVar21 = auVar95._0_4_;
    auVar161._0_4_ = auVar87._0_4_ - iVar21;
    iVar22 = auVar95._4_4_;
    auVar161._4_4_ = auVar87._4_4_ - iVar22;
    iVar50 = auVar95._8_4_;
    auVar161._8_4_ = auVar87._8_4_ - iVar50;
    iVar71 = auVar95._12_4_;
    auVar161._12_4_ = auVar87._12_4_ - iVar71;
    auVar85 = NEON_bif(auVar87,auVar93,auVar173,1);
    auVar87 = NEON_smin(auVar15,auVar77,4);
    auVar128._0_4_ = auVar93._0_4_ - iVar21;
    auVar128._4_4_ = auVar93._4_4_ - iVar22;
    auVar128._8_4_ = auVar93._8_4_ - iVar50;
    auVar128._12_4_ = auVar93._12_4_ - iVar71;
    iVar21 = iVar21 + auVar51._0_4_ * -0x100;
    iVar22 = iVar22 + auVar51._4_4_ * -0x100;
    auVar93 = NEON_smax(auVar46,auVar87,4);
    auVar87 = NEON_frecpe(auVar115,4);
    auVar73._0_4_ = iVar11 + auVar47._0_4_ * -0x100;
    auVar73._4_4_ = iVar12 + auVar47._4_4_ * -0x100;
    auVar73._8_4_ = iVar13 + auVar47._8_4_ * -0x100;
    auVar73._12_4_ = iVar16 + auVar47._12_4_ * -0x100;
    auVar123 = NEON_scvtf(auVar128,4);
    auVar84 = NEON_scvtf(auVar161,4);
    auVar47 = NEON_frecps(auVar87,auVar115,4);
    auVar94 = NEON_neg(auVar171,4);
    auVar95 = NEON_frecpe(auVar108,4);
    auVar163._0_4_ = auVar162._0_4_ + auVar93._0_4_ * -0x400;
    auVar163._4_4_ = auVar162._4_4_ + auVar93._4_4_ * -0x400;
    auVar163._8_4_ = auVar162._8_4_ + auVar93._8_4_ * -0x400;
    auVar163._12_4_ = auVar162._12_4_ + auVar93._12_4_ * -0x400;
    auVar93 = NEON_frecps(auVar95,auVar108,4);
    auVar173 = NEON_bsl(auVar173,auVar94,auVar171,1);
    auVar116._0_4_ = auVar87._0_4_ * auVar47._0_4_ * auVar123._0_4_;
    auVar116._4_4_ = auVar87._4_4_ * auVar47._4_4_ * auVar123._4_4_;
    auVar116._8_4_ = auVar87._8_4_ * auVar47._8_4_ * auVar123._8_4_;
    auVar116._12_4_ = auVar87._12_4_ * auVar47._12_4_ * auVar123._12_4_;
    auVar108 = NEON_cmeq(auVar78,0,2);
    auVar47 = NEON_scvtf(auVar173,4);
    auVar174._0_8_ = CONCAT44(auVar73._4_4_ + 0x7f,auVar73._0_4_ + 0x7f) & 0xffffff00ffffff00;
    auVar174._8_4_ = auVar73._8_4_ + 0x7fU & 0xffffff00;
    auVar174._12_4_ = auVar73._12_4_ + 0x7fU & 0xffffff00;
    fVar122 = (float)*(int *)(this + 0x124) + 4.0 + (float)*(int *)(this + 0x124) + 4.0;
    auVar87 = NEON_cmlt(auVar128,0,4);
    auVar149._0_4_ = auVar95._0_4_ * auVar93._0_4_ * auVar47._0_4_;
    auVar149._4_4_ = auVar95._4_4_ * auVar93._4_4_ * auVar47._4_4_;
    auVar149._8_4_ = auVar95._8_4_ * auVar93._8_4_ * auVar47._8_4_;
    auVar149._12_4_ = auVar95._12_4_ * auVar93._12_4_ * auVar47._12_4_;
    auVar115 = NEON_bif(auVar174,auVar73,auVar108,1);
    auVar94 = NEON_scvtf(auVar101,4);
    auVar88._4_4_ = fVar122;
    auVar88._0_4_ = fVar122;
    auVar88._8_4_ = fVar122;
    auVar88._12_4_ = fVar122;
    iVar45 = MP_INT_ABS(auVar128._0_4_);
    iVar48 = MP_INT_ABS(auVar128._4_4_);
    iVar49 = MP_INT_ABS(auVar128._8_4_);
    iVar133 = MP_INT_ABS(auVar128._12_4_);
    auVar47 = NEON_neg(auVar115,4);
    auVar93 = NEON_frecpe(auVar94,4);
    auVar95._0_8_ = auVar87._0_8_ | 0x100000001;
    auVar95[8] = auVar87[8] | 1;
    auVar95[9] = auVar87[9];
    auVar95[10] = auVar87[10];
    auVar95[11] = auVar87[11];
    auVar95[12] = auVar87[12] | 1;
    auVar95[13] = auVar87[13];
    auVar95[14] = auVar87[14];
    auVar95[15] = auVar87[15];
    auVar127 = NEON_bsl(auVar108,auVar88,auVar116,1);
    auVar47 = NEON_scvtf(auVar47,4);
    auVar108 = NEON_cmlt(auVar115,0,4);
    auVar87 = NEON_frecps(auVar93,auVar94,4);
    auVar94 = NEON_neg(auVar95,4);
    iVar172 = MP_INT_ABS(auVar115._0_4_);
    iVar177 = MP_INT_ABS(auVar115._4_4_);
    iVar178 = MP_INT_ABS(auVar115._8_4_);
    iVar179 = MP_INT_ABS(auVar115._12_4_);
    auVar94 = NEON_bsl(auVar108,auVar94,auVar95,1);
    iVar107 = (int)(auVar127._0_4_ * auVar47._0_4_);
    iVar110 = (int)(auVar127._4_4_ * auVar47._4_4_);
    auVar115 = NEON_cmeq(auVar137,0,2);
    iVar11 = auVar94._0_4_ >> 0x1f;
    iVar16 = auVar94._4_4_ >> 0x1f;
    iVar12 = MP_INT_ABS(iVar107);
    iVar13 = MP_INT_ABS(iVar110);
    iVar17 = MP_INT_ABS((int)(auVar127._8_4_ * auVar47._8_4_));
    iVar18 = MP_INT_ABS((int)(auVar127._12_4_ * auVar47._12_4_));
    uVar83 = SUB41(fVar122,0);
    uVar90 = (undefined)((uint)fVar122 >> 8);
    uVar91 = (undefined)((uint)fVar122 >> 0x10);
    bVar29 = (byte)((uint)fVar122 >> 0x18);
    auVar89._0_8_ =
         CONCAT17(bVar29,CONCAT16(uVar91,CONCAT15(uVar90,CONCAT14(uVar83,fVar122)))) ^
         0x8000000080000000;
    auVar89[8] = uVar83;
    auVar89[9] = uVar90;
    auVar89[10] = uVar91;
    auVar89[11] = bVar29 ^ 0x80;
    auVar89[12] = uVar83;
    auVar89[13] = uVar90;
    auVar89[14] = uVar91;
    auVar89[15] = bVar29 ^ 0x80;
    auVar102._8_4_ = 0xffffffe1;
    auVar102._0_8_ = 0xffffffe1ffffffe1;
    auVar102._12_4_ = 0xffffffe1;
    local_f0 = auVar93._0_4_ * auVar87._0_4_ * auVar84._0_4_;
    fStack_ec = auVar93._4_4_ * auVar87._4_4_ * auVar84._4_4_;
    auVar175._0_4_ = (iVar172 * iVar45 + iVar11) - iVar19 * iVar12;
    auVar175._4_4_ = (iVar177 * iVar48 + iVar16) - iVar20 * iVar13;
    auVar175._8_4_ = (iVar178 * iVar49 + (auVar94._8_4_ >> 0x1f)) - auVar78._8_4_ * iVar17;
    auVar175._12_4_ = (iVar179 * iVar133 + (auVar94._12_4_ >> 0x1f)) - auVar78._12_4_ * iVar18;
    auVar58._0_8_ = CONCAT44(auVar163._4_4_ + 0x7f,auVar163._0_4_ + 0x7f) & 0xffffff00ffffff00;
    auVar58._8_4_ = auVar163._8_4_ + 0x7fU & 0xffffff00;
    auVar58._12_4_ = auVar163._12_4_ + 0x7fU & 0xffffff00;
    auVar123 = NEON_bit(auVar149,auVar89,auVar115,1);
    uStack_d8 = auVar78._8_8_;
    uStack_e0 = auVar78._0_8_;
    auVar93 = NEON_sshl(auVar175,auVar102,4);
    auVar87 = NEON_cmlt(auVar173,0,4);
    auVar47 = NEON_bsl(auVar115,auVar58,auVar163,1);
    uStack_108 = auVar127._8_8_;
    local_110 = auVar127._0_8_;
    uStack_f8 = auVar123._8_8_;
    uStack_100 = auVar123._0_8_;
    iVar12 = CONCAT13(auVar93[3] & (byte)((uint)iVar19 >> 0x18),
                      CONCAT12(auVar93[2] & (byte)((uint)iVar19 >> 0x10),
                               CONCAT11(auVar93[1] & (byte)((uint)iVar19 >> 8),
                                        auVar93[0] & (byte)iVar19)));
    auVar62._0_8_ =
         CONCAT17(auVar93[7] & (byte)((uint)iVar20 >> 0x18),
                  CONCAT16(auVar93[6] & (byte)((uint)iVar20 >> 0x10),
                           CONCAT15(auVar93[5] & (byte)((uint)iVar20 >> 8),
                                    CONCAT14(auVar93[4] & (byte)iVar20,iVar12))));
    auVar62[8] = auVar93[8] & (byte)auVar78._8_4_;
    auVar62[9] = auVar93[9] & (byte)((uint)auVar78._8_4_ >> 8);
    auVar62[10] = auVar93[10] & (byte)((uint)auVar78._8_4_ >> 0x10);
    auVar62[11] = auVar93[11] & (byte)((uint)auVar78._8_4_ >> 0x18);
    auVar63[12] = auVar93[12] & (byte)auVar78._12_4_;
    auVar63._0_12_ = auVar62;
    auVar63[13] = auVar93[13] & (byte)((uint)auVar78._12_4_ >> 8);
    auVar63[14] = auVar93[14] & (byte)((uint)auVar78._12_4_ >> 0x10);
    auVar63[15] = auVar93[15] & (byte)((uint)auVar78._12_4_ >> 0x18);
    auVar164._0_8_ = auVar87._0_8_ | 0x100000001;
    auVar164[8] = auVar87[8] | 1;
    auVar164[9] = auVar87[9];
    auVar164[10] = auVar87[10];
    auVar164[11] = auVar87[11];
    auVar164[12] = auVar87[12] | 1;
    auVar164[13] = auVar87[13];
    auVar164[14] = auVar87[14];
    auVar164[15] = auVar87[15];
    auVar87 = NEON_neg(auVar47,4);
    local_1a0 = (int)(auVar127._0_4_ * 1024.0);
    iStack_19c = (int)(auVar127._4_4_ * 1024.0);
    auVar176._0_4_ = iVar12 + auVar175._0_4_;
    auVar176._4_4_ = (int)((ulong)auVar62._0_8_ >> 0x20) + auVar175._4_4_;
    auVar176._8_4_ = auVar62._8_4_ + auVar175._8_4_;
    auVar176._12_4_ = auVar63._12_4_ + auVar175._12_4_;
    auVar84 = NEON_neg(auVar164,4);
    uStack_138 = auVar95._8_8_;
    uStack_128 = auVar164._8_8_;
    uStack_130 = auVar164._0_8_;
    auVar95 = NEON_cmlt(auVar47,0,4);
    auVar87 = NEON_scvtf(auVar87,4);
    MP_INT_ABS(local_1a0);
    MP_INT_ABS(iStack_19c);
    MP_INT_ABS((int)(auVar127._8_4_ * 1024.0));
    MP_INT_ABS((int)(auVar127._12_4_ * 1024.0));
    auVar115 = NEON_bit(auVar164,auVar84,auVar95,1);
    iVar12 = CONCAT13(~(byte)((uint)auVar176._0_4_ >> 0x18),
                      CONCAT12(~(byte)((uint)auVar176._0_4_ >> 0x10),
                               CONCAT11(~(byte)((uint)auVar176._0_4_ >> 8),~(byte)auVar176._0_4_)));
    auVar53._0_8_ =
         CONCAT17(~(byte)((uint)auVar176._4_4_ >> 0x18),
                  CONCAT16(~(byte)((uint)auVar176._4_4_ >> 0x10),
                           CONCAT15(~(byte)((uint)auVar176._4_4_ >> 8),
                                    CONCAT14(~(byte)auVar176._4_4_,iVar12))));
    auVar53[8] = ~(byte)auVar176._8_4_;
    auVar53[9] = ~(byte)((uint)auVar176._8_4_ >> 8);
    auVar53[10] = ~(byte)((uint)auVar176._8_4_ >> 0x10);
    auVar53[11] = ~(byte)((uint)auVar176._8_4_ >> 0x18);
    auVar55[12] = ~(byte)auVar176._12_4_;
    auVar55._0_12_ = auVar53;
    auVar55[13] = ~(byte)((uint)auVar176._12_4_ >> 8);
    auVar55[14] = ~(byte)((uint)auVar176._12_4_ >> 0x10);
    auVar55[15] = ~(byte)((uint)auVar176._12_4_ >> 0x18);
    iStack_160 = MP_INT_ABS(auVar173._0_4_);
    iStack_15c = MP_INT_ABS(auVar173._4_4_);
    iVar13 = MP_INT_ABS(auVar173._8_4_);
    iVar18 = MP_INT_ABS(auVar173._12_4_);
    iVar49 = MP_INT_ABS(auVar47._0_4_);
    iVar133 = MP_INT_ABS(auVar47._4_4_);
    iVar172 = MP_INT_ABS(auVar47._8_4_);
    iVar177 = MP_INT_ABS(auVar47._12_4_);
    auVar56._0_4_ = iVar19 + iVar12;
    auVar56._4_4_ = iVar20 + (int)((ulong)auVar53._0_8_ >> 0x20);
    auVar56._8_4_ = auVar78._8_4_ + auVar53._8_4_;
    auVar56._12_4_ = auVar78._12_4_ + auVar55._12_4_;
    iVar125 = (int)(auVar123._0_4_ * auVar87._0_4_);
    iVar130 = (int)(auVar123._4_4_ * auVar87._4_4_);
    iStack_190 = (int)(auVar123._0_4_ * 1024.0);
    iStack_18c = (int)(auVar123._4_4_ * 1024.0);
    iVar19 = MP_INT_ABS(iVar125);
    iVar20 = MP_INT_ABS(iVar130);
    iVar45 = MP_INT_ABS((int)(auVar123._8_4_ * auVar87._8_4_));
    iVar48 = MP_INT_ABS((int)(auVar123._12_4_ * auVar87._12_4_));
    iVar12 = auVar115._0_4_ >> 0x1f;
    iVar17 = auVar115._4_4_ >> 0x1f;
    auVar84 = NEON_bsl(auVar108,auVar56,auVar176,1);
    auVar87 = NEON_neg(auVar73,4);
    iVar178 = MP_INT_ABS(iStack_190);
    iVar179 = MP_INT_ABS(iStack_18c);
    MP_INT_ABS((int)(auVar123._8_4_ * 1024.0));
    MP_INT_ABS((int)(auVar123._12_4_ * 1024.0));
    auVar138._0_4_ = (iVar49 * iStack_160 + iVar12) - iVar135 * iVar19;
    auVar138._4_4_ = (iVar133 * iStack_15c + iVar17) - iVar140 * iVar20;
    auVar138._8_4_ = (iVar172 * iVar13 + (auVar115._8_4_ >> 0x1f)) - auVar137._8_4_ * iVar45;
    auVar138._12_4_ = (iVar177 * iVar18 + (auVar115._12_4_ >> 0x1f)) - auVar137._12_4_ * iVar48;
    auVar173 = NEON_scvtf(auVar87,4);
    iVar49 = CONCAT13(auVar93[3] & auVar94[3],
                      CONCAT12(auVar93[2] & auVar94[2],
                               CONCAT11(auVar93[1] & auVar94[1],auVar93[0] & auVar94[0])));
    auVar47 = NEON_sshl(auVar138,auVar102,4);
    auVar87 = NEON_cmlt(auVar161,0,4);
    fVar122 = (float)((ulong)uStack_e8 >> 0x20);
    iStack_1f0 = iStack_160 * 0x400 - iVar135 * iVar178;
    iStack_1ec = iStack_15c * 0x400 - iVar140 * iVar179;
    iVar13 = CONCAT13(auVar47[3] & (byte)((uint)iVar135 >> 0x18),
                      CONCAT12(auVar47[2] & (byte)((uint)iVar135 >> 0x10),
                               CONCAT11(auVar47[1] & (byte)((uint)iVar135 >> 8),
                                        auVar47[0] & (byte)iVar135)));
    auVar114._0_8_ =
         CONCAT17(auVar47[7] & (byte)((uint)iVar140 >> 0x18),
                  CONCAT16(auVar47[6] & (byte)((uint)iVar140 >> 0x10),
                           CONCAT15(auVar47[5] & (byte)((uint)iVar140 >> 8),
                                    CONCAT14(auVar47[4] & (byte)iVar140,iVar13))));
    auVar114[8] = auVar47[8] & (byte)auVar137._8_4_;
    auVar114[9] = auVar47[9] & (byte)((uint)auVar137._8_4_ >> 8);
    auVar114[10] = auVar47[10] & (byte)((uint)auVar137._8_4_ >> 0x10);
    auVar114[11] = auVar47[11] & (byte)((uint)auVar137._8_4_ >> 0x18);
    auVar117[12] = auVar47[12] & (byte)auVar137._12_4_;
    auVar117._0_12_ = auVar114;
    auVar117[13] = auVar47[13] & (byte)((uint)auVar137._12_4_ >> 8);
    auVar117[14] = auVar47[14] & (byte)((uint)auVar137._12_4_ >> 0x10);
    auVar117[15] = auVar47[15] & (byte)((uint)auVar137._12_4_ >> 0x18);
    auVar82._0_8_ = auVar87._0_8_ | 0x100000001;
    auVar82[8] = auVar87[8] | 1;
    auVar82[9] = auVar87[9];
    auVar82[10] = auVar87[10];
    auVar82[11] = auVar87[11];
    auVar82[12] = auVar87[12] | 1;
    auVar82[13] = auVar87[13];
    auVar82[14] = auVar87[14];
    auVar82[15] = auVar87[15];
    iVar179 = (int)(local_f0 * auVar173._0_4_);
    iVar96 = (int)(fStack_ec * auVar173._4_4_);
    iVar97 = (int)((float)uStack_e8 * auVar173._8_4_);
    iVar98 = (int)(fVar122 * auVar173._12_4_);
    local_150 = MP_INT_ABS(auVar161._0_4_);
    iStack_14c = MP_INT_ABS(auVar161._4_4_);
    iVar45 = MP_INT_ABS(auVar161._8_4_);
    iVar48 = MP_INT_ABS(auVar161._12_4_);
    auVar118._0_4_ = iVar13 + auVar138._0_4_;
    auVar118._4_4_ = (int)((ulong)auVar114._0_8_ >> 0x20) + auVar138._4_4_;
    auVar118._8_4_ = auVar114._8_4_ + auVar138._8_4_;
    auVar118._12_4_ = auVar117._12_4_ + auVar138._12_4_;
    auVar87 = NEON_neg(auVar82,4);
    uStack_118 = auVar82._8_8_;
    local_120 = auVar82._0_8_;
    auVar173 = NEON_cmlt(auVar73,0,4);
    iVar133 = MP_INT_ABS(auVar73._0_4_);
    iVar172 = MP_INT_ABS(auVar73._4_4_);
    iVar177 = MP_INT_ABS(auVar73._8_4_);
    iVar178 = MP_INT_ABS(auVar73._12_4_);
    local_140 = CONCAT44(iVar48,iVar45);
    iVar144 = CONCAT13(auVar47[3] & auVar115[3],
                       CONCAT12(auVar47[2] & auVar115[2],
                                CONCAT11(auVar47[1] & auVar115[1],auVar47[0] & auVar115[0])));
    auVar161 = NEON_bif(auVar87,auVar82,auVar173,1);
    iVar145 = MP_INT_ABS(iVar179);
    iVar151 = MP_INT_ABS(iVar96);
    iVar153 = MP_INT_ABS(iVar97);
    iVar156 = MP_INT_ABS(iVar98);
    iVar13 = auVar161._0_4_ >> 0x1f;
    iVar18 = auVar161._4_4_ >> 0x1f;
    iVar19 = auVar161._8_4_ >> 0x1f;
    iVar20 = auVar161._12_4_ >> 0x1f;
    iVar158 = CONCAT13(~(byte)((uint)auVar118._0_4_ >> 0x18),
                       CONCAT12(~(byte)((uint)auVar118._0_4_ >> 0x10),
                                CONCAT11(~(byte)((uint)auVar118._0_4_ >> 8),~(byte)auVar118._0_4_)))
    ;
    auVar159._0_8_ =
         CONCAT17(~(byte)((uint)auVar118._4_4_ >> 0x18),
                  CONCAT16(~(byte)((uint)auVar118._4_4_ >> 0x10),
                           CONCAT15(~(byte)((uint)auVar118._4_4_ >> 8),
                                    CONCAT14(~(byte)auVar118._4_4_,iVar158))));
    auVar159[8] = ~(byte)auVar118._8_4_;
    auVar159[9] = ~(byte)((uint)auVar118._8_4_ >> 8);
    auVar159[10] = ~(byte)((uint)auVar118._8_4_ >> 0x10);
    auVar159[11] = ~(byte)((uint)auVar118._8_4_ >> 0x18);
    auVar165[12] = ~(byte)auVar118._12_4_;
    auVar165._0_12_ = auVar159;
    auVar165[13] = ~(byte)((uint)auVar118._12_4_ >> 8);
    auVar165[14] = ~(byte)((uint)auVar118._12_4_ >> 0x10);
    auVar165[15] = ~(byte)((uint)auVar118._12_4_ >> 0x18);
    auVar74._0_4_ = (iVar133 * local_150 + iVar13) - iVar99 * iVar145;
    auVar74._4_4_ = (iVar172 * iStack_14c + iVar18) - iVar105 * iVar151;
    auVar74._8_4_ = (iVar177 * iVar45 + iVar19) - auVar101._8_4_ * iVar153;
    auVar74._12_4_ = (iVar178 * iVar48 + iVar20) - auVar101._12_4_ * iVar156;
    auVar166._0_4_ = iVar135 + iVar158;
    auVar166._4_4_ = iVar140 + (int)((ulong)auVar159._0_8_ >> 0x20);
    auVar166._8_4_ = auVar137._8_4_ + auVar159._8_4_;
    auVar166._12_4_ = auVar137._12_4_ + auVar165._12_4_;
    auVar87 = NEON_sshl(auVar74,auVar102,4);
    auVar95 = NEON_bit(auVar118,auVar166,auVar95,1);
    local_230 = (iVar107 - iVar11) + iVar49 + iVar21 + 0x7f;
    iStack_22c = (iVar110 - iVar16) +
                 (int)(CONCAT17(auVar93[7] & auVar94[7],
                                CONCAT16(auVar93[6] & auVar94[6],
                                         CONCAT15(auVar93[5] & auVar94[5],
                                                  CONCAT14(auVar93[4] & auVar94[4],iVar49)))) >>
                      0x20) + iVar22 + 0x7f;
    iStack_220 = (iVar125 - iVar12) + iVar144 + auVar85._0_4_ + auVar51._0_4_ * -0x100 + 0x7f;
    iStack_21c = (iVar130 - iVar17) +
                 (int)(CONCAT17(auVar47[7] & auVar115[7],
                                CONCAT16(auVar47[6] & auVar115[6],
                                         CONCAT15(auVar47[5] & auVar115[5],
                                                  CONCAT14(auVar47[4] & auVar115[4],iVar144)))) >>
                      0x20) + auVar85._4_4_ + auVar51._4_4_ * -0x100 + 0x7f;
    iVar11 = CONCAT13(auVar87[3] & (byte)((uint)iVar99 >> 0x18),
                      CONCAT12(auVar87[2] & (byte)((uint)iVar99 >> 0x10),
                               CONCAT11(auVar87[1] & (byte)((uint)iVar99 >> 8),
                                        auVar87[0] & (byte)iVar99)));
    auVar65._0_8_ =
         CONCAT17(auVar87[7] & (byte)((uint)iVar105 >> 0x18),
                  CONCAT16(auVar87[6] & (byte)((uint)iVar105 >> 0x10),
                           CONCAT15(auVar87[5] & (byte)((uint)iVar105 >> 8),
                                    CONCAT14(auVar87[4] & (byte)iVar105,iVar11))));
    auVar65[8] = auVar87[8] & (byte)auVar101._8_4_;
    auVar65[9] = auVar87[9] & (byte)((uint)auVar101._8_4_ >> 8);
    auVar65[10] = auVar87[10] & (byte)((uint)auVar101._8_4_ >> 0x10);
    auVar65[11] = auVar87[11] & (byte)((uint)auVar101._8_4_ >> 0x18);
    auVar66[12] = auVar87[12] & (byte)auVar101._12_4_;
    auVar66._0_12_ = auVar65;
    auVar66[13] = auVar87[13] & (byte)((uint)auVar101._12_4_ >> 8);
    auVar66[14] = auVar87[14] & (byte)((uint)auVar101._12_4_ >> 0x10);
    auVar66[15] = auVar87[15] & (byte)((uint)auVar101._12_4_ >> 0x18);
    uStack_1c8 = auVar84._8_8_;
    uStack_1b8 = auVar95._8_8_;
    uStack_1c0 = auVar95._0_8_;
    auVar93 = NEON_ext(auVar80,auVar80,8,1);
    auVar67._0_4_ = iVar11 + auVar74._0_4_;
    auVar67._4_4_ = (int)((ulong)auVar65._0_8_ >> 0x20) + auVar74._4_4_;
    auVar67._8_4_ = auVar65._8_4_ + auVar74._8_4_;
    auVar67._12_4_ = auVar66._12_4_ + auVar74._12_4_;
    iVar11 = CONCAT13(auVar87[3] & auVar161[3],
                      CONCAT12(auVar87[2] & auVar161[2],
                               CONCAT11(auVar87[1] & auVar161[1],auVar87[0] & auVar161[0])));
    auVar72._0_8_ =
         CONCAT17(auVar87[7] & auVar161[7],
                  CONCAT16(auVar87[6] & auVar161[6],
                           CONCAT15(auVar87[5] & auVar161[5],
                                    CONCAT14(auVar87[4] & auVar161[4],iVar11))));
    auVar72[8] = auVar87[8] & auVar161[8];
    auVar72[9] = auVar87[9] & auVar161[9];
    auVar72[10] = auVar87[10] & auVar161[10];
    auVar72[11] = auVar87[11] & auVar161[11];
    auVar75[12] = auVar87[12] & auVar161[12];
    auVar75._0_12_ = auVar72;
    auVar75[13] = auVar87[13] & auVar161[13];
    auVar75[14] = auVar87[14] & auVar161[14];
    auVar75[15] = auVar87[15] & auVar161[15];
    iVar12 = CONCAT13(~(byte)((uint)auVar67._0_4_ >> 0x18),
                      CONCAT12(~(byte)((uint)auVar67._0_4_ >> 0x10),
                               CONCAT11(~(byte)((uint)auVar67._0_4_ >> 8),~(byte)auVar67._0_4_)));
    auVar100._0_8_ =
         CONCAT17(~(byte)((uint)auVar67._4_4_ >> 0x18),
                  CONCAT16(~(byte)((uint)auVar67._4_4_ >> 0x10),
                           CONCAT15(~(byte)((uint)auVar67._4_4_ >> 8),
                                    CONCAT14(~(byte)auVar67._4_4_,iVar12))));
    auVar100[8] = ~(byte)auVar67._8_4_;
    auVar100[9] = ~(byte)((uint)auVar67._8_4_ >> 8);
    auVar100[10] = ~(byte)((uint)auVar67._8_4_ >> 0x10);
    auVar100[11] = ~(byte)((uint)auVar67._8_4_ >> 0x18);
    auVar103[12] = ~(byte)auVar67._12_4_;
    auVar103._0_12_ = auVar100;
    auVar103[13] = ~(byte)((uint)auVar67._12_4_ >> 8);
    auVar103[14] = ~(byte)((uint)auVar67._12_4_ >> 0x10);
    auVar103[15] = ~(byte)((uint)auVar67._12_4_ >> 0x18);
    local_170 = (int)((float)uStack_e8 * 1024.0);
    iStack_16c = (int)(fVar122 * 1024.0);
    auVar104._0_4_ = iVar99 + iVar12;
    auVar104._4_4_ = iVar105 + (int)((ulong)auVar100._0_8_ >> 0x20);
    auVar104._8_4_ = auVar101._8_4_ + auVar100._8_4_;
    auVar104._12_4_ = auVar101._12_4_ + auVar103._12_4_;
    iVar16 = MP_INT_ABS((int)(local_f0 * 1024.0));
    iVar17 = MP_INT_ABS((int)(fStack_ec * 1024.0));
    iVar49 = MP_INT_ABS(local_170);
    iVar133 = MP_INT_ABS(iStack_16c);
    local_180 = (int)(local_f0 * 1024.0);
    iStack_17c = (int)(fStack_ec * 1024.0);
    auVar87 = NEON_bit(auVar67,auVar104,auVar173,1);
    iVar12 = (int)*(undefined8 *)(this + 300);
    uStack_1a8 = auVar87._8_8_;
    local_1b0 = auVar87._0_8_;
    local_2f0[0] = iVar8 + auVar77._0_4_ * iVar12;
    local_2f0[1] = iVar10 + auVar77._4_4_ * iVar12;
    local_1d0 = CONCAT44(iVar48 * 0x400 - auVar101._12_4_ * iVar133,
                         iVar45 * 0x400 - auVar101._8_4_ * iVar49);
    local_1e0 = local_150 * 0x400 - iVar99 * iVar16;
    iStack_1dc = iStack_14c * 0x400 - iVar105 * iVar17;
    local_200 = (iVar97 - iVar19) + auVar72._8_4_ + iVar50 + auVar51._8_4_ * -0x100 + 0x7f;
    iStack_1fc = (iVar98 - iVar20) + auVar75._12_4_ + iVar71 + auVar51._12_4_ * -0x100 + 0x7f;
    local_210 = (iVar179 - iVar13) + iVar11 + iVar21 + 0x7f;
    iStack_20c = (iVar96 - iVar18) + (int)((ulong)auVar72._0_8_ >> 0x20) + iVar22 + 0x7f;
    local_2e0[0] = iVar8 + auVar15._0_4_ * iVar12;
    local_2e0[1] = iVar10 + auVar15._4_4_ * iVar12;
    local_2c0 = CONCAT44(auVar9._12_4_ + auVar46._12_4_ * iVar12,
                         auVar9._8_4_ + auVar46._8_4_ * iVar12);
    aiStack_2d0[0] = iVar8 + auVar46._0_4_ * iVar12;
    aiStack_2d0[1] = iVar10 + auVar46._4_4_ * iVar12;
    do {
      if (uVar7 == 0) break;
      uVar3 = (uVar7 & 0xaaaaaaaa) >> 1 | (uVar7 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar5 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      iStack_300 = *(int *)((long)&local_2c0 + lVar5 * 4);
      fStack_30c = local_270[lVar5] * 0.0 + local_280[lVar5];
      fVar122 = afStack_290[lVar5];
      fVar23 = afStack_260[lVar5];
      local_2f0[0] = iStack_300;
      local_2f0[1] = iStack_300;
      fVar14 = *(float *)((long)&local_2a0 + lVar5 * 4);
      iVar8 = aiStack_240[lVar5];
      iVar10 = aiStack_2d0[lVar5];
      iVar11 = local_2f0[lVar5];
      iVar12 = local_2e0[lVar5];
      local_320 = SUB164(_DAT_004c5900,0) * fVar23 + fStack_30c;
      fStack_31c = SUB164(_DAT_004c5900,4) * fVar23 + fStack_30c;
      local_310 = SUB164(_DAT_004c5900,8) * fVar23 + fStack_30c;
      fStack_30c = SUB164(_DAT_004c5900,0xc) * fVar23 + fStack_30c;
      uVar4 = (uint)lVar5;
      uVar3 = CONCAT13(auVar93[3] | auVar80[3] | auVar93[7] | auVar80[7],
                       CONCAT12(auVar93[2] | auVar80[2] | auVar93[6] | auVar80[6],
                                CONCAT11(auVar93[1] | auVar80[1] | auVar93[5] | auVar80[5],
                                         auVar93[0] | auVar80[0] | auVar93[4] | auVar80[4]))) &
              1 << (ulong)(uVar4 & 0x1f);
      iStack_2fc = iStack_300;
      if ((iVar8 < 4) || ((int)local_250[lVar5] < 4)) {
        if (uVar3 == 0) {
          uVar3 = RasterizeTriangle<1,0,1>
                            (this,uVar4,iVar8,iVar10,iVar11,iVar12,(__Int32x4_t *)&local_230,
                             (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,
                             (__Float32x4_t *)&local_310,(__Float32x4_t *)&iStack_300,
                             (__Float32x4_t *)&local_320,fVar122,fVar14,(__Int32x4_t *)&uStack_e0,
                             (__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,
                             (__Int32x4_t *)&local_1d0,(__Int32x4_t *)&local_200);
        }
        else {
          uVar3 = RasterizeTriangle<1,0,0>
                            (this,uVar4,iVar8,iVar10,iVar11,iVar12,(__Int32x4_t *)&local_230,
                             (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,
                             (__Float32x4_t *)&local_310,(__Float32x4_t *)&iStack_300,
                             (__Float32x4_t *)&local_320,fVar122,fVar14,(__Int32x4_t *)&uStack_e0,
                             (__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,
                             (__Int32x4_t *)&local_1d0,(__Int32x4_t *)&local_200);
        }
      }
      else if (uVar3 == 0) {
        uVar3 = RasterizeTriangle<1,1,1>
                          (this,uVar4,iVar8,iVar10,iVar11,iVar12,(__Int32x4_t *)&local_230,
                           (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,
                           (__Float32x4_t *)&local_310,(__Float32x4_t *)&iStack_300,
                           (__Float32x4_t *)&local_320,fVar122,fVar14,(__Int32x4_t *)&uStack_e0,
                           (__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,
                           (__Int32x4_t *)&local_1d0,(__Int32x4_t *)&local_200);
      }
      else {
        uVar3 = RasterizeTriangle<1,1,0>
                          (this,uVar4,iVar8,iVar10,iVar11,iVar12,(__Int32x4_t *)&local_230,
                           (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,
                           (__Float32x4_t *)&local_310,(__Float32x4_t *)&iStack_300,
                           (__Float32x4_t *)&local_320,fVar122,fVar14,(__Int32x4_t *)&uStack_e0,
                           (__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,
                           (__Int32x4_t *)&local_1d0,(__Int32x4_t *)&local_200);
      }
      uVar7 = uVar7 - 1 & uVar7;
      uVar6 = uVar3 & uVar6;
    } while (uVar6 != 0);
    if (*(long *)(lVar2 + 0x28) != local_b0) {
LAB_00da5c7c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar6;
}


