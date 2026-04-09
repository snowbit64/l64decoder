// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPositionInvScale
// Entry Point: 008c8870
// Size: 76 bytes
// Signature: undefined __cdecl getPositionInvScale(float param_1, bool param_2)


/* IndexedTriangleSetGeometryUtil::getPositionInvScale(float, bool) */

float IndexedTriangleSetGeometryUtil::getPositionInvScale(float param_1,bool param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)param_1;
  uVar3 = 0x1000000;
  if (!param_2) {
    uVar3 = 0x8000;
  }
  if (uVar2 < 0x11) {
    uVar2 = 0x10;
  }
  uVar1 = uVar2 - 1 | uVar2 - 1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  uVar2 = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar3 / uVar2;
  }
  return (float)(ulong)uVar1;
}


