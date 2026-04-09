// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CollisionConfiguration
// Entry Point: 009af968
// Size: 36 bytes
// Signature: undefined __thiscall ~CollisionConfiguration(CollisionConfiguration * this)


/* Bt2PhysicsContextManager::CollisionConfiguration::~CollisionConfiguration() */

void __thiscall
Bt2PhysicsContextManager::CollisionConfiguration::~CollisionConfiguration
          (CollisionConfiguration *this)

{
  ~CollisionConfiguration(this);
  operator_delete(this);
  return;
}


