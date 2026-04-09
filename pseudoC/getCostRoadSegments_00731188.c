// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCostRoadSegments
// Entry Point: 00731188
// Size: 976 bytes
// Signature: undefined __thiscall getCostRoadSegments(VehicleNavigationMap * this, int * param_1, Vector2 * param_2, ushort param_3, float param_4, float param_5, float param_6)


/* VehicleNavigationMap::getCostRoadSegments(int&, Vector2 const&, unsigned short, float, float,
   float) const */

undefined __thiscall
VehicleNavigationMap::getCostRoadSegments
          (VehicleNavigationMap *this,int *param_1,Vector2 *param_2,ushort param_3,float param_4,
          float param_5,float param_6)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  undefined uVar14;
  PlanarPose *pPVar15;
  undefined8 *puVar16;
  RoadSegment *this_00;
  float fVar17;
  ulong uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined local_134 [4];
  undefined8 local_130;
  undefined8 uStack_128;
  float local_11c;
  float local_118;
  float fStack_114;
  undefined8 local_110;
  Vector2 *pVStack_108;
  float *local_100;
  float *pfStack_f8;
  int *local_f0;
  float *pfStack_e8;
  undefined *local_e0;
  float fStack_d8;
  float fStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  long local_98 [3];
  
  lVar6 = tpidr_el0;
  local_98[0] = *(long *)(lVar6 + 0x28);
  local_11c = param_6;
  local_118 = param_5;
  fStack_114 = param_4;
  uVar14 = 0xff;
  if (*(long *)(this + 0x30) != *(long *)(this + 0x38)) {
    fVar19 = (float)*(undefined8 *)param_2;
    fVar17 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
    uVar18 = CONCAT44(fVar17 + -4.0,fVar19 + -4.0);
    fVar19 = fVar19 + 4.0;
    uStack_128 = CONCAT44(fVar17 + 4.0,fVar19);
    local_130 = uVar18;
    uVar7 = getDirection(param_3);
    *param_1 = 0;
    lVar8 = *(long *)(this + 0x48);
    local_134[0] = 0xff;
    if (lVar8 != 0) {
      uVar4 = *(uint *)(lVar8 + 0x10) >> 1;
      if ((*(uint *)(lVar8 + 0x10) & 1) != 0) {
        uVar4 = 1;
      }
      if (uVar4 != 0) {
        uVar10 = 0;
        do {
          pfVar12 = (float *)(lVar8 + (ulong)uVar10 * 0x14);
          fVar20 = *pfVar12;
          fVar21 = pfVar12[2];
          uVar13 = (ulong)uVar10;
          fVar17 = (float)uVar18;
          if ((float)uVar18 < fVar20) {
            fVar17 = fVar20;
          }
          if (fVar21 < fVar19) {
            fVar19 = fVar21;
          }
          if (fVar19 < fVar17) {
LAB_007312e4:
            uVar2 = *(uint *)(lVar8 + uVar13 * 0x14 + 0x10);
            uVar5 = uVar2 >> 1;
            if ((uVar2 & 1) != 0) {
              uVar5 = 1;
            }
            uVar10 = uVar5 + uVar10;
          }
          else {
            lVar11 = lVar8 + uVar13 * 0x14;
            fVar17 = *(float *)(lVar11 + 4);
            fVar20 = *(float *)(lVar11 + 0xc);
            fVar19 = local_130._4_4_;
            if (local_130._4_4_ < fVar17) {
              fVar19 = fVar17;
            }
            fVar17 = uStack_128._4_4_;
            if (fVar20 < uStack_128._4_4_) {
              fVar17 = fVar20;
            }
            if (fVar17 < fVar19) goto LAB_007312e4;
            uVar5 = *(uint *)(lVar8 + uVar13 * 0x14 + 0x10);
            if ((uVar5 & 1) != 0) {
              puVar1 = (ushort *)(*(long *)(this + 0x30) + ((ulong)uVar5 & 0xfffffffe) * 2);
              uVar3 = puVar1[1];
              pPVar15 = (PlanarPose *)(ulong)uVar3;
              this_00 = (RoadSegment *)(*(long *)(this + 0x18) + (ulong)*puVar1 * 0x50);
              local_b0 = 0x3f80000000000000;
              RoadSegment::solveCoordExtremes
                        (this_00,&fStack_d4,&fStack_d8,&local_a8,&local_a4,(uint)uVar3,0.0,1.0,0);
              RoadSegment::solveCoordExtremes
                        (this_00,&fStack_d4,&fStack_d8,&local_a0,&local_9c,(uint)uVar3,0.0,1.0,2);
              std::__ndk1::__sort<std::__ndk1::__less<float,float>&,float*>
                        ((float *)&local_b0,(float *)local_98,(__less *)&local_110);
              fVar19 = (float)local_b0;
              puVar16 = &local_b0;
              fVar17 = (float)local_b0;
              if (((((float)local_b0 == local_b0._4_4_) ||
                   (puVar16 = (undefined8 *)((ulong)&local_b0 | 4), fVar17 = local_b0._4_4_,
                   local_b0._4_4_ == local_a8)) ||
                  (puVar16 = (undefined8 *)&local_a8, fVar17 = local_a8, local_a8 == local_a4)) ||
                 ((puVar16 = (undefined8 *)&local_a4, fVar17 = local_a4, local_a4 == local_a0 ||
                  (plVar9 = local_98, puVar16 = (undefined8 *)&local_a0, fVar17 = local_a0,
                  local_a0 == local_9c)))) {
                for (plVar9 = puVar16 + 1; plVar9 != local_98; plVar9 = (long *)((long)plVar9 + 4))
                {
                  fVar20 = *(float *)plVar9;
                  if (fVar17 != fVar20) {
                    puVar16 = (undefined8 *)((long)puVar16 + 4);
                    *(float *)puVar16 = fVar20;
                    fVar17 = fVar20;
                  }
                }
                plVar9 = (long *)((long)puVar16 + 4);
              }
              RoadSegment::getPositionAndDirection((uint)this_00,(float)local_b0,pPVar15);
              if ((long)plVar9 - (long)&local_b0 != 4) {
                lVar8 = ((long)plVar9 - (long)&local_b0 >> 2) + -1;
                puVar16 = (undefined8 *)((ulong)&local_b0 | 4);
                do {
                  fVar17 = *(float *)puVar16;
                  RoadSegment::getPositionAndDirection((uint)this_00,fVar17,pPVar15);
                  local_100 = &fStack_114;
                  local_110 = uVar7;
                  pVStack_108 = param_2;
                  pfStack_f8 = &local_118;
                  local_f0 = param_1;
                  pfStack_e8 = &local_11c;
                  local_e0 = local_134;
                  FUN_00732564(fVar19,fVar17,&local_110,&local_130,this_00,pPVar15,&local_c0,
                               &local_d0);
                  uStack_b8 = uStack_c8;
                  local_c0 = local_d0;
                  lVar8 = lVar8 + -1;
                  puVar16 = (undefined8 *)((long)puVar16 + 4);
                  fVar19 = fVar17;
                } while (lVar8 != 0);
              }
            }
            uVar10 = uVar10 + 1;
          }
          uVar14 = local_134[0];
          if (uVar10 == uVar4) goto LAB_00731518;
          lVar8 = *(long *)(this + 0x48);
          uVar18 = local_130 & 0xffffffff;
          fVar19 = (float)uStack_128;
        } while( true );
      }
      uVar14 = 0xff;
    }
  }
LAB_00731518:
  if (*(long *)(lVar6 + 0x28) == local_98[0]) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


