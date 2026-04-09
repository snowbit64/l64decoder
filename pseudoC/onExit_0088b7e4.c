// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onExit
// Entry Point: 0088b7e4
// Size: 236 bytes
// Signature: undefined onExit(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStateRideVehicle::onExit() */

void DogStateRideVehicle::onExit(void)

{
  long lVar1;
  long in_x0;
  Bt2ScenegraphPhysicsContext *this;
  long lVar2;
  long lVar3;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float local_44;
  float local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(in_x0 + 0x10);
  lVar2 = *(long *)(lVar3 + 0x110);
  RawTransformGroup::updateWorldTransformation();
  local_44 = *(float *)(lVar2 + 0xec);
  local_48 = *(float *)(lVar2 + 0xe8) + 5.0;
  local_40 = *(float *)(lVar2 + 0xf0) + 5.0;
  Node::unlink(*(Node **)(lVar3 + 0x108),false);
  (**(code **)(**(long **)(lVar3 + 0x118) + 0x18))
            (*(long **)(lVar3 + 0x118),*(undefined8 *)(lVar3 + 0x108),0xffffffff);
  TransformGroup::setTranslation(*(TransformGroup **)(lVar3 + 0x108),(Vector3 *)&local_48);
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this,*(TransformGroup **)(lVar3 + 0x108));
  local_58 = 0;
  local_50 = 0x3f800000;
  AnimalSteering::setPositionAndDirection
            (*(AnimalSteering **)(lVar3 + 0xb0),(Vector3 *)&local_48,(Vector3 *)&local_58);
  AnimalSteering::setGroundHeight(*(AnimalSteering **)(lVar3 + 0xb0),local_44);
  AnimalCompanionManager::adjustGroundLevel
            (*(AnimalCompanionManager **)(lVar3 + 0xb8),*(uint *)(lVar3 + 200),true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


