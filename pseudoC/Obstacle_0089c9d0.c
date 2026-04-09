// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Obstacle
// Entry Point: 0089c9d0
// Size: 100 bytes
// Signature: undefined __thiscall Obstacle(Obstacle * this, SimulatedPedestrian * param_1, float param_2, float param_3, float param_4, bool param_5)


/* SimulatedPedestrian::Obstacle::Obstacle(SimulatedPedestrian*, float, float, float, bool) */

void __thiscall
SimulatedPedestrian::Obstacle::Obstacle
          (Obstacle *this,SimulatedPedestrian *param_1,float param_2,float param_3,float param_4,
          bool param_5)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar3 = *(float *)(param_1 + 0xa0);
  *(float *)(this + 8) = param_2;
  *(float *)(this + 0xc) = param_3;
  this[0x18] = (Obstacle)param_5;
  bVar1 = -param_4 <= fVar3 - param_2;
  uVar4 = *(undefined4 *)(param_1 + 0x84);
  uVar2 = (uint)(bVar1 || fVar3 + param_2 <= param_4);
  *(float *)this = fVar3;
  *(undefined4 *)(this + 4) = uVar4;
  if (bVar1) {
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x90);
  if (((bVar1) && (fVar3 + param_2 <= param_4)) &&
     (uVar2 = 0xffffffff, *(float *)(param_1 + 0xb4) < fVar3)) {
    uVar2 = 1;
  }
  *(uint *)(this + 0x14) = uVar2;
  return;
}


