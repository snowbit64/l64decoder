// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: tryPickResult
// Entry Point: 008f61f0
// Size: 96 bytes
// Signature: undefined __thiscall tryPickResult(TerrainPatchOccluderManager * this, Result * param_1)


/* TerrainPatchOccluderManager::tryPickResult(TerrainPatchOccluderManager::Result&) */

bool __thiscall
TerrainPatchOccluderManager::tryPickResult(TerrainPatchOccluderManager *this,Result *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar1 = (long *)ThreadPoolTaskManager::getNextFinishedTask();
  if (plVar1 != (long *)0x0) {
    uVar2 = *(undefined8 *)((long)plVar1 + 0x74);
    lVar4 = plVar1[0xe];
    lVar3 = plVar1[0xd];
    lVar6 = plVar1[0xc];
    lVar5 = plVar1[0xb];
    lVar8 = plVar1[10];
    lVar7 = plVar1[9];
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)((long)plVar1 + 0x7c);
    *(undefined8 *)(param_1 + 0x2c) = uVar2;
    *(long *)(param_1 + 0x18) = lVar6;
    *(long *)(param_1 + 0x10) = lVar5;
    *(long *)(param_1 + 0x28) = lVar4;
    *(long *)(param_1 + 0x20) = lVar3;
    *(long *)(param_1 + 8) = lVar8;
    *(long *)param_1 = lVar7;
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  return plVar1 != (long *)0x0;
}


