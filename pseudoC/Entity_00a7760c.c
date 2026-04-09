// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Entity
// Entry Point: 00a7760c
// Size: 116 bytes
// Signature: undefined __thiscall Entity(Entity * this, char * param_1, bool param_2)


/* Entity::Entity(char const*, bool) */

void __thiscall Entity::Entity(Entity *this,char *param_1,bool param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  EntityRegistryManager *this_00;
  
  *(undefined ***)this = &PTR__Entity_00fe43f0;
  EntityRegistryManager::getInstance();
  uVar1 = EntityRegistryManager::getNextEntityId();
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar2 = StringUtil::createStrCpy(param_1);
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)(this + 0x10) = 0;
  this[0x1c] = (Entity)param_2;
  if (param_2) {
    this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    EntityRegistryManager::addEntity(this_00,this);
    return;
  }
  return;
}


