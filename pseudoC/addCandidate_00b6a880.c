// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCandidate
// Entry Point: 00b6a880
// Size: 1148 bytes
// Signature: undefined __thiscall addCandidate(Brep * this, PriorityQueue * param_1, uint param_2, uint param_3)


/* Brep::addCandidate(PriorityQueue<std::__ndk1::pair<float, unsigned int>, unsigned short,
   std::__ndk1::less<std::__ndk1::pair<float, unsigned int> >,
   std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float, unsigned int>, unsigned short*>
   > > >&, unsigned int, unsigned int) */

void __thiscall Brep::addCandidate(Brep *this,PriorityQueue *param_1,uint param_2,uint param_3)

{
  ushort *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  float *pfVar7;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  float *pfVar20;
  float *pfVar21;
  ulong uVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined8 local_198 [3];
  Vector3 aVStack_180 [16];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  float fStack_158;
  float local_154;
  float fStack_150;
  undefined8 uStack_14c;
  float local_144;
  undefined8 local_140;
  float local_138;
  undefined4 local_134;
  undefined8 local_130;
  float local_128;
  Plane local_120 [12];
  float local_114;
  Plane aPStack_110 [16];
  Plane aPStack_100 [12];
  float local_f4;
  Plane aPStack_f0 [16];
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 local_88;
  long local_78;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  uVar15 = param_2 + 2;
  if ((param_2 - 1 & 3) != 0) {
    uVar15 = param_2 - 1;
  }
  puVar1 = (ushort *)(*(long *)(this + 0x2f68) + (ulong)param_2 * 8);
  uVar5 = *(ushort *)(*(long *)(this + 0x2f68) + (ulong)uVar15 * 8);
  uVar22 = (ulong)uVar5;
  uVar4 = *puVar1;
  uVar23 = (ulong)uVar4;
  if (uVar4 < uVar5 && *(int *)(puVar1 + 2) != -1) goto LAB_00b6acc4;
  uVar18 = isContractible(this,param_2);
  if (((uVar18 & 1) == 0) || (uVar15 = edgeCoboundaryCount(this,param_2), param_3 < uVar15))
  goto LAB_00b6acc4;
  puVar3 = (undefined8 *)(*(long *)(this + 0x2f08) + uVar22 * 0x40);
  pfVar20 = (float *)(*(long *)(this + 0x2f08) + uVar23 * 0x40);
  fStack_98 = (float)puVar3[5];
  fStack_94 = (float)((ulong)puVar3[5] >> 0x20);
  fStack_a0 = (float)puVar3[4];
  fStack_9c = (float)((ulong)puVar3[4] >> 0x20);
  local_a8 = (float)puVar3[3];
  local_a4 = (float)((ulong)puVar3[3] >> 0x20);
  local_c0._0_4_ = (float)*puVar3;
  local_c0._4_4_ = (float)((ulong)*puVar3 >> 0x20);
  uStack_b8._0_4_ = (float)puVar3[1];
  uStack_b8._4_4_ = (float)((ulong)puVar3[1] >> 0x20);
  local_c0 = CONCAT44(pfVar20[1] + local_c0._4_4_,*pfVar20 + (float)local_c0);
  local_b0._0_4_ = (float)puVar3[2];
  local_b0._4_4_ = (float)((ulong)puVar3[2] >> 0x20);
  uStack_b8 = CONCAT44(pfVar20[3] + uStack_b8._4_4_,pfVar20[2] + (float)uStack_b8);
  local_b0 = CONCAT44(pfVar20[5] + local_b0._4_4_,pfVar20[4] + (float)local_b0);
  local_a8 = pfVar20[6] + local_a8;
  local_a4 = pfVar20[7] + local_a4;
  fVar24 = pfVar20[8] + fStack_a0;
  fVar25 = pfVar20[9] + fStack_9c;
  fVar31 = pfVar20[10] + fStack_98;
  fStack_94 = pfVar20[0xb] + fStack_94;
  local_90._0_4_ = (float)puVar3[6];
  local_90._4_4_ = (float)((ulong)puVar3[6] >> 0x20);
  fVar26 = pfVar20[0xc] + (float)local_90;
  fVar27 = pfVar20[0xd] + local_90._4_4_;
  local_88._0_4_ = (float)puVar3[7];
  local_88._4_4_ = (float)((ulong)puVar3[7] >> 0x20);
  local_90 = CONCAT44(fVar27,fVar26);
  fVar32 = pfVar20[0xe] + (float)local_88;
  local_88 = CONCAT44(pfVar20[0xf] + local_88._4_4_,fVar32);
  puVar3 = (undefined8 *)
           (*(long *)(this + 0x2ef0) +
           (ulong)*(ushort *)(*(long *)(this + 0x2f50) + uVar22 * 0xc) * 0x10);
  local_d0 = *puVar3;
  local_c8 = *(float *)(puVar3 + 1);
  puVar3 = (undefined8 *)
           (*(long *)(this + 0x2ef0) +
           (ulong)*(ushort *)(*(long *)(this + 0x2f50) + uVar23 * 0xc) * 0x10);
  local_d8 = *(float *)(puVar3 + 1);
  local_e0 = *puVar3;
  fStack_a0 = fVar24;
  fStack_9c = fVar25;
  fStack_98 = fVar31;
  Plane::Plane(local_120);
  Plane::Plane(aPStack_110);
  Plane::Plane(aPStack_100);
  Plane::Plane(aPStack_f0);
  iVar16 = getConstraintPlanes(local_120,*(uchar *)(*(long *)(this + 0x2f38) + uVar22),
                               (Vector3 *)&local_d0);
  iVar17 = getConstraintPlanes(local_120 + (long)iVar16 * 0x10,
                               *(byte *)(*(long *)(this + 0x2f38) + uVar23) &
                               (*(byte *)(*(long *)(this + 0x2f38) + uVar22) ^ 0xff),
                               (Vector3 *)&local_e0);
  uVar15 = iVar17 + iVar16;
  uVar22 = (ulong)uVar15;
  if (2 < (int)uVar15) goto LAB_00b6acc4;
  fVar28 = ((float)local_d0 + (float)local_e0) * 0.5;
  fVar29 = ((float)((ulong)local_d0 >> 0x20) + (float)((ulong)local_e0 >> 0x20)) * 0.5;
  local_130 = CONCAT44(fVar29,fVar28);
  local_128 = (local_c8 + local_d8) * 0.5;
  local_144 = (float)NEON_fmadd(local_128,fVar31,local_a8 * fVar29 + (float)uStack_b8 * fVar28);
  uStack_14c = CONCAT44(fStack_98,fStack_9c);
  fVar26 = fVar26 + (float)local_b0 * fVar29 + (float)local_c0 * fVar28 + fVar24 * local_128;
  local_154 = fVar27 + (float)((ulong)local_b0 >> 0x20) * fVar29 +
                       (float)((ulong)local_c0 >> 0x20) * fVar28 + fVar25 * local_128;
  local_140 = CONCAT44(local_154,fVar26);
  local_170 = local_c0;
  fStack_158 = local_a8;
  uStack_160 = local_b0;
  local_144 = fVar32 + local_144;
  fStack_150 = fStack_a0;
  uStack_168 = CONCAT44(fVar26,(float)uStack_b8);
  local_138 = local_144;
  local_134 = QuadricSolverUtil::squaredError((Matrix4x4 *)&local_c0,(Vector3 *)&local_130);
  if (uVar15 == 0) {
LAB_00b6ac6c:
    QuadricSolverUtil::solve(aVStack_180,(Matrix4x4 *)&local_170,false);
LAB_00b6ac94:
    fVar24 = (float)QuadricSolverUtil::squaredError((Matrix4x4 *)&local_170,aVStack_180);
  }
  else {
    if (uVar15 < 4) {
      uVar18 = 0;
LAB_00b6abf4:
      lVar19 = uVar22 - uVar18;
      pfVar20 = &local_114 + uVar18 * 4;
      do {
        lVar19 = lVar19 + -1;
        uVar30 = NEON_fmadd(pfVar20[-3],(float)local_130,pfVar20[-2] * local_130._4_4_);
        fVar24 = (float)NEON_fmadd(pfVar20[-1],local_128,uVar30);
        *pfVar20 = *pfVar20 + fVar24;
        pfVar20 = pfVar20 + 4;
      } while (lVar19 != 0);
    }
    else {
      uVar18 = uVar22 & 0xfffffffc;
      pfVar20 = &local_f4;
      uVar23 = uVar18;
      do {
        pfVar2 = pfVar20 + 4;
        uVar23 = uVar23 - 4;
        pfVar7 = pfVar20 + -7;
        pfVar8 = pfVar20 + -6;
        pfVar9 = pfVar20 + -5;
        pfVar10 = pfVar20 + -4;
        pfVar11 = pfVar20 + 1;
        pfVar12 = pfVar20 + 2;
        pfVar13 = pfVar20 + 3;
        pfVar14 = pfVar20 + 4;
        pfVar21 = pfVar20 + -4;
        pfVar20[-8] = pfVar20[-8] +
                      pfVar20[-10] * local_130._4_4_ + (float)local_130 * pfVar20[-0xb] +
                      local_128 * pfVar20[-9];
        *pfVar20 = *pfVar20 +
                   pfVar20[-2] * local_130._4_4_ + (float)local_130 * pfVar20[-3] +
                   local_128 * pfVar20[-1];
        pfVar20 = pfVar20 + 0x10;
        *pfVar21 = *pfVar10 +
                   *pfVar8 * local_130._4_4_ + (float)local_130 * *pfVar7 + local_128 * *pfVar9;
        *pfVar2 = *pfVar14 +
                  *pfVar12 * local_130._4_4_ + (float)local_130 * *pfVar11 + local_128 * *pfVar13;
      } while (uVar23 != 0);
      if (uVar18 != uVar22) goto LAB_00b6abf4;
    }
    if (uVar15 == 0) goto LAB_00b6ac6c;
    if (uVar15 == 1) {
      QuadricSolverUtil::solve(aVStack_180,(Matrix4x4 *)&local_170,local_120,false);
      goto LAB_00b6ac94;
    }
    fVar24 = (float)local_130;
    if (uVar15 == 2) {
      makeIntersect(local_120,aPStack_110);
      QuadricSolverUtil::solve(aVStack_180,(Matrix4x4 *)&local_170,(DualVector3 *)local_198,false);
      goto LAB_00b6ac94;
    }
  }
  local_198[0] = CONCAT44(param_2,fVar24);
  PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
  ::push((PriorityQueue<std::__ndk1::pair<float,unsigned_int>,unsigned_short,std::__ndk1::less<std::__ndk1::pair<float,unsigned_int>>,std::__ndk1::vector<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::pair<float,unsigned_int>,unsigned_short*>>>>
          *)param_1,(pair *)local_198,(ushort *)(*(long *)(this + 0x2f68) + (ulong)param_2 * 8 + 2))
  ;
LAB_00b6acc4:
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


