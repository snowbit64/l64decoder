// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BinTriangles<false>
// Entry Point: 00da833c
// Size: 1624 bytes
// Signature: void __thiscall BinTriangles<false>(MaskedOcclusionCullingPrivate * this, float * param_1, ushort * param_2, int param_3, TriList * param_4, uint param_5, uint param_6, float * param_7, BackfaceWinding param_8, ClipPlanes param_9, VertexLayout * param_10)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::BinTriangles<false>(float const*,
   unsigned short const*, int, MaskedOcclusionCulling::TriList*, unsigned int, unsigned int, float
   const*, MaskedOcclusionCulling::BackfaceWinding, MaskedOcclusionCulling::ClipPlanes,
   MaskedOcclusionCulling::VertexLayout const&) */

void __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::BinTriangles<false>
          (MaskedOcclusionCullingPrivate *this,float *param_1,ushort *param_2,int param_3,
          TriList *param_4,uint param_5,uint param_6,float *param_7,BackfaceWinding param_8,
          ClipPlanes param_9,VertexLayout *param_10)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  uint uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar22;
  int iVar23;
  undefined auVar18 [16];
  int iVar24;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined auVar21 [16];
  float fVar25;
  uint uVar26;
  float fVar31;
  int iVar33;
  undefined auVar28 [16];
  undefined auVar29 [16];
  int iVar27;
  int iVar32;
  int iVar34;
  undefined auVar30 [16];
  float fVar35;
  int iVar36;
  undefined4 uVar37;
  float fVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  undefined auVar38 [16];
  int iVar43;
  int iVar46;
  int iVar47;
  undefined auVar44 [16];
  int iVar48;
  undefined auVar45 [16];
  undefined auVar49 [16];
  undefined auVar50 [16];
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined auVar53 [16];
  undefined auVar54 [16];
  undefined auVar55 [16];
  undefined auVar56 [16];
  undefined auVar57 [16];
  undefined auVar58 [16];
  undefined auVar59 [16];
  undefined auVar60 [16];
  undefined auVar61 [16];
  undefined auVar62 [16];
  float fVar64;
  undefined auVar63 [16];
  float fVar65;
  undefined auVar66 [16];
  undefined auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined auVar72 [16];
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined auVar85 [16];
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  uint local_7b4;
  uint local_7b0;
  uint local_7ac;
  int local_7a8;
  int local_7a4;
  ushort *local_7a0;
  undefined8 local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  float local_720 [4];
  undefined8 local_710;
  undefined8 uStack_708;
  undefined local_700 [16];
  undefined auStack_6f0 [16];
  undefined local_6e0 [16];
  undefined local_6d0 [16];
  undefined auStack_6c0 [16];
  undefined local_6b0 [16];
  undefined local_6a0 [16];
  undefined auStack_690 [16];
  undefined local_680 [16];
  __Float32x4_t a_Stack_670 [1536];
  long local_70;
  
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  local_798 = 0;
  local_7a8 = 0;
  local_7a4 = 4;
  local_7a0 = param_2;
  if (0 < param_3) {
    do {
      do {
        local_7ac = 0xf;
        GatherTransformClip<0>
                  (this,(int *)((long)&local_798 + 4),(int *)&local_798,&local_7a4,param_3,
                   &local_7a8,(__Float32x4_t *)local_6a0,(__Float32x4_t *)local_6d0,
                   (__Float32x4_t *)local_700,param_1,&local_7a0,param_10,param_7,a_Stack_670,
                   &local_7ac,param_9);
        if (local_7ac != 0) {
          auVar50 = NEON_frecpe(local_700,4);
          auVar54 = *(undefined (*) [16])(this + 0x60);
          auVar28 = *(undefined (*) [16])(this + 0x70);
          auVar63 = NEON_frecpe(auStack_6f0,4);
          auVar44 = NEON_frecps(auVar63,auStack_6f0,4);
          local_720[0] = auVar63._0_4_ * auVar44._0_4_;
          local_720[1] = auVar63._4_4_ * auVar44._4_4_;
          fVar64 = auVar63._8_4_ * auVar44._8_4_;
          fVar65 = auVar63._12_4_ * auVar44._12_4_;
          fVar81 = auVar28._0_4_;
          fVar82 = auVar28._4_4_;
          fVar83 = auVar28._8_4_;
          fVar84 = auVar28._12_4_;
          auVar28 = NEON_frecps(auVar50,local_700,4);
          auVar63 = NEON_frecpe(local_6e0,4);
          fVar25 = auVar50._0_4_ * auVar28._0_4_;
          fVar31 = auVar50._4_4_ * auVar28._4_4_;
          auVar44._0_8_ = CONCAT44(fVar31,fVar25);
          auVar44._8_4_ = auVar50._8_4_ * auVar28._8_4_;
          auVar44._12_4_ = auVar50._12_4_ * auVar28._12_4_;
          fVar73 = auVar54._0_4_;
          fVar74 = auVar54._4_4_;
          fVar75 = auVar54._8_4_;
          fVar76 = auVar54._12_4_;
          auVar54 = *(undefined (*) [16])(this + 0x90);
          uStack_708 = auVar44._8_8_;
          auVar28 = NEON_frecps(auVar63,local_6e0,4);
          fVar35 = auVar63._0_4_ * auVar28._0_4_;
          fVar39 = auVar63._4_4_ * auVar28._4_4_;
          auVar50._0_8_ = CONCAT44(fVar39,fVar35);
          auVar50._8_4_ = auVar63._8_4_ * auVar28._8_4_;
          auVar50._12_4_ = auVar63._12_4_ * auVar28._12_4_;
          fVar77 = auVar54._0_4_;
          fVar78 = auVar54._4_4_;
          fVar79 = auVar54._8_4_;
          fVar80 = auVar54._12_4_;
          uStack_728 = auVar50._8_8_;
          fVar68 = (float)*(undefined8 *)(this + 0x80);
          fVar69 = (float)((ulong)*(undefined8 *)(this + 0x80) >> 0x20);
          fVar70 = (float)*(undefined8 *)(this + 0x88);
          fVar71 = (float)((ulong)*(undefined8 *)(this + 0x88) >> 0x20);
          auVar28._0_8_ =
               CONCAT44((int)((fVar78 + fVar31 * local_6d0._4_4_ * fVar82) * 256.0),
                        (int)((fVar77 + fVar25 * local_6d0._0_4_ * fVar81) * 256.0));
          auVar28._8_4_ = (int)((fVar79 + auVar44._8_4_ * local_6d0._8_4_ * fVar83) * 256.0);
          auVar28._12_4_ = (int)((fVar80 + auVar44._12_4_ * local_6d0._12_4_ * fVar84) * 256.0);
          auVar54 = NEON_scvtf(auVar28,4);
          auVar58._0_8_ =
               CONCAT44((int)((fVar69 + local_720[1] * fVar74 * auStack_690._4_4_) * 256.0),
                        (int)((fVar68 + local_720[0] * fVar73 * auStack_690._0_4_) * 256.0));
          auVar58._8_4_ = (int)((fVar70 + fVar64 * fVar75 * auStack_690._8_4_) * 256.0);
          auVar58._12_4_ = (int)((fVar71 + fVar65 * fVar76 * auStack_690._12_4_) * 256.0);
          auVar61._0_8_ =
               CONCAT44((int)((fVar78 + local_720[1] * fVar82 * auStack_6c0._4_4_) * 256.0),
                        (int)((fVar77 + local_720[0] * fVar81 * auStack_6c0._0_4_) * 256.0));
          auVar61._8_4_ = (int)((fVar79 + fVar64 * fVar83 * auStack_6c0._8_4_) * 256.0);
          auVar61._12_4_ = (int)((fVar80 + fVar65 * fVar84 * auStack_6c0._12_4_) * 256.0);
          auVar72._0_4_ = auVar54._0_4_ * 0.00390625;
          auVar72._4_4_ = auVar54._4_4_ * 0.00390625;
          auVar72._8_4_ = auVar54._8_4_ * 0.00390625;
          auVar72._12_4_ = auVar54._12_4_ * 0.00390625;
          auVar55._0_8_ =
               CONCAT44((int)((fVar69 + fVar31 * local_6a0._4_4_ * fVar74) * 256.0),
                        (int)((fVar68 + fVar25 * local_6a0._0_4_ * fVar73) * 256.0));
          auVar55._8_4_ = (int)((fVar70 + auVar44._8_4_ * local_6a0._8_4_ * fVar75) * 256.0);
          auVar55._12_4_ = (int)((fVar71 + auVar44._12_4_ * local_6a0._12_4_ * fVar76) * 256.0);
          auVar51._0_8_ =
               CONCAT44((int)((fVar69 + fVar39 * fVar74 * local_680._4_4_) * 256.0),
                        (int)((fVar68 + fVar35 * fVar73 * local_680._0_4_) * 256.0));
          auVar51._8_4_ = (int)((fVar70 + auVar50._8_4_ * fVar75 * local_680._8_4_) * 256.0);
          auVar51._12_4_ = (int)((fVar71 + auVar50._12_4_ * fVar76 * local_680._12_4_) * 256.0);
          auVar63._0_8_ =
               CONCAT44((int)((fVar78 + fVar39 * fVar82 * local_6b0._4_4_) * 256.0),
                        (int)((fVar77 + fVar35 * fVar81 * local_6b0._0_4_) * 256.0));
          auVar63._8_4_ = (int)((fVar79 + auVar50._8_4_ * fVar83 * local_6b0._8_4_) * 256.0);
          auVar63._12_4_ = (int)((fVar80 + auVar50._12_4_ * fVar84 * local_6b0._12_4_) * 256.0);
          auVar54 = NEON_scvtf(auVar58,4);
          auVar66 = NEON_scvtf(auVar55,4);
          uStack_748 = auVar58._8_8_;
          uStack_738 = auVar55._8_8_;
          auVar62 = NEON_scvtf(auVar51,4);
          uStack_768 = auVar28._8_8_;
          uStack_758 = auVar51._8_8_;
          auVar67 = NEON_scvtf(auVar63,4);
          uStack_788 = auVar63._8_8_;
          uStack_778 = auVar61._8_8_;
          fVar77 = auVar54._0_4_ * 0.00390625;
          fVar78 = auVar54._4_4_ * 0.00390625;
          fVar79 = auVar54._8_4_ * 0.00390625;
          fVar80 = auVar54._12_4_ * 0.00390625;
          auVar54 = NEON_scvtf(auVar61,4);
          auVar85._0_4_ = auVar66._0_4_ * 0.00390625;
          auVar85._4_4_ = auVar66._4_4_ * 0.00390625;
          auVar85._8_4_ = auVar66._8_4_ * 0.00390625;
          auVar85._12_4_ = auVar66._12_4_ * 0.00390625;
          fVar81 = auVar62._0_4_ * 0.00390625;
          fVar82 = auVar62._4_4_ * 0.00390625;
          fVar83 = auVar62._8_4_ * 0.00390625;
          fVar84 = auVar62._12_4_ * 0.00390625;
          fVar73 = auVar67._0_4_ * 0.00390625;
          fVar74 = auVar67._4_4_ * 0.00390625;
          fVar75 = auVar67._8_4_ * 0.00390625;
          fVar76 = auVar67._12_4_ * 0.00390625;
          fVar25 = auVar54._0_4_ * 0.00390625;
          fVar31 = auVar54._4_4_ * 0.00390625;
          auVar62._4_4_ = fVar31;
          auVar62._0_4_ = fVar25;
          fVar35 = auVar54._8_4_ * 0.00390625;
          fVar39 = auVar54._12_4_ * 0.00390625;
          auVar62._12_4_ = fVar39;
          auVar62._8_4_ = fVar35;
          auVar54._0_4_ =
               (fVar77 - fVar81) * (auVar72._0_4_ - fVar73) -
               (fVar81 - auVar85._0_4_) * (fVar73 - fVar25);
          auVar54._4_4_ =
               (fVar78 - fVar82) * (auVar72._4_4_ - fVar74) -
               (fVar82 - auVar85._4_4_) * (fVar74 - fVar31);
          auVar54._8_4_ =
               (fVar79 - fVar83) * (auVar72._8_4_ - fVar75) -
               (fVar83 - auVar85._8_4_) * (fVar75 - fVar35);
          auVar54._12_4_ =
               (fVar80 - fVar84) * (auVar72._12_4_ - fVar76) -
               (fVar84 - auVar85._12_4_) * (fVar76 - fVar39);
          local_790 = auVar63._0_8_;
          local_770 = auVar28._0_8_;
          uStack_760 = auVar51._0_8_;
          local_740 = auVar55._0_8_;
          local_730 = auVar50._0_8_;
          local_710 = auVar44._0_8_;
          if ((param_8 & 1) == 0) {
            auVar59 = NEON_fcmgt(auVar54,0,4);
            auVar66 = NEON_bsl(auVar59,auVar55,auVar51,1);
            auVar51 = NEON_bif(auVar51,auVar55,auVar59,1);
            uStack_738 = auVar66._8_8_;
            local_740 = auVar66._0_8_;
            auVar55 = NEON_bsl(auVar59,auVar28,auVar63,1);
            auVar28 = NEON_bit(auVar28,auVar63,auVar59,1);
            auVar66._4_4_ = fVar74;
            auVar66._0_4_ = fVar73;
            auVar66._8_4_ = fVar75;
            auVar66._12_4_ = fVar76;
            auVar66 = NEON_bsl(auVar59,auVar66,auVar72,1);
            uStack_768 = auVar55._8_8_;
            local_770 = auVar55._0_8_;
            uStack_758 = auVar51._8_8_;
            uStack_760 = auVar51._0_8_;
            uStack_788 = auVar28._8_8_;
            local_790 = auVar28._0_8_;
            auVar11._4_4_ = fVar82;
            auVar11._0_4_ = fVar81;
            auVar11._8_4_ = fVar83;
            auVar11._12_4_ = fVar84;
            auVar63 = NEON_bsl(auVar59,auVar11,auVar85,1);
            auVar12._4_4_ = fVar82;
            auVar12._0_4_ = fVar81;
            auVar12._8_4_ = fVar83;
            auVar12._12_4_ = fVar84;
            auVar85 = NEON_bif(auVar85,auVar12,auVar59,1);
            auVar67._4_4_ = fVar74;
            auVar67._0_4_ = fVar73;
            auVar67._8_4_ = fVar75;
            auVar67._12_4_ = fVar76;
            auVar72 = NEON_bif(auVar72,auVar67,auVar59,1);
            auVar51 = NEON_bsl(auVar59,auVar50,auVar44,1);
            auVar28 = NEON_bif(auVar44,auVar50,auVar59,1);
            fVar75 = auVar66._8_4_;
            fVar76 = auVar66._12_4_;
            fVar73 = auVar66._0_4_;
            fVar74 = auVar66._4_4_;
            fVar83 = auVar63._8_4_;
            fVar84 = auVar63._12_4_;
            fVar81 = auVar63._0_4_;
            fVar82 = auVar63._4_4_;
            uStack_728 = auVar51._8_8_;
            local_730 = auVar51._0_8_;
            uStack_708 = auVar28._8_8_;
            local_710 = auVar28._0_8_;
          }
          if ((param_8 >> 1 & 1) == 0) {
            auVar28 = NEON_fcmgt(auVar54,0,4);
            auVar59[0] = auVar28[0] & SUB161(_DAT_004c4480,0);
            auVar59[1] = auVar28[1] & SUB161(_DAT_004c4480,1);
            auVar59[2] = auVar28[2] & SUB161(_DAT_004c4480,2);
            auVar59[3] = auVar28[3] & SUB161(_DAT_004c4480,3);
            auVar59[4] = auVar28[4] & SUB161(_DAT_004c4480,4);
            auVar59[5] = auVar28[5] & SUB161(_DAT_004c4480,5);
            auVar59[6] = auVar28[6] & SUB161(_DAT_004c4480,6);
            auVar59[7] = auVar28[7] & SUB161(_DAT_004c4480,7);
            auVar59[8] = auVar28[8] & SUB161(_DAT_004c4480,8);
            auVar59[9] = auVar28[9] & SUB161(_DAT_004c4480,9);
            auVar59[10] = auVar28[10] & SUB161(_DAT_004c4480,10);
            auVar59[11] = auVar28[11] & SUB161(_DAT_004c4480,0xb);
            auVar59[12] = auVar28[12] & SUB161(_DAT_004c4480,0xc);
            auVar59[13] = auVar28[13] & SUB161(_DAT_004c4480,0xd);
            auVar59[14] = auVar28[14] & SUB161(_DAT_004c4480,0xe);
            auVar59[15] = auVar28[15] & SUB161(_DAT_004c4480,0xf);
            auVar28 = NEON_ext(auVar59,auVar59,8,1);
            uVar26 = CONCAT13(auVar28[3] | auVar59[3] | auVar28[7] | auVar59[7],
                              CONCAT12(auVar28[2] | auVar59[2] | auVar28[6] | auVar59[6],
                                       CONCAT11(auVar28[1] | auVar59[1] | auVar28[5] | auVar59[5],
                                                auVar28[0] | auVar59[0] | auVar28[4] | auVar59[4])))
            ;
          }
          else {
            uVar26 = 0;
          }
          if ((param_8 & 1) == 0) {
            auVar54 = NEON_fcmgt(auVar54,0,4);
            auVar18[0] = auVar54[0] & SUB161(_DAT_004c4480,0);
            auVar18[1] = auVar54[1] & SUB161(_DAT_004c4480,1);
            auVar18[2] = auVar54[2] & SUB161(_DAT_004c4480,2);
            auVar18[3] = auVar54[3] & SUB161(_DAT_004c4480,3);
            auVar18[4] = auVar54[4] & SUB161(_DAT_004c4480,4);
            auVar18[5] = auVar54[5] & SUB161(_DAT_004c4480,5);
            auVar18[6] = auVar54[6] & SUB161(_DAT_004c4480,6);
            auVar18[7] = auVar54[7] & SUB161(_DAT_004c4480,7);
            auVar18[8] = auVar54[8] & SUB161(_DAT_004c4480,8);
            auVar18[9] = auVar54[9] & SUB161(_DAT_004c4480,9);
            auVar18[10] = auVar54[10] & SUB161(_DAT_004c4480,10);
            auVar18[11] = auVar54[11] & SUB161(_DAT_004c4480,0xb);
            auVar18[12] = auVar54[12] & SUB161(_DAT_004c4480,0xc);
            auVar18[13] = auVar54[13] & SUB161(_DAT_004c4480,0xd);
            auVar18[14] = auVar54[14] & SUB161(_DAT_004c4480,0xe);
            auVar18[15] = auVar54[15] & SUB161(_DAT_004c4480,0xf);
            auVar54 = NEON_ext(auVar18,auVar18,8,1);
            uVar26 = ~CONCAT13(auVar54[3] | auVar18[3] | auVar54[7] | auVar18[7],
                               CONCAT12(auVar54[2] | auVar18[2] | auVar54[6] | auVar18[6],
                                        CONCAT11(auVar54[1] | auVar18[1] | auVar54[5] | auVar18[5],
                                                 auVar54[0] | auVar18[0] | auVar54[4] | auVar18[4]))
                              ) | uVar26;
          }
          local_7ac = uVar26 & local_7ac;
          uStack_780 = auVar61._0_8_;
          local_750 = auVar58._0_8_;
          if (local_7ac != 0) {
            auVar56._12_4_ = fVar84;
            auVar56._8_4_ = fVar83;
            auVar56._4_4_ = fVar82;
            auVar56._0_4_ = fVar81;
            auVar29._12_4_ = fVar80;
            auVar29._8_4_ = fVar79;
            auVar29._4_4_ = fVar78;
            auVar29._0_4_ = fVar77;
            auVar52._12_4_ = fVar76;
            auVar52._8_4_ = fVar75;
            auVar52._4_4_ = fVar74;
            auVar52._0_4_ = fVar73;
            (**(code **)(*(long *)this + 0x10))(this,param_5,param_6,&local_7b0,&local_7b4);
            if (((ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                  ::SIMD_PAD_W_MASK & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                              ::SIMD_PAD_W_MASK), iVar16 != 0)) {
              auVar20._8_4_ = 0xffffffe0;
              auVar20._0_8_ = 0xffffffe0ffffffe0;
              auVar20._12_4_ = 0xffffffe0;
              ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
              ::SIMD_PAD_W_MASK._8_8_ = auVar20._8_8_;
              ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
              ::SIMD_PAD_W_MASK._0_8_ = 0xffffffe0ffffffe0;
              __cxa_guard_release(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                   ::SIMD_PAD_W_MASK);
            }
            if (((ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                  ::SIMD_PAD_H_MASK & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                              ::SIMD_PAD_H_MASK), iVar16 != 0)) {
              auVar21._8_4_ = 0xfffffffc;
              auVar21._0_8_ = 0xfffffffcfffffffc;
              auVar21._12_4_ = 0xfffffffc;
              ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
              ::SIMD_PAD_H_MASK._8_8_ = auVar21._8_8_;
              ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
              ::SIMD_PAD_H_MASK._0_8_ = 0xfffffffcfffffffc;
              __cxa_guard_release(&ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                   ::SIMD_PAD_H_MASK);
            }
            auVar54 = NEON_fmax(auVar29,auVar85,4);
            auVar28 = NEON_fmin(auVar29,auVar85,4);
            auVar44 = NEON_fmin(auVar62,auVar72,4);
            auVar50 = NEON_fmax(auVar62,auVar72,4);
            auVar54 = NEON_fmax(auVar56,auVar54,4);
            auVar28 = NEON_fmin(auVar56,auVar28,4);
            auVar50 = NEON_fmax(auVar52,auVar50,4);
            auVar44 = NEON_fmin(auVar52,auVar44,4);
            iVar27 = (int)auVar28._0_4_;
            iVar32 = (int)auVar28._4_4_;
            iVar33 = (int)auVar28._8_4_;
            iVar34 = (int)auVar28._12_4_;
            iVar16 = (int)auVar54._0_4_ + 0x20;
            iVar22 = (int)auVar54._4_4_ + 0x20;
            iVar23 = (int)auVar54._8_4_ + 0x20;
            iVar24 = (int)auVar54._12_4_ + 0x20;
            iVar36 = (int)auVar44._0_4_;
            iVar40 = (int)auVar44._4_4_;
            iVar41 = (int)auVar44._8_4_;
            iVar42 = (int)auVar44._12_4_;
            iVar43 = (int)auVar50._0_4_ + 4;
            iVar46 = (int)auVar50._4_4_ + 4;
            iVar47 = (int)auVar50._8_4_ + 4;
            iVar48 = (int)auVar50._12_4_ + 4;
            auVar30[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_ & (byte)iVar27;
            auVar30[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,1) & (byte)((uint)iVar27 >> 8);
            auVar30[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,2) & (byte)((uint)iVar27 >> 0x10);
            auVar30[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,3) & (byte)((uint)iVar27 >> 0x18);
            auVar30[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,4) & (byte)iVar32;
            auVar30[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,5) & (byte)((uint)iVar32 >> 8);
            auVar30[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,6) & (byte)((uint)iVar32 >> 0x10);
            auVar30[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,7) & (byte)((uint)iVar32 >> 0x18);
            auVar30[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._8_8_ & (byte)iVar33;
            auVar30[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._8_8_,1) & (byte)((uint)iVar33 >> 8);
            auVar30[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,2) & (byte)((uint)iVar33 >> 0x10);
            auVar30[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,3) & (byte)((uint)iVar33 >> 0x18);
            auVar30[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,4) & (byte)iVar34;
            auVar30[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,5) & (byte)((uint)iVar34 >> 8);
            auVar30[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,6) & (byte)((uint)iVar34 >> 0x10);
            auVar30[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,7) & (byte)((uint)iVar34 >> 0x18);
            auVar19[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_ & (byte)iVar16;
            auVar19[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,1) & (byte)((uint)iVar16 >> 8);
            auVar19[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,2) & (byte)((uint)iVar16 >> 0x10);
            auVar19[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,3) & (byte)((uint)iVar16 >> 0x18);
            auVar19[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,4) & (byte)iVar22;
            auVar19[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,5) & (byte)((uint)iVar22 >> 8);
            auVar19[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,6) & (byte)((uint)iVar22 >> 0x10);
            auVar19[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._0_8_,7) & (byte)((uint)iVar22 >> 0x18);
            auVar19[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._8_8_ & (byte)iVar23;
            auVar19[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_W_MASK._8_8_,1) & (byte)((uint)iVar23 >> 8);
            auVar19[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,2) & (byte)((uint)iVar23 >> 0x10);
            auVar19[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,3) & (byte)((uint)iVar23 >> 0x18);
            auVar19[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,4) & (byte)iVar24;
            auVar19[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,5) & (byte)((uint)iVar24 >> 8);
            auVar19[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,6) & (byte)((uint)iVar24 >> 0x10);
            auVar19[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_W_MASK._8_8_,7) & (byte)((uint)iVar24 >> 0x18);
            auVar57._0_4_ = (undefined4)*(undefined8 *)(this + 0x140);
            auVar57._4_4_ = auVar57._0_4_;
            auVar57._8_4_ = auVar57._0_4_;
            auVar57._12_4_ = auVar57._0_4_;
            auVar38[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_ & (byte)iVar36;
            auVar38[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,1) & (byte)((uint)iVar36 >> 8);
            auVar38[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,2) & (byte)((uint)iVar36 >> 0x10);
            auVar38[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,3) & (byte)((uint)iVar36 >> 0x18);
            auVar38[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,4) & (byte)iVar40;
            auVar38[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,5) & (byte)((uint)iVar40 >> 8);
            auVar38[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,6) & (byte)((uint)iVar40 >> 0x10);
            auVar38[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,7) & (byte)((uint)iVar40 >> 0x18);
            auVar38[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._8_8_ & (byte)iVar41;
            auVar38[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._8_8_,1) & (byte)((uint)iVar41 >> 8);
            auVar38[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,2) & (byte)((uint)iVar41 >> 0x10);
            auVar38[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,3) & (byte)((uint)iVar41 >> 0x18);
            auVar38[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,4) & (byte)iVar42;
            auVar38[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,5) & (byte)((uint)iVar42 >> 8);
            auVar38[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,6) & (byte)((uint)iVar42 >> 0x10);
            auVar38[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,7) & (byte)((uint)iVar42 >> 0x18);
            auVar60._0_4_ = (undefined4)*(undefined8 *)(this + 0x148);
            auVar60._4_4_ = auVar60._0_4_;
            auVar60._8_4_ = auVar60._0_4_;
            auVar60._12_4_ = auVar60._0_4_;
            auVar45[0] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_ & (byte)iVar43;
            auVar45[1] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,1) & (byte)((uint)iVar43 >> 8);
            auVar45[2] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,2) & (byte)((uint)iVar43 >> 0x10);
            auVar45[3] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,3) & (byte)((uint)iVar43 >> 0x18);
            auVar45[4] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,4) & (byte)iVar46;
            auVar45[5] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,5) & (byte)((uint)iVar46 >> 8);
            auVar45[6] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,6) & (byte)((uint)iVar46 >> 0x10);
            auVar45[7] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._0_8_,7) & (byte)((uint)iVar46 >> 0x18);
            auVar45[8] = (byte)ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._8_8_ & (byte)iVar47;
            auVar45[9] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                               ::SIMD_PAD_H_MASK._8_8_,1) & (byte)((uint)iVar47 >> 8);
            auVar45[10] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,2) & (byte)((uint)iVar47 >> 0x10);
            auVar45[11] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,3) & (byte)((uint)iVar47 >> 0x18);
            auVar45[12] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,4) & (byte)iVar48;
            auVar45[13] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,5) & (byte)((uint)iVar48 >> 8);
            auVar45[14] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,6) & (byte)((uint)iVar48 >> 0x10);
            auVar45[15] = SUB81(ComputeBoundingBox(__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Int32x4_t&,__Float32x4_t_const*,__Float32x4_t_const*,MaskedOcclusionCulling::ScissorRect_const*)
                                ::SIMD_PAD_H_MASK._8_8_,7) & (byte)((uint)iVar48 >> 0x18);
            uVar9 = *(undefined4 *)(this + 0x14c);
            auVar53._4_4_ = uVar9;
            auVar53._0_4_ = uVar9;
            auVar53._8_4_ = uVar9;
            auVar53._12_4_ = uVar9;
            auVar49._0_4_ = (undefined4)*(undefined8 *)(this + 0x144);
            auVar49._4_4_ = auVar49._0_4_;
            auVar49._8_4_ = auVar49._0_4_;
            auVar49._12_4_ = auVar49._0_4_;
            auVar28 = NEON_smax(auVar30,auVar57,4);
            auVar44 = NEON_smax(auVar38,auVar49,4);
            auVar54 = NEON_smin(auVar19,auVar60,4);
            auVar50 = NEON_smin(auVar45,auVar53,4);
            uStack_7d8 = auVar44._8_8_;
            local_7e0 = auVar44._0_8_;
            uStack_7c8 = auVar28._8_8_;
            uStack_7d0 = auVar28._0_8_;
            uStack_7f8 = auVar50._8_8_;
            local_800 = auVar50._0_8_;
            uStack_7e8 = auVar54._8_8_;
            uStack_7f0 = auVar54._0_8_;
            while (local_7ac != 0) {
                    /* WARNING: Read-only address (ram,0x004c4480) is written */
              uVar26 = (local_7ac & 0xaaaaaaaa) >> 1 | (local_7ac & 0x55555555) << 1;
              uVar26 = (uVar26 & 0xcccccccc) >> 2 | (uVar26 & 0x33333333) << 2;
              uVar26 = (uVar26 & 0xf0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f) << 4;
              uVar26 = (uVar26 & 0xff00ff00) >> 8 | (uVar26 & 0xff00ff) << 8;
              lVar14 = LZCOUNT(uVar26 >> 0x10 | uVar26 << 0x10);
              lVar15 = lVar14 * 4;
              uVar26 = 0;
              if (local_7b0 != 0) {
                uVar26 = *(uint *)((long)&uStack_7d0 + lVar15) / local_7b0;
              }
              uVar1 = param_5 - 1;
              if (uVar26 <= param_5 - 1) {
                uVar1 = uVar26;
              }
              uVar26 = 0;
              if (local_7b0 != 0) {
                uVar26 = ((local_7b0 + *(int *)((long)&uStack_7f0 + lVar15)) - 1) / local_7b0;
              }
              uVar8 = 0;
              if (local_7b4 != 0) {
                uVar8 = *(uint *)((long)&local_7e0 + lVar15) / local_7b4;
              }
              uVar13 = param_6 - 1;
              if (uVar8 <= param_6 - 1) {
                uVar13 = uVar8;
              }
              uVar8 = 0;
              if (local_7b4 != 0) {
                uVar8 = ((local_7b4 + *(int *)((long)&local_800 + lVar15)) - 1) / local_7b4;
              }
              uVar2 = param_5;
              if (uVar26 <= param_5) {
                uVar2 = uVar26;
              }
              local_7ac = local_7ac - 1 & local_7ac;
              uVar26 = param_6;
              if (uVar8 <= param_6) {
                uVar26 = uVar8;
              }
              if (((int)uVar13 < (int)uVar26) && ((int)uVar1 < (int)uVar2)) {
                uVar9 = *(undefined4 *)((long)&uStack_760 + lVar15);
                uVar3 = *(undefined4 *)((long)&local_790 + lVar15);
                uVar17 = *(undefined4 *)((long)&local_730 + lVar15);
                uVar4 = *(undefined4 *)((long)&local_750 + lVar15);
                uVar5 = *(undefined4 *)((long)&uStack_780 + lVar15);
                fVar25 = local_720[lVar14];
                uVar6 = *(undefined4 *)((long)&local_740 + lVar15);
                uVar7 = *(undefined4 *)((long)&local_770 + lVar15);
                uVar37 = *(undefined4 *)((long)&local_710 + lVar15);
                do {
                  lVar14 = (long)(int)uVar1;
                  do {
                    iVar16 = uVar13 * param_5 + (int)lVar14;
                    lVar14 = lVar14 + 1;
                    lVar15 = *(long *)(param_4 + (long)iVar16 * 0x10 + 8);
                    uVar8 = *(int *)(param_4 + (long)iVar16 * 0x10 + 4) * 9;
                    *(undefined4 *)(lVar15 + (ulong)uVar8 * 4) = uVar9;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 1) * 4) = uVar3;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 2) * 4) = uVar17;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 3) * 4) = uVar4;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 4) * 4) = uVar5;
                    *(float *)(lVar15 + (ulong)(uVar8 + 5) * 4) = fVar25;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 6) * 4) = uVar6;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 7) * 4) = uVar7;
                    *(undefined4 *)(lVar15 + (ulong)(uVar8 + 8) * 4) = uVar37;
                    *(int *)(param_4 + (long)iVar16 * 0x10 + 4) =
                         *(int *)(param_4 + (long)iVar16 * 0x10 + 4) + 1;
                  } while (lVar14 != (int)uVar2);
                  uVar13 = uVar13 + 1;
                } while (uVar13 != uVar26);
              }
            }
          }
        }
      } while (local_7a8 < param_3);
    } while (local_798._4_4_ != (int)local_798);
  }
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


