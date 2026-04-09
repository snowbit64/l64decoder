// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderTriangles<0,1>
// Entry Point: 00da08ac
// Size: 896 bytes
// Signature: CullingResult __thiscall RenderTriangles<0,1>(MaskedOcclusionCullingPrivate * this, float * param_1, ushort * param_2, int param_3, float * param_4, BackfaceWinding param_5, ClipPlanes param_6, VertexLayout * param_7)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaskedOcclusionCulling::CullingResult
   MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTriangles<0, 1>(float const*,
   unsigned short const*, int, float const*, MaskedOcclusionCulling::BackfaceWinding,
   MaskedOcclusionCulling::ClipPlanes, MaskedOcclusionCulling::VertexLayout const&) */

CullingResult __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTriangles<0,1>
          (MaskedOcclusionCullingPrivate *this,float *param_1,ushort *param_2,int param_3,
          float *param_4,BackfaceWinding param_5,ClipPlanes param_6,VertexLayout *param_7)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar11;
  undefined auVar7 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  float fVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined auVar18 [16];
  float fVar21;
  undefined auVar19 [16];
  float fVar22;
  undefined auVar20 [16];
  float fVar23;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined auVar24 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  float fVar30;
  float fVar34;
  float fVar35;
  undefined auVar31 [16];
  float fVar36;
  undefined auVar32 [16];
  undefined auVar33 [16];
  float fVar37;
  float fVar40;
  undefined auVar38 [16];
  float fVar41;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined auVar42 [16];
  undefined auVar43 [16];
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined auVar51 [16];
  undefined auVar52 [16];
  undefined8 uStack_838;
  uint local_81c;
  int local_818;
  undefined4 uStack_814;
  ushort *local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  float local_790;
  float fStack_78c;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  float local_730;
  float fStack_72c;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined4 uStack_708;
  undefined4 uStack_704;
  undefined auStack_700 [16];
  undefined local_6f0 [16];
  undefined auStack_6e0 [16];
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined auStack_6c0 [16];
  undefined local_6b0 [16];
  undefined auStack_6a0 [16];
  undefined local_690 [16];
  uint auStack_680 [386];
  long local_78;
  undefined auVar8 [16];
  undefined auVar39 [16];
  
  auVar3 = _DAT_004c4480;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_808 = 0;
  local_818 = 0;
  uStack_814 = 4;
  local_810 = param_2;
  if (param_3 < 1) {
    uVar5 = 3;
    if (*(long *)(lVar1 + 0x28) != local_78) goto LAB_00da0c28;
  }
  else {
    uVar5 = 3;
    do {
      do {
        local_81c = 0xf;
        GatherTransformClip<1>
                  ((int *)this,(int *)((long)&local_808 + 4),(int *)&local_808,(int)&uStack_814,
                   (int *)(ulong)(uint)param_3,(__Float32x4_t *)&local_818,
                   (__Float32x4_t *)local_6b0,(__Float32x4_t *)auStack_6e0,(float *)&local_710,
                   (ushort **)param_1,(VertexLayout *)&local_810,(float *)param_7,
                   (__Float32x4_t *)param_4,auStack_680,(ClipPlanes)&local_81c);
        if (local_81c != 0) {
          auVar32._8_4_ = uStack_708;
          auVar32._0_8_ = local_710;
          auVar7._8_4_ = uStack_708;
          auVar7._0_8_ = local_710;
          auVar7._12_4_ = uStack_704;
          auVar19 = NEON_frecpe(auVar7,4);
          auVar38 = NEON_frecpe(auStack_700,4);
          auVar18 = NEON_frecps(auVar38,auStack_700,4);
          auVar7 = *(undefined (*) [16])(this + 0x60);
          auVar31 = *(undefined (*) [16])(this + 0x70);
          fVar30 = auVar7._0_4_;
          fVar34 = auVar7._4_4_;
          fVar37 = auVar7._8_4_;
          fVar40 = auVar7._12_4_;
          auVar32._12_4_ = uStack_704;
          auVar7 = NEON_frecps(auVar19,auVar32,4);
          fVar6 = auVar19._0_4_ * auVar7._0_4_;
          fVar11 = auVar19._4_4_ * auVar7._4_4_;
          auVar8._0_8_ = CONCAT44(fVar11,fVar6);
          auVar8._8_4_ = auVar19._8_4_ * auVar7._8_4_;
          auVar8._12_4_ = auVar19._12_4_ * auVar7._12_4_;
          auVar19 = NEON_frecpe(local_6f0,4);
          fVar23 = auVar31._0_4_;
          fVar25 = auVar31._4_4_;
          fVar26 = auVar31._8_4_;
          fVar27 = auVar31._12_4_;
          auVar31 = NEON_frecps(auVar19,local_6f0,4);
          local_790 = auVar38._0_4_ * auVar18._0_4_;
          fStack_78c = auVar38._4_4_ * auVar18._4_4_;
          fVar49 = auVar38._8_4_ * auVar18._8_4_;
          fVar50 = auVar38._12_4_ * auVar18._12_4_;
          auVar32 = *(undefined (*) [16])(this + 0x80);
          auVar7 = *(undefined (*) [16])(this + 0x90);
          uStack_778 = auVar8._8_8_;
          fVar12 = auVar19._0_4_ * auVar31._0_4_;
          fVar13 = auVar19._4_4_ * auVar31._4_4_;
          auVar18._0_8_ = CONCAT44(fVar13,fVar12);
          auVar18._8_4_ = auVar19._8_4_ * auVar31._8_4_;
          auVar18._12_4_ = auVar19._12_4_ * auVar31._12_4_;
          fVar41 = auVar32._0_4_;
          fVar44 = auVar32._4_4_;
          fVar45 = auVar32._8_4_;
          fVar46 = auVar32._12_4_;
          uStack_798 = auVar18._8_8_;
          fVar47 = auVar7._0_4_;
          fVar48 = auVar7._4_4_;
          fVar21 = auVar7._8_4_;
          fVar22 = auVar7._12_4_;
          fVar35 = (float)uStack_838;
          fVar36 = (float)((ulong)uStack_838 >> 0x20);
          auVar19._0_8_ =
               CONCAT44((int)((fVar44 + fVar11 * local_6b0._4_4_ * fVar34) * 256.0),
                        (int)((fVar41 + fVar6 * local_6b0._0_4_ * fVar30) * 256.0));
          auVar19._8_4_ = (int)((fVar45 + auVar8._8_4_ * local_6b0._8_4_ * fVar37) * fVar35);
          auVar19._12_4_ = (int)((fVar46 + auVar8._12_4_ * local_6b0._12_4_ * fVar40) * fVar36);
          auVar42._0_8_ =
               CONCAT44((int)((fVar44 + fStack_78c * fVar34 * auStack_6a0._4_4_) * 256.0),
                        (int)((fVar41 + local_790 * fVar30 * auStack_6a0._0_4_) * 256.0));
          auVar42._8_4_ = (int)((fVar45 + fVar49 * fVar37 * auStack_6a0._8_4_) * fVar35);
          auVar42._12_4_ = (int)((fVar46 + fVar50 * fVar40 * auStack_6a0._12_4_) * fVar36);
          auVar7 = NEON_scvtf(auVar19,4);
          uStack_7b8 = auVar42._8_8_;
          uStack_7a8 = auVar19._8_8_;
          auVar32 = NEON_scvtf(auVar42,4);
          auVar20._0_8_ =
               CONCAT44((int)((fVar48 + fVar11 * auStack_6e0._4_4_ * fVar25) * 256.0),
                        (int)((fVar47 + fVar6 * auStack_6e0._0_4_ * fVar23) * 256.0));
          auVar20._8_4_ = (int)((fVar21 + auVar8._8_4_ * auStack_6e0._8_4_ * fVar26) * fVar35);
          auVar20._12_4_ = (int)((fVar22 + auVar8._12_4_ * auStack_6e0._12_4_ * fVar27) * fVar36);
          iVar14 = (int)((fVar47 + local_790 * fVar23 * (float)local_6d0) * 256.0);
          iVar15 = (int)((fVar48 + fStack_78c * fVar25 * (float)((ulong)local_6d0 >> 0x20)) * 256.0)
          ;
          iVar16 = (int)((fVar21 + fVar49 * fVar26 * (float)uStack_6c8) * fVar35);
          iVar17 = (int)((fVar22 + fVar50 * fVar27 * (float)((ulong)uStack_6c8 >> 0x20)) * fVar36);
          auVar29._0_8_ =
               CONCAT44((int)((fVar44 + fVar13 * fVar34 * local_690._4_4_) * 256.0),
                        (int)((fVar41 + fVar12 * fVar30 * local_690._0_4_) * 256.0));
          auVar29._8_4_ = (int)((fVar45 + auVar18._8_4_ * fVar37 * local_690._8_4_) * fVar35);
          auVar29._12_4_ = (int)((fVar46 + auVar18._12_4_ * fVar40 * local_690._12_4_) * fVar36);
          auVar24._0_8_ =
               CONCAT44((int)((fVar48 + fVar13 * fVar25 * auStack_6c0._4_4_) * 256.0),
                        (int)((fVar47 + fVar12 * fVar23 * auStack_6c0._0_4_) * 256.0));
          auVar24._8_4_ = (int)((fVar21 + auVar18._8_4_ * fVar26 * auStack_6c0._8_4_) * fVar35);
          auVar24._12_4_ = (int)((fVar22 + auVar18._12_4_ * fVar27 * auStack_6c0._12_4_) * fVar36);
          fVar6 = auVar7._0_4_ * 0.00390625;
          fVar11 = auVar7._4_4_ * 0.00390625;
          auVar38._0_8_ = CONCAT44(fVar11,fVar6);
          auVar38._8_4_ = auVar7._8_4_ * 0.00390625;
          auVar38._12_4_ = auVar7._12_4_ * 0.00390625;
          local_730 = auVar32._0_4_ * 0.00390625;
          fStack_72c = auVar32._4_4_ * 0.00390625;
          auVar7 = NEON_scvtf(auVar20,4);
          uStack_7d8 = auVar20._8_8_;
          uStack_7c8 = auVar29._8_8_;
          auVar33 = NEON_scvtf(auVar29,4);
          auVar52 = NEON_scvtf(auVar24,4);
          auVar31._4_4_ = iVar15;
          auVar31._0_4_ = iVar14;
          auVar31._8_4_ = iVar16;
          auVar31._12_4_ = iVar17;
          auVar31 = NEON_scvtf(auVar31,4);
          uStack_7f8 = auVar24._8_8_;
          uStack_7e8 = CONCAT44(iVar17,iVar16);
          uStack_7f0 = CONCAT44(iVar15,iVar14);
          uStack_718 = auVar38._8_8_;
          fVar12 = auVar7._0_4_ * 0.00390625;
          fVar13 = auVar7._4_4_ * 0.00390625;
          auVar28._0_8_ = CONCAT44(fVar13,fVar12);
          auVar28._8_4_ = auVar7._8_4_ * 0.00390625;
          auVar28._12_4_ = auVar7._12_4_ * 0.00390625;
          fVar37 = auVar33._0_4_ * 0.00390625;
          fVar40 = auVar33._4_4_ * 0.00390625;
          auVar39._0_8_ = CONCAT44(fVar40,fVar37);
          auVar39._8_4_ = auVar33._8_4_ * 0.00390625;
          auVar39._12_4_ = auVar33._12_4_ * 0.00390625;
          fVar30 = auVar52._0_4_ * 0.00390625;
          fVar34 = auVar52._4_4_ * 0.00390625;
          auVar33._0_8_ = CONCAT44(fVar34,fVar30);
          auVar33._8_4_ = auVar52._8_4_ * 0.00390625;
          auVar33._12_4_ = auVar52._12_4_ * 0.00390625;
          fVar47 = auVar31._0_4_ * 0.00390625;
          fVar48 = auVar31._4_4_ * 0.00390625;
          auVar52._0_8_ = CONCAT44(fVar48,fVar47);
          auVar52._8_4_ = auVar31._8_4_ * 0.00390625;
          auVar52._12_4_ = auVar31._12_4_ * 0.00390625;
          uStack_748 = auVar28._8_8_;
          uStack_738 = auVar39._8_8_;
          uStack_768 = auVar33._8_8_;
          uStack_758 = auVar52._8_8_;
          fVar6 = (local_730 - fVar37) * (fVar12 - fVar30) - (fVar37 - fVar6) * (fVar30 - fVar47);
          fVar11 = (fStack_72c - fVar40) * (fVar13 - fVar34) - (fVar40 - fVar11) * (fVar34 - fVar48)
          ;
          fVar12 = (auVar32._8_4_ * 0.00390625 - auVar39._8_4_) * (auVar28._8_4_ - auVar33._8_4_) -
                   (auVar39._8_4_ - auVar38._8_4_) * (auVar33._8_4_ - auVar52._8_4_);
          fVar13 = (auVar32._12_4_ * 0.00390625 - auVar39._12_4_) *
                   (auVar28._12_4_ - auVar33._12_4_) -
                   (auVar39._12_4_ - auVar38._12_4_) * (auVar33._12_4_ - auVar52._12_4_);
          local_800 = auVar24._0_8_;
          local_7e0 = auVar20._0_8_;
          uStack_7d0 = auVar29._0_8_;
          local_7b0 = auVar19._0_8_;
          local_7a0 = auVar18._0_8_;
          local_780 = auVar8._0_8_;
          local_770 = auVar33._0_8_;
          local_750 = auVar28._0_8_;
          uStack_740 = auVar39._0_8_;
          local_720 = auVar38._0_8_;
          if ((param_5 & 1) == 0) {
            auVar43._4_4_ = fVar11;
            auVar43._0_4_ = fVar6;
            auVar43._8_4_ = fVar12;
            auVar43._12_4_ = fVar13;
            auVar43 = NEON_fcmgt(auVar43,0,4);
            auVar51 = NEON_bsl(auVar43,auVar19,auVar29,1);
            auVar7 = NEON_bit(auVar19,auVar29,auVar43,1);
            auVar19 = NEON_bsl(auVar43,auVar38,auVar39,1);
            auVar31 = NEON_bsl(auVar43,auVar20,auVar24,1);
            auVar32 = NEON_bit(auVar20,auVar24,auVar43,1);
            uStack_718 = auVar19._8_8_;
            local_720 = auVar19._0_8_;
            uStack_7d8 = auVar31._8_8_;
            local_7e0 = auVar31._0_8_;
            uStack_7c8 = auVar7._8_8_;
            uStack_7d0 = auVar7._0_8_;
            uStack_7f8 = auVar32._8_8_;
            local_800 = auVar32._0_8_;
            auVar32 = NEON_bsl(auVar43,auVar28,auVar33,1);
            auVar7 = NEON_bsl(auVar43,auVar39,auVar38,1);
            auVar31 = NEON_bsl(auVar43,auVar33,auVar28,1);
            uStack_748 = auVar32._8_8_;
            local_750 = auVar32._0_8_;
            uStack_738 = auVar7._8_8_;
            uStack_740 = auVar7._0_8_;
            auVar32 = NEON_bsl(auVar43,auVar8,auVar18,1);
            auVar7 = NEON_bit(auVar8,auVar18,auVar43,1);
            uStack_778 = auVar32._8_8_;
            local_780 = auVar32._0_8_;
            uStack_768 = auVar31._8_8_;
            local_770 = auVar31._0_8_;
            uStack_7a8 = auVar51._8_8_;
            local_7b0 = auVar51._0_8_;
            uStack_798 = auVar7._8_8_;
            local_7a0 = auVar7._0_8_;
          }
          if ((param_5 >> 1 & 1) == 0) {
            auVar51._4_4_ = fVar11;
            auVar51._0_4_ = fVar6;
            auVar51._8_4_ = fVar12;
            auVar51._12_4_ = fVar13;
            auVar7 = NEON_fcmgt(auVar51,0,4);
            auVar9[0] = auVar7[0] & auVar3[0];
            auVar9[1] = auVar7[1] & auVar3[1];
            auVar9[2] = auVar7[2] & auVar3[2];
            auVar9[3] = auVar7[3] & auVar3[3];
            auVar9[4] = auVar7[4] & auVar3[4];
            auVar9[5] = auVar7[5] & auVar3[5];
            auVar9[6] = auVar7[6] & auVar3[6];
            auVar9[7] = auVar7[7] & auVar3[7];
            auVar9[8] = auVar7[8] & auVar3[8];
            auVar9[9] = auVar7[9] & auVar3[9];
            auVar9[10] = auVar7[10] & auVar3[10];
            auVar9[11] = auVar7[11] & auVar3[11];
            auVar9[12] = auVar7[12] & auVar3[12];
            auVar9[13] = auVar7[13] & auVar3[13];
            auVar9[14] = auVar7[14] & auVar3[14];
            auVar9[15] = auVar7[15] & auVar3[15];
            auVar7 = NEON_ext(auVar9,auVar9,8,1);
            uVar4 = CONCAT13(auVar7[3] | auVar9[3] | auVar7[7] | auVar9[7],
                             CONCAT12(auVar7[2] | auVar9[2] | auVar7[6] | auVar9[6],
                                      CONCAT11(auVar7[1] | auVar9[1] | auVar7[5] | auVar9[5],
                                               auVar7[0] | auVar9[0] | auVar7[4] | auVar9[4])));
          }
          else {
            uVar4 = 0;
          }
          if ((param_5 & 1) == 0) {
            auVar2._4_4_ = fVar11;
            auVar2._0_4_ = fVar6;
            auVar2._8_4_ = fVar12;
            auVar2._12_4_ = fVar13;
            auVar7 = NEON_fcmgt(auVar2,0,4);
            auVar10[0] = auVar7[0] & auVar3[0];
            auVar10[1] = auVar7[1] & auVar3[1];
            auVar10[2] = auVar7[2] & auVar3[2];
            auVar10[3] = auVar7[3] & auVar3[3];
            auVar10[4] = auVar7[4] & auVar3[4];
            auVar10[5] = auVar7[5] & auVar3[5];
            auVar10[6] = auVar7[6] & auVar3[6];
            auVar10[7] = auVar7[7] & auVar3[7];
            auVar10[8] = auVar7[8] & auVar3[8];
            auVar10[9] = auVar7[9] & auVar3[9];
            auVar10[10] = auVar7[10] & auVar3[10];
            auVar10[11] = auVar7[11] & auVar3[11];
            auVar10[12] = auVar7[12] & auVar3[12];
            auVar10[13] = auVar7[13] & auVar3[13];
            auVar10[14] = auVar7[14] & auVar3[14];
            auVar10[15] = auVar7[15] & auVar3[15];
            auVar7 = NEON_ext(auVar10,auVar10,8,1);
            uVar4 = ~CONCAT13(auVar7[3] | auVar10[3] | auVar7[7] | auVar10[7],
                              CONCAT12(auVar7[2] | auVar10[2] | auVar7[6] | auVar10[6],
                                       CONCAT11(auVar7[1] | auVar10[1] | auVar7[5] | auVar10[5],
                                                auVar7[0] | auVar10[0] | auVar7[4] | auVar10[4]))) |
                    uVar4;
          }
          local_81c = uVar4 & local_81c;
          local_7c0 = auVar42._0_8_;
          uStack_760 = auVar52._0_8_;
          if (local_81c != 0) {
            uVar4 = RasterizeTriangleBatch<false>
                              (this,(__Int32x4_t *)&uStack_7d0,(__Int32x4_t *)&local_800,
                               (__Float32x4_t *)&uStack_740,(__Float32x4_t *)&local_770,
                               (__Float32x4_t *)&local_7a0,local_81c,(ScissorRect *)(this + 0x140));
            uVar5 = uVar4 & uVar5;
          }
        }
      } while (local_818 < param_3);
    } while (local_808._4_4_ != (int)local_808);
    if (*(long *)(lVar1 + 0x28) != local_78) {
LAB_00da0c28:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar5;
}


