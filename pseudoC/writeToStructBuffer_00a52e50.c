// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: writeToStructBuffer
// Entry Point: 00a52e50
// Size: 128 bytes
// Signature: undefined __thiscall writeToStructBuffer(GsShape * this, float * param_1, uint param_2, MaterialShader * param_3)


/* GsShape::writeToStructBuffer(float*, unsigned int, MaterialShader const*) const */

void __thiscall
GsShape::writeToStructBuffer(GsShape *this,float *param_1,uint param_2,MaterialShader *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)(this + 0x1f8);
  if (((lVar8 != 0) && (uVar6 = *(ushort *)(param_3 + 0xe), (ulong)uVar6 != 0xffff)) &&
     (uVar5 = *(uint *)(lVar8 + 0x20), uVar5 != 0)) {
    lVar4 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(lVar8 + 0x18);
    uVar7 = 0;
    do {
      puVar1 = (undefined8 *)(param_1 + (ulong)uVar6 + uVar7 * 2);
      lVar9 = (uVar7 & 0xfffffff8) * 4;
      uVar7 = uVar7 + 8;
      puVar2 = (undefined8 *)(lVar4 + lVar9);
      puVar3 = (undefined8 *)(lVar8 + lVar9);
      uVar13 = *puVar2;
      uVar12 = puVar2[3];
      uVar11 = puVar2[2];
      puVar1[1] = puVar2[1];
      *puVar1 = uVar13;
      puVar1[3] = uVar12;
      puVar1[2] = uVar11;
      uVar13 = *puVar3;
      uVar12 = puVar3[3];
      uVar11 = puVar3[2];
      puVar1[5] = puVar3[1];
      puVar1[4] = uVar13;
      puVar1[7] = uVar12;
      puVar1[6] = uVar11;
    } while ((ulong)uVar5 * 8 - uVar7 != 0);
  }
  if ((ulong)*(ushort *)(param_3 + 0x24) != 0xffff) {
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(this + 0x194));
    param_1[*(ushort *)(param_3 + 0x24)] = fVar10;
  }
  return;
}


