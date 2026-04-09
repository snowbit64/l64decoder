// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079afcc
// Entry Point: 0079afcc
// Size: 476 bytes
// Signature: undefined FUN_0079afcc(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0079afcc(uint *param_1)

{
  long lVar1;
  undefined4 uVar2;
  EntityRegistryManager *this;
  long *plVar3;
  IndexedTriangleSet *pIVar4;
  MeshSplitGeometry *pMVar5;
  undefined8 *puVar6;
  long *this_00;
  long lVar7;
  uint uVar8;
  bool local_54 [4];
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  plVar3 = (long *)EntityRegistryManager::getEntityById(this,*param_1);
  if ((plVar3 != (long *)0x0) && (((uint)plVar3[2] >> 0xb & 1) != 0)) {
    uVar8 = 1;
    switch(param_1[6]) {
    case 1:
    case 2:
      uVar8 = param_1[4];
      break;
    case 4:
      uVar8 = (uint)(float)param_1[4];
      break;
    case 5:
      uVar8 = (uint)*(double *)(param_1 + 4);
    }
    if (((uint)plVar3[2] >> 0x12 & 1) == 0) {
      if (plVar3[4] != 0) {
        lVar7 = plVar3[0x2e];
        pIVar4 = (IndexedTriangleSet *)Geometry::getCollisionProxyMesh();
        if ((pIVar4 != (IndexedTriangleSet *)0x0) &&
           (pMVar5 = (MeshSplitGeometry *)
                     MeshSplitGeometry::createFromIndexedTriangleSet
                               (*(char **)(lVar7 + 0x18),pIVar4,1),
           pMVar5 != (MeshSplitGeometry *)0x0)) {
          puVar6 = (undefined8 *)operator_new(0x18);
          puVar6[1] = 0x3ea59e4a3e298000;
          *puVar6 = 0x3f2d30db3f55a000;
          puVar6[2] = 0x3f800000;
          this_00 = (long *)operator_new(0x218);
                    /* try { // try from 0079b0c0 to 0079b0cb has its CatchHandler @ 0079b1a8 */
          MeshSplitShape::MeshSplitShape
                    ((MeshSplitShape *)this_00,(char *)plVar3[1],pMVar5,
                     (MeshSplitShapeSharedData *)puVar6);
          *(uint *)(plVar3 + 0x42) = *(uint *)(plVar3 + 0x42) & 0xffffffc0 | uVar8 & 0x3f;
          GsShape::copyShapePropertiesFrom((GsShape *)this_00,(GsShape *)plVar3);
          uVar2 = Node::getChildIndex((Node *)plVar3[4],(Node *)plVar3);
          (**(code **)(*(long *)plVar3[4] + 0x18))((long *)plVar3[4],this_00,uVar2);
          (**(code **)(*plVar3 + 8))(plVar3);
          local_50 = ram0x021101b4;
          MeshSplitManager::addShape
                    ((MeshSplitManager *)&MeshSplitManager::s_singletonMeshSplitManager,
                     (MeshSplitShape *)this_00,1,(MeshSplitFileState *)&local_50,local_54);
          if (local_54[0] != false) {
            plVar3 = (long *)this_00[4];
            if ((plVar3 == (long *)0x0) || (((byte)*(MeshSplitShape *)(plVar3 + 2) >> 6 & 1) == 0))
            {
              lVar7 = *this_00;
              plVar3 = this_00;
            }
            else {
              lVar7 = *plVar3;
            }
            (**(code **)(lVar7 + 8))(plVar3);
          }
        }
      }
    }
    else {
      *(uint *)(plVar3 + 0x42) = *(uint *)(plVar3 + 0x42) & 0xffffffc0 | uVar8 & 0x3f;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


