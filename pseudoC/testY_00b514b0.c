// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: testY
// Entry Point: 00b514b0
// Size: 172 bytes
// Signature: undefined __thiscall testY(ClippingMesh * this, float param_1, float param_2)


/* ClippingMesh::testY(float, float) const */

bool __thiscall ClippingMesh::testY(ClippingMesh *this,float param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  bool bVar8;
  float fVar9;
  
  uVar1 = *(uint *)(this + 0x18);
  if (uVar1 == 0) {
    return false;
  }
  uVar5 = 0;
  bVar4 = true;
  do {
    uVar2 = *(uint *)(*(long *)(this + 8) + (ulong)(uint)((int)uVar5 << 1) * 4);
    uVar6 = (ulong)uVar2;
    if (2 < uVar2) {
      bVar8 = true;
      bVar3 = 1;
      pfVar7 = (float *)(*(long *)this + 4 +
                        (ulong)*(uint *)(*(long *)(this + 8) + (ulong)((int)uVar5 << 1 | 1) * 4) *
                        0x10);
      do {
        fVar9 = *pfVar7;
        if ((fVar9 >= param_1) && (!bVar8)) {
          return bVar4;
        }
        bVar3 = fVar9 < param_1 & bVar3;
        if (!(bool)(param_2 < fVar9 | bVar3)) {
          return bVar4;
        }
        pfVar7 = pfVar7 + 4;
        uVar6 = uVar6 - 1;
        bVar8 = (bool)(param_2 < fVar9 & bVar8);
      } while (uVar6 != 0);
    }
    uVar5 = uVar5 + 1;
    bVar4 = uVar5 < uVar1;
    if (uVar5 == uVar1) {
      return bVar4;
    }
  } while( true );
}


