// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: RenderTriangles<1,0>
// Entry Point: 00da50d8
// Size: 888 bytes
// Signature: CullingResult __thiscall RenderTriangles<1,0>(MaskedOcclusionCullingPrivate * this, float * param_1, ushort * param_2, int param_3, float * param_4, BackfaceWinding param_5, ClipPlanes param_6, VertexLayout * param_7)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MaskedOcclusionCulling::CullingResult
   MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTriangles<1, 0>(float const*,
   unsigned short const*, int, float const*, MaskedOcclusionCulling::BackfaceWinding,
   MaskedOcclusionCulling::ClipPlanes, MaskedOcclusionCulling::VertexLayout const&) */

CullingResult __thiscall
MaskedOcclusionCullingNEON::MaskedOcclusionCullingPrivate::RenderTriangles<1,0>
          (MaskedOcclusionCullingPrivate *this,float *param_1,ushort *param_2,int param_3,
          float *param_4,BackfaceWinding param_5,ClipPlanes param_6,VertexLayout *param_7)

{
  long lVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar10;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  float fVar11;
  float fVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
  float fVar16;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined auVar17 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined auVar25 [16];
  float fVar28;
  undefined auVar26 [16];
  float fVar29;
  undefined auVar27 [16];
  float fVar30;
  float fVar33;
  undefined auVar31 [16];
  undefined auVar32 [16];
  float fVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined auVar35 [16];
  float fVar40;
  float fVar41;
  undefined auVar39 [16];
  float fVar44;
  undefined auVar42 [16];
  undefined auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined8 uStack_838;
  uint local_81c;
  int local_818;
  int iStack_814;
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
  float fStack_760;
  float fStack_75c;
  undefined8 local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined local_710 [16];
  undefined auStack_700 [16];
  undefined local_6f0 [16];
  undefined auStack_6e0 [16];
  undefined local_6d0 [16];
  undefined auStack_6c0 [16];
  undefined local_6b0 [16];
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined local_690 [16];
  __Float32x4_t a_Stack_680 [1544];
  long local_78;
  
  auVar3 = _DAT_004c4480;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_808 = 0;
  local_818 = 0;
  iStack_814 = 4;
  local_810 = param_2;
  if (param_3 < 1) {
    uVar5 = 3;
    if (*(long *)(lVar1 + 0x28) != local_78) goto LAB_00da544c;
  }
  else {
    uVar5 = 3;
    do {
      do {
        local_81c = 0xf;
        GatherTransformClip<0>
                  (this,(int *)((long)&local_808 + 4),(int *)&local_808,&iStack_814,param_3,
                   &local_818,(__Float32x4_t *)local_6b0,(__Float32x4_t *)auStack_6e0,
                   (__Float32x4_t *)local_710,param_1,&local_810,param_7,param_4,a_Stack_680,
                   &local_81c,param_6);
        if (local_81c != 0) {
          auVar15 = NEON_frecpe(local_710,4);
          auVar31 = NEON_frecpe(auStack_700,4);
          auVar14 = NEON_frecps(auVar31,auStack_700,4);
          auVar42 = NEON_frecpe(local_6f0,4);
          auVar7 = *(undefined (*) [16])(this + 0x60);
          auVar13 = *(undefined (*) [16])(this + 0x70);
          auVar26 = NEON_frecps(auVar42,local_6f0,4);
          fVar30 = auVar7._0_4_;
          fVar33 = auVar7._4_4_;
          fVar44 = auVar7._8_4_;
          fVar45 = auVar7._12_4_;
          auVar7 = NEON_frecps(auVar15,local_710,4);
          fVar16 = auVar13._0_4_;
          fVar18 = auVar13._4_4_;
          fVar19 = auVar13._8_4_;
          fVar20 = auVar13._12_4_;
          fVar6 = auVar15._0_4_ * auVar7._0_4_;
          fVar10 = auVar15._4_4_ * auVar7._4_4_;
          auVar8._0_8_ = CONCAT44(fVar10,fVar6);
          auVar8._8_4_ = auVar15._8_4_ * auVar7._8_4_;
          auVar8._12_4_ = auVar15._12_4_ * auVar7._12_4_;
          local_790 = auVar31._0_4_ * auVar14._0_4_;
          fStack_78c = auVar31._4_4_ * auVar14._4_4_;
          fVar40 = auVar31._8_4_ * auVar14._8_4_;
          fVar41 = auVar31._12_4_ * auVar14._12_4_;
          fVar11 = auVar42._0_4_ * auVar26._0_4_;
          fVar12 = auVar42._4_4_ * auVar26._4_4_;
          auVar14._0_8_ = CONCAT44(fVar12,fVar11);
          auVar14._8_4_ = auVar42._8_4_ * auVar26._8_4_;
          auVar14._12_4_ = auVar42._12_4_ * auVar26._12_4_;
          auVar13 = *(undefined (*) [16])(this + 0x80);
          auVar7 = *(undefined (*) [16])(this + 0x90);
          uStack_778 = auVar8._8_8_;
          uStack_798 = auVar14._8_8_;
          fVar34 = auVar13._0_4_;
          fVar36 = auVar13._4_4_;
          fVar37 = auVar13._8_4_;
          fVar38 = auVar13._12_4_;
          fVar46 = auVar7._0_4_;
          fVar47 = auVar7._4_4_;
          fVar48 = auVar7._8_4_;
          fVar49 = auVar7._12_4_;
          fVar28 = (float)uStack_838;
          fVar29 = (float)((ulong)uStack_838 >> 0x20);
          auVar15._0_8_ =
               CONCAT44((int)((fVar36 + fVar10 * local_6b0._4_4_ * fVar33) * 256.0),
                        (int)((fVar34 + fVar6 * local_6b0._0_4_ * fVar30) * 256.0));
          auVar15._8_4_ = (int)((fVar37 + auVar8._8_4_ * local_6b0._8_4_ * fVar44) * fVar28);
          auVar15._12_4_ = (int)((fVar38 + auVar8._12_4_ * local_6b0._12_4_ * fVar45) * fVar29);
          auVar35._0_8_ =
               CONCAT44((int)((fVar36 + fStack_78c * fVar33 * (float)((ulong)uStack_6a0 >> 0x20)) *
                             256.0),(int)((fVar34 + local_790 * fVar30 * (float)uStack_6a0) * 256.0)
                       );
          auVar35._8_4_ = (int)((fVar37 + fVar40 * fVar44 * (float)uStack_698) * fVar28);
          auVar35._12_4_ =
               (int)((fVar38 + fVar41 * fVar45 * (float)((ulong)uStack_698 >> 0x20)) * fVar29);
          auVar26._0_8_ =
               CONCAT44((int)((fVar47 + fVar10 * auStack_6e0._4_4_ * fVar18) * 256.0),
                        (int)((fVar46 + fVar6 * auStack_6e0._0_4_ * fVar16) * 256.0));
          auVar26._8_4_ = (int)((fVar48 + auVar8._8_4_ * auStack_6e0._8_4_ * fVar19) * fVar28);
          auVar26._12_4_ = (int)((fVar49 + auVar8._12_4_ * auStack_6e0._12_4_ * fVar20) * fVar29);
          auVar13._0_8_ =
               CONCAT44((int)((fVar47 + fStack_78c * fVar18 * local_6d0._4_4_) * 256.0),
                        (int)((fVar46 + local_790 * fVar16 * local_6d0._0_4_) * 256.0));
          auVar13._8_4_ = (int)((fVar48 + fVar40 * fVar19 * local_6d0._8_4_) * fVar28);
          auVar13._12_4_ = (int)((fVar49 + fVar41 * fVar20 * local_6d0._12_4_) * fVar29);
          auVar25._0_8_ =
               CONCAT44((int)((fVar36 + fVar12 * fVar33 * local_690._4_4_) * 256.0),
                        (int)((fVar34 + fVar11 * fVar30 * local_690._0_4_) * 256.0));
          auVar25._8_4_ = (int)((fVar37 + auVar14._8_4_ * fVar44 * local_690._8_4_) * fVar28);
          auVar25._12_4_ = (int)((fVar38 + auVar14._12_4_ * fVar45 * local_690._12_4_) * fVar29);
          iVar21 = (int)((fVar46 + fVar11 * fVar16 * auStack_6c0._0_4_) * 256.0);
          iVar22 = (int)((fVar47 + fVar12 * fVar18 * auStack_6c0._4_4_) * 256.0);
          iVar23 = (int)((fVar48 + auVar14._8_4_ * fVar19 * auStack_6c0._8_4_) * fVar28);
          iVar24 = (int)((fVar49 + auVar14._12_4_ * fVar20 * auStack_6c0._12_4_) * fVar29);
          auVar31 = NEON_scvtf(auVar15,4);
          auVar17 = NEON_scvtf(auVar35,4);
          auVar27 = NEON_scvtf(auVar26,4);
          auVar43 = NEON_scvtf(auVar13,4);
          auVar32 = NEON_scvtf(auVar25,4);
          auVar7._4_4_ = iVar22;
          auVar7._0_4_ = iVar21;
          auVar7._8_4_ = iVar23;
          auVar7._12_4_ = iVar24;
          auVar7 = NEON_scvtf(auVar7,4);
          uStack_7b8 = auVar35._8_8_;
          uStack_7a8 = auVar15._8_8_;
          fVar6 = auVar31._0_4_ * 0.00390625;
          fVar10 = auVar31._4_4_ * 0.00390625;
          auVar42._0_8_ = CONCAT44(fVar10,fVar6);
          auVar42._8_4_ = auVar31._8_4_ * 0.00390625;
          auVar42._12_4_ = auVar31._12_4_ * 0.00390625;
          uStack_7f8 = CONCAT44(iVar24,iVar23);
          local_800 = CONCAT44(iVar22,iVar21);
          uStack_7e8 = auVar13._8_8_;
          fVar46 = auVar17._0_4_ * 0.00390625;
          fVar47 = auVar17._4_4_ * 0.00390625;
          fVar48 = auVar17._8_4_ * 0.00390625;
          fVar49 = auVar17._12_4_ * 0.00390625;
          uStack_7d8 = auVar26._8_8_;
          uStack_7c8 = auVar25._8_8_;
          auVar31._0_4_ = auVar27._0_4_ * 0.00390625;
          auVar31._4_4_ = auVar27._4_4_ * 0.00390625;
          auVar31._8_4_ = auVar27._8_4_ * 0.00390625;
          auVar31._12_4_ = auVar27._12_4_ * 0.00390625;
          fVar30 = auVar32._0_4_ * 0.00390625;
          fVar33 = auVar32._4_4_ * 0.00390625;
          auVar27._0_8_ = CONCAT44(fVar33,fVar30);
          auVar27._8_4_ = auVar32._8_4_ * 0.00390625;
          auVar27._12_4_ = auVar32._12_4_ * 0.00390625;
          fVar11 = auVar7._0_4_ * 0.00390625;
          fVar12 = auVar7._4_4_ * 0.00390625;
          auVar17._0_8_ = CONCAT44(fVar12,fVar11);
          auVar17._8_4_ = auVar7._8_4_ * 0.00390625;
          auVar17._12_4_ = auVar7._12_4_ * 0.00390625;
          fStack_760 = auVar43._0_4_ * 0.00390625;
          fStack_75c = auVar43._4_4_ * 0.00390625;
          fVar44 = auVar43._8_4_ * 0.00390625;
          fVar45 = auVar43._12_4_ * 0.00390625;
          uStack_728 = CONCAT44(fVar49,fVar48);
          local_730 = CONCAT44(fVar47,fVar46);
          uStack_718 = auVar42._8_8_;
          uStack_748 = auVar31._8_8_;
          uStack_738 = auVar27._8_8_;
          uStack_768 = auVar17._8_8_;
          local_750 = CONCAT44(fVar45,fVar44);
          auVar32._0_4_ =
               (fVar46 - fVar30) * (auVar31._0_4_ - fVar11) -
               (fVar30 - fVar6) * (fVar11 - fStack_760);
          auVar32._4_4_ =
               (fVar47 - fVar33) * (auVar31._4_4_ - fVar12) -
               (fVar33 - fVar10) * (fVar12 - fStack_75c);
          auVar32._8_4_ =
               (fVar48 - auVar27._8_4_) * (auVar31._8_4_ - auVar17._8_4_) -
               (auVar27._8_4_ - auVar42._8_4_) * (auVar17._8_4_ - fVar44);
          auVar32._12_4_ =
               (fVar49 - auVar27._12_4_) * (auVar31._12_4_ - auVar17._12_4_) -
               (auVar27._12_4_ - auVar42._12_4_) * (auVar17._12_4_ - fVar45);
          auVar7 = NEON_fcmgt(auVar32,0,4);
          local_7e0 = auVar26._0_8_;
          uStack_7d0 = auVar25._0_8_;
          local_7b0 = auVar15._0_8_;
          local_7a0 = auVar14._0_8_;
          local_780 = auVar8._0_8_;
          local_770 = auVar17._0_8_;
          uStack_740 = auVar27._0_8_;
          local_720 = auVar42._0_8_;
          if ((param_5 & 1) == 0) {
            auVar39 = NEON_bsl(auVar7,auVar15,auVar25,1);
            auVar15 = NEON_bit(auVar15,auVar25,auVar7,1);
            auVar32 = NEON_bsl(auVar7,auVar42,auVar27,1);
            auVar43._4_4_ = iVar22;
            auVar43._0_4_ = iVar21;
            auVar43._8_4_ = iVar23;
            auVar43._12_4_ = iVar24;
            auVar25 = NEON_bsl(auVar7,auVar26,auVar43,1);
            auVar2._4_4_ = iVar22;
            auVar2._0_4_ = iVar21;
            auVar2._8_4_ = iVar23;
            auVar2._12_4_ = iVar24;
            auVar26 = NEON_bit(auVar26,auVar2,auVar7,1);
            uStack_718 = auVar32._8_8_;
            local_720 = auVar32._0_8_;
            uStack_7d8 = auVar25._8_8_;
            local_7e0 = auVar25._0_8_;
            uStack_7c8 = auVar15._8_8_;
            uStack_7d0 = auVar15._0_8_;
            uStack_7f8 = auVar26._8_8_;
            local_800 = auVar26._0_8_;
            auVar26 = NEON_bsl(auVar7,auVar27,auVar42,1);
            auVar15 = NEON_bsl(auVar7,auVar31,auVar17,1);
            auVar42 = NEON_bit(auVar31,auVar17,auVar7,1);
            auVar31 = NEON_bsl(auVar7,auVar8,auVar14,1);
            auVar8 = NEON_bit(auVar8,auVar14,auVar7,1);
            uStack_748 = auVar15._8_8_;
            local_750 = auVar15._0_8_;
            uStack_738 = auVar26._8_8_;
            uStack_740 = auVar26._0_8_;
            uStack_778 = auVar31._8_8_;
            local_780 = auVar31._0_8_;
            uStack_768 = auVar42._8_8_;
            local_770 = auVar42._0_8_;
            uStack_7a8 = auVar39._8_8_;
            local_7b0 = auVar39._0_8_;
            uStack_798 = auVar8._8_8_;
            local_7a0 = auVar8._0_8_;
          }
          if ((param_5 >> 1 & 1) == 0) {
            auVar39[0] = auVar7[0] & auVar3[0];
            auVar39[1] = auVar7[1] & auVar3[1];
            auVar39[2] = auVar7[2] & auVar3[2];
            auVar39[3] = auVar7[3] & auVar3[3];
            auVar39[4] = auVar7[4] & auVar3[4];
            auVar39[5] = auVar7[5] & auVar3[5];
            auVar39[6] = auVar7[6] & auVar3[6];
            auVar39[7] = auVar7[7] & auVar3[7];
            auVar39[8] = auVar7[8] & auVar3[8];
            auVar39[9] = auVar7[9] & auVar3[9];
            auVar39[10] = auVar7[10] & auVar3[10];
            auVar39[11] = auVar7[11] & auVar3[11];
            auVar39[12] = auVar7[12] & auVar3[12];
            auVar39[13] = auVar7[13] & auVar3[13];
            auVar39[14] = auVar7[14] & auVar3[14];
            auVar39[15] = auVar7[15] & auVar3[15];
            auVar8 = NEON_ext(auVar39,auVar39,8,1);
            uVar4 = CONCAT13(auVar8[3] | auVar39[3] | auVar8[7] | auVar39[7],
                             CONCAT12(auVar8[2] | auVar39[2] | auVar8[6] | auVar39[6],
                                      CONCAT11(auVar8[1] | auVar39[1] | auVar8[5] | auVar39[5],
                                               auVar8[0] | auVar39[0] | auVar8[4] | auVar39[4])));
          }
          else {
            uVar4 = 0;
          }
          if ((param_5 & 1) == 0) {
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
            uVar4 = ~CONCAT13(auVar7[3] | auVar9[3] | auVar7[7] | auVar9[7],
                              CONCAT12(auVar7[2] | auVar9[2] | auVar7[6] | auVar9[6],
                                       CONCAT11(auVar7[1] | auVar9[1] | auVar7[5] | auVar9[5],
                                                auVar7[0] | auVar9[0] | auVar7[4] | auVar9[4]))) |
                    uVar4;
          }
          local_81c = uVar4 & local_81c;
          uStack_7f0 = auVar13._0_8_;
          local_7c0 = auVar35._0_8_;
          if (local_81c != 0) {
            uVar4 = RasterizeTriangleBatch<true>
                              (this,(__Int32x4_t *)&uStack_7d0,(__Int32x4_t *)&local_800,
                               (__Float32x4_t *)&uStack_740,(__Float32x4_t *)&local_770,
                               (__Float32x4_t *)&local_7a0,local_81c,(ScissorRect *)(this + 0x140));
            uVar5 = uVar4 & uVar5;
            if (uVar5 == 0) goto LAB_00da53fc;
          }
        }
      } while (local_818 < param_3);
    } while (local_808._4_4_ != (int)local_808);
LAB_00da53fc:
    if (*(long *)(lVar1 + 0x28) != local_78) {
LAB_00da544c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return uVar5;
}


