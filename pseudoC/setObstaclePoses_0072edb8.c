// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setObstaclePoses
// Entry Point: 0072edb8
// Size: 212 bytes
// Signature: undefined __thiscall setObstaclePoses(VehicleNavigationMapGenerator * this, ulonglong param_1, uint param_2, ObstaclePose * param_3)


/* VehicleNavigationMapGenerator::setObstaclePoses(unsigned long long, unsigned int,
   VehicleNavigationMapGenerator::ObstaclePose const*) */

void __thiscall
VehicleNavigationMapGenerator::setObstaclePoses
          (VehicleNavigationMapGenerator *this,ulonglong param_1,uint param_2,ObstaclePose *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  StoppingPath *this_00;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar3 = *(undefined4 **)param_1;
    uVar5 = *(undefined8 *)(param_3 + 0xc);
    uVar1 = *(undefined4 *)(param_3 + 0x18);
    uVar6 = *(undefined4 *)(param_3 + 0x1c);
    *puVar3 = *(undefined4 *)(param_3 + 4);
    *(undefined8 *)(puVar3 + 1) = uVar5;
    puVar3[3] = uVar1;
    *(undefined4 *)(*(long *)param_1 + 0x18) = uVar6;
    DynamicAvoidance::updateObstacle(*(Obstacle **)(this + 0x140));
  }
  else {
    this_00 = *(StoppingPath **)(param_1 + 0x20);
    StoppingPath::clear();
    if (param_2 != 0) {
      uVar4 = (ulong)param_2;
      puVar3 = (undefined4 *)(param_3 + 0x10);
      do {
        local_40 = puVar3[-3];
        uStack_3c = puVar3[-1];
        local_48 = *puVar3;
        uStack_44 = puVar3[2];
        StoppingPath::addKnot
                  (this_00,(float)puVar3[-4],(float)puVar3[3],(Vector2 *)&local_40,
                   (Vector2 *)&local_48);
        uVar4 = uVar4 - 1;
        puVar3 = puVar3 + 8;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


