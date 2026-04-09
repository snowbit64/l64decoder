// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setRegistration
// Entry Point: 00a77764
// Size: 88 bytes
// Signature: undefined __thiscall setRegistration(Entity * this, bool param_1)


/* Entity::setRegistration(bool) */

void __thiscall Entity::setRegistration(Entity *this,bool param_1)

{
  EntityRegistryManager *this_00;
  
  if (this[0x1c] == (Entity)param_1) {
    return;
  }
  this[0x1c] = (Entity)param_1;
  this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  if (param_1) {
    EntityRegistryManager::addEntity(this_00,this);
    return;
  }
  EntityRegistryManager::removeEntity(this_00,this);
  return;
}


