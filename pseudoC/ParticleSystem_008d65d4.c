// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ParticleSystem
// Entry Point: 008d65d4
// Size: 288 bytes
// Signature: undefined __thiscall ~ParticleSystem(ParticleSystem * this)


/* ParticleSystem::~ParticleSystem() */

void __thiscall ParticleSystem::~ParticleSystem(ParticleSystem *this)

{
  int iVar1;
  UpdateManager *this_00;
  
  *(undefined ***)this = &PTR__ParticleSystem_00fde1a0;
  *(undefined ***)(this + 0x10) = &PTR__ParticleSystem_00fde218;
  *(undefined ***)(this + 0x70) = &PTR__ParticleSystem_00fde238;
  *(undefined ***)(this + 0x80) = &PTR__ParticleSystem_00fde260;
  if (this[0xf8] != (ParticleSystem)0x0) {
                    /* try { // try from 008d6620 to 008d6657 has its CatchHandler @ 008d6708 */
    this_00 = (UpdateManager *)UpdateManager::getInstance();
    UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x70));
  }
  if (*(int *)(this + 0x88) == 3) {
    if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
       iVar1 != 0)) {
                    /* try { // try from 008d66bc to 008d66c7 has its CatchHandler @ 008d66f4 */
      InstancedGeometryManager::InstancedGeometryManager
                ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
      __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                   InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
    }
    InstancedGeometryManager::destroyInstanceSet
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
               *(InstanceData **)(this + 0x1c0));
  }
  if (*(long **)(this + 0x110) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x110) + 8))();
  }
  if (*(long **)(this + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x1a0) + 8))();
  }
  *(undefined8 *)(this + 0x1a0) = 0;
  if (*(void **)(this + 0x1a8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1a8));
  }
  Streamable::~Streamable((Streamable *)(this + 0x80));
  DynamicGeometry::~DynamicGeometry((DynamicGeometry *)this);
  return;
}


