// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: activate
// Entry Point: 008d67d8
// Size: 344 bytes
// Signature: undefined __cdecl activate(IRenderDevice * param_1, IAudioDevice * param_2, LuauScriptSystem * param_3)


/* ParticleSystem::activate(IRenderDevice*, IAudioDevice*, LuauScriptSystem*) */

bool ParticleSystem::activate
               (IRenderDevice *param_1,IAudioDevice *param_2,LuauScriptSystem *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  if (iVar1 == 0) {
    if (((ParticleSystemManager::getInstance()::s_instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&ParticleSystemManager::getInstance()::s_instance), iVar1 != 0))
    {
                    /* try { // try from 008d68a0 to 008d68ab has its CatchHandler @ 008d6944 */
      ParticleSystemManager::ParticleSystemManager
                ((ParticleSystemManager *)ParticleSystemManager::getInstance()::s_instance);
      __cxa_guard_release(&ParticleSystemManager::getInstance()::s_instance);
    }
    uVar2 = ParticleSystemManager::addMesh
                      ((ParticleSystemManager *)ParticleSystemManager::getInstance()::s_instance,
                       *(IndexedTriangleSet **)(param_1 + 0x110));
    *(undefined8 *)(param_1 + 0x108) = uVar2;
    if (((ParticleSystemManager::getInstance()::s_instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&ParticleSystemManager::getInstance()::s_instance), iVar1 != 0))
    {
                    /* try { // try from 008d68cc to 008d68d7 has its CatchHandler @ 008d6940 */
      ParticleSystemManager::ParticleSystemManager
                ((ParticleSystemManager *)ParticleSystemManager::getInstance()::s_instance);
      __cxa_guard_release(&ParticleSystemManager::getInstance()::s_instance);
    }
    uVar2 = ParticleSystemManager::getVertexDeclaration
                      ((ParticleSystemManager *)ParticleSystemManager::getInstance()::s_instance,
                       *(MeshData **)(param_1 + 0x108),(IRenderDevice *)param_2);
    *(undefined8 *)(param_1 + 0x1b8) = uVar2;
    if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance),
       iVar1 != 0)) {
                    /* try { // try from 008d68f8 to 008d6903 has its CatchHandler @ 008d6930 */
      InstancedGeometryManager::InstancedGeometryManager
                ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
      __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                   InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
      __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
    }
    uVar2 = InstancedGeometryManager::createInstanceSet
                      ((InstancedGeometryManager *)
                       InstancedGeometryManager::getInstance()::s_instance,
                       *(MeshData **)(param_1 + 0x108),0x14,*(uint *)(param_1 + 0x11c),8,false);
    iVar1 = 3;
    *(undefined8 *)(param_1 + 0x1c0) = uVar2;
    *(undefined4 *)(param_1 + 0x88) = 3;
  }
  return iVar1 == 3;
}


