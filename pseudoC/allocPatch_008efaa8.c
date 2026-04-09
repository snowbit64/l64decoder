// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: allocPatch
// Entry Point: 008efaa8
// Size: 256 bytes
// Signature: undefined allocPatch(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* GeoMipMappingTerrain::allocPatch() */

void GeoMipMappingTerrain::allocPatch(void)

{
  uint uVar1;
  long lVar2;
  GeoMipMappingTerrain *in_x0;
  GeoMipMappingTerrainPatch *this;
  long *plVar3;
  long lVar4;
  TerrainPatchShape *this_00;
  char acStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(long *)(in_x0 + 0x1a8) == *(long *)(in_x0 + 0x1b0)) {
    *(int *)(in_x0 + 0x1d0) = *(int *)(in_x0 + 0x1d0) + 1;
    FUN_008efbc8(acStack_b8);
    this = (GeoMipMappingTerrainPatch *)operator_new(0xa0);
                    /* try { // try from 008efb08 to 008efb17 has its CatchHandler @ 008efbb4 */
    GeoMipMappingTerrainPatch::GeoMipMappingTerrainPatch(this,"untitledTerrainPatch",in_x0);
    this_00 = (TerrainPatchShape *)operator_new(0x208);
                    /* try { // try from 008efb28 to 008efb33 has its CatchHandler @ 008efba8 */
    TerrainPatchShape::TerrainPatchShape(this_00,acStack_b8,this,(bool)in_x0[0x1c8]);
    uVar1 = *(uint *)(in_x0 + 0x1cc);
    *(TerrainPatchShape **)(this + 0x78) = this_00;
    RawTransformGroup::setObjectMask((RawTransformGroup *)this_00,uVar1);
    if (*(GsMaterial **)(*(long *)(in_x0 + 0x1c0) + 0x4d0) != (GsMaterial *)0x0) {
      GsShape::addMaterial((GsShape *)this_00,*(GsMaterial **)(*(long *)(in_x0 + 0x1c0) + 0x4d0));
    }
    FUN_00f276d0(1,this + 8);
  }
  else {
    plVar3 = (long *)(*(long *)(in_x0 + 0x1b0) + -8);
    lVar4 = *plVar3;
    *(long **)(in_x0 + 0x1b0) = plVar3;
    this_00 = *(TerrainPatchShape **)(lVar4 + 0x78);
  }
  (**(code **)(**(long **)(in_x0 + 0x1c0) + 0x18))(*(long **)(in_x0 + 0x1c0),this_00,0xffffffff);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this_00 + 0x170));
}


