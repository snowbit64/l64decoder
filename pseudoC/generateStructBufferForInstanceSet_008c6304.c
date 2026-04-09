// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateStructBufferForInstanceSet
// Entry Point: 008c6304
// Size: 156 bytes
// Signature: undefined __thiscall generateStructBufferForInstanceSet(InstancedGeometryManager * this, IRenderDevice * param_1, InstanceData * param_2, uint param_3)


/* InstancedGeometryManager::generateStructBufferForInstanceSet(IRenderDevice*,
   InstancedGeometryManager::InstanceData&, unsigned int) */

void __thiscall
InstancedGeometryManager::generateStructBufferForInstanceSet
          (InstancedGeometryManager *this,IRenderDevice *param_1,InstanceData *param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 uStack_48;
  char *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uStack_48 = *(undefined4 *)(param_2 + 0x14);
  local_58 = 0;
  local_50 = *(undefined4 *)(param_2 + 8);
  local_40 = "Software Instance Data";
  local_4c = param_3;
  uVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
  uVar2 = (**(code **)(*(long *)param_1 + 0x120))(param_1,uVar2,&local_58);
  *(undefined8 *)(param_2 + 0x28) = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


