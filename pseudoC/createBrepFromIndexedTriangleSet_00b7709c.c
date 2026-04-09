// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBrepFromIndexedTriangleSet
// Entry Point: 00b7709c
// Size: 720 bytes
// Signature: undefined __cdecl createBrepFromIndexedTriangleSet(IndexedTriangleSet * param_1, bool param_2, bool param_3)


/* BrepUtil::createBrepFromIndexedTriangleSet(IndexedTriangleSet const*, bool, bool) */

long * BrepUtil::createBrepFromIndexedTriangleSet
                 (IndexedTriangleSet *param_1,bool param_2,bool param_3)

{
  float *pfVar1;
  long lVar2;
  undefined6 uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  BrepWedge *__s;
  undefined6 *puVar9;
  BrepTriangle *pBVar10;
  long *this;
  Vector3 *pVVar11;
  float *pfVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined2 local_7c;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar7 = IndexedTriangleSet::is16Bit();
  if ((uVar7 & 1) != 0) {
    uVar7 = TriangleSet::getNormals();
    uVar8 = TriangleSet::getTexCoords((TriangleSet *)param_1,0);
    if ((uVar7 | uVar8) == 0) {
      __s = (BrepWedge *)0x0;
      uVar14 = 0;
    }
    else {
      uVar5 = TriangleSet::getNumVertices();
      uVar14 = (ulong)uVar5;
      uVar15 = (uVar14 + (ulong)uVar5 * 4) * 4;
      __s = (BrepWedge *)operator_new__(uVar15);
      if (uVar5 != 0) {
        memset(__s,0,((uVar15 - 0x14) / 0x14) * 0x14 + 0x14);
        uVar15 = 0;
        do {
          if (uVar7 != 0) {
            pfVar1 = (float *)(uVar7 + (ulong)(uint)((int)uVar15 * 3) * 4);
            pfVar12 = (float *)(__s + uVar15 * 0x14);
            fVar17 = *pfVar1;
            *pfVar12 = fVar17;
            fVar16 = pfVar1[1];
            pfVar12[1] = fVar16;
            uVar19 = NEON_fmadd(fVar17,fVar17,fVar16 * fVar16);
            fVar18 = pfVar1[2];
            fVar21 = (float)NEON_fmadd(fVar18,fVar18,uVar19);
            pfVar12[2] = fVar18;
            fVar20 = 1.0;
            if (1e-06 < fVar21) {
              fVar20 = 1.0 / SQRT(fVar21);
            }
            *pfVar12 = fVar17 * fVar20;
            pfVar12[1] = fVar16 * fVar20;
            pfVar12[2] = fVar18 * fVar20;
          }
          if (uVar8 != 0) {
            puVar13 = (undefined4 *)(uVar8 + (ulong)(uint)((int)uVar15 << 1) * 4);
            *(undefined4 *)(__s + uVar15 * 0x14 + 0xc) = *puVar13;
            *(undefined4 *)(__s + uVar15 * 0x14 + 0x10) = puVar13[1];
          }
          uVar15 = uVar15 + 1;
        } while (uVar15 != uVar14);
      }
    }
    uVar6 = IndexedTriangleSet::getNumIndices();
    puVar9 = (undefined6 *)IndexedTriangleSet::getIndices16();
    pBVar10 = (BrepTriangle *)operator_new__(((ulong)uVar6 / 3) * 0x14);
    uVar5 = uVar6 / 3;
    if (2 < uVar6) {
      if (uVar6 / 3 < 2) {
        uVar5 = 1;
      }
      uVar7 = (ulong)uVar5;
      puVar13 = (undefined4 *)(pBVar10 + 0x10);
      do {
        local_78 = *(undefined4 *)puVar9;
        uVar7 = uVar7 - 1;
        uStack_74 = *(undefined2 *)((long)puVar9 + 4);
        uVar3 = *puVar9;
        puVar9 = (undefined6 *)((long)puVar9 + 6);
        *(undefined2 *)(puVar13 + -1) = 0;
        *(undefined4 *)((ulong)&local_78 | 6) = local_78;
        *(undefined2 *)((undefined4 *)((ulong)&local_78 | 6) + 1) = uStack_74;
        *(undefined2 *)((long)puVar13 + -2) = local_7c;
        *(ulong *)(puVar13 + -4) = CONCAT26(uStack_72,uVar3);
        puVar13[-2] = local_70;
        *puVar13 = 0;
        puVar13 = puVar13 + 5;
      } while (uVar7 != 0);
    }
    this = (long *)operator_new(0x2fb8);
                    /* try { // try from 00b772b0 to 00b772f7 has its CatchHandler @ 00b7736c */
    uVar4 = TriangleSet::getNumVertices();
    pVVar11 = (Vector3 *)TriangleSet::getPositions();
    Brep::Brep((Brep *)this,uVar4,pVVar11,(ushort)uVar14,__s,uVar6 / 3,pBVar10,param_2,param_3,
               (Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
    if (__s != (BrepWedge *)0x0) {
      operator_delete__(__s);
    }
    operator_delete__(pBVar10);
    if ((int)((ulong)(this[0x5ee] - this[0x5ed]) >> 5) != 0) goto LAB_00b77334;
    (**(code **)(*this + 8))(this);
  }
  this = (long *)0x0;
LAB_00b77334:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


