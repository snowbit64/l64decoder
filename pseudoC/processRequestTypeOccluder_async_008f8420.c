// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processRequestTypeOccluder_async
// Entry Point: 008f8420
// Size: 292 bytes
// Signature: undefined __thiscall processRequestTypeOccluder_async(TerrainPatchOccluderManager * this, RequestDesc * param_1, Result * param_2)


/* TerrainPatchOccluderManager::processRequestTypeOccluder_async(TerrainPatchOccluderManager::RequestDesc
   const&, TerrainPatchOccluderManager::Result&) */

void __thiscall
TerrainPatchOccluderManager::processRequestTypeOccluder_async
          (TerrainPatchOccluderManager *this,RequestDesc *param_1,Result *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  IndexedTriangleSet *pIVar5;
  undefined8 uVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int local_a0;
  float fStack_9c;
  uint uStack_98;
  bool bStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar4 = Watch::getCurrentTicks();
  Mutex::enterCriticalSection();
  uStack_78 = *(undefined8 *)(this + 0xc0);
  local_80 = *(undefined8 *)(this + 0xb8);
  uStack_68 = *(undefined8 *)(this + 0xd0);
  uStack_70 = *(undefined8 *)(this + 200);
  uStack_58 = *(undefined8 *)(this + 0xe0);
  local_60 = *(undefined8 *)(this + 0xd8);
  uStack_88 = *(undefined8 *)(this + 0xb0);
  uStack_90 = *(undefined8 *)(this + 0xa8);
  uVar9 = *(undefined8 *)(this + 0xa0);
  uVar6 = *(undefined8 *)(this + 0x98);
                    /* try { // try from 008f8484 to 008f848b has its CatchHandler @ 008f8544 */
  Mutex::leaveCriticalSection();
  uVar1 = *(uint *)(param_1 + 0x14);
  uVar2 = (ulong)uVar1;
  local_a0 = (int)uVar6;
  fStack_9c = (float)((ulong)uVar6 >> 0x20);
  uStack_98 = (uint)uVar9;
  bStack_94 = SUB81((ulong)uVar9 >> 0x20,0);
  pIVar5 = (IndexedTriangleSet *)
           Decimator::createOccluder
                     (*(Decimator **)(this + 0xe8),*(int *)(param_1 + 0xc),*(int *)(param_1 + 0x10),
                      uVar1,local_a0 + uVar1,*(uint *)(&uStack_90 + uVar2 * 2),
                      *(float *)((long)&uStack_90 + uVar2 * 0x10 + 4),
                      *(float *)(&uStack_88 + uVar2 * 2),
                      *(float *)((long)&uStack_88 + uVar2 * 0x10 + 4),fStack_9c,uStack_98,bStack_94)
  ;
  if (pIVar5 != (IndexedTriangleSet *)0x0) {
    convertMesh_async(*(uint *)(this + 0xf0),*(float *)(this + 0xf4),pIVar5);
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar6 = TriangleSet::createBoundingVolume();
      *(undefined8 *)(param_2 + 0x30) = uVar6;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar10 = *(undefined8 *)(param_1 + 8);
    uVar9 = *(undefined8 *)param_1;
    *(IndexedTriangleSet **)(param_2 + 0x20) = pIVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar6;
    *(undefined8 *)(param_2 + 8) = uVar10;
    *(undefined8 *)param_2 = uVar9;
    lVar7 = Watch::getCurrentTicks();
    dVar8 = (double)Watch::convertTicksToMs(lVar7 - lVar4);
    *(float *)(param_2 + 0x38) = (float)dVar8;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


