// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RasterizeTriangleBatch<false>
// Entry Point: 00da13b8
// Size: 2308 bytes
// Signature: int __thiscall RasterizeTriangleBatch<false>(MaskedOcclusionCullingPrivate * this, __Int32x4_t * param_1, __Int32x4_t * param_2, __Float32x4_t * param_3, __Float32x4_t * param_4, __Float32x4_t * param_5, uint param_6, ScissorRect * param_7)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* int 
   MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangleBatch<false>(__Int32x4_t*,
   __Int32x4_t*, __Float32x4_t*, __Float32x4_t*, __Float32x4_t*, unsigned int,
   MaskedOcclusionCulling::ScissorRect const*) */

int __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RasterizeTriangleBatch<false>
          (MaskedOcclusionCullingPrivate *this,__Int32x4_t *param_1,__Int32x4_t *param_2,
          __Float32x4_t *param_3,__Float32x4_t *param_4,__Float32x4_t *param_5,uint param_6,
          ScissorRect *param_7)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  int iVar9;
  int iVar10;
  undefined auVar8 [16];
  int iVar11;
  int iVar12;
  float fVar13;
  int iVar15;
  int iVar16;
  undefined auVar14 [16];
  int iVar17;
  int iVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  byte bVar28;
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
  int iVar44;
  int iVar47;
  int iVar48;
  undefined auVar45 [16];
  int iVar49;
  undefined auVar46 [16];
  undefined auVar50 [16];
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
  float fVar166;
  float fVar167;
  undefined auVar160 [16];
  float fVar168;
  undefined auVar161 [16];
  undefined auVar162 [16];
  undefined auVar163 [16];
  undefined auVar165 [16];
  undefined auVar169 [16];
  undefined auVar170 [16];
  int iVar171;
  int iVar176;
  int iVar177;
  undefined auVar172 [16];
  undefined auVar173 [16];
  int iVar178;
  undefined auVar174 [16];
  undefined auVar175 [16];
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
  undefined auVar164 [16];
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  if (((ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
        ::SIMD_PAD_W_MASK & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                   ::SIMD_PAD_W_MASK), iVar7 != 0)) {
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
     (iVar7 = __cxa_guard_acquire(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                   ::SIMD_PAD_H_MASK), iVar7 != 0)) {
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
  auVar14 = NEON_fmax(auVar87,auVar93,4);
  auVar8 = NEON_fmin(auVar87,auVar93,4);
  auVar51 = *(undefined (*) [16])(param_4 + 0x20);
  auVar80 = *(undefined (*) [16])param_3;
  auVar84 = NEON_fmax(auVar77,auVar51,4);
  auVar45 = NEON_fmin(auVar77,auVar51,4);
  auVar14 = NEON_fmax(auVar80,auVar14,4);
  auVar8 = NEON_fmin(auVar80,auVar8,4);
  auVar84 = NEON_fmax(auVar95,auVar84,4);
  auVar45 = NEON_fmin(auVar95,auVar45,4);
  uVar2 = *(undefined4 *)param_7;
  auVar50._4_4_ = uVar2;
  auVar50._0_4_ = uVar2;
  auVar50._8_4_ = uVar2;
  auVar50._12_4_ = uVar2;
  iVar7 = (int)auVar8._0_4_;
  iVar9 = (int)auVar8._4_4_;
  iVar10 = (int)auVar8._8_4_;
  iVar11 = (int)auVar8._12_4_;
  iVar44 = (int)auVar45._0_4_;
  iVar47 = (int)auVar45._4_4_;
  iVar48 = (int)auVar45._8_4_;
  iVar49 = (int)auVar45._12_4_;
  iVar12 = (int)auVar14._0_4_ + 0x20;
  iVar15 = (int)auVar14._4_4_ + 0x20;
  iVar16 = (int)auVar14._8_4_ + 0x20;
  iVar17 = (int)auVar14._12_4_ + 0x20;
  iVar18 = (int)auVar84._0_4_ + 4;
  iVar20 = (int)auVar84._4_4_ + 4;
  iVar21 = (int)auVar84._8_4_ + 4;
  iVar22 = (int)auVar84._12_4_ + 4;
  uVar2 = *(undefined4 *)(param_7 + 4);
  auVar84._4_4_ = uVar2;
  auVar84._0_4_ = uVar2;
  auVar84._8_4_ = uVar2;
  auVar84._12_4_ = uVar2;
  auVar8[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_ & (byte)iVar7;
  auVar8[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,1) & (byte)((uint)iVar7 >> 8);
  auVar8[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,2) & (byte)((uint)iVar7 >> 0x10);
  auVar8[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,3) & (byte)((uint)iVar7 >> 0x18);
  auVar8[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,4) & (byte)iVar9;
  auVar8[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,5) & (byte)((uint)iVar9 >> 8);
  auVar8[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,6) & (byte)((uint)iVar9 >> 0x10);
  auVar8[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._0_8_,7) & (byte)((uint)iVar9 >> 0x18);
  auVar8[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._8_8_ & (byte)iVar10;
  auVar8[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                    ::SIMD_PAD_W_MASK._8_8_,1) & (byte)((uint)iVar10 >> 8);
  auVar8[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,2) & (byte)((uint)iVar10 >> 0x10);
  auVar8[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,3) & (byte)((uint)iVar10 >> 0x18);
  auVar8[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,4) & (byte)iVar11;
  auVar8[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,5) & (byte)((uint)iVar11 >> 8);
  auVar8[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,6) & (byte)((uint)iVar11 >> 0x10);
  auVar8[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,7) & (byte)((uint)iVar11 >> 0x18);
  uVar2 = *(undefined4 *)(param_7 + 8);
  auVar172._4_4_ = uVar2;
  auVar172._0_4_ = uVar2;
  auVar172._8_4_ = uVar2;
  auVar172._12_4_ = uVar2;
  auVar46[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_ & (byte)iVar44;
  auVar46[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,1) & (byte)((uint)iVar44 >> 8);
  auVar46[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,2) & (byte)((uint)iVar44 >> 0x10);
  auVar46[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,3) & (byte)((uint)iVar44 >> 0x18);
  auVar46[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,4) & (byte)iVar47;
  auVar46[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,5) & (byte)((uint)iVar47 >> 8);
  auVar46[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,6) & (byte)((uint)iVar47 >> 0x10);
  auVar46[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,7) & (byte)((uint)iVar47 >> 0x18);
  auVar46[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_ & (byte)iVar48;
  auVar46[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_,1) & (byte)((uint)iVar48 >> 8);
  auVar46[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,2) & (byte)((uint)iVar48 >> 0x10);
  auVar46[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,3) & (byte)((uint)iVar48 >> 0x18);
  auVar46[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,4) & (byte)iVar49;
  auVar46[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,5) & (byte)((uint)iVar49 >> 8);
  auVar46[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,6) & (byte)((uint)iVar49 >> 0x10);
  auVar46[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,7) & (byte)((uint)iVar49 >> 0x18);
  auVar14[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_ & (byte)iVar12;
  auVar14[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,1) & (byte)((uint)iVar12 >> 8);
  auVar14[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,2) & (byte)((uint)iVar12 >> 0x10);
  auVar14[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,3) & (byte)((uint)iVar12 >> 0x18);
  auVar14[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,4) & (byte)iVar15;
  auVar14[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,5) & (byte)((uint)iVar15 >> 8);
  auVar14[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,6) & (byte)((uint)iVar15 >> 0x10);
  auVar14[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._0_8_,7) & (byte)((uint)iVar15 >> 0x18);
  auVar14[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_ & (byte)iVar16;
  auVar14[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_W_MASK._8_8_,1) & (byte)((uint)iVar16 >> 8);
  auVar14[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,2) & (byte)((uint)iVar16 >> 0x10);
  auVar14[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,3) & (byte)((uint)iVar16 >> 0x18);
  auVar14[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,4) & (byte)iVar17;
  auVar14[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,5) & (byte)((uint)iVar17 >> 8);
  auVar14[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,6) & (byte)((uint)iVar17 >> 0x10);
  auVar14[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_W_MASK._8_8_,7) & (byte)((uint)iVar17 >> 0x18);
  auVar45[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_ & (byte)iVar18;
  auVar45[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,1) & (byte)((uint)iVar18 >> 8);
  auVar45[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,2) & (byte)((uint)iVar18 >> 0x10);
  auVar45[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,3) & (byte)((uint)iVar18 >> 0x18);
  auVar45[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,4) & (byte)iVar20;
  auVar45[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,5) & (byte)((uint)iVar20 >> 8);
  auVar45[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,6) & (byte)((uint)iVar20 >> 0x10);
  auVar45[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._0_8_,7) & (byte)((uint)iVar20 >> 0x18);
  auVar45[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_ & (byte)iVar21;
  auVar45[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                     ::SIMD_PAD_H_MASK._8_8_,1) & (byte)((uint)iVar21 >> 8);
  auVar45[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,2) & (byte)((uint)iVar21 >> 0x10);
  auVar45[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,3) & (byte)((uint)iVar21 >> 0x18);
  auVar45[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,4) & (byte)iVar22;
  auVar45[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,5) & (byte)((uint)iVar22 >> 8);
  auVar45[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,6) & (byte)((uint)iVar22 >> 0x10);
  auVar45[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                      ::SIMD_PAD_H_MASK._8_8_,7) & (byte)((uint)iVar22 >> 0x18);
  uVar2 = *(undefined4 *)(param_7 + 0xc);
  auVar94._4_4_ = uVar2;
  auVar94._0_4_ = uVar2;
  auVar94._8_4_ = uVar2;
  auVar94._12_4_ = uVar2;
  auVar50 = NEON_smax(auVar8,auVar50,4);
  auVar46 = NEON_smax(auVar46,auVar84,4);
  auVar14 = NEON_smin(auVar14,auVar172,4);
  auVar84 = NEON_smin(auVar45,auVar94,4);
  auVar8 = NEON_sshl(auVar50,auVar108,4);
  auVar45 = NEON_sshl(auVar46,auVar123,4);
  auVar85 = NEON_sshl(auVar14,auVar108,4);
  auVar14 = NEON_sshl(auVar84,auVar123,4);
  iVar7 = auVar8._0_4_;
  aiStack_240[0] = auVar85._0_4_ - iVar7;
  iVar9 = auVar8._4_4_;
  aiStack_240[1] = auVar85._4_4_ - iVar9;
  local_230 = auVar85._8_4_ - auVar8._8_4_;
  iStack_22c = auVar85._12_4_ - auVar8._12_4_;
  local_250[0] = (float)(auVar14._0_4_ - auVar45._0_4_);
  local_250[1] = (float)(auVar14._4_4_ - auVar45._4_4_);
  iVar16 = aiStack_240[0] + -1;
  iVar17 = aiStack_240[1] + -1;
  iVar18 = local_230 + -1;
  iVar20 = iStack_22c + -1;
  iVar10 = (int)local_250[0] + -1;
  iVar11 = (int)local_250[1] + -1;
  iVar12 = (auVar14._8_4_ - auVar45._8_4_) + -1;
  iVar15 = (auVar14._12_4_ - auVar45._12_4_) + -1;
  auVar85[0] = (byte)iVar10 | (byte)iVar16;
  auVar85[1] = (byte)((uint)iVar10 >> 8) | (byte)((uint)iVar16 >> 8);
  auVar85[2] = (byte)((uint)iVar10 >> 0x10) | (byte)((uint)iVar16 >> 0x10);
  auVar85[3] = (byte)((uint)iVar10 >> 0x18) | (byte)((uint)iVar16 >> 0x18);
  auVar85[4] = (byte)iVar11 | (byte)iVar17;
  auVar85[5] = (byte)((uint)iVar11 >> 8) | (byte)((uint)iVar17 >> 8);
  auVar85[6] = (byte)((uint)iVar11 >> 0x10) | (byte)((uint)iVar17 >> 0x10);
  auVar85[7] = (byte)((uint)iVar11 >> 0x18) | (byte)((uint)iVar17 >> 0x18);
  auVar85[8] = (byte)iVar12 | (byte)iVar18;
  auVar85[9] = (byte)((uint)iVar12 >> 8) | (byte)((uint)iVar18 >> 8);
  auVar85[10] = (byte)((uint)iVar12 >> 0x10) | (byte)((uint)iVar18 >> 0x10);
  auVar85[11] = (byte)((uint)iVar12 >> 0x18) | (byte)((uint)iVar18 >> 0x18);
  auVar85[12] = (byte)iVar15 | (byte)iVar20;
  auVar85[13] = (byte)((uint)iVar15 >> 8) | (byte)((uint)iVar20 >> 8);
  auVar85[14] = (byte)((uint)iVar15 >> 0x10) | (byte)((uint)iVar20 >> 0x10);
  auVar85[15] = (byte)((uint)iVar15 >> 0x18) | (byte)((uint)iVar20 >> 0x18);
  auVar84 = NEON_cmlt(auVar85,0,4);
  bVar28 = SUB161(_DAT_004c4480,0);
  auVar115[0] = auVar84[0] & bVar28;
  bVar29 = SUB161(_DAT_004c4480,1);
  auVar115[1] = auVar84[1] & bVar29;
  bVar30 = SUB161(_DAT_004c4480,2);
  auVar115[2] = auVar84[2] & bVar30;
  bVar31 = SUB161(_DAT_004c4480,3);
  auVar115[3] = auVar84[3] & bVar31;
  bVar32 = SUB161(_DAT_004c4480,4);
  auVar115[4] = auVar84[4] & bVar32;
  bVar33 = SUB161(_DAT_004c4480,5);
  auVar115[5] = auVar84[5] & bVar33;
  bVar34 = SUB161(_DAT_004c4480,6);
  auVar115[6] = auVar84[6] & bVar34;
  bVar35 = SUB161(_DAT_004c4480,7);
  auVar115[7] = auVar84[7] & bVar35;
  bVar36 = SUB161(_DAT_004c4480,8);
  auVar115[8] = auVar84[8] & bVar36;
  bVar37 = SUB161(_DAT_004c4480,9);
  auVar115[9] = auVar84[9] & bVar37;
  bVar38 = SUB161(_DAT_004c4480,10);
  auVar115[10] = auVar84[10] & bVar38;
  bVar39 = SUB161(_DAT_004c4480,0xb);
  auVar115[11] = auVar84[11] & bVar39;
  bVar40 = SUB161(_DAT_004c4480,0xc);
  auVar115[12] = auVar84[12] & bVar40;
  bVar41 = SUB161(_DAT_004c4480,0xd);
  auVar115[13] = auVar84[13] & bVar41;
  bVar42 = SUB161(_DAT_004c4480,0xe);
  auVar115[14] = auVar84[14] & bVar42;
  bVar43 = SUB161(_DAT_004c4480,0xf);
  auVar115[15] = auVar84[15] & bVar43;
  auVar84 = NEON_ext(auVar115,auVar115,8,1);
  uVar6 = (CONCAT13(auVar84[3] | auVar115[3] | auVar84[7] | auVar115[7],
                    CONCAT12(auVar84[2] | auVar115[2] | auVar84[6] | auVar115[6],
                             CONCAT11(auVar84[1] | auVar115[1] | auVar84[5] | auVar115[5],
                                      auVar84[0] | auVar115[0] | auVar84[4] | auVar115[4]))) ^ 0xf)
          & param_6;
  if (uVar6 == 0) {
    iVar7 = 3;
    if (*(long *)(lVar3 + 0x28) != local_b0) goto LAB_00da1bc0;
  }
  else {
    auVar85 = *(undefined (*) [16])param_2;
    auVar84 = *(undefined (*) [16])(param_2 + 0x10);
    fVar122 = auVar80._0_4_;
    fVar106 = auVar93._0_4_ - fVar122;
    fVar13 = auVar80._4_4_;
    fVar109 = auVar93._4_4_ - fVar13;
    fVar19 = auVar80._8_4_;
    fVar111 = auVar93._8_4_ - fVar19;
    fVar23 = auVar80._12_4_;
    fVar112 = auVar93._12_4_ - fVar23;
    auVar123 = NEON_scvtf(auVar46,4);
    fVar24 = auVar95._0_4_;
    fVar113 = auVar77._0_4_ - fVar24;
    fVar25 = auVar95._4_4_;
    fVar119 = auVar77._4_4_ - fVar25;
    fVar26 = auVar95._8_4_;
    fVar120 = auVar77._8_4_ - fVar26;
    fVar27 = auVar95._12_4_;
    fVar121 = auVar77._12_4_ - fVar27;
    fVar134 = auVar51._0_4_ - fVar24;
    fVar139 = auVar51._4_4_ - fVar25;
    fVar141 = auVar51._8_4_ - fVar26;
    fVar142 = auVar51._12_4_ - fVar27;
    fVar124 = auVar87._0_4_ - fVar122;
    fVar129 = auVar87._4_4_ - fVar13;
    fVar131 = auVar87._8_4_ - fVar19;
    fVar132 = auVar87._12_4_ - fVar23;
    auVar87 = *(undefined (*) [16])(param_2 + 0x20);
    iVar10 = auVar84._0_4_ - auVar85._0_4_;
    iVar11 = auVar84._4_4_ - auVar85._4_4_;
    iVar12 = auVar84._8_4_ - auVar85._8_4_;
    iVar15 = auVar84._12_4_ - auVar85._12_4_;
    auVar92._0_4_ = auVar87._0_4_ - auVar85._0_4_;
    auVar92._4_4_ = auVar87._4_4_ - auVar85._4_4_;
    auVar92._8_4_ = auVar87._8_4_ - auVar85._8_4_;
    auVar92._12_4_ = auVar87._12_4_ - auVar85._12_4_;
    auVar169._8_4_ = 0xfffffff6;
    auVar169._0_8_ = 0xfffffff6fffffff6;
    auVar169._12_4_ = 0xfffffff6;
    auVar86[0] = (byte)auVar92._0_4_ | (byte)iVar10;
    auVar86[1] = (byte)((uint)auVar92._0_4_ >> 8) | (byte)((uint)iVar10 >> 8);
    auVar86[2] = (byte)((uint)auVar92._0_4_ >> 0x10) | (byte)((uint)iVar10 >> 0x10);
    auVar86[3] = (byte)((uint)auVar92._0_4_ >> 0x18) | (byte)((uint)iVar10 >> 0x18);
    auVar86[4] = (byte)auVar92._4_4_ | (byte)iVar11;
    auVar86[5] = (byte)((uint)auVar92._4_4_ >> 8) | (byte)((uint)iVar11 >> 8);
    auVar86[6] = (byte)((uint)auVar92._4_4_ >> 0x10) | (byte)((uint)iVar11 >> 0x10);
    auVar86[7] = (byte)((uint)auVar92._4_4_ >> 0x18) | (byte)((uint)iVar11 >> 0x18);
    auVar86[8] = (byte)auVar92._8_4_ | (byte)iVar12;
    auVar86[9] = (byte)((uint)auVar92._8_4_ >> 8) | (byte)((uint)iVar12 >> 8);
    auVar86[10] = (byte)((uint)auVar92._8_4_ >> 0x10) | (byte)((uint)iVar12 >> 0x10);
    auVar86[11] = (byte)((uint)auVar92._8_4_ >> 0x18) | (byte)((uint)iVar12 >> 0x18);
    auVar86[12] = (byte)auVar92._12_4_ | (byte)iVar15;
    auVar86[13] = (byte)((uint)auVar92._12_4_ >> 8) | (byte)((uint)iVar15 >> 8);
    auVar86[14] = (byte)((uint)auVar92._12_4_ >> 0x10) | (byte)((uint)iVar15 >> 0x10);
    auVar86[15] = (byte)((uint)auVar92._12_4_ >> 0x18) | (byte)((uint)iVar15 >> 0x18);
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
    auVar51._8_8_ = uVar154;
    auVar51._0_8_ = auVar146._0_8_;
    auVar84 = NEON_bsl(auVar160,*(undefined (*) [16])param_1,*(undefined (*) [16])(param_1 + 0x20),1
                      );
    auVar77 = NEON_bsl(auVar76,*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])param_1,1)
    ;
    auVar80 = NEON_bsl(auVar79,*(undefined (*) [16])(param_1 + 0x20),
                       *(undefined (*) [16])(param_1 + 0x10),1);
    auVar95 = *(undefined (*) [16])(param_5 + 0x20);
    auVar94 = NEON_scvtf(auVar50,4);
    *(long *)(param_1 + 0x28) = auVar84._8_8_;
    *(long *)(param_1 + 0x20) = auVar84._0_8_;
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
    auVar51 = NEON_bsl(auVar51,*(undefined (*) [16])(param_2 + 0x10),*(undefined (*) [16])param_2,1)
    ;
    auVar80 = NEON_bit(*(undefined (*) [16])(param_2 + 0x10),*(undefined (*) [16])(param_2 + 0x20),
                       auVar146,1);
    auVar77 = NEON_bit(*(undefined (*) [16])(param_2 + 0x20),*(undefined (*) [16])param_2,auVar146,1
                      );
    iVar10 = auVar80._0_4_ - auVar51._0_4_;
    iVar11 = auVar80._4_4_ - auVar51._4_4_;
    iVar12 = auVar80._8_4_ - auVar51._8_4_;
    iVar15 = auVar80._12_4_ - auVar51._12_4_;
    *(long *)(param_2 + 8) = auVar51._8_8_;
    *(long *)param_2 = auVar51._0_8_;
    *(undefined (*) [16])(param_2 + 0x10) = auVar80;
    auVar54._0_4_ = auVar77._0_4_ - auVar51._0_4_;
    auVar54._4_4_ = auVar77._4_4_ - auVar51._4_4_;
    auVar54._8_4_ = auVar77._8_4_ - auVar51._8_4_;
    auVar54._12_4_ = auVar77._12_4_ - auVar51._12_4_;
    *(long *)(param_2 + 0x28) = auVar77._8_8_;
    *(long *)(param_2 + 0x20) = auVar77._0_8_;
    auVar147._0_4_ = fVar124 * fVar134 - fVar106 * fVar113;
    auVar147._4_4_ = fVar129 * fVar139 - fVar109 * fVar119;
    auVar147._8_4_ = fVar131 * fVar141 - fVar111 * fVar120;
    auVar147._12_4_ = fVar132 * fVar142 - fVar112 * fVar121;
    fVar157 = auVar95._0_4_ - fVar64;
    fVar166 = auVar95._4_4_ - fVar68;
    fVar167 = auVar95._8_4_ - fVar69;
    fVar168 = auVar95._12_4_ - fVar70;
    auVar52[0] = (byte)auVar54._0_4_ | (byte)iVar10;
    auVar52[1] = (byte)((uint)auVar54._0_4_ >> 8) | (byte)((uint)iVar10 >> 8);
    auVar52[2] = (byte)((uint)auVar54._0_4_ >> 0x10) | (byte)((uint)iVar10 >> 0x10);
    auVar52[3] = (byte)((uint)auVar54._0_4_ >> 0x18) | (byte)((uint)iVar10 >> 0x18);
    auVar52[4] = (byte)auVar54._4_4_ | (byte)iVar11;
    auVar52[5] = (byte)((uint)auVar54._4_4_ >> 8) | (byte)((uint)iVar11 >> 8);
    auVar52[6] = (byte)((uint)auVar54._4_4_ >> 0x10) | (byte)((uint)iVar11 >> 0x10);
    auVar52[7] = (byte)((uint)auVar54._4_4_ >> 0x18) | (byte)((uint)iVar11 >> 0x18);
    auVar52[8] = (byte)auVar54._8_4_ | (byte)iVar12;
    auVar52[9] = (byte)((uint)auVar54._8_4_ >> 8) | (byte)((uint)iVar12 >> 8);
    auVar52[10] = (byte)((uint)auVar54._8_4_ >> 0x10) | (byte)((uint)iVar12 >> 0x10);
    auVar52[11] = (byte)((uint)auVar54._8_4_ >> 0x18) | (byte)((uint)iVar12 >> 0x18);
    auVar52[12] = (byte)auVar54._12_4_ | (byte)iVar15;
    auVar52[13] = (byte)((uint)auVar54._12_4_ >> 8) | (byte)((uint)iVar15 >> 8);
    auVar52[14] = (byte)((uint)auVar54._12_4_ >> 0x10) | (byte)((uint)iVar15 >> 0x10);
    auVar52[15] = (byte)((uint)auVar54._12_4_ >> 0x18) | (byte)((uint)iVar15 >> 0x18);
    auVar80 = NEON_cmeq(auVar54,0,2);
    auVar84 = NEON_frecpe(auVar147,4);
    auVar51 = NEON_cmlt(auVar52,0,4);
    auVar77._0_8_ =
         CONCAT17(auVar80[7] | auVar51[7],
                  CONCAT16(auVar80[6] | auVar51[6],
                           CONCAT15(auVar80[5] | auVar51[5],
                                    CONCAT14(auVar80[4] | auVar51[4],
                                             CONCAT13(auVar80[3] | auVar51[3],
                                                      CONCAT12(auVar80[2] | auVar51[2],
                                                               CONCAT11(auVar80[1] | auVar51[1],
                                                                        auVar80[0] | auVar51[0])))))
                          ));
    auVar77[8] = auVar80[8] | auVar51[8];
    auVar77[9] = auVar80[9] | auVar51[9];
    auVar77[10] = auVar80[10] | auVar51[10];
    auVar77[11] = auVar80[11] | auVar51[11];
    auVar77[12] = auVar80[12] | auVar51[12];
    auVar77[13] = auVar80[13] | auVar51[13];
    auVar77[14] = auVar80[14] | auVar51[14];
    auVar77[15] = auVar80[15] | auVar51[15];
    auVar51 = NEON_frecps(auVar84,auVar147,4);
    auVar161._8_8_ = auVar77._8_8_;
    auVar161._0_8_ = auVar77._0_8_;
    fVar143 = auVar84._0_4_ * auVar51._0_4_;
    fVar150 = auVar84._4_4_ * auVar51._4_4_;
    fVar152 = auVar84._8_4_ * auVar51._8_4_;
    fVar155 = auVar84._12_4_ * auVar51._12_4_;
    auVar51 = NEON_bsl(auVar161,*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])param_1,1
                      );
    auVar84 = NEON_bit(*(undefined (*) [16])(param_1 + 0x10),*(undefined (*) [16])(param_1 + 0x20),
                       auVar77,1);
    auVar80 = NEON_bit(*(undefined (*) [16])(param_1 + 0x20),*(undefined (*) [16])param_1,auVar77,1)
    ;
    auVar172 = NEON_fmin(auVar93,auVar95,4);
    auVar93 = NEON_fmax(auVar93,auVar95,4);
    *(long *)(param_1 + 8) = auVar51._8_8_;
    *(long *)param_1 = auVar51._0_8_;
    *(long *)(param_1 + 0x18) = auVar84._8_8_;
    *(long *)(param_1 + 0x10) = auVar84._0_8_;
    *(long *)(param_1 + 0x28) = auVar80._8_8_;
    *(long *)(param_1 + 0x20) = auVar80._0_8_;
    auVar126._8_8_ = auVar77._8_8_;
    auVar126._0_8_ = auVar77._0_8_;
    afStack_260[0] = (fVar134 * fVar57 - fVar113 * fVar157) * fVar143;
    afStack_260[1] = (fVar139 * fVar59 - fVar119 * fVar166) * fVar150;
    local_250[0] = (fVar141 * fVar60 - fVar120 * fVar167) * fVar152;
    local_250[1] = (fVar142 * fVar61 - fVar121 * fVar168) * fVar155;
    fVar143 = (fVar124 * fVar157 - fVar106 * fVar57) * fVar143;
    fVar150 = (fVar129 * fVar166 - fVar109 * fVar59) * fVar150;
    fVar152 = (fVar131 * fVar167 - fVar111 * fVar60) * fVar152;
    fVar155 = (fVar132 * fVar168 - fVar112 * fVar61) * fVar155;
    auVar93 = NEON_fmax(auVar87,auVar93,4);
    auVar81._0_4_ = afStack_260[0] * 8.0;
    auVar81._4_4_ = afStack_260[1] * 8.0;
    auVar81._8_4_ = local_250[0] * 8.0;
    auVar81._12_4_ = local_250[1] * 8.0;
    auVar127 = NEON_bsl(auVar126,*(undefined (*) [16])param_2,*(undefined (*) [16])(param_2 + 0x20),
                        1);
    auVar84 = NEON_bif(*(undefined (*) [16])(param_2 + 0x20),*(undefined (*) [16])(param_2 + 0x10),
                       auVar77,1);
    auVar148._0_8_ = CONCAT44(fVar150 * auVar85._4_4_,fVar143 * auVar85._0_4_);
    auVar148._8_4_ = fVar152 * auVar85._8_4_;
    auVar148._12_4_ = fVar155 * auVar85._12_4_;
    auVar80 = NEON_fmin(auVar81,ZEXT816(0),4);
    *(long *)(param_2 + 0x28) = auVar127._8_8_;
    *(long *)(param_2 + 0x20) = auVar127._0_8_;
    auVar136._0_4_ = auVar127._0_4_ - auVar84._0_4_;
    auVar136._4_4_ = auVar127._4_4_ - auVar84._4_4_;
    auVar136._8_4_ = auVar127._8_4_ - auVar84._8_4_;
    auVar136._12_4_ = auVar127._12_4_ - auVar84._12_4_;
    auVar95 = NEON_bit(*(undefined (*) [16])param_2,*(undefined (*) [16])(param_2 + 0x10),auVar77,1)
    ;
    auVar85 = NEON_fmin(auVar87,auVar172,4);
    auVar172 = NEON_cmlt(auVar136,0,4);
    auVar51 = NEON_fmin(auVar148,ZEXT816(0),4);
    *(long *)(param_2 + 8) = auVar95._8_8_;
    *(long *)param_2 = auVar95._0_8_;
    *(long *)(param_2 + 0x18) = auVar84._8_8_;
    *(long *)(param_2 + 0x10) = auVar84._0_8_;
    auVar77 = _DAT_004c5900;
    auVar87 = *(undefined (*) [16])(param_1 + 0x20);
    uStack_2b8 = auVar93._8_8_;
    uStack_2a8 = auVar85._8_8_;
    uStack_2b0 = auVar85._0_8_;
    iVar10 = auVar95._0_4_;
    iVar18 = auVar84._0_4_ - iVar10;
    iVar11 = auVar95._4_4_;
    iVar20 = auVar84._4_4_ - iVar11;
    auVar78._0_8_ = CONCAT44(iVar20,iVar18);
    iVar12 = auVar95._8_4_;
    auVar78._8_4_ = auVar84._8_4_ - iVar12;
    iVar15 = auVar95._12_4_;
    auVar78._12_4_ = auVar84._12_4_ - iVar15;
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
    auVar161 = NEON_bsl(auVar172,auVar127,auVar84,1);
    auVar95 = *(undefined (*) [16])param_1;
    auVar93 = *(undefined (*) [16])(param_1 + 0x10);
    auVar115 = NEON_scvtf(auVar78,4);
    auVar108 = NEON_scvtf(auVar137,4);
    auVar84 = NEON_smax(auVar161,ZEXT816(0),4);
    iVar99 = auVar127._0_4_ - iVar10;
    iVar105 = auVar127._4_4_ - iVar11;
    auVar101._0_8_ = CONCAT44(iVar105,iVar99);
    auVar101._8_4_ = auVar127._8_4_ - iVar12;
    auVar101._12_4_ = auVar127._12_4_ - iVar15;
    local_270[0] = (auVar94._8_4_ - fVar19) * local_250[0] +
                   fVar69 + (auVar123._8_4_ - fVar26) * fVar152 + auVar80._8_4_ + auVar51._8_4_;
    local_270[1] = (auVar94._12_4_ - fVar23) * local_250[1] +
                   fVar70 + (auVar123._12_4_ - fVar27) * fVar155 + auVar80._12_4_ + auVar51._12_4_;
    local_280[0] = (auVar94._0_4_ - fVar122) * afStack_260[0] +
                   fVar64 + (auVar123._0_4_ - fVar24) * fVar143 + auVar80._0_4_ + auVar51._0_4_;
    local_280[1] = (auVar94._4_4_ - fVar13) * afStack_260[1] +
                   fVar68 + (auVar123._4_4_ - fVar25) * fVar150 + auVar80._4_4_ + auVar51._4_4_;
    auVar80[0] = auVar172[0] & bVar28;
    auVar80[1] = auVar172[1] & bVar29;
    auVar80[2] = auVar172[2] & bVar30;
    auVar80[3] = auVar172[3] & bVar31;
    auVar80[4] = auVar172[4] & bVar32;
    auVar80[5] = auVar172[5] & bVar33;
    auVar80[6] = auVar172[6] & bVar34;
    auVar80[7] = auVar172[7] & bVar35;
    auVar80[8] = auVar172[8] & bVar36;
    auVar80[9] = auVar172[9] & bVar37;
    auVar80[10] = auVar172[10] & bVar38;
    auVar80[11] = auVar172[11] & bVar39;
    auVar80[12] = auVar172[12] & bVar40;
    auVar80[13] = auVar172[13] & bVar41;
    auVar80[14] = auVar172[14] & bVar42;
    auVar80[15] = auVar172[15] & bVar43;
    auVar51 = NEON_sshl(auVar84,auVar169,4);
    auVar170._0_4_ = auVar87._0_4_ - auVar93._0_4_;
    auVar170._4_4_ = auVar87._4_4_ - auVar93._4_4_;
    auVar170._8_4_ = auVar87._8_4_ - auVar93._8_4_;
    auVar170._12_4_ = auVar87._12_4_ - auVar93._12_4_;
    uStack_c8 = auVar137._8_8_;
    local_d0 = auVar137._0_8_;
    uStack_b8 = auVar101._8_8_;
    uStack_c0 = auVar101._0_8_;
    iVar21 = auVar95._0_4_;
    auVar127._0_4_ = auVar87._0_4_ - iVar21;
    iVar22 = auVar95._4_4_;
    auVar127._4_4_ = auVar87._4_4_ - iVar22;
    iVar49 = auVar95._8_4_;
    auVar127._8_4_ = auVar87._8_4_ - iVar49;
    iVar71 = auVar95._12_4_;
    auVar127._12_4_ = auVar87._12_4_ - iVar71;
    auVar85 = NEON_bif(auVar87,auVar93,auVar172,1);
    auVar87 = NEON_smin(auVar14,auVar51,4);
    auVar128._0_4_ = auVar93._0_4_ - iVar21;
    auVar128._4_4_ = auVar93._4_4_ - iVar22;
    auVar128._8_4_ = auVar93._8_4_ - iVar49;
    auVar128._12_4_ = auVar93._12_4_ - iVar71;
    iVar21 = iVar21 + auVar50._0_4_ * -0x100;
    iVar22 = iVar22 + auVar50._4_4_ * -0x100;
    auVar93 = NEON_smax(auVar45,auVar87,4);
    auVar87 = NEON_frecpe(auVar115,4);
    auVar73._0_4_ = iVar10 + auVar46._0_4_ * -0x100;
    auVar73._4_4_ = iVar11 + auVar46._4_4_ * -0x100;
    auVar73._8_4_ = iVar12 + auVar46._8_4_ * -0x100;
    auVar73._12_4_ = iVar15 + auVar46._12_4_ * -0x100;
    auVar123 = NEON_scvtf(auVar128,4);
    auVar84 = NEON_scvtf(auVar127,4);
    auVar46 = NEON_frecps(auVar87,auVar115,4);
    auVar94 = NEON_neg(auVar170,4);
    auVar95 = NEON_frecpe(auVar108,4);
    auVar162._0_4_ = auVar161._0_4_ + auVar93._0_4_ * -0x400;
    auVar162._4_4_ = auVar161._4_4_ + auVar93._4_4_ * -0x400;
    auVar162._8_4_ = auVar161._8_4_ + auVar93._8_4_ * -0x400;
    auVar162._12_4_ = auVar161._12_4_ + auVar93._12_4_ * -0x400;
    auVar93 = NEON_frecps(auVar95,auVar108,4);
    auVar172 = NEON_bsl(auVar172,auVar94,auVar170,1);
    auVar116._0_4_ = auVar87._0_4_ * auVar46._0_4_ * auVar123._0_4_;
    auVar116._4_4_ = auVar87._4_4_ * auVar46._4_4_ * auVar123._4_4_;
    auVar116._8_4_ = auVar87._8_4_ * auVar46._8_4_ * auVar123._8_4_;
    auVar116._12_4_ = auVar87._12_4_ * auVar46._12_4_ * auVar123._12_4_;
    auVar108 = NEON_cmeq(auVar78,0,2);
    auVar46 = NEON_scvtf(auVar172,4);
    auVar173._0_8_ = CONCAT44(auVar73._4_4_ + 0x7f,auVar73._0_4_ + 0x7f) & 0xffffff00ffffff00;
    auVar173._8_4_ = auVar73._8_4_ + 0x7fU & 0xffffff00;
    auVar173._12_4_ = auVar73._12_4_ + 0x7fU & 0xffffff00;
    fVar122 = (float)*(int *)(this + 0x124) + 4.0 + (float)*(int *)(this + 0x124) + 4.0;
    auVar87 = NEON_cmlt(auVar128,0,4);
    auVar149._0_4_ = auVar95._0_4_ * auVar93._0_4_ * auVar46._0_4_;
    auVar149._4_4_ = auVar95._4_4_ * auVar93._4_4_ * auVar46._4_4_;
    auVar149._8_4_ = auVar95._8_4_ * auVar93._8_4_ * auVar46._8_4_;
    auVar149._12_4_ = auVar95._12_4_ * auVar93._12_4_ * auVar46._12_4_;
    auVar115 = NEON_bif(auVar173,auVar73,auVar108,1);
    auVar94 = NEON_scvtf(auVar101,4);
    auVar88._4_4_ = fVar122;
    auVar88._0_4_ = fVar122;
    auVar88._8_4_ = fVar122;
    auVar88._12_4_ = fVar122;
    iVar44 = MP_INT_ABS(auVar128._0_4_);
    iVar47 = MP_INT_ABS(auVar128._4_4_);
    iVar48 = MP_INT_ABS(auVar128._8_4_);
    iVar133 = MP_INT_ABS(auVar128._12_4_);
    auVar46 = NEON_neg(auVar115,4);
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
    auVar161 = NEON_bsl(auVar108,auVar88,auVar116,1);
    auVar46 = NEON_scvtf(auVar46,4);
    auVar108 = NEON_cmlt(auVar115,0,4);
    auVar87 = NEON_frecps(auVar93,auVar94,4);
    auVar94 = NEON_neg(auVar95,4);
    iVar171 = MP_INT_ABS(auVar115._0_4_);
    iVar176 = MP_INT_ABS(auVar115._4_4_);
    iVar177 = MP_INT_ABS(auVar115._8_4_);
    iVar178 = MP_INT_ABS(auVar115._12_4_);
    auVar94 = NEON_bsl(auVar108,auVar94,auVar95,1);
    iVar107 = (int)(auVar161._0_4_ * auVar46._0_4_);
    iVar110 = (int)(auVar161._4_4_ * auVar46._4_4_);
    auVar115 = NEON_cmeq(auVar137,0,2);
    iVar10 = auVar94._0_4_ >> 0x1f;
    iVar15 = auVar94._4_4_ >> 0x1f;
    iVar11 = MP_INT_ABS(iVar107);
    iVar12 = MP_INT_ABS(iVar110);
    iVar16 = MP_INT_ABS((int)(auVar161._8_4_ * auVar46._8_4_));
    iVar17 = MP_INT_ABS((int)(auVar161._12_4_ * auVar46._12_4_));
    uVar83 = SUB41(fVar122,0);
    uVar90 = (undefined)((uint)fVar122 >> 8);
    uVar91 = (undefined)((uint)fVar122 >> 0x10);
    bVar28 = (byte)((uint)fVar122 >> 0x18);
    auVar89._0_8_ =
         CONCAT17(bVar28,CONCAT16(uVar91,CONCAT15(uVar90,CONCAT14(uVar83,fVar122)))) ^
         0x8000000080000000;
    auVar89[8] = uVar83;
    auVar89[9] = uVar90;
    auVar89[10] = uVar91;
    auVar89[11] = bVar28 ^ 0x80;
    auVar89[12] = uVar83;
    auVar89[13] = uVar90;
    auVar89[14] = uVar91;
    auVar89[15] = bVar28 ^ 0x80;
    auVar102._8_4_ = 0xffffffe1;
    auVar102._0_8_ = 0xffffffe1ffffffe1;
    auVar102._12_4_ = 0xffffffe1;
    local_f0 = auVar93._0_4_ * auVar87._0_4_ * auVar84._0_4_;
    fStack_ec = auVar93._4_4_ * auVar87._4_4_ * auVar84._4_4_;
    auVar174._0_4_ = (iVar171 * iVar44 + iVar10) - iVar18 * iVar11;
    auVar174._4_4_ = (iVar176 * iVar47 + iVar15) - iVar20 * iVar12;
    auVar174._8_4_ = (iVar177 * iVar48 + (auVar94._8_4_ >> 0x1f)) - auVar78._8_4_ * iVar16;
    auVar174._12_4_ = (iVar178 * iVar133 + (auVar94._12_4_ >> 0x1f)) - auVar78._12_4_ * iVar17;
    auVar58._0_8_ = CONCAT44(auVar162._4_4_ + 0x7f,auVar162._0_4_ + 0x7f) & 0xffffff00ffffff00;
    auVar58._8_4_ = auVar162._8_4_ + 0x7fU & 0xffffff00;
    auVar58._12_4_ = auVar162._12_4_ + 0x7fU & 0xffffff00;
    auVar123 = NEON_bit(auVar149,auVar89,auVar115,1);
    uStack_d8 = auVar78._8_8_;
    uStack_e0 = auVar78._0_8_;
    auVar93 = NEON_sshl(auVar174,auVar102,4);
    auVar87 = NEON_cmlt(auVar172,0,4);
    auVar46 = NEON_bsl(auVar115,auVar58,auVar162,1);
    uStack_108 = auVar161._8_8_;
    local_110 = auVar161._0_8_;
    uStack_f8 = auVar123._8_8_;
    uStack_100 = auVar123._0_8_;
    iVar11 = CONCAT13(auVar93[3] & (byte)((uint)iVar18 >> 0x18),
                      CONCAT12(auVar93[2] & (byte)((uint)iVar18 >> 0x10),
                               CONCAT11(auVar93[1] & (byte)((uint)iVar18 >> 8),
                                        auVar93[0] & (byte)iVar18)));
    auVar62._0_8_ =
         CONCAT17(auVar93[7] & (byte)((uint)iVar20 >> 0x18),
                  CONCAT16(auVar93[6] & (byte)((uint)iVar20 >> 0x10),
                           CONCAT15(auVar93[5] & (byte)((uint)iVar20 >> 8),
                                    CONCAT14(auVar93[4] & (byte)iVar20,iVar11))));
    auVar62[8] = auVar93[8] & (byte)auVar78._8_4_;
    auVar62[9] = auVar93[9] & (byte)((uint)auVar78._8_4_ >> 8);
    auVar62[10] = auVar93[10] & (byte)((uint)auVar78._8_4_ >> 0x10);
    auVar62[11] = auVar93[11] & (byte)((uint)auVar78._8_4_ >> 0x18);
    auVar63[12] = auVar93[12] & (byte)auVar78._12_4_;
    auVar63._0_12_ = auVar62;
    auVar63[13] = auVar93[13] & (byte)((uint)auVar78._12_4_ >> 8);
    auVar63[14] = auVar93[14] & (byte)((uint)auVar78._12_4_ >> 0x10);
    auVar63[15] = auVar93[15] & (byte)((uint)auVar78._12_4_ >> 0x18);
    auVar163._0_8_ = auVar87._0_8_ | 0x100000001;
    auVar163[8] = auVar87[8] | 1;
    auVar163[9] = auVar87[9];
    auVar163[10] = auVar87[10];
    auVar163[11] = auVar87[11];
    auVar163[12] = auVar87[12] | 1;
    auVar163[13] = auVar87[13];
    auVar163[14] = auVar87[14];
    auVar163[15] = auVar87[15];
    auVar87 = NEON_neg(auVar46,4);
    local_1a0 = (int)(auVar161._0_4_ * 1024.0);
    iStack_19c = (int)(auVar161._4_4_ * 1024.0);
    auVar175._0_4_ = iVar11 + auVar174._0_4_;
    auVar175._4_4_ = (int)((ulong)auVar62._0_8_ >> 0x20) + auVar174._4_4_;
    auVar175._8_4_ = auVar62._8_4_ + auVar174._8_4_;
    auVar175._12_4_ = auVar63._12_4_ + auVar174._12_4_;
    auVar84 = NEON_neg(auVar163,4);
    uStack_138 = auVar95._8_8_;
    uStack_128 = auVar163._8_8_;
    uStack_130 = auVar163._0_8_;
    auVar95 = NEON_cmlt(auVar46,0,4);
    auVar87 = NEON_scvtf(auVar87,4);
    MP_INT_ABS(local_1a0);
    MP_INT_ABS(iStack_19c);
    MP_INT_ABS((int)(auVar161._8_4_ * 1024.0));
    MP_INT_ABS((int)(auVar161._12_4_ * 1024.0));
    auVar115 = NEON_bit(auVar163,auVar84,auVar95,1);
    iVar11 = CONCAT13(~(byte)((uint)auVar175._0_4_ >> 0x18),
                      CONCAT12(~(byte)((uint)auVar175._0_4_ >> 0x10),
                               CONCAT11(~(byte)((uint)auVar175._0_4_ >> 8),~(byte)auVar175._0_4_)));
    auVar53._0_8_ =
         CONCAT17(~(byte)((uint)auVar175._4_4_ >> 0x18),
                  CONCAT16(~(byte)((uint)auVar175._4_4_ >> 0x10),
                           CONCAT15(~(byte)((uint)auVar175._4_4_ >> 8),
                                    CONCAT14(~(byte)auVar175._4_4_,iVar11))));
    auVar53[8] = ~(byte)auVar175._8_4_;
    auVar53[9] = ~(byte)((uint)auVar175._8_4_ >> 8);
    auVar53[10] = ~(byte)((uint)auVar175._8_4_ >> 0x10);
    auVar53[11] = ~(byte)((uint)auVar175._8_4_ >> 0x18);
    auVar55[12] = ~(byte)auVar175._12_4_;
    auVar55._0_12_ = auVar53;
    auVar55[13] = ~(byte)((uint)auVar175._12_4_ >> 8);
    auVar55[14] = ~(byte)((uint)auVar175._12_4_ >> 0x10);
    auVar55[15] = ~(byte)((uint)auVar175._12_4_ >> 0x18);
    iStack_160 = MP_INT_ABS(auVar172._0_4_);
    iStack_15c = MP_INT_ABS(auVar172._4_4_);
    iVar12 = MP_INT_ABS(auVar172._8_4_);
    iVar17 = MP_INT_ABS(auVar172._12_4_);
    iVar48 = MP_INT_ABS(auVar46._0_4_);
    iVar133 = MP_INT_ABS(auVar46._4_4_);
    iVar171 = MP_INT_ABS(auVar46._8_4_);
    iVar176 = MP_INT_ABS(auVar46._12_4_);
    auVar56._0_4_ = iVar18 + iVar11;
    auVar56._4_4_ = iVar20 + (int)((ulong)auVar53._0_8_ >> 0x20);
    auVar56._8_4_ = auVar78._8_4_ + auVar53._8_4_;
    auVar56._12_4_ = auVar78._12_4_ + auVar55._12_4_;
    iVar125 = (int)(auVar123._0_4_ * auVar87._0_4_);
    iVar130 = (int)(auVar123._4_4_ * auVar87._4_4_);
    iStack_190 = (int)(auVar123._0_4_ * 1024.0);
    iStack_18c = (int)(auVar123._4_4_ * 1024.0);
    iVar18 = MP_INT_ABS(iVar125);
    iVar20 = MP_INT_ABS(iVar130);
    iVar44 = MP_INT_ABS((int)(auVar123._8_4_ * auVar87._8_4_));
    iVar47 = MP_INT_ABS((int)(auVar123._12_4_ * auVar87._12_4_));
    iVar11 = auVar115._0_4_ >> 0x1f;
    iVar16 = auVar115._4_4_ >> 0x1f;
    auVar84 = NEON_bsl(auVar108,auVar56,auVar175,1);
    auVar87 = NEON_neg(auVar73,4);
    iVar177 = MP_INT_ABS(iStack_190);
    iVar178 = MP_INT_ABS(iStack_18c);
    MP_INT_ABS((int)(auVar123._8_4_ * 1024.0));
    MP_INT_ABS((int)(auVar123._12_4_ * 1024.0));
    auVar138._0_4_ = (iVar48 * iStack_160 + iVar11) - iVar135 * iVar18;
    auVar138._4_4_ = (iVar133 * iStack_15c + iVar16) - iVar140 * iVar20;
    auVar138._8_4_ = (iVar171 * iVar12 + (auVar115._8_4_ >> 0x1f)) - auVar137._8_4_ * iVar44;
    auVar138._12_4_ = (iVar176 * iVar17 + (auVar115._12_4_ >> 0x1f)) - auVar137._12_4_ * iVar47;
    auVar46 = NEON_scvtf(auVar87,4);
    iVar48 = CONCAT13(auVar93[3] & auVar94[3],
                      CONCAT12(auVar93[2] & auVar94[2],
                               CONCAT11(auVar93[1] & auVar94[1],auVar93[0] & auVar94[0])));
    auVar172 = NEON_sshl(auVar138,auVar102,4);
    auVar87 = NEON_cmlt(auVar127,0,4);
    fVar122 = (float)((ulong)uStack_e8 >> 0x20);
    iStack_1f0 = iStack_160 * 0x400 - iVar135 * iVar177;
    iStack_1ec = iStack_15c * 0x400 - iVar140 * iVar178;
    iVar12 = CONCAT13(auVar172[3] & (byte)((uint)iVar135 >> 0x18),
                      CONCAT12(auVar172[2] & (byte)((uint)iVar135 >> 0x10),
                               CONCAT11(auVar172[1] & (byte)((uint)iVar135 >> 8),
                                        auVar172[0] & (byte)iVar135)));
    auVar114._0_8_ =
         CONCAT17(auVar172[7] & (byte)((uint)iVar140 >> 0x18),
                  CONCAT16(auVar172[6] & (byte)((uint)iVar140 >> 0x10),
                           CONCAT15(auVar172[5] & (byte)((uint)iVar140 >> 8),
                                    CONCAT14(auVar172[4] & (byte)iVar140,iVar12))));
    auVar114[8] = auVar172[8] & (byte)auVar137._8_4_;
    auVar114[9] = auVar172[9] & (byte)((uint)auVar137._8_4_ >> 8);
    auVar114[10] = auVar172[10] & (byte)((uint)auVar137._8_4_ >> 0x10);
    auVar114[11] = auVar172[11] & (byte)((uint)auVar137._8_4_ >> 0x18);
    auVar117[12] = auVar172[12] & (byte)auVar137._12_4_;
    auVar117._0_12_ = auVar114;
    auVar117[13] = auVar172[13] & (byte)((uint)auVar137._12_4_ >> 8);
    auVar117[14] = auVar172[14] & (byte)((uint)auVar137._12_4_ >> 0x10);
    auVar117[15] = auVar172[15] & (byte)((uint)auVar137._12_4_ >> 0x18);
    auVar82._0_8_ = auVar87._0_8_ | 0x100000001;
    auVar82[8] = auVar87[8] | 1;
    auVar82[9] = auVar87[9];
    auVar82[10] = auVar87[10];
    auVar82[11] = auVar87[11];
    auVar82[12] = auVar87[12] | 1;
    auVar82[13] = auVar87[13];
    auVar82[14] = auVar87[14];
    auVar82[15] = auVar87[15];
    iVar178 = (int)(local_f0 * auVar46._0_4_);
    iVar96 = (int)(fStack_ec * auVar46._4_4_);
    iVar97 = (int)((float)uStack_e8 * auVar46._8_4_);
    iVar98 = (int)(fVar122 * auVar46._12_4_);
    local_150 = MP_INT_ABS(auVar127._0_4_);
    iStack_14c = MP_INT_ABS(auVar127._4_4_);
    iVar44 = MP_INT_ABS(auVar127._8_4_);
    iVar47 = MP_INT_ABS(auVar127._12_4_);
    auVar118._0_4_ = iVar12 + auVar138._0_4_;
    auVar118._4_4_ = (int)((ulong)auVar114._0_8_ >> 0x20) + auVar138._4_4_;
    auVar118._8_4_ = auVar114._8_4_ + auVar138._8_4_;
    auVar118._12_4_ = auVar117._12_4_ + auVar138._12_4_;
    auVar87 = NEON_neg(auVar82,4);
    uStack_118 = auVar82._8_8_;
    local_120 = auVar82._0_8_;
    auVar108 = NEON_cmlt(auVar73,0,4);
    iVar133 = MP_INT_ABS(auVar73._0_4_);
    iVar171 = MP_INT_ABS(auVar73._4_4_);
    iVar176 = MP_INT_ABS(auVar73._8_4_);
    iVar177 = MP_INT_ABS(auVar73._12_4_);
    local_140 = CONCAT44(iVar47,iVar44);
    iVar144 = CONCAT13(auVar172[3] & auVar115[3],
                       CONCAT12(auVar172[2] & auVar115[2],
                                CONCAT11(auVar172[1] & auVar115[1],auVar172[0] & auVar115[0])));
    auVar46 = NEON_bif(auVar87,auVar82,auVar108,1);
    iVar145 = MP_INT_ABS(iVar178);
    iVar151 = MP_INT_ABS(iVar96);
    iVar153 = MP_INT_ABS(iVar97);
    iVar156 = MP_INT_ABS(iVar98);
    iVar12 = auVar46._0_4_ >> 0x1f;
    iVar17 = auVar46._4_4_ >> 0x1f;
    iVar18 = auVar46._8_4_ >> 0x1f;
    iVar20 = auVar46._12_4_ >> 0x1f;
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
    auVar164[12] = ~(byte)auVar118._12_4_;
    auVar164._0_12_ = auVar159;
    auVar164[13] = ~(byte)((uint)auVar118._12_4_ >> 8);
    auVar164[14] = ~(byte)((uint)auVar118._12_4_ >> 0x10);
    auVar164[15] = ~(byte)((uint)auVar118._12_4_ >> 0x18);
    auVar74._0_4_ = (iVar133 * local_150 + iVar12) - iVar99 * iVar145;
    auVar74._4_4_ = (iVar171 * iStack_14c + iVar17) - iVar105 * iVar151;
    auVar74._8_4_ = (iVar176 * iVar44 + iVar18) - auVar101._8_4_ * iVar153;
    auVar74._12_4_ = (iVar177 * iVar47 + iVar20) - auVar101._12_4_ * iVar156;
    auVar165._0_4_ = iVar135 + iVar158;
    auVar165._4_4_ = iVar140 + (int)((ulong)auVar159._0_8_ >> 0x20);
    auVar165._8_4_ = auVar137._8_4_ + auVar159._8_4_;
    auVar165._12_4_ = auVar137._12_4_ + auVar164._12_4_;
    auVar87 = NEON_sshl(auVar74,auVar102,4);
    auVar95 = NEON_bit(auVar118,auVar165,auVar95,1);
    local_230 = (iVar107 - iVar10) + iVar48 + iVar21 + 0x7f;
    iStack_22c = (iVar110 - iVar15) +
                 (int)(CONCAT17(auVar93[7] & auVar94[7],
                                CONCAT16(auVar93[6] & auVar94[6],
                                         CONCAT15(auVar93[5] & auVar94[5],
                                                  CONCAT14(auVar93[4] & auVar94[4],iVar48)))) >>
                      0x20) + iVar22 + 0x7f;
    iStack_220 = (iVar125 - iVar11) + iVar144 + auVar85._0_4_ + auVar50._0_4_ * -0x100 + 0x7f;
    iStack_21c = (iVar130 - iVar16) +
                 (int)(CONCAT17(auVar172[7] & auVar115[7],
                                CONCAT16(auVar172[6] & auVar115[6],
                                         CONCAT15(auVar172[5] & auVar115[5],
                                                  CONCAT14(auVar172[4] & auVar115[4],iVar144)))) >>
                      0x20) + auVar85._4_4_ + auVar50._4_4_ * -0x100 + 0x7f;
    iVar10 = CONCAT13(auVar87[3] & (byte)((uint)iVar99 >> 0x18),
                      CONCAT12(auVar87[2] & (byte)((uint)iVar99 >> 0x10),
                               CONCAT11(auVar87[1] & (byte)((uint)iVar99 >> 8),
                                        auVar87[0] & (byte)iVar99)));
    auVar65._0_8_ =
         CONCAT17(auVar87[7] & (byte)((uint)iVar105 >> 0x18),
                  CONCAT16(auVar87[6] & (byte)((uint)iVar105 >> 0x10),
                           CONCAT15(auVar87[5] & (byte)((uint)iVar105 >> 8),
                                    CONCAT14(auVar87[4] & (byte)iVar105,iVar10))));
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
    auVar67._0_4_ = iVar10 + auVar74._0_4_;
    auVar67._4_4_ = (int)((ulong)auVar65._0_8_ >> 0x20) + auVar74._4_4_;
    auVar67._8_4_ = auVar65._8_4_ + auVar74._8_4_;
    auVar67._12_4_ = auVar66._12_4_ + auVar74._12_4_;
    iVar10 = CONCAT13(auVar87[3] & auVar46[3],
                      CONCAT12(auVar87[2] & auVar46[2],
                               CONCAT11(auVar87[1] & auVar46[1],auVar87[0] & auVar46[0])));
    auVar72._0_8_ =
         CONCAT17(auVar87[7] & auVar46[7],
                  CONCAT16(auVar87[6] & auVar46[6],
                           CONCAT15(auVar87[5] & auVar46[5],CONCAT14(auVar87[4] & auVar46[4],iVar10)
                                   )));
    auVar72[8] = auVar87[8] & auVar46[8];
    auVar72[9] = auVar87[9] & auVar46[9];
    auVar72[10] = auVar87[10] & auVar46[10];
    auVar72[11] = auVar87[11] & auVar46[11];
    auVar75[12] = auVar87[12] & auVar46[12];
    auVar75._0_12_ = auVar72;
    auVar75[13] = auVar87[13] & auVar46[13];
    auVar75[14] = auVar87[14] & auVar46[14];
    auVar75[15] = auVar87[15] & auVar46[15];
    iVar11 = CONCAT13(~(byte)((uint)auVar67._0_4_ >> 0x18),
                      CONCAT12(~(byte)((uint)auVar67._0_4_ >> 0x10),
                               CONCAT11(~(byte)((uint)auVar67._0_4_ >> 8),~(byte)auVar67._0_4_)));
    auVar100._0_8_ =
         CONCAT17(~(byte)((uint)auVar67._4_4_ >> 0x18),
                  CONCAT16(~(byte)((uint)auVar67._4_4_ >> 0x10),
                           CONCAT15(~(byte)((uint)auVar67._4_4_ >> 8),
                                    CONCAT14(~(byte)auVar67._4_4_,iVar11))));
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
    auVar104._0_4_ = iVar99 + iVar11;
    auVar104._4_4_ = iVar105 + (int)((ulong)auVar100._0_8_ >> 0x20);
    auVar104._8_4_ = auVar101._8_4_ + auVar100._8_4_;
    auVar104._12_4_ = auVar101._12_4_ + auVar103._12_4_;
    iVar15 = MP_INT_ABS((int)(local_f0 * 1024.0));
    iVar16 = MP_INT_ABS((int)(fStack_ec * 1024.0));
    iVar48 = MP_INT_ABS(local_170);
    iVar133 = MP_INT_ABS(iStack_16c);
    local_180 = (int)(local_f0 * 1024.0);
    iStack_17c = (int)(fStack_ec * 1024.0);
    iVar11 = (int)*(undefined8 *)(this + 300);
    auVar87 = NEON_bit(auVar67,auVar104,auVar108,1);
    local_200 = (iVar97 - iVar18) + auVar72._8_4_ + iVar49 + auVar50._8_4_ * -0x100 + 0x7f;
    iStack_1fc = (iVar98 - iVar20) + auVar75._12_4_ + iVar71 + auVar50._12_4_ * -0x100 + 0x7f;
    local_210 = (iVar178 - iVar12) + iVar10 + iVar21 + 0x7f;
    iStack_20c = (iVar96 - iVar17) + (int)((ulong)auVar72._0_8_ >> 0x20) + iVar22 + 0x7f;
    local_2f0[0] = iVar7 + auVar51._0_4_ * iVar11;
    local_2f0[1] = iVar9 + auVar51._4_4_ * iVar11;
    local_1d0 = CONCAT44(iVar47 * 0x400 - auVar101._12_4_ * iVar133,
                         iVar44 * 0x400 - auVar101._8_4_ * iVar48);
    local_1e0 = local_150 * 0x400 - iVar99 * iVar15;
    iStack_1dc = iStack_14c * 0x400 - iVar105 * iVar16;
    uStack_1a8 = auVar87._8_8_;
    local_1b0 = auVar87._0_8_;
    local_2e0[0] = iVar7 + auVar14._0_4_ * iVar11;
    local_2e0[1] = iVar9 + auVar14._4_4_ * iVar11;
    local_2c0 = CONCAT44(auVar8._12_4_ + auVar45._12_4_ * iVar11,
                         auVar8._8_4_ + auVar45._8_4_ * iVar11);
    aiStack_2d0[0] = iVar7 + auVar45._0_4_ * iVar11;
    aiStack_2d0[1] = iVar9 + auVar45._4_4_ * iVar11;
    do {
      uVar1 = (uVar6 & 0xaaaaaaaa) >> 1 | (uVar6 & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar5 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      fVar19 = afStack_260[lVar5];
      iStack_300 = *(int *)((long)&local_2c0 + lVar5 * 4);
      fStack_30c = local_270[lVar5] * 0.0 + local_280[lVar5];
      fVar122 = afStack_290[lVar5];
      local_2f0[0] = iStack_300;
      local_2f0[1] = iStack_300;
      fVar13 = *(float *)((long)&local_2a0 + lVar5 * 4);
      local_320 = auVar77._0_4_ * fVar19 + fStack_30c;
      fStack_31c = auVar77._4_4_ * fVar19 + fStack_30c;
      local_310 = auVar77._8_4_ * fVar19 + fStack_30c;
      fStack_30c = auVar77._12_4_ * fVar19 + fStack_30c;
      iVar7 = aiStack_240[lVar5];
      iVar9 = aiStack_2d0[lVar5];
      iVar10 = local_2f0[lVar5];
      iVar11 = local_2e0[lVar5];
      uVar4 = (uint)lVar5;
      uVar1 = CONCAT13(auVar93[3] | auVar80[3] | auVar93[7] | auVar80[7],
                       CONCAT12(auVar93[2] | auVar80[2] | auVar93[6] | auVar80[6],
                                CONCAT11(auVar93[1] | auVar80[1] | auVar93[5] | auVar80[5],
                                         auVar93[0] | auVar80[0] | auVar93[4] | auVar80[4]))) &
              1 << (ulong)(uVar4 & 0x1f);
      iStack_2fc = iStack_300;
      if ((iVar7 < 4) || ((int)local_250[lVar5] < 4)) {
        if (uVar1 == 0) {
          RasterizeTriangle<0,0,1>
                    (this,uVar4,iVar7,iVar9,iVar10,iVar11,(__Int32x4_t *)&local_230,
                     (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,
                     (__Float32x4_t *)&local_310,(__Float32x4_t *)&iStack_300,
                     (__Float32x4_t *)&local_320,fVar122,fVar13,(__Int32x4_t *)&uStack_e0,
                     (__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,(__Int32x4_t *)&local_1d0,
                     (__Int32x4_t *)&local_200);
        }
        else {
          RasterizeTriangle<0,0,0>
                    (this,uVar4,iVar7,iVar9,iVar10,iVar11,(__Int32x4_t *)&local_230,
                     (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,
                     (__Float32x4_t *)&local_310,(__Float32x4_t *)&iStack_300,
                     (__Float32x4_t *)&local_320,fVar122,fVar13,(__Int32x4_t *)&uStack_e0,
                     (__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,(__Int32x4_t *)&local_1d0,
                     (__Int32x4_t *)&local_200);
        }
      }
      else if (uVar1 == 0) {
        RasterizeTriangle<0,1,1>
                  (this,uVar4,iVar7,iVar9,iVar10,iVar11,(__Int32x4_t *)&local_230,
                   (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,(__Float32x4_t *)&local_310
                   ,(__Float32x4_t *)&iStack_300,(__Float32x4_t *)&local_320,fVar122,fVar13,
                   (__Int32x4_t *)&uStack_e0,(__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,
                   (__Int32x4_t *)&local_1d0,(__Int32x4_t *)&local_200);
      }
      else {
        RasterizeTriangle<0,1,0>
                  (this,uVar4,iVar7,iVar9,iVar10,iVar11,(__Int32x4_t *)&local_230,
                   (__Float32x4_t *)&local_110,(__Int32x4_t *)&local_1a0,(__Float32x4_t *)&local_310
                   ,(__Float32x4_t *)&iStack_300,(__Float32x4_t *)&local_320,fVar122,fVar13,
                   (__Int32x4_t *)&uStack_e0,(__Int32x4_t *)&local_170,(__Int32x4_t *)&local_140,
                   (__Int32x4_t *)&local_1d0,(__Int32x4_t *)&local_200);
      }
      uVar6 = uVar6 - 1 & uVar6;
    } while (uVar6 != 0);
    iVar7 = 0;
    if (*(long *)(lVar3 + 0x28) != local_b0) {
LAB_00da1bc0:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return iVar7;
}


