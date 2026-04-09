// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initGeometry
// Entry Point: 006fa17c
// Size: 2588 bytes
// Signature: undefined __thiscall initGeometry(BillboardShape * this, GsShape * param_1, basic_string * param_2)


/* BillboardShape::initGeometry(GsShape*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall
BillboardShape::initGeometry(BillboardShape *this,GsShape *param_1,basic_string *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  TriangleSet *this_00;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  ulong uVar14;
  ushort *puVar15;
  uint *puVar16;
  float *pfVar17;
  void *pvVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  if (*(long *)(param_1 + 0x170) != 0) {
    this_00 = (TriangleSet *)Geometry::getCollisionProxyMesh();
    if ((((this_00 != (TriangleSet *)0x0) && (iVar9 = TriangleSet::getNumVertices(), iVar9 == 4)) &&
        (iVar9 = IndexedTriangleSet::getNumIndices(), iVar9 == 6)) &&
       (uVar10 = TriangleSet::getAttributes(), (uVar10 >> 1 & 1) != 0)) {
      puVar12 = (undefined8 *)TriangleSet::getPositions();
      local_b8 = *puVar12;
      local_b0 = *(float *)(puVar12 + 1);
      lVar13 = TriangleSet::getPositions();
      local_ac = *(undefined8 *)(lVar13 + 0xc);
      local_a4 = *(undefined4 *)(lVar13 + 0x14);
      lVar13 = TriangleSet::getPositions();
      local_a0 = *(undefined8 *)(lVar13 + 0x18);
      local_98 = *(undefined4 *)(lVar13 + 0x20);
      lVar13 = TriangleSet::getPositions();
      local_94 = *(undefined8 *)(lVar13 + 0x24);
      local_8c = *(undefined4 *)(lVar13 + 0x2c);
      uVar14 = IndexedTriangleSet::is16Bit();
      if ((uVar14 & 1) == 0) {
        puVar16 = (uint *)IndexedTriangleSet::getIndices32();
        uVar10 = *puVar16;
        lVar13 = IndexedTriangleSet::getIndices32();
        uVar20 = *(uint *)(lVar13 + 4);
        lVar13 = IndexedTriangleSet::getIndices32();
        uVar21 = *(uint *)(lVar13 + 8);
        IndexedTriangleSet::getIndices32();
        IndexedTriangleSet::getIndices32();
        IndexedTriangleSet::getIndices32();
      }
      else {
        puVar15 = (ushort *)IndexedTriangleSet::getIndices16();
        uVar10 = (uint)*puVar15;
        lVar13 = IndexedTriangleSet::getIndices16();
        uVar20 = (uint)*(ushort *)(lVar13 + 2);
        lVar13 = IndexedTriangleSet::getIndices16();
        uVar21 = (uint)*(ushort *)(lVar13 + 4);
        IndexedTriangleSet::getIndices16();
        IndexedTriangleSet::getIndices16();
        IndexedTriangleSet::getIndices16();
      }
      lVar13 = (ulong)uVar20 * 0xc;
      lVar3 = (ulong)uVar10 * 0xc;
      lVar4 = (ulong)uVar21 * 0xc;
      fVar24 = *(float *)((long)&local_b8 + lVar3);
      fVar25 = *(float *)((long)&local_b8 + lVar3 + 4);
      fVar31 = *(float *)((long)&local_b8 + lVar13) - fVar24;
      fVar23 = *(float *)((long)&local_b8 + lVar13 + 4) - fVar25;
      fVar25 = *(float *)((long)&local_b8 + lVar4 + 4) - fVar25;
      fVar24 = *(float *)((long)&local_b8 + lVar4) - fVar24;
      fVar29 = (&local_b0)[(ulong)uVar20 * 3] - (&local_b0)[(ulong)uVar10 * 3];
      fVar33 = (&local_b0)[(ulong)uVar21 * 3] - (&local_b0)[(ulong)uVar10 * 3];
      fVar22 = (float)NEON_fmadd(fVar29,fVar24,fVar33 * -fVar31);
      fVar29 = (float)NEON_fmadd(fVar23,fVar33,fVar25 * -fVar29);
      fVar23 = (float)NEON_fmadd(fVar31,fVar25,fVar24 * -fVar23);
      uVar26 = NEON_fmadd(fVar29,fVar29,fVar22 * fVar22);
      fVar25 = (float)NEON_fmadd(fVar23,fVar23,uVar26);
      fVar24 = 1.0;
      if (1e-06 < fVar25) {
        fVar24 = 1.0 / SQRT(fVar25);
      }
      *(float *)(this + 0x38) = fVar29 * fVar24;
      *(float *)(this + 0x3c) = fVar22 * fVar24;
      *(float *)(this + 0x40) = fVar23 * fVar24;
      pfVar17 = (float *)TriangleSet::getTexCoords(this_00,0);
      fVar23 = *pfVar17;
      fVar22 = pfVar17[1];
      if (((0.015 <= fVar23 || fVar23 <= -0.015) || (0.015 <= fVar22)) || (fVar22 <= -0.015)) {
        if (((fVar23 < 1.015 && 0.985 < fVar23) && (fVar22 < 0.015)) && (-0.015 < fVar22)) {
          lVar13 = 1;
          goto LAB_006fa52c;
        }
        if (((fVar23 < 1.015 && 0.985 < fVar23) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 2;
          goto LAB_006fa52c;
        }
        iVar9 = 0;
        if (((0.015 > fVar23 && fVar23 > -0.015) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 3;
          goto LAB_006fa52c;
        }
      }
      else {
        lVar13 = 0;
LAB_006fa52c:
        iVar9 = 1;
        *(undefined8 *)(this + lVar13 * 0xc + 0x44) = local_b8;
        *(float *)(this + lVar13 * 0xc + 0x4c) = local_b0;
      }
      fVar23 = pfVar17[2];
      fVar22 = pfVar17[3];
      if (((0.015 <= fVar23 || fVar23 <= -0.015) || (0.015 <= fVar22)) || (fVar22 <= -0.015)) {
        if (((fVar23 < 1.015 && 0.985 < fVar23) && (fVar22 < 0.015)) && (-0.015 < fVar22)) {
          lVar13 = 1;
          goto LAB_006fa68c;
        }
        if (((fVar23 < 1.015 && 0.985 < fVar23) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 2;
          goto LAB_006fa68c;
        }
        if (((0.015 > fVar23 && fVar23 > -0.015) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 3;
          goto LAB_006fa68c;
        }
      }
      else {
        lVar13 = 0;
LAB_006fa68c:
        iVar9 = iVar9 + 1;
        *(undefined8 *)(this + lVar13 * 0xc + 0x44) = local_ac;
        *(undefined4 *)(this + lVar13 * 0xc + 0x4c) = local_a4;
      }
      fVar23 = pfVar17[4];
      fVar22 = pfVar17[5];
      if (((0.015 <= fVar23 || fVar23 <= -0.015) || (0.015 <= fVar22)) || (fVar22 <= -0.015)) {
        if (((fVar23 < 1.015 && 0.985 < fVar23) && (fVar22 < 0.015)) && (-0.015 < fVar22)) {
          lVar13 = 1;
          goto LAB_006fa7e8;
        }
        if (((fVar23 < 1.015 && 0.985 < fVar23) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 2;
          goto LAB_006fa7e8;
        }
        if (((0.015 > fVar23 && fVar23 > -0.015) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 3;
          goto LAB_006fa7e8;
        }
      }
      else {
        lVar13 = 0;
LAB_006fa7e8:
        iVar9 = iVar9 + 1;
        *(undefined8 *)(this + lVar13 * 0xc + 0x44) = local_a0;
        *(undefined4 *)(this + lVar13 * 0xc + 0x4c) = local_98;
      }
      fVar23 = pfVar17[6];
      fVar22 = pfVar17[7];
      if (((0.015 <= fVar23 || fVar23 <= -0.015) || (0.015 <= fVar22)) || (fVar22 <= -0.015)) {
        if (((fVar23 < 1.015 && 0.985 < fVar23) && (fVar22 < 0.015)) && (-0.015 < fVar22)) {
          lVar13 = 1;
          goto LAB_006fa944;
        }
        if (((fVar23 < 1.015 && 0.985 < fVar23) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 2;
          goto LAB_006fa944;
        }
        if (((0.015 > fVar23 && fVar23 > -0.015) && fVar22 < 1.015) && (0.985 < fVar22)) {
          lVar13 = 3;
          goto LAB_006fa944;
        }
      }
      else {
        lVar13 = 0;
LAB_006fa944:
        iVar9 = iVar9 + 1;
        *(undefined8 *)(this + lVar13 * 0xc + 0x44) = local_94;
        *(undefined4 *)(this + lVar13 * 0xc + 0x4c) = local_8c;
      }
      if (iVar9 == 4) {
        fVar25 = (float)*(undefined8 *)(this + 0x44);
        fVar22 = (float)*(undefined8 *)(this + 0x50) - fVar25;
        fVar30 = (float)((ulong)*(undefined8 *)(this + 0x44) >> 0x20);
        fVar24 = (float)((ulong)*(undefined8 *)(this + 0x50) >> 0x20) - fVar30;
        fVar29 = *(float *)(this + 0x58) - *(float *)(this + 0x4c);
        fVar32 = *(float *)(this + 0x70) - *(float *)(this + 0x4c);
        fVar27 = (float)NEON_fmadd(fVar29,fVar29,fVar24 * fVar24 + fVar22 * fVar22);
        fVar25 = (float)*(undefined8 *)(this + 0x68) - fVar25;
        fVar30 = (float)((ulong)*(undefined8 *)(this + 0x68) >> 0x20) - fVar30;
        fVar23 = SQRT(fVar27);
        fVar34 = (float)NEON_fmadd(fVar32,fVar32,fVar30 * fVar30 + fVar25 * fVar25);
        fVar33 = SQRT(fVar34);
        fVar35 = fVar23 / fVar33;
        fVar31 = 1.0 / fVar23;
        fVar28 = ABS(fVar35 + -0.6666667);
        fVar38 = ABS(fVar35 + -1.5);
        fVar36 = 1.0 / fVar33;
        if (fVar27 <= 1e-06) {
          fVar31 = 1.0;
        }
        if (fVar34 <= 1e-06) {
          fVar36 = 1.0;
        }
        fVar27 = fVar38;
        if (fVar28 <= fVar38) {
          fVar27 = fVar28;
        }
        bVar6 = ABS(fVar35 + -4.0) < fVar27;
        fVar34 = ABS(fVar35 + -4.0);
        if (!bVar6) {
          fVar34 = fVar27;
        }
        bVar7 = fVar34 <= ABS(fVar35 + -2.0);
        fVar27 = ABS(fVar35 + -2.0);
        if (bVar7) {
          fVar27 = fVar34;
        }
        iVar9 = 3;
        if (bVar7) {
          iVar9 = (uint)bVar6 << 1;
        }
        bVar8 = fVar27 <= ABS(fVar35 + -0.5);
        iVar2 = 4;
        if (bVar8) {
          iVar2 = iVar9;
        }
        if (((fVar28 <= fVar38 && !bVar6) && bVar7) && bVar8) {
          iVar2 = 1;
        }
        *(int *)(this + 0x24) = iVar2;
        if (fVar23 <= fVar33) {
          uVar20 = 2;
          uVar10 = (uint)((fVar33 + fVar33) / fVar23);
        }
        else {
          uVar10 = 2;
          uVar20 = (uint)((fVar23 + fVar23) / fVar33);
        }
        pvVar18 = operator_new__((ulong)((uVar20 + 1) * (uVar10 + 1) + (uVar10 + 1 >> 1)) * 0xc);
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar34 = 0.0;
        uVar21 = 0;
        iVar9 = *(int *)(this + 0x80);
        fVar33 = fVar33 / (float)(ulong)uVar10;
        *(void **)(this + 0x78) = pvVar18;
        fVar23 = fVar23 / (float)(ulong)uVar20;
        do {
          uVar19 = 0;
          fVar35 = 0.0;
          uVar1 = uVar20;
          if ((uVar21 & 1) != 0) {
            fVar35 = fVar23 * -0.5;
            uVar1 = uVar20 + 1;
          }
          do {
            fVar38 = fVar23 * (float)(ulong)uVar20;
            if (uVar1 != uVar19) {
              fVar38 = fVar35;
            }
            bVar6 = uVar19 != 0;
            puVar12 = (undefined8 *)((long)pvVar18 + (ulong)(iVar9 + uVar19) * 0xc);
            uVar19 = uVar19 + 1;
            fVar37 = 0.0;
            if (bVar6) {
              fVar37 = fVar38;
            }
            *puVar12 = CONCAT44(fVar28 + fVar24 * fVar31 * fVar37,fVar27 + fVar22 * fVar31 * fVar37)
            ;
            *(float *)(puVar12 + 1) = fVar34 + fVar29 * fVar31 * fVar37;
            fVar35 = fVar23 + fVar35;
          } while (uVar19 <= uVar1);
          fVar27 = fVar25 * fVar36 * fVar33 + fVar27;
          fVar28 = fVar30 * fVar36 * fVar33 + fVar28;
          fVar34 = fVar32 * fVar36 * fVar33 + fVar34;
          uVar21 = uVar21 + 1;
          iVar9 = iVar9 + uVar19;
        } while (uVar21 <= uVar10);
        uVar11 = 1;
        *(int *)(this + 0x80) = iVar9;
        goto LAB_006fa20c;
      }
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)param_2);
  }
  uVar11 = 0;
LAB_006fa20c:
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}


