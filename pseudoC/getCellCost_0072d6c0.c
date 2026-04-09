// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCellCost
// Entry Point: 0072d6c0
// Size: 156 bytes
// Signature: undefined __cdecl getCellCost(Vector2 param_1)


/* VehicleNavigationMapGenerator::getCellCost(Vector2) */

undefined4
VehicleNavigationMapGenerator::getCellCost(undefined4 param_1,undefined4 param_2,long param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  lVar7 = *(long *)(param_3 + 0x108);
  fVar10 = 1.0 / *(float *)(param_3 + 0x60);
  uVar1 = *(ushort *)(lVar7 + 0x24);
  uVar11 = NEON_ucvtf(*(undefined4 *)(lVar7 + 0xc4));
  uVar12 = NEON_ucvtf(*(undefined4 *)(lVar7 + 200));
  fVar8 = (float)NEON_fmadd(uVar11,0x3f000000,param_1);
  fVar9 = (float)NEON_fmadd(uVar12,0x3f000000,param_2);
  iVar5 = (int)(fVar8 * fVar10);
  iVar6 = (int)(fVar9 * fVar10);
  bVar2 = false;
  bVar3 = false;
  if (iVar5 < (int)(uint)uVar1) {
    bVar3 = SBORROW4(iVar6,(uint)uVar1);
    bVar2 = (int)(iVar6 - (uint)uVar1) < 0;
  }
  if (bVar2 == bVar3) {
    uVar11 = 0x7f800000;
  }
  else {
    uVar4 = VehicleNavigationMap::getCellCost
                      ((VehicleNavigationMap *)(lVar7 + 0x10),(ushort)iVar5,(ushort)iVar6);
    uVar12 = NEON_fmadd((float)(ulong)(uVar4 & 0xff),0x3d71e3c8,0x3f800000);
    uVar11 = 0x7f800000;
    if ((uVar4 & 0xff) != 0xff) {
      uVar11 = uVar12;
    }
  }
  return uVar11;
}


