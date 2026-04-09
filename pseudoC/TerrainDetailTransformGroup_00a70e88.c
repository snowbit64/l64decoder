// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainDetailTransformGroup
// Entry Point: 00a70e88
// Size: 356 bytes
// Signature: undefined __thiscall TerrainDetailTransformGroup(TerrainDetailTransformGroup * this, char * param_1, TerrainDetailTransformGroupDesc * param_2, TerrainTransformGroup * param_3, TerrainDataPlane * param_4, bool param_5)


/* TerrainDetailTransformGroup::TerrainDetailTransformGroup(char const*,
   TerrainDetailTransformGroupDesc const&, TerrainTransformGroup*, TerrainDataPlane*, bool) */

void __thiscall
TerrainDetailTransformGroup::TerrainDetailTransformGroup
          (TerrainDetailTransformGroup *this,char *param_1,TerrainDetailTransformGroupDesc *param_2,
          TerrainTransformGroup *param_3,TerrainDataPlane *param_4,bool param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  DensityMapModifier *this_00;
  long lVar6;
  float fVar7;
  float fVar8;
  
  LocalGeometryTransformGroup::LocalGeometryTransformGroup
            ((LocalGeometryTransformGroup *)this,param_1,(LocalGeometryTransformGroupDesc *)param_2)
  ;
                    /* try { // try from 00a70eb4 to 00a70ebb has its CatchHandler @ 00a70ffc */
  Streamable::Streamable((Streamable *)(this + 0x1e0));
  *(TerrainDataPlane **)(this + 0x200) = param_4;
  *(undefined ***)this = &PTR__TerrainDetailTransformGroup_00fe3e10;
  *(undefined ***)(this + 0x158) = &PTR__TerrainDetailTransformGroup_00fe3eb8;
  *(undefined ***)(this + 0x1e0) = &PTR__TerrainDetailTransformGroup_00fe3ee0;
  *(undefined ***)(this + 0x1f0) = &PTR__TerrainDetailTransformGroup_00fe3f10;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x100;
                    /* try { // try from 00a70ef4 to 00a70eff has its CatchHandler @ 00a71004 */
  TerrainDataPlane::setAssociatedTransformGroup(param_4,this);
  lVar6 = *(long *)(param_2 + 0x10);
  *(TerrainTransformGroup **)(this + 0x1f8) = param_3;
  *(long *)(this + 0x218) = lVar6;
  FUN_00f276d0(1,lVar6 + 8);
                    /* try { // try from 00a70f1c to 00a70f2b has its CatchHandler @ 00a71004 */
  DensityMap::setPolygonRoundingMode(*(DensityMap **)(this + 0x218),0);
  this_00 = (DensityMapModifier *)operator_new(0x30);
                    /* try { // try from 00a70f34 to 00a70f37 has its CatchHandler @ 00a70fec */
  DensityMapModifier::DensityMapModifier(this_00,*(DensityMap **)(this + 0x218));
  *(DensityMapModifier **)(this + 0x220) = this_00;
  uVar2 = (int)*(float *)(this + 0x160) - 1U | (int)*(float *)(this + 0x160) - 1U >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 | uVar2 >> 0x10;
  iVar4 = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    iVar4 = 1;
  }
  *(int *)(this + 0x208) = iVar4;
                    /* try { // try from 00a70f6c to 00a70fcb has its CatchHandler @ 00a71008 */
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  fVar8 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x208));
  *(float *)(this + 0x160) = fVar7 * fVar8;
  *(float *)(this + 0x164) = fVar7 * fVar8 * 0.5;
  iVar4 = BaseTerrain::getHeightMapSize();
  uVar1 = *(uint *)(this + 0x208);
  uVar2 = *(uint *)(param_4 + 0x78);
  uVar5 = *(uint *)(param_4 + 0x7c);
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = (iVar4 - 1U) / uVar1;
  }
  *(uint *)(this + 0x20c) = uVar1;
  *(uint *)(this + 0x210) = uVar3;
  DensityMap::addDirtyListener
            (*(DensityMap **)(this + 0x218),(DirtyListener *)(this + 0x1f0),true,uVar5,uVar2);
  *(undefined4 *)(this + 0x228) = 0;
  uVar5 = DensityMap::getSquareSize();
  uVar2 = 0;
  if (*(uint *)(this + 0x210) != 0) {
    uVar2 = uVar5 / *(uint *)(this + 0x210);
  }
  *(uint *)(this + 0x214) = uVar2;
  return;
}


