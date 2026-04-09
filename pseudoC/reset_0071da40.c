// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reset
// Entry Point: 0071da40
// Size: 172 bytes
// Signature: undefined __thiscall reset(TrafficVehicle * this, VehicleNavigationMapGenerator * param_1)


/* TrafficVehicle::reset(VehicleNavigationMapGenerator*) */

void __thiscall TrafficVehicle::reset(TrafficVehicle *this,VehicleNavigationMapGenerator *param_1)

{
  Bt2ScenegraphPhysicsContext *this_00;
  long lVar1;
  long lVar2;
  
  if (*(ulonglong *)(this + 0x370) != 0) {
    VehicleNavigationMapGenerator::removeObstacle(param_1,*(ulonglong *)(this + 0x370));
    *(undefined8 *)(this + 0x370) = 0;
  }
  if (*(ScenegraphNode **)(this + 0x50) != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)(this + 0x50),false);
    if (this[0x58] != (TrafficVehicle)0x0) {
      ScenegraphPhysicsContextManager::getInstance();
      this_00 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
      Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
                (this_00,*(TransformGroup **)(this + 0x50),true);
      this[0x58] = (TrafficVehicle)0x0;
    }
    if (*(ScenegraphNode **)(this + 0x240) != (ScenegraphNode *)0x0) {
      ScenegraphNode::setVisibility(*(ScenegraphNode **)(this + 0x240),false);
    }
    if (*(ScenegraphNode **)(this + 0x2c8) != (ScenegraphNode *)0x0) {
      ScenegraphNode::setVisibility(*(ScenegraphNode **)(this + 0x2c8),false);
    }
    lVar1 = *(long *)(this + 0x1e8);
    if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x10), lVar2 != 0)) {
      *(uint *)(lVar2 + 0xc) = *(uint *)(lVar2 + 0xc) & (*(uint *)(lVar1 + 0x18) ^ 0xffffffff);
    }
    this[0x40] = (TrafficVehicle)0x1;
  }
  return;
}


