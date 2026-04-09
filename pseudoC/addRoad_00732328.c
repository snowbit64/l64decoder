// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRoad
// Entry Point: 00732328
// Size: 124 bytes
// Signature: undefined __thiscall addRoad(VehicleNavigationMap * this, RoadSegment * param_1)


/* VehicleNavigationMap::addRoad(RoadSegment&&) */

void __thiscall VehicleNavigationMap::addRoad(VehicleNavigationMap *this,RoadSegment *param_1)

{
  undefined8 *puVar1;
  RoadSegment RVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 < *(undefined8 **)(this + 0x28)) {
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
    *puVar1 = uVar3;
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    uVar3 = *(undefined8 *)(param_1 + 8);
    RVar2 = param_1[0x18];
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[4] = 0;
    puVar1[2] = uVar4;
    puVar1[1] = uVar3;
    *(RoadSegment *)(puVar1 + 3) = RVar2;
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    puVar1[5] = uVar3;
    puVar1[6] = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    puVar1[7] = *(undefined8 *)(param_1 + 0x38);
    puVar1[8] = uVar3;
    puVar1[9] = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 **)(this + 0x20) = puVar1 + 10;
    return;
  }
  std::__ndk1::vector<RoadSegment,std::__ndk1::allocator<RoadSegment>>::
  __push_back_slow_path<RoadSegment>
            ((vector<RoadSegment,std::__ndk1::allocator<RoadSegment>> *)(this + 0x18),param_1);
  return;
}


