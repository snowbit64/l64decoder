// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCuboid
// Entry Point: 00b7ab14
// Size: 804 bytes
// Signature: undefined __cdecl createCuboid(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6)


/* IndexedTriangleSet::createCuboid(float, float, float, float, float, float) */

undefined8 *
IndexedTriangleSet::createCuboid
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  bool bVar6;
  undefined8 *this;
  void *pvVar7;
  long lVar8;
  undefined8 *puVar9;
  float *pfVar10;
  undefined8 *puVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  ulong uVar15;
  long lVar16;
  ushort *puVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 local_b8;
  float local_b0;
  long local_a8;
  
  lVar4 = tpidr_el0;
  local_a8 = *(long *)(lVar4 + 0x28);
  this = (undefined8 *)operator_new(0x90);
                    /* try { // try from 00b7ab74 to 00b7ab77 has its CatchHandler @ 00b7ae38 */
  TriangleSet::TriangleSet((TriangleSet *)this);
  *(undefined4 *)(this + 0xd) = 0;
  this[0xe] = 0;
  *(undefined4 *)(this + 0xf) = 0;
  this[0x10] = 0;
  *(undefined2 *)(this + 0x11) = 0;
  *(undefined4 *)((long)this + 0x8c) = 0;
  *this = &PTR__IndexedTriangleSet_00fea4b8;
  TriangleSet::setNumVertices((TriangleSet *)this,8,2);
  uVar12 = 0;
  do {
    local_b0 = param_5;
    if ((uVar12 & 4) != 0) {
      local_b0 = param_6;
    }
    bVar6 = (uVar12 & 2) != 0;
    fVar18 = param_3;
    if (bVar6) {
      fVar18 = param_4;
    }
    uVar21 = 0;
    uVar19 = uVar21;
    if (bVar6) {
      uVar19 = 0x3f800000;
    }
    fVar20 = param_1;
    if ((uVar12 & 1) != 0) {
      uVar21 = 0x3f800000;
      fVar20 = param_2;
    }
    local_b8 = CONCAT44(fVar18,fVar20);
    TriangleSet::setPosition((TriangleSet *)this,(float *)&local_b8,uVar12);
    local_b8 = CONCAT44(uVar19,uVar21);
    TriangleSet::setTexCoord((TriangleSet *)this,(float *)&local_b8,0,uVar12);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 8);
  local_b8 = 0;
  local_b0 = 0.0;
  if (*(int *)(this + 0xd) == 0) {
    uVar15 = 0x4c;
    if (0x10000 < *(uint *)(this + 1)) {
      uVar15 = 0x90;
    }
    pvVar7 = operator_new__(uVar15);
    this[0xe] = pvVar7;
    *(undefined4 *)(this + 0xd) = 0x24;
  }
  lVar16 = 8;
  puVar17 = &DAT_005256c8;
  uVar15 = 0;
  do {
    uVar2 = puVar17[-2];
    uVar3 = puVar17[-1];
    uVar1 = *puVar17;
    lVar8 = TriangleSet::getPositions();
    pfVar14 = (float *)(lVar8 + (ulong)uVar2 * 0xc);
    lVar8 = TriangleSet::getPositions();
    pfVar13 = (float *)(lVar8 + (ulong)uVar3 * 0xc);
    lVar8 = TriangleSet::getPositions();
    pfVar10 = (float *)(lVar8 + (ulong)uVar1 * 0xc);
    fVar20 = pfVar14[1];
    fVar18 = pfVar14[2];
    fVar22 = *pfVar13 - *pfVar14;
    fVar23 = (float)NEON_fmadd(pfVar13[2] - fVar18,*pfVar10 - fVar18,fVar22 * -(pfVar10[2] - fVar18)
                              );
    uVar19 = NEON_fmadd(pfVar13[1] - fVar20,pfVar10[2] - fVar18,
                        (pfVar13[2] - fVar18) * -(pfVar10[1] - fVar20));
    uVar21 = NEON_fmadd(fVar22,pfVar10[1] - fVar20,(pfVar13[1] - fVar20) * -(*pfVar10 - fVar18));
    uVar19 = NEON_fmadd(*pfVar14,uVar19,fVar20 * fVar23);
    fVar18 = (float)NEON_fmadd(fVar18,uVar21,uVar19);
    uVar12 = (uint)uVar2;
    uVar5 = (uint)uVar3;
    if (0.0 <= fVar18) {
      uVar12 = (uint)uVar3;
      uVar5 = (uint)uVar2;
    }
    if (*(uint *)(this + 1) < 0x10001) {
      lVar8 = this[0xe];
      *(short *)(lVar8 + uVar15 * 2) = (short)uVar5;
LAB_00b7ac90:
      *(short *)(lVar8 + uVar15 * 2 + 2) = (short)uVar12;
LAB_00b7ac98:
      *(ushort *)(lVar8 + uVar15 * 2 + 4) = uVar1;
    }
    else {
      lVar8 = this[0xe];
      *(uint *)(lVar8 + lVar16 + -8) = uVar5;
      if (*(uint *)(this + 1) < 0x10001) goto LAB_00b7ac90;
      *(uint *)(lVar8 + uVar15 * 4 + 4) = uVar12;
      if (*(uint *)(this + 1) < 0x10001) goto LAB_00b7ac98;
      *(uint *)(lVar8 + lVar16) = (uint)uVar1;
    }
    bVar6 = 0x20 < uVar15;
    lVar16 = lVar16 + 0xc;
    puVar17 = puVar17 + 3;
    uVar15 = uVar15 + 3;
    if (bVar6) {
      if (*(int *)(this + 0xf) == 0) {
        puVar9 = (undefined8 *)operator_new__(8);
        this[0x10] = puVar9;
        *puVar9 = 0;
        *(undefined4 *)(this + 0xf) = 1;
      }
      puVar9 = (undefined8 *)operator_new(0x20);
      *(undefined4 *)(puVar9 + 2) = 0x3f800000;
      puVar11 = (undefined8 *)this[0x10];
      *(undefined8 *)((long)puVar9 + 0x14) = local_b8;
      *(float *)((long)puVar9 + 0x1c) = local_b0;
      puVar9[1] = 0x2400000000;
      *puVar9 = 0x800000000;
      *puVar11 = puVar9;
      if (*(long *)(lVar4 + 0x28) == local_a8) {
        return this;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


