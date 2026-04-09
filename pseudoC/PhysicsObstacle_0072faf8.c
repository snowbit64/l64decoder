// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PhysicsObstacle
// Entry Point: 0072faf8
// Size: 60 bytes
// Signature: undefined __thiscall ~PhysicsObstacle(PhysicsObstacle * this)


/* VehicleNavigationMapGenerator::PhysicsObstacle::~PhysicsObstacle() */

void __thiscall
VehicleNavigationMapGenerator::PhysicsObstacle::~PhysicsObstacle(PhysicsObstacle *this)

{
  *(undefined ***)this = &PTR__PhysicsObstacle_00fda8c8;
                    /* try { // try from 0072fb1c to 0072fb23 has its CatchHandler @ 0072fb34 */
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(this + 0x18),(WorldTransformationDirtyListener *)this);
  operator_delete(this);
  return;
}


