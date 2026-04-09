// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maskY
// Entry Point: 00b513fc
// Size: 180 bytes
// Signature: undefined __thiscall maskY(ClippingMesh * this, float param_1, float param_2, float * param_3, float * param_4, float param_5)


/* ClippingMesh::maskY(float, float, float&, float&, float) const */

uint __thiscall
ClippingMesh::maskY(ClippingMesh *this,float param_1,float param_2,float *param_3,float *param_4,
                   float param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  if (*(int *)(this + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = 0;
    do {
      uVar1 = ClippingUtil::maskY((Vector4 *)
                                  (*(long *)this +
                                  (ulong)*(uint *)(*(long *)(this + 8) + (ulong)(uVar3 + 1) * 4) *
                                  0x10),*(uint *)(*(long *)(this + 8) + (ulong)uVar3 * 4),param_1,
                                  param_2,param_3,param_4,param_5);
      uVar2 = uVar2 | uVar1;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 + 2;
    } while (uVar4 < *(uint *)(this + 0x18));
  }
  return uVar2 & 1;
}


