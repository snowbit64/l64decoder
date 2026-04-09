// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setMaxParticles
// Entry Point: 008d828c
// Size: 252 bytes
// Signature: undefined __thiscall setMaxParticles(ParticleSystem * this, uint param_1)


/* ParticleSystem::setMaxParticles(unsigned int) */

void __thiscall ParticleSystem::setMaxParticles(ParticleSystem *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  void *__dest;
  void *__src;
  
  if (*(uint *)(this + 0x11c) == param_1) {
    return;
  }
  uVar1 = *(uint *)(this + 0x1b0);
  if (param_1 <= *(uint *)(this + 0x1b0)) {
    uVar1 = param_1;
  }
  __src = *(void **)(this + 0x1a8);
  *(uint *)(this + 0x1b0) = uVar1;
  __dest = operator_new__((ulong)param_1 * 0x24);
  *(void **)(this + 0x1a8) = __dest;
  memcpy(__dest,__src,(ulong)uVar1 * 0x24);
  if (__src != (void *)0x0) {
    operator_delete__(__src);
  }
  *(uint *)(this + 0x11c) = param_1;
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar2 != 0)
     ) {
                    /* try { // try from 008d8350 to 008d835b has its CatchHandler @ 008d8388 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  InstancedGeometryManager::updateInstanceSet
            ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,
             *(InstanceData **)(this + 0x1c0),*(uint *)(this + 0x11c),true);
  return;
}


