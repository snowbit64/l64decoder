// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalHusbandry
// Entry Point: 006fbb60
// Size: 344 bytes
// Signature: undefined __thiscall ~AnimalHusbandry(AnimalHusbandry * this)


/* AnimalHusbandry::~AnimalHusbandry() */

void __thiscall AnimalHusbandry::~AnimalHusbandry(AnimalHusbandry *this)

{
  UpdateManager *this_00;
  void *pvVar1;
  uint uVar2;
  ulong uVar3;
  
  *(undefined ***)this = &PTR__AnimalHusbandry_00fd9a28;
  *(undefined ***)(this + 0x20) = &PTR__AnimalHusbandry_00fd9a58;
  *(undefined ***)(this + 0x30) = &PTR__AnimalHusbandry_00fd9a80;
                    /* try { // try from 006fbb98 to 006fbba3 has its CatchHandler @ 006fbcb8 */
  this_00 = (UpdateManager *)UpdateManager::getInstance();
  UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x20));
  uVar2 = *(uint *)(this + 0x5c);
  if (uVar2 != 0) {
    uVar3 = 0;
    do {
      if (*(long **)(this + uVar3 * 8 + 0x1f568) != (long *)0x0) {
        (**(code **)(**(long **)(this + uVar3 * 8 + 0x1f568) + 8))();
        uVar2 = *(uint *)(this + 0x5c);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
                    /* try { // try from 006fbbec to 006fbbf3 has its CatchHandler @ 006fbcb8 */
  AnimalSoundSystem::Destroy();
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 8))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  AnimalSoundSystem::~AnimalSoundSystem((AnimalSoundSystem *)(this + 0x1fcb0));
  std::__ndk1::
  __vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>::
  ~__vector_base((__vector_base<AnimalSoundSource::Group,std::__ndk1::allocator<AnimalSoundSource::Group>>
                  *)(this + 0x1fc98));
  pvVar1 = *(void **)(this + 0x1fc30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1fc38) = pvVar1;
    operator_delete(pvVar1);
  }
  BoundingAxisAlignedBox::~BoundingAxisAlignedBox((BoundingAxisAlignedBox *)(this + 0x1f770));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0x1b6c8));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0x17828));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0x13988));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0xfae8));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0xbc48));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0x7da8));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0x3f08));
  Animal::AnimalSource::~AnimalSource((AnimalSource *)(this + 0x68));
  Entity::~Entity((Entity *)this);
  return;
}


