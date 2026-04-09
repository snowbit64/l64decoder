// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeWedge
// Entry Point: 00b705e4
// Size: 360 bytes
// Signature: undefined __cdecl computeWedge(uint param_1, float param_2)


/* Brep::computeWedge(unsigned int, float) const */

void Brep::computeWedge(uint param_1,float param_2)

{
  uint uVar1;
  uint in_w1;
  undefined8 *in_x8;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  lVar4 = *(long *)((ulong)param_1 + 0x2f68);
  uVar1 = in_w1 + 2;
  if ((in_w1 - 1 & 3) != 0) {
    uVar1 = in_w1 - 1;
  }
  *in_x8 = 0;
  in_x8[1] = 0;
  *(undefined4 *)(in_x8 + 2) = 0;
  uVar3 = (ulong)*(ushort *)(lVar4 + (ulong)uVar1 * 8 + 2);
  lVar2 = *(long *)((ulong)param_1 + 0x2f98);
  uVar5 = (ulong)*(ushort *)(lVar4 + (ulong)in_w1 * 8 + 2);
  puVar6 = (undefined8 *)(lVar2 + uVar3 * 0x18);
  if (param_2 <= 0.0) {
    uVar14 = *(undefined4 *)(puVar6 + 1);
    *in_x8 = *puVar6;
    *(undefined4 *)(in_x8 + 1) = uVar14;
  }
  else {
    puVar7 = (undefined8 *)(lVar2 + uVar5 * 0x18);
    if (1.0 <= param_2) {
      uVar14 = *(undefined4 *)(puVar7 + 1);
      *in_x8 = *puVar7;
      *(undefined4 *)(in_x8 + 1) = uVar14;
    }
    else {
      fVar8 = (float)*puVar6;
      fVar10 = (float)((ulong)*puVar6 >> 0x20);
      fVar12 = *(float *)(lVar2 + uVar5 * 0x18 + 8);
      fVar13 = *(float *)(lVar2 + uVar3 * 0x18 + 8);
      *in_x8 = CONCAT44(fVar10 + ((float)((ulong)*puVar7 >> 0x20) - fVar10) * param_2,
                        fVar8 + ((float)*puVar7 - fVar8) * param_2);
      *(float *)(in_x8 + 1) = fVar13 + (fVar12 - fVar13) * param_2;
    }
  }
  fVar12 = *(float *)in_x8;
  fVar8 = *(float *)((long)in_x8 + 4);
  uVar14 = NEON_fmadd(fVar12,fVar12,fVar8 * fVar8);
  fVar10 = *(float *)(in_x8 + 1);
  fVar15 = (float)NEON_fmadd(fVar10,fVar10,uVar14);
  fVar13 = 1.0;
  if (1e-06 < fVar15) {
    fVar13 = 1.0 / SQRT(fVar15);
  }
  puVar6 = (undefined8 *)(lVar2 + uVar3 * 0x18 + 0xc);
  *(float *)in_x8 = fVar12 * fVar13;
  *(float *)((long)in_x8 + 4) = fVar8 * fVar13;
  *(float *)(in_x8 + 1) = fVar10 * fVar13;
  if (0.0 < param_2) {
    puVar7 = (undefined8 *)(lVar2 + uVar5 * 0x18 + 0xc);
    if (param_2 < 1.0) {
      uVar9 = *puVar7;
      uVar11 = *puVar6;
      fVar8 = (float)uVar11;
      fVar10 = (float)((ulong)uVar11 >> 0x20);
      *(ulong *)((long)in_x8 + 0xc) =
           CONCAT44(fVar10 + ((float)((ulong)uVar9 >> 0x20) - fVar10) * param_2,
                    fVar8 + ((float)uVar9 - fVar8) * param_2);
      return;
    }
    *(undefined8 *)((long)in_x8 + 0xc) = *puVar7;
    return;
  }
  *(undefined8 *)((long)in_x8 + 0xc) = *puVar6;
  return;
}


