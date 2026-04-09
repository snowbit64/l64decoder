// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: projectMesh
// Entry Point: 009dac08
// Size: 1552 bytes
// Signature: undefined __thiscall projectMesh(ProceduralPlacementProjectObjectsMask * this, set * param_1, float param_2)


/* ProceduralPlacementProjectObjectsMask::projectMesh(std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> > const&, float) */

void __thiscall
ProceduralPlacementProjectObjectsMask::projectMesh
          (ProceduralPlacementProjectObjectsMask *this,set *param_1,float param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  long lVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  set **ppsVar12;
  set *psVar13;
  uint uVar14;
  uint uVar15;
  void *__s;
  long lVar16;
  uint uVar17;
  uint uVar18;
  set **ppsVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_128;
  float local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  float local_108;
  float fStack_104;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f4;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_cc;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  __s = *(void **)(this + 0x58);
  uVar8 = (**(code **)(*(long *)this + 0x40))();
  uVar9 = (**(code **)(*(long *)this + 0x48))(this);
  memset(__s,0,(uVar8 & 0xffffffff) * (uVar9 & 0xffffffff) * 4);
  ppsVar19 = *(set ***)param_1;
  while (ppsVar19 != (set **)(param_1 + 8)) {
    lVar16 = (long)ppsVar19[4];
    if (((*(byte *)(lVar16 + 0x11) >> 3 & 1) != 0) &&
       (lVar10 = Geometry::getCollisionProxyMesh(), lVar10 != 0)) {
      RawTransformGroup::updateWorldTransformation();
      iVar6 = IndexedTriangleSet::getNumIndices();
      if (iVar6 != 0) {
        uVar14 = 0;
        do {
          uVar8 = IndexedTriangleSet::is16Bit();
          if ((uVar8 & 1) == 0) {
            lVar10 = IndexedTriangleSet::getIndices32();
            uVar15 = *(uint *)(lVar10 + (ulong)uVar14 * 4);
            uVar17 = *(uint *)(lVar10 + (ulong)(uVar14 + 1) * 4);
            uVar18 = *(uint *)(lVar10 + (ulong)(uVar14 + 2) * 4);
          }
          else {
            lVar10 = IndexedTriangleSet::getIndices16();
            uVar15 = (uint)*(ushort *)(lVar10 + (ulong)uVar14 * 2);
            uVar17 = (uint)*(ushort *)(lVar10 + (ulong)(uVar14 + 1) * 2);
            uVar18 = (uint)*(ushort *)(lVar10 + (ulong)(uVar14 + 2) * 2);
          }
          lVar10 = TriangleSet::getPositions();
          pfVar1 = (float *)(lVar10 + (ulong)(uVar15 * 3) * 4);
          fVar20 = *pfVar1;
          fVar26 = pfVar1[1];
          fVar28 = pfVar1[2];
          local_d8 = fVar20;
          fStack_d4 = fVar26;
          local_d0 = fVar28;
          lVar10 = TriangleSet::getPositions();
          puVar2 = (undefined8 *)(lVar10 + (ulong)(uVar17 * 3) * 4);
          local_cc = *puVar2;
          local_c4 = *(float *)(puVar2 + 1);
          lVar10 = TriangleSet::getPositions();
          fVar30 = 10000.0;
          fVar31 = -10000.0;
          puVar2 = (undefined8 *)(lVar10 + (ulong)(uVar18 * 3) * 4);
          local_c0 = *puVar2;
          local_128 = 10000.0;
          local_124 = -10000.0;
          local_b8 = *(undefined4 *)(puVar2 + 1);
          lVar10 = 0;
          while( true ) {
            pcVar11 = *(code **)(*(long *)this + 0x40);
            uVar21 = NEON_fmadd(fVar20,*(undefined4 *)(lVar16 + 0xc4),
                                fVar26 * *(float *)(lVar16 + 0xd4));
            fVar22 = (float)NEON_fmadd(fVar28,*(undefined4 *)(lVar16 + 0xe4),uVar21);
            fVar22 = 1.0 / (*(float *)(lVar16 + 0xf4) + fVar22);
            uVar21 = NEON_fmadd(fVar20,*(undefined4 *)(lVar16 + 0xc0),
                                fVar26 * *(float *)(lVar16 + 0xd0));
            fVar27 = ((float)*(undefined8 *)(lVar16 + 200) * fVar26 +
                      (float)*(undefined8 *)(lVar16 + 0xb8) * fVar20 +
                      (float)*(undefined8 *)(lVar16 + 0xd8) * fVar28 +
                     (float)*(undefined8 *)(lVar16 + 0xe8)) * fVar22;
            fVar29 = (float)NEON_fmadd(fVar28,*(undefined4 *)(lVar16 + 0xe0),uVar21);
            *(ulong *)((long)&local_100 + lVar10) =
                 CONCAT44(((float)((ulong)*(undefined8 *)(lVar16 + 200) >> 0x20) * fVar26 +
                           (float)((ulong)*(undefined8 *)(lVar16 + 0xb8) >> 0x20) * fVar20 +
                           (float)((ulong)*(undefined8 *)(lVar16 + 0xd8) >> 0x20) * fVar28 +
                          (float)((ulong)*(undefined8 *)(lVar16 + 0xe8) >> 0x20)) * fVar22,fVar27);
            fVar27 = fVar27 / param_2;
            fVar22 = (*(float *)(lVar16 + 0xf0) + fVar29) * fVar22;
            *(float *)((long)&local_f8 + lVar10) = fVar22;
            uVar8 = (*pcVar11)(this);
            if (fVar27 + (float)(uVar8 & 0xffffffff) * 0.5 < local_128) {
              uVar8 = (**(code **)(*(long *)this + 0x40))(this);
              local_128 = fVar27 + (float)(uVar8 & 0xffffffff) * 0.5;
            }
            uVar8 = (**(code **)(*(long *)this + 0x40))(this);
            if (fVar31 < fVar27 + (float)(uVar8 & 0xffffffff) * 0.5) {
              uVar8 = (**(code **)(*(long *)this + 0x40))(this);
              fVar31 = fVar27 + (float)(uVar8 & 0xffffffff) * 0.5;
            }
            fVar22 = fVar22 / param_2;
            uVar8 = (**(code **)(*(long *)this + 0x40))(this);
            if (fVar22 + (float)(uVar8 & 0xffffffff) * 0.5 < fVar30) {
              uVar8 = (**(code **)(*(long *)this + 0x40))(this);
              fVar30 = fVar22 + (float)(uVar8 & 0xffffffff) * 0.5;
            }
            uVar8 = (**(code **)(*(long *)this + 0x40))(this);
            if (local_124 < fVar22 + (float)(uVar8 & 0xffffffff) * 0.5) {
              uVar8 = (**(code **)(*(long *)this + 0x40))(this);
              local_124 = fVar22 + (float)(uVar8 & 0xffffffff) * 0.5;
            }
            if (lVar10 == 0x18) break;
            fVar20 = *(float *)((long)&local_cc + lVar10);
            fVar26 = *(float *)((long)&local_cc + lVar10 + 4);
            fVar28 = *(float *)((long)&local_c4 + lVar10);
            lVar10 = lVar10 + 0xc;
          }
          if (fVar30 <= local_124) {
            fVar26 = (float)local_100;
            fVar27 = local_f8 / param_2;
            fVar28 = (float)local_f4;
            fVar29 = local_ec / param_2;
            fVar22 = (float)local_e8;
            fVar32 = local_e0 / param_2;
            fVar20 = local_128;
            do {
              for (; fVar20 <= fVar31; fVar20 = fVar20 + 0.1) {
                uVar21 = (**(code **)(*(long *)this + 0x40))(this);
                uVar7 = (**(code **)(*(long *)this + 0x40))(this);
                uVar25 = NEON_ucvtf(CONCAT44(uVar7,uVar21),4);
                local_110 = CONCAT44(fVar27 + (float)((ulong)uVar25 >> 0x20) * 0.5,
                                     fVar26 / param_2 + (float)uVar25 * 0.5);
                uVar21 = (**(code **)(*(long *)this + 0x40))(this);
                uVar7 = (**(code **)(*(long *)this + 0x40))(this);
                uVar25 = NEON_ucvtf(CONCAT44(uVar7,uVar21),4);
                local_118 = CONCAT44(fVar29 + (float)((ulong)uVar25 >> 0x20) * 0.5,
                                     fVar28 / param_2 + (float)uVar25 * 0.5);
                uVar21 = (**(code **)(*(long *)this + 0x40))(this);
                uVar7 = (**(code **)(*(long *)this + 0x40))(this);
                uVar25 = NEON_ucvtf(CONCAT44(uVar7,uVar21),4);
                local_120 = CONCAT44(fVar32 + (float)((ulong)uVar25 >> 0x20) * 0.5,
                                     fVar22 / param_2 + (float)uVar25 * 0.5);
                local_108 = fVar20;
                fStack_104 = fVar30;
                uVar8 = MathUtil::pointInTri2D
                                  ((Vector2 *)&local_108,(Vector2 *)&local_110,(Vector2 *)&local_118
                                   ,(Vector2 *)&local_120);
                if ((uVar8 & 1) != 0) {
                  iVar6 = (**(code **)(*(long *)this + 0x40))(this);
                  fVar23 = (float)(ulong)(iVar6 - 1);
                  if (fVar20 <= (float)(ulong)(iVar6 - 1)) {
                    fVar23 = fVar20;
                  }
                  fVar24 = 0.0;
                  if (0.0 <= fVar20) {
                    fVar24 = fVar23;
                  }
                  iVar6 = (**(code **)(*(long *)this + 0x40))(this);
                  lVar10 = *(long *)(this + 0x58);
                  fVar23 = (float)(ulong)(iVar6 - 1);
                  if (fVar30 <= (float)(ulong)(iVar6 - 1)) {
                    fVar23 = fVar30;
                  }
                  fVar4 = 0.0;
                  if (0.0 <= fVar30) {
                    fVar4 = fVar23;
                  }
                  iVar6 = (**(code **)(*(long *)this + 0x40))(this);
                  *(undefined4 *)(lVar10 + (ulong)(uint)((int)fVar24 + iVar6 * (int)fVar4) * 4) =
                       0x437f0000;
                }
              }
              fVar30 = fVar30 + 0.1;
              fVar20 = local_128;
            } while (fVar30 <= local_124);
          }
          uVar14 = uVar14 + 3;
          uVar15 = IndexedTriangleSet::getNumIndices();
        } while (uVar14 < uVar15);
      }
    }
    ppsVar12 = (set **)ppsVar19[1];
    if ((set **)ppsVar19[1] == (set **)0x0) {
      ppsVar12 = ppsVar19 + 2;
      bVar5 = (set **)*(set **)*ppsVar12 != ppsVar19;
      ppsVar19 = (set **)*ppsVar12;
      if (bVar5) {
        do {
          psVar13 = *ppsVar12;
          ppsVar12 = (set **)(psVar13 + 0x10);
          ppsVar19 = (set **)*ppsVar12;
        } while (*ppsVar19 != psVar13);
      }
    }
    else {
      do {
        ppsVar19 = ppsVar12;
        ppsVar12 = (set **)*ppsVar19;
      } while ((set **)*ppsVar19 != (set **)0x0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


