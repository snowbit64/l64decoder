// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setupVertexLayout
// Entry Point: 008e0cb4
// Size: 256 bytes
// Signature: undefined __thiscall setupVertexLayout(IndexedTriangleSetGeometry * this, uint param_1, uint * param_2)


/* IndexedTriangleSetGeometry::setupVertexLayout(unsigned int, unsigned int*) */

void __thiscall
IndexedTriangleSetGeometry::setupVertexLayout
          (IndexedTriangleSetGeometry *this,uint param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)(this + 0x38);
  uVar3 = uVar1 & *param_2;
  if (uVar3 != 0) {
    *param_2 = uVar3;
    uVar3 = 1;
    uVar1 = *(uint *)(this + 0x38);
  }
  uVar4 = uVar3;
  if ((uVar1 & param_2[1]) != 0) {
    uVar4 = uVar3 + 1;
    param_2[uVar3] = uVar1 & param_2[1];
    uVar1 = *(uint *)(this + 0x38);
  }
  uVar3 = uVar4;
  if ((uVar1 & param_2[2]) != 0) {
    uVar3 = uVar4 + 1;
    param_2[uVar4] = uVar1 & param_2[2];
    uVar1 = *(uint *)(this + 0x38);
  }
  if ((uVar1 & param_2[3]) == 0) {
    if (uVar3 != 0) goto LAB_008e0d30;
    *(undefined4 *)(this + (ulong)param_1 * 0x10 + 0x68) = 0;
LAB_008e0d78:
    *(undefined4 *)(this + (ulong)param_1 * 0x10 + 0x6c) = 0;
  }
  else {
    param_2[uVar3] = uVar1 & param_2[3];
    uVar3 = uVar3 + 1;
LAB_008e0d30:
    uVar2 = (ulong)param_1;
    *(uint *)(this + uVar2 * 0x10 + 0x68) = *param_2;
    if (uVar3 < 2) goto LAB_008e0d78;
    *(uint *)(this + uVar2 * 0x10 + 0x6c) = param_2[1];
    if (uVar3 != 2) {
      *(uint *)(this + uVar2 * 0x10 + 0x70) = param_2[2];
      if (uVar3 < 4) {
        uVar3 = 0;
      }
      else {
        uVar3 = param_2[3];
      }
      goto LAB_008e0d8c;
    }
  }
  uVar3 = 0;
  *(undefined4 *)(this + (ulong)param_1 * 0x10 + 0x70) = 0;
LAB_008e0d8c:
  uVar1 = *(uint *)(this + 0x148);
  if (uVar1 < param_1 + 1) {
    uVar1 = param_1 + 1;
  }
  *(uint *)(this + (ulong)param_1 * 0x10 + 0x74) = uVar3;
  *(uint *)(this + 0x148) = uVar1;
  return;
}


