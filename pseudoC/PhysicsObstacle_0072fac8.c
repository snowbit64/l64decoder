// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PhysicsObstacle
// Entry Point: 0072fac8
// Size: 44 bytes
// Signature: undefined __thiscall ~PhysicsObstacle(PhysicsObstacle * this)


/* VehicleNavigationMapGenerator::PhysicsObstacle::~PhysicsObstacle() */

void __thiscall
VehicleNavigationMapGenerator::PhysicsObstacle::~PhysicsObstacle(PhysicsObstacle *this)

{
  *(undefined ***)this = &PTR__PhysicsObstacle_00fda8c8;
                    /* try { // try from 0072fae8 to 0072faeb has its CatchHandler @ 0072faf4 */
  ScenegraphNode::removeWorldTransformationDirtyListener
            (*(ScenegraphNode **)(this + 0x18),(WorldTransformationDirtyListener *)this);
  return;
}


