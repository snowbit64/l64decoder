// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Entity
// Entry Point: 00a77680
// Size: 84 bytes
// Signature: undefined __thiscall ~Entity(Entity * this)


/* Entity::~Entity() */

void __thiscall Entity::~Entity(Entity *this)

{
  EntityRegistryManager *this_00;
  
  *(undefined ***)this = &PTR__Entity_00fe43f0;
  if (this[0x1c] != (Entity)0x0) {
                    /* try { // try from 00a776a8 to 00a776b3 has its CatchHandler @ 00a776d4 */
    this_00 = (EntityRegistryManager *)EntityRegistryManager::getInstance();
    EntityRegistryManager::removeEntity(this_00,this);
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    return;
  }
  return;
}


