// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: computeSplit
// Entry Point: 00b6fc88
// Size: 216 bytes
// Signature: undefined __cdecl computeSplit(uint param_1, ushort param_2, ushort param_3, float param_4, float param_5)


/* Brep::computeSplit(unsigned int, unsigned short, unsigned short, float, float) const */

void Brep::computeSplit(uint param_1,ushort param_2,ushort param_3,float param_4,float param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort in_w3;
  undefined8 *in_x8;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = param_5;
  uVar5 = in_w3;
  uVar4 = param_3;
  if (in_w3 < param_3) {
    fVar6 = param_4;
    param_4 = param_5;
    uVar5 = param_3;
    uVar4 = in_w3;
  }
  lVar3 = *(long *)((ulong)param_1 + 0x2ef0);
  puVar1 = (undefined8 *)(lVar3 + (ulong)uVar4 * 0x10);
  fVar6 = param_4 / (param_4 - fVar6);
  if (fVar6 <= 0.0) {
    uVar8 = *puVar1;
    fVar10 = *(float *)(lVar3 + (ulong)uVar4 * 0x10 + 8);
  }
  else {
    puVar2 = (undefined8 *)(lVar3 + (ulong)uVar5 * 0x10);
    uVar8 = *puVar2;
    if (1.0 <= fVar6) {
      fVar10 = *(float *)(puVar2 + 1);
    }
    else {
      uVar8 = *puVar1;
      fVar10 = *(float *)(lVar3 + (ulong)uVar4 * 0x10 + 8);
      fVar7 = (float)uVar8;
      fVar9 = (float)((ulong)uVar8 >> 0x20);
      uVar8 = CONCAT44(fVar9 + (*(float *)((long)puVar2 + 4) - fVar9) * fVar6,
                       fVar7 + (*(float *)puVar2 - fVar7) * fVar6);
      fVar10 = fVar10 + fVar6 * (*(float *)(puVar2 + 1) - fVar10);
    }
  }
  *in_x8 = uVar8;
  *(float *)(in_x8 + 1) = fVar10;
  *(uint *)(in_x8 + 2) = (uint)param_2;
  *(undefined2 *)((long)in_x8 + 0x14) = 0xffff;
  fVar10 = 1.0 - fVar6;
  if (param_3 <= in_w3) {
    fVar10 = fVar6;
  }
  *(float *)((long)in_x8 + 0xc) = fVar10;
  return;
}


