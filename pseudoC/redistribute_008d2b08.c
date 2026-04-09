// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: redistribute
// Entry Point: 008d2b08
// Size: 464 bytes
// Signature: undefined __thiscall redistribute(VertexFormat * this, uint param_1, uint param_2, ushort param_3)


/* FillPlaneGeometry::VertexFormat::redistribute(unsigned int, unsigned int, unsigned short) */

void __thiscall
FillPlaneGeometry::VertexFormat::redistribute
          (VertexFormat *this,uint param_1,uint param_2,ushort param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar7 = param_2;
  if (*(float *)(this + (ulong)param_1 * 4 + 8) <= *(float *)(this + (ulong)param_2 * 4 + 8)) {
    uVar7 = param_1;
  }
  if (*(float *)(this + (ulong)param_1 * 4 + 8) <= *(float *)(this + (ulong)param_2 * 4 + 8)) {
    param_1 = param_2;
  }
  uVar9 = (ulong)param_1;
  lVar10 = (ulong)uVar7 * 4;
  lVar11 = uVar9 * 4;
  *(float *)(this + lVar11 + 8) = *(float *)(this + lVar11 + 8) - *(float *)(this + lVar10 + 8);
  *(float *)(this + lVar10 + 8) = *(float *)(this + lVar10 + 8) + *(float *)(this + lVar10 + 8);
  fVar14 = *(float *)(this + lVar11 + 8);
  *(ushort *)(this + (ulong)uVar7 * 2 + 0x14) = param_3;
  if (1e-05 <= fVar14) {
    return;
  }
  if (param_1 != 2) {
    uVar7 = 2 - param_1;
    if ((0xf < uVar7) && (param_1 < 2)) {
      lVar11 = (ulong)(1 - param_1) * 2;
      lVar13 = (ulong)(param_1 + 1) * 2;
      lVar10 = (ulong)(1 - param_1) * 4;
      lVar12 = (ulong)(param_1 + 1) * 4;
      if ((this + lVar13 + lVar11 + 0x16 <= this + uVar9 * 2 + 0x14 ||
           this + uVar9 * 2 + lVar11 + 0x16 <= this + lVar13 + 0x14) &&
         (this + lVar12 + lVar10 + 0xc <= this + uVar9 * 4 + 8 ||
          this + uVar9 * 4 + lVar10 + 0xc <= this + lVar12 + 8)) {
        uVar6 = uVar7 & 0xfffffff0;
        uVar8 = uVar6;
        do {
          uVar5 = (int)uVar9 + 1;
          uVar8 = uVar8 - 0x10;
          puVar1 = (undefined8 *)(this + (ulong)uVar5 * 2 + 0x14);
          puVar2 = (undefined8 *)(this + (ulong)uVar5 * 4 + 8);
          puVar3 = (undefined8 *)(this + uVar9 * 2 + 0x14);
          uVar16 = *puVar1;
          uVar18 = puVar1[3];
          uVar17 = puVar1[2];
          puVar4 = (undefined8 *)(this + uVar9 * 4 + 8);
          uVar9 = (ulong)((int)uVar9 + 0x10);
          uVar20 = puVar2[1];
          uVar19 = *puVar2;
          uVar22 = puVar2[3];
          uVar21 = puVar2[2];
          puVar3[1] = puVar1[1];
          *puVar3 = uVar16;
          puVar3[3] = uVar18;
          puVar3[2] = uVar17;
          uVar23 = puVar2[5];
          uVar18 = puVar2[4];
          puVar4[1] = uVar20;
          *puVar4 = uVar19;
          puVar4[3] = uVar22;
          puVar4[2] = uVar21;
          uVar17 = puVar2[7];
          uVar16 = puVar2[6];
          puVar4[5] = uVar23;
          puVar4[4] = uVar18;
          puVar4[7] = uVar17;
          puVar4[6] = uVar16;
        } while (uVar8 != 0);
        param_1 = param_1 + uVar6;
        if (uVar7 == uVar6) goto LAB_008d2cc8;
      }
    }
    do {
      uVar7 = param_1 + 1;
      uVar15 = *(undefined4 *)(this + (ulong)uVar7 * 4 + 8);
      *(undefined2 *)(this + (ulong)param_1 * 2 + 0x14) =
           *(undefined2 *)(this + (ulong)uVar7 * 2 + 0x14);
      *(undefined4 *)(this + (ulong)param_1 * 4 + 8) = uVar15;
      param_1 = uVar7;
    } while (uVar7 != 2);
  }
LAB_008d2cc8:
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x18) = 0xffff;
  return;
}


