// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRoads
// Entry Point: 0072cb08
// Size: 300 bytes
// Signature: undefined __thiscall addRoads(VehicleNavigationMapGenerator * this, Node * param_1, float param_2, float param_3, float param_4)


/* VehicleNavigationMapGenerator::addRoads(Node*, float, float, float) */

void __thiscall
VehicleNavigationMapGenerator::addRoads
          (VehicleNavigationMapGenerator *this,Node *param_1,float param_2,float param_3,
          float param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  Node *local_70;
  float local_68;
  float fStack_64;
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (((((byte)param_1[0x11] >> 3 & 1) != 0) && (*(long *)(param_1 + 0x170) != 0)) &&
     ((*(byte *)(*(long *)(param_1 + 0x170) + 0x22) >> 6 & 1) != 0)) {
    lVar2 = SplineGeometry::getSpline();
    if (*(int *)(lVar2 + 0x30) == 1) {
      local_70 = param_1;
      local_68 = param_2;
      fStack_64 = param_3;
      local_60 = param_4;
      FUN_0072cc34(this + 0x1e8,&local_70);
      if (this[0x148] == (VehicleNavigationMapGenerator)0x0) {
        VehicleNavigationPlanner::pausePlanning();
        this[0x148] = (VehicleNavigationMapGenerator)0x1;
      }
    }
  }
  uVar3 = *(long *)(param_1 + 0x30) - (long)*(Node ***)(param_1 + 0x28);
  if ((int)(uVar3 >> 3) != 0) {
    uVar3 = uVar3 >> 3 & 0xffffffff;
    addRoads(this,**(Node ***)(param_1 + 0x28),param_2,param_3,param_4);
    if (uVar3 != 1) {
      uVar4 = 1;
      do {
        addRoads(this,*(Node **)(*(long *)(param_1 + 0x28) + uVar4 * 8),param_2,param_3,param_4);
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


