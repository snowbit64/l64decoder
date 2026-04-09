// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPhysicsObstacleIsPassable
// Entry Point: 0072eaa8
// Size: 76 bytes
// Signature: undefined __thiscall setPhysicsObstacleIsPassable(VehicleNavigationMapGenerator * this, TransformGroup * param_1, bool param_2)


/* VehicleNavigationMapGenerator::setPhysicsObstacleIsPassable(TransformGroup*, bool) */

void __thiscall
VehicleNavigationMapGenerator::setPhysicsObstacleIsPassable
          (VehicleNavigationMapGenerator *this,TransformGroup *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x188);
  do {
    if (plVar1 == *(long **)(this + 400)) {
      return;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(TransformGroup **)(lVar2 + 0x18) != param_1);
  if ((0.0 < *(float *)(lVar2 + 0x3c)) && ((bool)*(char *)(lVar2 + 0x40) != param_2)) {
    *(bool *)(lVar2 + 0x40) = param_2;
    if (*(long *)(lVar2 + 8) != 0) {
      *(bool *)(*(long *)(lVar2 + 8) + 0x38) = param_2;
    }
  }
  return;
}


