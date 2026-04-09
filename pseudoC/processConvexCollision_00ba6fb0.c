// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processConvexCollision
// Entry Point: 00ba6fb0
// Size: 3560 bytes
// Signature: undefined __thiscall processConvexCollision(Bt2HeightfieldTerrainShape * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btVoronoiSimplexSolver * param_3, btConvexPenetrationDepthSolver * param_4, btManifoldResult * param_5, bool param_6)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Bt2HeightfieldTerrainShape::processConvexCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btVoronoiSimplexSolver*, btConvexPenetrationDepthSolver*,
   btManifoldResult*, bool) const */

void __thiscall
Bt2HeightfieldTerrainShape::processConvexCollision
          (Bt2HeightfieldTerrainShape *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btVoronoiSimplexSolver *param_3,
          btConvexPenetrationDepthSolver *param_4,btManifoldResult *param_5,bool param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  undefined4 uVar19;
  bool bVar20;
  int iVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  undefined4 *puVar25;
  long lVar26;
  undefined4 *puVar27;
  uint uVar28;
  int iVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  int iVar34;
  long *plVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  float fVar39;
  float fVar40;
  undefined4 uVar41;
  undefined8 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  float fVar48;
  float fVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  float fVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined8 local_150;
  ulong uStack_148;
  float local_140;
  float local_13c;
  float local_138;
  undefined4 local_134;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  float local_118;
  undefined4 local_114;
  undefined8 local_110;
  float local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  long local_a0;
  
  lVar18 = tpidr_el0;
  local_a0 = *(long *)(lVar18 + 0x28);
  plVar35 = *(long **)(param_2 + 8);
  fVar39 = (float)(**(code **)(*(long *)this + 0x60))();
  puVar25 = *(undefined4 **)(param_2 + 0x18);
  puVar27 = *(undefined4 **)(param_1 + 0x18);
  fVar52 = (float)puVar27[4];
  fVar57 = (float)puVar27[5];
  fVar44 = (float)puVar25[4];
  fVar55 = (float)puVar25[5];
  fVar48 = (float)puVar25[6];
  fVar64 = (float)puVar27[6];
  fVar40 = (float)puVar25[0xc] - (float)puVar27[0xc];
  uVar59 = *puVar25;
  uVar60 = puVar25[1];
  uVar51 = *puVar27;
  uVar45 = puVar27[1];
  uVar66 = puVar25[2];
  fVar43 = (float)puVar25[0xd] - (float)puVar27[0xd];
  uVar53 = puVar27[2];
  uVar46 = NEON_fmadd(uVar51,uVar60,fVar52 * fVar55);
  uVar58 = puVar27[8];
  uVar61 = puVar27[9];
  fVar49 = (float)puVar25[0xe] - (float)puVar27[0xe];
  uVar47 = puVar25[8];
  uVar50 = puVar25[9];
  uVar62 = NEON_fmadd(uVar51,uVar66,fVar52 * fVar48);
  uVar63 = NEON_fmadd(uVar45,uVar59,fVar44 * fVar57);
  uVar65 = NEON_fmadd(uVar45,uVar60,fVar55 * fVar57);
  uVar56 = NEON_fmadd(uVar53,uVar60,fVar55 * fVar64);
  uVar54 = puVar25[10];
  uVar41 = NEON_fmadd(uVar51,uVar59,fVar52 * fVar44);
  uVar19 = puVar27[10];
  uVar60 = NEON_fmadd(uVar53,uVar59,fVar44 * fVar64);
  uStack_fc = NEON_fmadd(uVar58,uVar50,uVar46);
  local_f8 = NEON_fmadd(uVar58,uVar54,uVar62);
  local_f0 = NEON_fmadd(uVar61,uVar47,uVar63);
  uStack_ec = NEON_fmadd(uVar61,uVar50,uVar65);
  uStack_dc = NEON_fmadd(uVar19,uVar50,uVar56);
  local_100 = NEON_fmadd(uVar58,uVar47,uVar41);
  uVar50 = NEON_fmadd(uVar45,uVar66,fVar48 * fVar57);
  local_e0 = NEON_fmadd(uVar19,uVar47,uVar60);
  uVar60 = NEON_fmadd(uVar53,uVar66,fVar48 * fVar64);
  uVar51 = NEON_fmadd(uVar51,fVar40,fVar43 * fVar52);
  uVar46 = NEON_fmadd(uVar45,fVar40,fVar43 * fVar57);
  uVar41 = NEON_fmadd(uVar53,fVar40,fVar43 * fVar64);
  local_e8 = NEON_fmadd(uVar61,uVar54,uVar50);
  local_d8 = NEON_fmadd(uVar19,uVar54,uVar60);
  local_f4 = 0;
  local_d0 = NEON_fmadd(uVar58,fVar49,uVar51);
  uStack_cc = NEON_fmadd(uVar61,fVar49,uVar46);
  local_c8 = NEON_fmadd(uVar19,fVar49,uVar41);
  local_e4 = 0;
  local_d4 = 0;
  local_c4 = 0;
  (**(code **)(*plVar35 + 0x10))(plVar35,&local_100,&local_b0,&local_c0);
  if (fVar39 != 0.0) {
    local_b8 = fVar39 + local_b8;
    local_c0 = CONCAT44(fVar39 + (float)((ulong)local_c0 >> 0x20),fVar39 + (float)local_c0);
    local_b0 = CONCAT44((float)((ulong)local_b0 >> 0x20) - fVar39,(float)local_b0 - fVar39);
    local_a8 = local_a8 - fVar39;
  }
  fVar44 = (float)*(undefined8 *)(this + 0xb4);
  fVar48 = (float)local_b0 * fVar44;
  fVar40 = (float)((ulong)*(undefined8 *)(this + 0xb4) >> 0x20);
  local_110 = CONCAT44((float)((ulong)local_b0 >> 0x20) * fVar40,fVar48);
  fVar44 = fVar44 * (float)local_c0;
  local_120 = CONCAT44(fVar40 * (float)((ulong)local_c0 >> 0x20),fVar44);
  local_108 = local_a8 * *(float *)(this + 0xbc);
  local_118 = *(float *)(this + 0xbc) * local_b8;
  uVar38 = *(int *)(this + 0x40) - 1;
  iVar34 = *(int *)(this + 0x44) + -1;
  local_104 = 0;
  uVar28 = (uint)(fVar48 + *(float *)(this + 0x50));
  iVar31 = (int)(local_108 + *(float *)(this + 0x54));
  iVar24 = (int)(fVar44 + *(float *)(this + 0x50));
  uVar6 = uVar28;
  if (*(int *)(this + 0x40) <= (int)uVar28) {
    uVar6 = uVar38;
  }
  iVar29 = (int)(local_118 + *(float *)(this + 0x54));
  uVar5 = 0;
  if (-1 < (int)uVar28) {
    uVar5 = uVar6;
  }
  iVar3 = iVar31;
  if (*(int *)(this + 0x44) <= iVar31) {
    iVar3 = iVar34;
  }
  if (iVar24 < (int)uVar38) {
    uVar38 = iVar24 + 1;
  }
  uVar6 = 0;
  if (iVar24 + 1 < 0 == SCARRY4(iVar24,1)) {
    uVar6 = uVar38;
  }
  if (iVar29 < iVar34) {
    iVar34 = iVar29 + 1;
  }
  iVar24 = 0;
  if (-1 < iVar31) {
    iVar24 = iVar3;
  }
  iVar31 = 0;
  if (iVar29 + 1 < 0 == SCARRY4(iVar29,1)) {
    iVar31 = iVar34;
  }
  local_114 = 0;
  if ((*(long *)(this + 0x78) == 0) ||
     (uVar22 = (**(code **)(this + 200))(param_2,*(undefined4 *)(this + 0xc4)), (uVar22 & 1) == 0))
  {
    iVar34 = iVar24;
    if (iVar24 < iVar31) {
      do {
        iVar34 = iVar34 + 1;
        iVar29 = iVar24 + 1;
        if ((int)uVar5 < (int)uVar6) {
          fVar44 = (float)iVar29;
          uVar38 = uVar5;
          do {
            lVar23 = *(long *)(this + 0x60);
            uVar28 = uVar38 + 1;
            iVar3 = uVar38 + iVar24 * *(int *)(this + 0x40);
            fVar40 = *(float *)(this + 0x58);
            fStack_12c = *(float *)(this + 0xa8);
            fStack_128 = ((float)iVar24 - *(float *)(this + 0x54)) * *(float *)(this + 0xac);
            local_140 = ((float)uVar38 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)(lVar23 + (long)iVar3 * 2));
            local_138 = (fVar44 - *(float *)(this + 0x54)) * *(float *)(this + 0xac);
            local_150 = CONCAT44(fVar40 * fVar48 * fStack_12c,local_140);
            uStack_148 = (ulong)(uint)fStack_128;
            local_134 = 0;
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)
                                              (lVar23 + (long)(int)(uVar38 + iVar34 * *(int *)(this 
                                                  + 0x40)) * 2));
            local_130 = ((float)uVar28 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
            local_13c = fStack_12c * fVar40 * fVar48;
            uStack_124 = 0;
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)(lVar23 + (long)(iVar3 + 1) * 2));
            fStack_12c = fStack_12c * fVar40 * fVar48;
            processConvexTriangleCollision
                      (this,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_150,
                       uVar38,iVar24,uVar38 - 1,iVar29,uVar28,iVar29,uVar28,iVar24 + -1,fVar39,
                       param_1,param_2,param_3,param_4,param_5,param_6);
            uStack_148 = CONCAT44(uStack_124,fStack_128);
            local_150 = CONCAT44(fStack_12c,local_130);
            uStack_124 = 0;
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)
                                              (*(long *)(this + 0x60) +
                                              (long)(int)(uVar38 + iVar34 * *(int *)(this + 0x40) +
                                                         1) * 2));
            fVar40 = (float)*(undefined8 *)(this + 0x54);
            fVar43 = (float)((ulong)*(undefined8 *)(this + 0x54) >> 0x20);
            uVar42 = NEON_ext(CONCAT44(fVar48 * fVar43,fVar44 * fVar40),
                              CONCAT44(0.0 - fVar43,fVar44 - fVar40),4,1);
            local_130 = ((float)uVar28 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
            fStack_12c = (float)uVar42 * (float)*(undefined8 *)(this + 0xa8);
            fStack_128 = (float)((ulong)uVar42 >> 0x20) *
                         (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
            processConvexTriangleCollision
                      (this,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_150,
                       uVar38,iVar24,uVar38,iVar24,uVar38,iVar24 + 2,uVar38 + 2,iVar24,fVar39,
                       param_1,param_2,param_3,param_4,param_5,param_6);
            uVar38 = uVar28;
          } while (uVar28 != uVar6);
        }
        iVar24 = iVar29;
      } while (iVar29 != iVar31);
    }
  }
  else if (iVar24 < iVar31) {
    iVar34 = *(int *)(this + 0x70);
    do {
      iVar29 = iVar24 + 1;
      if ((int)uVar5 < (int)uVar6) {
        fVar44 = (float)iVar29;
        uVar38 = uVar5;
        do {
          iVar9 = *(int *)(this + 0x68);
          iVar10 = *(int *)(this + 0x6c);
          iVar13 = iVar9 * uVar38;
          iVar36 = iVar10 * iVar24;
          iVar15 = *(int *)(this + 0x70) + -1;
          iVar3 = iVar13 + iVar9;
          uVar28 = iVar13 - 1;
          iVar4 = iVar36 + iVar10;
          iVar16 = *(int *)(this + 0x74) + -1;
          uVar17 = iVar36 - 1;
          if (iVar3 + 1 < iVar15) {
            iVar15 = iVar3 + 1;
          }
          if (iVar4 + 1 < iVar16) {
            iVar16 = iVar4 + 1;
          }
          if (iVar16 < (int)(uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU))) {
LAB_00ba72dc:
            lVar23 = *(long *)(this + 0x60);
            iVar15 = uVar38 + 1;
            iVar16 = *(int *)(this + 0x40) * iVar24;
            fVar40 = *(float *)(this + 0x58);
            fStack_12c = *(float *)(this + 0xa8);
            fStack_128 = ((float)iVar24 - *(float *)(this + 0x54)) * *(float *)(this + 0xac);
            local_140 = ((float)uVar38 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)(lVar23 + (long)(int)(iVar16 + uVar38) * 2))
            ;
            local_138 = (fVar44 - *(float *)(this + 0x54)) * *(float *)(this + 0xac);
            local_150 = CONCAT44(fVar40 * fVar48 * fStack_12c,local_140);
            uStack_148 = (ulong)(uint)fStack_128;
            local_134 = 0;
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)
                                              (lVar23 + (long)(int)(uVar38 + *(int *)(this + 0x40) *
                                                                             iVar29) * 2));
            local_130 = ((float)iVar15 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
            local_13c = fStack_12c * fVar40 * fVar48;
            uStack_124 = 0;
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)(lVar23 + (long)(iVar16 + iVar15) * 2));
            fStack_12c = fStack_12c * fVar40 * fVar48;
            processConvexTriangleCollision
                      (this,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_150,
                       uVar38,iVar24,uVar28,iVar4,iVar3,iVar4,iVar3,uVar17,fVar39,param_1,param_2,
                       param_3,param_4,param_5,param_6);
            uStack_148 = CONCAT44(uStack_124,fStack_128);
            local_150 = CONCAT44(fStack_12c,local_130);
            uStack_124 = 0;
            fVar48 = (float)NEON_ucvtf((uint)*(ushort *)
                                              (*(long *)(this + 0x60) +
                                              (long)(iVar15 + *(int *)(this + 0x40) * iVar29) * 2));
            fVar40 = (float)*(undefined8 *)(this + 0x54);
            fVar43 = (float)((ulong)*(undefined8 *)(this + 0x54) >> 0x20);
            uVar42 = NEON_ext(CONCAT44(fVar48 * fVar43,fVar44 * fVar40),
                              CONCAT44(0.0 - fVar43,fVar44 - fVar40),4,1);
            local_130 = ((float)iVar15 - *(float *)(this + 0x50)) * *(float *)(this + 0xa4);
            fStack_12c = (float)uVar42 * (float)*(undefined8 *)(this + 0xa8);
            fStack_128 = (float)((ulong)uVar42 >> 0x20) *
                         (float)((ulong)*(undefined8 *)(this + 0xa8) >> 0x20);
            processConvexTriangleCollision
                      (this,(btVector3 *)&local_110,(btVector3 *)&local_120,(btVector3 *)&local_150,
                       uVar38,iVar24,iVar13,iVar36,iVar13,iVar36 + *(int *)(this + 0x6c) + 1,
                       iVar13 + *(int *)(this + 0x68) + 1,iVar36,fVar39,param_1,param_2,param_3,
                       param_4,param_5,param_6);
          }
          else {
            bVar20 = false;
            uVar7 = uVar28;
            if ((int)uVar28 < 1) {
              uVar7 = 0;
            }
            uVar8 = uVar17;
            if ((int)uVar17 < 1) {
              uVar8 = 0;
            }
            uVar22 = (ulong)uVar8;
LAB_00ba7560:
            lVar23 = *(long *)(this + 0x78) + (long)iVar34 * uVar22;
            uVar33 = uVar22;
            do {
              uVar22 = (ulong)uVar7;
              if ((int)(uVar28 & ((int)uVar28 >> 0x1f ^ 0xffffffffU)) <= iVar15) {
                do {
                  if (*(char *)(lVar23 + uVar22) != '\0') {
                    uVar22 = uVar33 + 1;
                    bVar20 = true;
                    if ((long)iVar16 <= (long)uVar33) goto LAB_00ba75a8;
                    goto LAB_00ba7560;
                  }
                  bVar1 = (long)uVar22 < (long)iVar15;
                  uVar22 = uVar22 + 1;
                } while (bVar1);
              }
              lVar23 = lVar23 + iVar34;
              bVar1 = (long)uVar33 < (long)iVar16;
              uVar33 = uVar33 + 1;
            } while (bVar1);
            if (!bVar20) goto LAB_00ba72dc;
LAB_00ba75a8:
            iVar15 = uVar38 + 1;
            if (0 < iVar10) {
              iVar10 = iVar24 * iVar10;
              iVar16 = -uVar38;
              do {
                iVar10 = iVar10 + 1;
                iVar2 = iVar36 + 1;
                if (0 < iVar9) {
                  lVar23 = 0;
                  do {
                    iVar21 = (int)lVar23;
                    iVar37 = iVar13 + iVar21;
                    iVar11 = *(int *)(this + 0x40);
                    iVar14 = iVar11 * iVar24;
                    lVar26 = *(long *)(this + 0x60);
                    fVar49 = *(float *)(this + 0x80) *
                             (float)(ulong)(uint)(iVar37 + iVar16 * *(int *)(this + 0x68));
                    fVar48 = *(float *)(this + 0x84) *
                             (float)(ulong)(uint)(iVar36 - *(int *)(this + 0x6c) * iVar24);
                    fVar43 = (float)NEON_ucvtf((uint)*(ushort *)
                                                      (lVar26 + (long)(iVar14 + iVar15) * 2));
                    fVar40 = *(float *)(this + 0x58);
                    fVar43 = fVar40 * fVar43;
                    if (fVar49 + fVar48 <= 1.0) {
                      fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(uVar38 + iVar11 * 
                                                  iVar29) * 2));
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar14 + uVar38) * 2))
                      ;
                      uVar51 = NEON_fmadd(fVar43,fVar49,fVar48 * fVar40 * fVar55);
                      uVar51 = NEON_fmadd(fVar40 * fVar52,(1.0 - fVar49) - fVar48,uVar51);
                    }
                    else {
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar11 * iVar29 +
                                                                             uVar38) * 2));
                      fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(iVar11 * iVar29 + iVar15) *
                                                                  2));
                      uVar51 = NEON_fmadd(fVar43,1.0 - fVar48,(1.0 - fVar49) * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar55,fVar49 + fVar48 + -1.0,uVar51);
                    }
                    iVar12 = *(int *)(this + 0x70);
                    lVar30 = *(long *)(this + 0x78);
                    fVar55 = *(float *)(this + 0x84) *
                             (float)(ulong)(uint)(iVar2 - *(int *)(this + 0x6c) * iVar24);
                    uVar60 = NEON_ucvtf((uint)*(byte *)(lVar30 + iVar36 * iVar12 + (long)iVar13 +
                                                       lVar23));
                    uVar41 = *(undefined4 *)(this + 0x90);
                    fVar52 = (float)NEON_fmadd(uVar60,uVar41,uVar51);
                    fStack_12c = *(float *)(this + 0x98);
                    local_140 = ((float)iVar37 - *(float *)(this + 0x88)) * *(float *)(this + 0x94);
                    fStack_128 = ((float)iVar36 - *(float *)(this + 0x8c)) * *(float *)(this + 0x9c)
                    ;
                    local_150 = CONCAT44(fVar52 * fStack_12c,local_140);
                    uStack_148 = (ulong)(uint)fStack_128;
                    if (fVar49 + fVar55 <= 1.0) {
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(uVar38 + iVar11 * 
                                                  iVar29) * 2));
                      fVar57 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar14 + uVar38) * 2))
                      ;
                      uVar51 = NEON_fmadd(fVar43,fVar49,fVar55 * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar57,(1.0 - fVar49) - fVar55,uVar51);
                    }
                    else {
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar11 * iVar29 +
                                                                             uVar38) * 2));
                      fVar57 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(iVar11 * iVar29 + iVar15) *
                                                                  2));
                      uVar51 = NEON_fmadd(fVar43,1.0 - fVar55,(1.0 - fVar49) * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar57,fVar49 + fVar55 + -1.0,uVar51);
                    }
                    iVar32 = iVar13 + iVar21;
                    local_138 = ((float)iVar2 - *(float *)(this + 0x8c)) * *(float *)(this + 0x9c);
                    local_134 = 0;
                    uVar60 = NEON_ucvtf((uint)*(byte *)(lVar30 + (iVar32 + iVar10 * iVar12)));
                    fVar49 = *(float *)(this + 0x80) *
                             (float)(ulong)(iVar32 + iVar16 * *(int *)(this + 0x68) + 1);
                    local_13c = (float)NEON_fmadd(uVar60,uVar41,uVar51);
                    local_13c = fStack_12c * local_13c;
                    if (fVar49 + fVar48 <= 1.0) {
                      fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar14 + uVar38) * 2))
                      ;
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(uVar38 + iVar11 * 
                                                  iVar29) * 2));
                      uVar51 = NEON_fmadd(fVar43,fVar49,fVar48 * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar55,(1.0 - fVar49) - fVar48,uVar51);
                    }
                    else {
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar11 * iVar29 +
                                                                             uVar38) * 2));
                      fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(iVar11 * iVar29 + iVar15) *
                                                                  2));
                      uVar51 = NEON_fmadd(fVar43,1.0 - fVar48,(1.0 - fVar49) * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar55,fVar49 + fVar48 + -1.0,uVar51);
                    }
                    iVar32 = iVar32 + 1;
                    uStack_124 = 0;
                    uVar60 = NEON_ucvtf((uint)*(byte *)(lVar30 + (iVar13 + iVar21 + iVar36 * iVar12
                                                                 + 1)));
                    fVar48 = (float)NEON_fmadd(uVar60,uVar41,uVar51);
                    local_130 = ((float)iVar32 - *(float *)(this + 0x88)) * *(float *)(this + 0x94);
                    fStack_12c = fStack_12c * fVar48;
                    processConvexTriangleCollision
                              (this,(btVector3 *)&local_110,(btVector3 *)&local_120,
                               (btVector3 *)&local_150,~uVar38,iVar24,uVar28 + iVar21,iVar2,iVar32,
                               iVar2,iVar32,iVar36 + -1,fVar39,param_1,param_2,param_3,param_4,
                               param_5,param_6);
                    iVar11 = *(int *)(this + 0x40);
                    uStack_148 = CONCAT44(uStack_124,fStack_128);
                    local_150 = CONCAT44(fStack_12c,local_130);
                    lVar26 = *(long *)(this + 0x60);
                    fVar43 = *(float *)(this + 0x80) *
                             (float)(ulong)(iVar13 + iVar21 + iVar16 * *(int *)(this + 0x68) + 1);
                    fVar48 = *(float *)(this + 0x84) *
                             (float)(ulong)(uint)(iVar2 - *(int *)(this + 0x6c) * iVar24);
                    fVar49 = (float)NEON_ucvtf((uint)*(ushort *)
                                                      (lVar26 + (long)(iVar11 * iVar24 + iVar15) * 2
                                                      ));
                    fVar40 = *(float *)(this + 0x58);
                    if (fVar43 + fVar48 <= 1.0) {
                      fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar11 * iVar24 +
                                                                             uVar38) * 2));
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(uVar38 + iVar11 * 
                                                  iVar29) * 2));
                      uVar51 = NEON_fmadd(fVar40 * fVar49,fVar43,fVar48 * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar55,(1.0 - fVar43) - fVar48,uVar51);
                    }
                    else {
                      fVar52 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(int)(iVar11 * iVar29 +
                                                                             uVar38) * 2));
                      fVar55 = (float)NEON_ucvtf((uint)*(ushort *)
                                                        (lVar26 + (long)(iVar11 * iVar29 + iVar15) *
                                                                  2));
                      uVar51 = NEON_fmadd(fVar40 * fVar49,1.0 - fVar48,
                                          (1.0 - fVar43) * fVar40 * fVar52);
                      uVar51 = NEON_fmadd(fVar40 * fVar55,fVar43 + fVar48 + -1.0,uVar51);
                    }
                    uStack_124 = 0;
                    uVar60 = NEON_ucvtf((uint)*(byte *)(*(long *)(this + 0x78) +
                                                        (long)iVar10 * (long)*(int *)(this + 0x70) +
                                                        (long)(iVar13 + 1) + lVar23));
                    fStack_12c = (float)NEON_fmadd(uVar60,*(undefined4 *)(this + 0x90),uVar51);
                    fStack_128 = ((float)iVar2 - *(float *)(this + 0x8c)) * *(float *)(this + 0x9c);
                    local_130 = ((float)iVar32 - *(float *)(this + 0x88)) *
                                (float)*(undefined8 *)(this + 0x94);
                    fStack_12c = fStack_12c * (float)((ulong)*(undefined8 *)(this + 0x94) >> 0x20);
                    processConvexTriangleCollision
                              (this,(btVector3 *)&local_110,(btVector3 *)&local_120,
                               (btVector3 *)&local_150,~uVar38,iVar24,iVar37,iVar36,iVar37,
                               iVar36 + 2,iVar13 + iVar21 + 2,iVar36,fVar39,param_1,param_2,param_3,
                               param_4,param_5,param_6);
                    lVar23 = lVar23 + 1;
                  } while (iVar13 + (int)lVar23 < iVar3);
                }
                iVar36 = iVar2;
              } while (iVar2 < iVar4);
            }
          }
          uVar38 = uVar38 + 1;
        } while (uVar38 != uVar6);
      }
      iVar24 = iVar29;
    } while (iVar29 != iVar31);
  }
  if (*(long *)(lVar18 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


