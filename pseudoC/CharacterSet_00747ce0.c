// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~CharacterSet
// Entry Point: 00747ce0
// Size: 160 bytes
// Signature: undefined __thiscall ~CharacterSet(CharacterSet * this)


/* CharacterSet::~CharacterSet() */

void __thiscall CharacterSet::~CharacterSet(CharacterSet *this)

{
  int iVar1;
  UpdateManager *this_00;
  void *pvVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__CharacterSet_00fda9d8;
  *(undefined ***)(this + 0x20) = &PTR__CharacterSet_00fdaa00;
  *(undefined ***)(this + 0x30) = &PTR__CharacterSet_00fdaa28;
  if (this[0xe8] != (CharacterSet)0x0) {
                    /* try { // try from 00747d1c to 00747d27 has its CatchHandler @ 00747d80 */
    this_00 = (UpdateManager *)UpdateManager::getInstance();
    UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x30));
  }
  plVar3 = *(long **)(this + 0x40);
  iVar1 = FUN_00f27700(0xffffffff,plVar3 + 1);
  if (iVar1 < 2) {
                    /* try { // try from 00747d48 to 00747d4f has its CatchHandler @ 00747d80 */
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  pvVar2 = *(void **)(this + 0xd0);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xd8) = pvVar2;
    operator_delete(pvVar2);
  }
  *(undefined ***)(this + 0x20) = &PTR__AtomicRefCounted_00fda810;
  Entity::~Entity((Entity *)this);
  return;
}


