// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: changeTerrainDeltaHeightmap
// Entry Point: 0099eaf0
// Size: 124 bytes
// Signature: undefined __thiscall changeTerrainDeltaHeightmap(Bt2ScenegraphPhysicsContext * this, TerrainTransformGroup * param_1, ChangeTerrainDeltaHeightmap * param_2)


/* Bt2ScenegraphPhysicsContext::changeTerrainDeltaHeightmap(TerrainTransformGroup*,
   Bt2ScenegraphPhysicsContext::ChangeTerrainDeltaHeightmap const&) */

Bt2ScenegraphPhysicsContext * __thiscall
Bt2ScenegraphPhysicsContext::changeTerrainDeltaHeightmap
          (Bt2ScenegraphPhysicsContext *this,TerrainTransformGroup *param_1,
          ChangeTerrainDeltaHeightmap *param_2)

{
  uchar *puVar1;
  
  if (param_1 != (TerrainTransformGroup *)0x0) {
    this = (Bt2ScenegraphPhysicsContext *)RawTransformGroup::getPhysicsObject();
    if ((*(long *)(this + 0x30) != 0) &&
       (this = *(Bt2ScenegraphPhysicsContext **)(*(long *)(this + 0x30) + 200),
       this != (Bt2ScenegraphPhysicsContext *)0x0)) {
      puVar1 = *(uchar **)param_2;
      if (param_2[0x18] != (ChangeTerrainDeltaHeightmap)0x0) {
        puVar1 = (uchar *)0x0;
      }
      this = (Bt2ScenegraphPhysicsContext *)
             Bt2HeightfieldTerrainShape::setDeltaHeightfield
                       ((Bt2HeightfieldTerrainShape *)this,puVar1,*(int *)(param_2 + 8),
                        *(int *)(param_2 + 0xc),*(float *)(param_2 + 0x10),*(uint *)(param_2 + 0x14)
                        ,Bt2PhysicsUtil::shapeTerrainDeltaPairCallback);
    }
  }
  if ((param_2[0x18] != (ChangeTerrainDeltaHeightmap)0x0) &&
     (this = *(Bt2ScenegraphPhysicsContext **)param_2, this != (Bt2ScenegraphPhysicsContext *)0x0))
  {
    operator_delete__(this);
    return this;
  }
  return this;
}


