// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVertexDeclaration
// Entry Point: 008db598
// Size: 488 bytes
// Signature: undefined __thiscall getVertexDeclaration(ParticleSystemManager * this, MeshData * param_1, IRenderDevice * param_2)


/* ParticleSystemManager::getVertexDeclaration(InstancedGeometryManager::MeshData*, IRenderDevice*)
    */

void __thiscall
ParticleSystemManager::getVertexDeclaration
          (ParticleSystemManager *this,MeshData *param_1,IRenderDevice *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  MeshInfo aMStack_b8 [4];
  int local_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined8 local_6c;
  undefined8 uStack_64;
  undefined8 local_5c;
  undefined8 uStack_54;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (((InstancedGeometryManager::getInstance()::s_instance & 1) == 0) &&
     (iVar2 = __cxa_guard_acquire(&InstancedGeometryManager::getInstance()::s_instance), iVar2 != 0)
     ) {
                    /* try { // try from 008db744 to 008db74f has its CatchHandler @ 008db780 */
    InstancedGeometryManager::InstancedGeometryManager
              ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance);
    __cxa_atexit(InstancedGeometryManager::~InstancedGeometryManager,
                 InstancedGeometryManager::getInstance()::s_instance,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&InstancedGeometryManager::getInstance()::s_instance);
  }
  InstancedGeometryManager::getMeshInfo
            ((InstancedGeometryManager *)InstancedGeometryManager::getInstance()::s_instance,param_1
             ,aMStack_b8);
  if (local_b4 == 0x14) {
    lVar3 = *(long *)(this + 0x10);
    if (lVar3 == 0) {
      uStack_84 = 0;
      uStack_94 = 0;
      local_9c = 0;
      uStack_44 = 0;
      uStack_54 = 0;
      local_5c = 0;
      uStack_88 = 10;
      uStack_74 = 10;
      local_6c = 10;
      local_4c = 0x100000001;
      uStack_90 = 9;
      uStack_8c = 3;
      local_7c = 0x800000008;
      local_3c = 0;
      uStack_64 = 0x100000000;
      local_a8 = 2;
      local_a0 = 1;
      lVar3 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&local_a8);
      *(long *)(this + 0x10) = lVar3;
    }
  }
  else if (local_b4 == 0x10) {
    lVar3 = *(long *)(this + 8);
    if (lVar3 == 0) {
      uStack_84 = 0;
      uStack_94 = 0;
      local_9c = 0;
      uStack_44 = 0;
      uStack_54 = 0;
      local_5c = 0;
      uStack_88 = 10;
      uStack_74 = 10;
      local_6c = 10;
      local_4c = 0x100000001;
      uStack_90 = 8;
      uStack_8c = 3;
      local_7c = 0x800000008;
      local_3c = 0;
      uStack_64 = 0x100000000;
      local_a8 = 2;
      local_a0 = 1;
      lVar3 = (**(code **)(*(long *)param_2 + 0x128))(param_2,&local_a8);
      *(long *)(this + 8) = lVar3;
    }
  }
  else {
    lVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(lVar3);
}


