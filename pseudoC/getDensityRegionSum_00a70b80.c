// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getDensityRegionSum
// Entry Point: 00a70b80
// Size: 264 bytes
// Signature: undefined __thiscall getDensityRegionSum(TerrainDataPlane * this, float param_1, float param_2, float param_3, float param_4, uint param_5, uint param_6)


/* TerrainDataPlane::getDensityRegionSum(float, float, float, float, unsigned int, unsigned int) */

undefined4 __thiscall
TerrainDataPlane::getDensityRegionSum
          (TerrainDataPlane *this,float param_1,float param_2,float param_3,float param_4,
          uint param_5,uint param_6)

{
  long lVar1;
  undefined4 uVar2;
  OPERATION OVar3;
  undefined **local_a0 [6];
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  DensityMapModifier::DensityMapModifier
            ((DensityMapModifier *)local_a0,*(DensityMap **)(this + 0x50));
  local_a0[0] = &PTR__DensityMapModifier_00fdba88;
                    /* try { // try from 00a70be8 to 00a70bef has its CatchHandler @ 00a70c8c */
  local_70 = DensityMap::getPolygonRoundingMode();
  OVar3 = *(OPERATION *)(this + 0x84);
  if (OVar3 != 2) {
    OVar3 = (OPERATION)(OVar3 == 1);
  }
                    /* try { // try from 00a70c34 to 00a70c43 has its CatchHandler @ 00a70c88 */
  uVar2 = DensityMapOldOperations::getDensityRegionSum
                    ((DensityMapOldOperations *)local_a0,(int)(param_1 + 0.5),(int)(param_2 + 0.5),
                     (int)(param_3 + 0.5),(int)(param_4 + 0.5),*(int *)(this + 0x7c) + param_5,
                     param_6,OVar3,*(uint *)(this + 0x80));
  DensityMapModifier::~DensityMapModifier((DensityMapModifier *)local_a0);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


