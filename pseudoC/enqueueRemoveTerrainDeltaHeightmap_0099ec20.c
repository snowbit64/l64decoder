// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enqueueRemoveTerrainDeltaHeightmap
// Entry Point: 0099ec20
// Size: 256 bytes
// Signature: undefined __cdecl enqueueRemoveTerrainDeltaHeightmap(TerrainTransformGroup * param_1, uchar * param_2, bool param_3)


/* Bt2ScenegraphPhysicsContext::enqueueRemoveTerrainDeltaHeightmap(TerrainTransformGroup*, unsigned
   char*, bool) */

void Bt2ScenegraphPhysicsContext::enqueueRemoveTerrainDeltaHeightmap
               (TerrainTransformGroup *param_1,uchar *param_2,bool param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  Bt2HeightfieldTerrainShape *this;
  void *pvVar4;
  byte in_w3;
  uint in_w4;
  uchar *local_98;
  undefined4 local_90;
  void *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  byte local_70;
  long local_48;
  
  pvVar4 = (void *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (param_2 != (uchar *)0x0) {
    lVar3 = RawTransformGroup::getPhysicsObject();
    uVar1 = *(uint *)(lVar3 + 8);
    if (((uVar1 >> 3 & 1) != 0) && ((uVar1 & 3) != 0)) {
      if ((in_w3 & 1) == 0) {
        pvVar4 = (void *)0x0;
      }
      local_70 = in_w3 & 1;
      local_90 = 0x10;
      uStack_80 = 0;
      local_78 = 0;
      local_98 = param_2;
      local_88 = pvVar4;
      if ((param_1[0x488] == (TerrainTransformGroup)0x0) && ((uVar1 & 1) != 0)) {
        lVar3 = RawTransformGroup::getPhysicsObject();
        if ((*(long *)(lVar3 + 0x30) != 0) &&
           (this = *(Bt2HeightfieldTerrainShape **)(*(long *)(lVar3 + 0x30) + 200),
           this != (Bt2HeightfieldTerrainShape *)0x0)) {
          Bt2HeightfieldTerrainShape::setDeltaHeightfield
                    (this,(uchar *)0x0,0,0,0.0,in_w4,Bt2PhysicsUtil::shapeTerrainDeltaPairCallback);
        }
        if ((pvVar4 != (void *)0x0) && ((in_w3 & 1) != 0)) {
          operator_delete__(pvVar4);
        }
      }
      else {
        SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u>::push_back
                  ((SimpleArray<Bt2ScenegraphPhysicsContext::TransformCommand,true,32u> *)
                   (param_1 + 0x170),(TransformCommand *)&local_98);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


