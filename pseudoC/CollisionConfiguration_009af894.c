// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CollisionConfiguration
// Entry Point: 009af894
// Size: 192 bytes
// Signature: undefined __thiscall ~CollisionConfiguration(CollisionConfiguration * this)


/* Bt2PhysicsContextManager::CollisionConfiguration::~CollisionConfiguration() */

void __thiscall
Bt2PhysicsContextManager::CollisionConfiguration::~CollisionConfiguration
          (CollisionConfiguration *this)

{
  *(undefined ***)this = &PTR__CollisionConfiguration_00fe1190;
  (**(code **)**(undefined8 **)(this + 0xe0))();
                    /* try { // try from 009af8c8 to 009af8cb has its CatchHandler @ 009af954 */
  btAlignedFreeInternal(*(void **)(this + 0xe0));
  (**(code **)**(undefined8 **)(this + 0xe8))();
                    /* try { // try from 009af8e0 to 009af8e3 has its CatchHandler @ 009af954 */
  btAlignedFreeInternal(*(void **)(this + 0xe8));
  (**(code **)**(undefined8 **)(this + 0xf0))();
                    /* try { // try from 009af8f8 to 009af8fb has its CatchHandler @ 009af954 */
  btAlignedFreeInternal(*(void **)(this + 0xf0));
  (**(code **)**(undefined8 **)(this + 0xf8))();
                    /* try { // try from 009af910 to 009af913 has its CatchHandler @ 009af954 */
  btAlignedFreeInternal(*(void **)(this + 0xf8));
  (**(code **)**(undefined8 **)(this + 0x100))();
                    /* try { // try from 009af928 to 009af92b has its CatchHandler @ 009af954 */
  btAlignedFreeInternal(*(void **)(this + 0x100));
  (**(code **)**(undefined8 **)(this + 0x108))();
                    /* try { // try from 009af940 to 009af943 has its CatchHandler @ 009af954 */
  btAlignedFreeInternal(*(void **)(this + 0x108));
  btSoftBodyRigidBodyCollisionConfiguration::~btSoftBodyRigidBodyCollisionConfiguration
            ((btSoftBodyRigidBodyCollisionConfiguration *)this);
  return;
}


