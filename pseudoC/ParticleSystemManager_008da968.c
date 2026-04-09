// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParticleSystemManager
// Entry Point: 008da968
// Size: 348 bytes
// Signature: undefined __thiscall ParticleSystemManager(ParticleSystemManager * this)


/* ParticleSystemManager::ParticleSystemManager() */

void __thiscall ParticleSystemManager::ParticleSystemManager(ParticleSystemManager *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  local_38 = 0x200010000;
  local_30 = 0x30002;
  local_78 = 0xff7f7f7fff8001;
  local_70 = 0x10000000;
  local_6c = 0x80018001ff7f7fff;
  local_5c = 0x80017fffff7f7fff;
  local_40 = 0xff7f7fff10001000;
  local_4c = 0x7fff7fffff7f7fff;
  local_54 = 0x100000ff7f7f;
  local_64 = 0xff7f7f;
  local_44 = 0xff7f7f;
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar2 != 0)
     ) {
                    /* try { // try from 008daa88 to 008daa93 has its CatchHandler @ 008daac4 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  uVar3 = InstancedGeometryManager::registerInstancedMesh
                    ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance
                     ,0x10,4,&local_78,6,(ushort *)&local_38,false,0xffff);
  *(undefined8 *)this = uVar3;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


