// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueAddTerrainDeltaHeightmap
// Entry Point: 0099e9e4
// Size: 268 bytes
// Signature: undefined __thiscall enqueueAddTerrainDeltaHeightmap(Bt2ScenegraphPhysicsContext * this, TerrainTransformGroup * param_1, uchar * param_2, uint param_3, uint param_4, float param_5, uint param_6)


/* Bt2ScenegraphPhysicsContext::enqueueAddTerrainDeltaHeightmap(TerrainTransformGroup*, unsigned
   char*, unsigned int, unsigned int, float, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::enqueueAddTerrainDeltaHeightmap
          (Bt2ScenegraphPhysicsContext *this,TerrainTransformGroup *param_1,uchar *param_2,
          uint param_3,uint param_4,float param_5,uint param_6)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  Bt2HeightfieldTerrainShape *this_00;
  TerrainTransformGroup *local_a8;
  undefined4 local_a0;
  uchar *local_98;
  uint local_90;
  uint uStack_8c;
  float local_88;
  uint local_84;
  undefined local_80;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_1 != (TerrainTransformGroup *)0x0) {
    lVar3 = RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(lVar3 + 8);
    if (((uVar1 >> 3 & 1) != 0) && ((uVar1 & 3) != 0)) {
      local_a0 = 0x10;
      local_80 = 0;
      local_a8 = param_1;
      local_98 = param_2;
      local_90 = param_3;
      uStack_8c = param_4;
      local_88 = param_5;
      local_84 = param_6;
      if ((this[0x488] == (Bt2ScenegraphPhysicsContext)0x0) && ((uVar1 & 1) != 0)) {
        lVar3 = RawTransformGroup::getPhysicsObject();
        if ((*(long *)(lVar3 + 0x30) != 0) &&
           (this_00 = *(Bt2HeightfieldTerrainShape **)(*(long *)(lVar3 + 0x30) + 200),
           this_00 != (Bt2HeightfieldTerrainShape *)0x0)) {
          Bt2HeightfieldTerrainShape::setDeltaHeightfield
                    (this_00,param_2,param_3,param_4,param_5,param_6,
                     Bt2PhysicsUtil::shapeTerrainDeltaPairCallback);
        }
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (this + 0x170),(TransformCommand *)&local_a8);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


