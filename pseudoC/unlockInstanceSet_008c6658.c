// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unlockInstanceSet
// Entry Point: 008c6658
// Size: 120 bytes
// Signature: undefined __thiscall unlockInstanceSet(InstancedGeometryManager * this, IRenderDevice * param_1, LockData * param_2)


/* InstancedGeometryManager::unlockInstanceSet(IRenderDevice*, InstancedGeometryManager::LockData&)
    */

void __thiscall
InstancedGeometryManager::unlockInstanceSet
          (InstancedGeometryManager *this,IRenderDevice *param_1,LockData *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar3 = *(long *)param_2;
  if (*(char *)(lVar3 + 0x10) == '\0') {
    lVar4 = *(long *)param_1;
    plVar5 = *(long **)(lVar3 + 0x18);
  }
  else {
    lVar4 = *(long *)param_1;
    plVar5 = *(long **)(lVar3 + 0x28);
  }
  uVar2 = (**(code **)(lVar4 + 0x138))();
  (**(code **)(*plVar5 + 0x18))(plVar5,uVar2);
  lVar3 = *(long *)param_2;
  iVar1 = *(int *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined *)(lVar3 + 0x24) = 0;
  *(int *)(lVar3 + 0x20) = *(int *)(lVar3 + 0x20) - iVar1;
  return;
}


