// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEnter
// Entry Point: 0088b6f4
// Size: 240 bytes
// Signature: undefined onEnter(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* DogStateRideVehicle::onEnter() */

void DogStateRideVehicle::onEnter(void)

{
  long lVar1;
  long in_x0;
  Bt2ScenegraphPhysicsContext *this;
  long lVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  AnimalAnimationSystem::setState
            (*(AnimalAnimationSystem **)(*(long *)(in_x0 + 0x10) + 0xa0),3,0xffffffff,false,0.0);
  lVar2 = *(long *)(in_x0 + 0x10);
  RawTransformGroup::updateWorldTransformation();
  ScenegraphPhysicsContextManager::getInstance();
  this = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
  Bt2ScenegraphPhysicsContext::enqueueRemoveTransformGroup
            (this,*(TransformGroup **)(lVar2 + 0x108),true);
  Node::unlink(*(Node **)(lVar2 + 0x108),false);
  (**(code **)(**(long **)(lVar2 + 0x110) + 0x18))
            (*(long **)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x108),0xffffffff);
  local_40 = 0;
  local_48 = 0;
  TransformGroup::setTranslation(*(TransformGroup **)(lVar2 + 0x108),(Vector3 *)&local_48);
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0x3f800000;
  AnimalSteering::setPositionAndDirection
            (*(AnimalSteering **)(lVar2 + 0xb0),(Vector3 *)&local_48,(Vector3 *)&local_58);
  AnimalSteering::setGroundHeight(*(AnimalSteering **)(lVar2 + 0xb0),0.0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


