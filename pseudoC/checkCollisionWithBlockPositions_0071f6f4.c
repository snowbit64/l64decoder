// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkCollisionWithBlockPositions
// Entry Point: 0071f6f4
// Size: 400 bytes
// Signature: undefined __thiscall checkCollisionWithBlockPositions(TrafficVehicle * this, float param_1, float param_2, float param_3, float * param_4)


/* WARNING: Removing unreachable block (ram,0x0071f760) */
/* WARNING: Removing unreachable block (ram,0x0071f834) */
/* WARNING: Removing unreachable block (ram,0x0071f764) */
/* WARNING: Removing unreachable block (ram,0x0071f838) */
/* WARNING: Removing unreachable block (ram,0x0071f850) */
/* TrafficVehicle::checkCollisionWithBlockPositions(float, float, float, float&) */

undefined8 __thiscall
TrafficVehicle::checkCollisionWithBlockPositions
          (TrafficVehicle *this,float param_1,float param_2,float param_3,float *param_4)

{
  long lVar1;
  TrafficVehicle *this_00;
  long lVar2;
  uint uVar3;
  float extraout_s0;
  float extraout_s0_00;
  float fVar4;
  
  lVar1 = *(long *)(*(long *)(this + 0x1e8) + 0x60);
  for (lVar2 = *(long *)(*(long *)(this + 0x1e8) + 0x58); lVar2 != lVar1; lVar2 = lVar2 + 4) {
    Spline::getLength();
  }
  this_00 = (TrafficVehicle *)Spline::getLength();
  uVar3 = *(uint *)(this + 0x1f0);
  fVar4 = (1.0 - param_1) * extraout_s0;
  do {
    if (param_3 <= fVar4) {
      return 0;
    }
    lVar2 = *(long *)(this + (ulong)uVar3 * 8 + 0x1f8);
    if (lVar2 == 0) {
      lVar2 = getSuccessorRoad(this_00,(Road *)0x0);
      *(long *)(this + (ulong)uVar3 * 8 + 0x1f8) = lVar2;
    }
    lVar1 = *(long *)(lVar2 + 0x60);
    param_3 = param_3 - fVar4;
    for (lVar2 = *(long *)(lVar2 + 0x58); lVar2 != lVar1; lVar2 = lVar2 + 4) {
      Spline::getLength();
    }
    uVar3 = uVar3 + 1;
    uVar3 = uVar3 - (uVar3 / 3 + ((uint)((ulong)uVar3 * 0xaaaaaaab >> 0x20) & 0xfffffffe));
    this_00 = (TrafficVehicle *)Spline::getLength();
    fVar4 = extraout_s0_00;
  } while (uVar3 != *(uint *)(this + 0x1f0));
  return 0;
}


