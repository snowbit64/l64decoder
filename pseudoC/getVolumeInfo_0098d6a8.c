// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getVolumeInfo
// Entry Point: 0098d6a8
// Size: 72 bytes
// Signature: undefined __cdecl getVolumeInfo(btCollisionShape * param_1, VolumeInfo * param_2)


/* Bt2PhysicsColShapeCache::getVolumeInfo(btCollisionShape*, Bt2PhysicsColShapeCache::VolumeInfo&)
    */

void Bt2PhysicsColShapeCache::getVolumeInfo(btCollisionShape *param_1,VolumeInfo *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if ((*(int *)(param_1 + 8) == 5) && (lVar1 = *(long *)(param_1 + 0x10), lVar1 != 0)) {
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    uVar5 = *(undefined8 *)(lVar1 + 0x40);
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    uVar6 = *(undefined8 *)(lVar1 + 0x28);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(lVar1 + 0x58);
    *(undefined8 *)(param_2 + 0x18) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    *(undefined8 *)(param_2 + 0x28) = uVar3;
    *(undefined8 *)(param_2 + 0x20) = uVar2;
    *(undefined8 *)(param_2 + 8) = uVar7;
    *(undefined8 *)param_2 = uVar6;
    return;
  }
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}


