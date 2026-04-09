// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~btSoftBodyRigidBodyCollisionConfiguration
// Entry Point: 00f92154
// Size: 296 bytes
// Signature: undefined __thiscall ~btSoftBodyRigidBodyCollisionConfiguration(btSoftBodyRigidBodyCollisionConfiguration * this)


/* btSoftBodyRigidBodyCollisionConfiguration::~btSoftBodyRigidBodyCollisionConfiguration() */

void __thiscall
btSoftBodyRigidBodyCollisionConfiguration::~btSoftBodyRigidBodyCollisionConfiguration
          (btSoftBodyRigidBodyCollisionConfiguration *this)

{
  *(undefined ***)this = &PTR__btSoftBodyRigidBodyCollisionConfiguration_0101bc88;
  (**(code **)**(undefined8 **)(this + 0xb8))();
  if (*(long *)(this + 0xb8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0xc0))();
  if (*(long *)(this + 0xc0) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 200))();
  if (*(long *)(this + 200) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0xd0))();
  if (*(long *)(this + 0xd0) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  (**(code **)**(undefined8 **)(this + 0xd8))();
  if (*(long *)(this + 0xd8) != 0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    (*(code *)PTR_FUN_01048e40)();
  }
  btDefaultCollisionConfiguration::~btDefaultCollisionConfiguration
            ((btDefaultCollisionConfiguration *)this);
  operator_delete(this);
  return;
}


