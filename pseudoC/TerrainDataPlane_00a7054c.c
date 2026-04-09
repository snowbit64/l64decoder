// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainDataPlane
// Entry Point: 00a7054c
// Size: 376 bytes
// Signature: undefined __thiscall TerrainDataPlane(TerrainDataPlane * this, DATA_PLANE_TYPE param_1, char * param_2, TerrainDetailTransformGroupDesc * param_3, TerrainTransformGroup * param_4)


/* TerrainDataPlane::TerrainDataPlane(TerrainDataPlane::DATA_PLANE_TYPE, char const*,
   TerrainDetailTransformGroupDesc const&, TerrainTransformGroup*) */

void __thiscall
TerrainDataPlane::TerrainDataPlane
          (TerrainDataPlane *this,DATA_PLANE_TYPE param_1,char *param_2,
          TerrainDetailTransformGroupDesc *param_3,TerrainTransformGroup *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  DensityMapModifier *this_00;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  
  Entity::Entity((Entity *)this,param_2,true);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(DATA_PLANE_TYPE *)(this + 0x20) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__TerrainDataPlane_00fe3dd0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x800000000000;
                    /* try { // try from 00a705ac to 00a705b7 has its CatchHandler @ 00a706d4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x28));
  lVar6 = *(long *)(param_3 + 0x10);
  *(TerrainTransformGroup **)(this + 0x40) = param_4;
  *(undefined8 *)(this + 0x48) = 0;
  *(long *)(this + 0x50) = lVar6;
  FUN_00f276d0(1,lVar6 + 8);
                    /* try { // try from 00a705d4 to 00a705e3 has its CatchHandler @ 00a706d4 */
  DensityMap::setPolygonRoundingMode(*(DensityMap **)(this + 0x50),0);
  this_00 = (DensityMapModifier *)operator_new(0x30);
                    /* try { // try from 00a705ec to 00a705ef has its CatchHandler @ 00a706c4 */
  DensityMapModifier::DensityMapModifier(this_00,*(DensityMap **)(this + 0x50));
  fVar7 = *(float *)param_3;
  *(DensityMapModifier **)(this + 0x58) = this_00;
  uVar1 = (int)fVar7 - 1U | (int)fVar7 - 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  iVar2 = uVar1 + 1;
  if (uVar1 == 0xffffffff) {
    iVar2 = 1;
  }
  *(int *)(this + 100) = iVar2;
                    /* try { // try from 00a70624 to 00a706a3 has its CatchHandler @ 00a706d8 */
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(this + 100));
  *(float *)(this + 0x60) = fVar7 * fVar8;
  iVar2 = BaseTerrain::getHeightMapSize();
  uVar1 = *(uint *)(this + 100);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = (iVar2 - 1U) / uVar1;
  }
  *(uint *)(this + 0x68) = uVar1;
  *(uint *)(this + 0x6c) = uVar4;
  uVar5 = DensityMap::getSquareSize();
  iVar3 = BaseTerrain::getHeightMapSize();
  uVar9 = NEON_rev64(*(undefined8 *)(param_3 + 0x18),4);
  *(undefined8 *)(this + 0x78) = uVar9;
  iVar2 = *(int *)(param_3 + 0x20);
  *(float *)(this + 0x74) = (float)(uVar5 & 0xffffffff) / (float)(ulong)(iVar3 - 1);
  *(int *)(this + 0x80) = iVar2;
  *(uint *)(this + 0x84) = (uint)(iVar2 == -1) << 1;
  uVar4 = DensityMap::getSquareSize();
  uVar1 = 0;
  if (*(uint *)(this + 0x6c) != 0) {
    uVar1 = uVar4 / *(uint *)(this + 0x6c);
  }
  *(uint *)(this + 0x70) = uVar1;
  return;
}


