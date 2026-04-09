// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkCollisionWithBlockPositions
// Entry Point: 00720618
// Size: 172 bytes
// Signature: undefined __cdecl checkCollisionWithBlockPositions(Road * param_1, float param_2, float param_3, float param_4, float * param_5)


/* WARNING: Removing unreachable block (ram,0x00720678) */
/* WARNING: Removing unreachable block (ram,0x0072067c) */
/* WARNING: Removing unreachable block (ram,0x00720698) */
/* TrafficVehicle::checkCollisionWithBlockPositions(TrafficVehicle::Road*, float, float, float,
   float&) */

undefined8
TrafficVehicle::checkCollisionWithBlockPositions
          (Road *param_1,float param_2,float param_3,float param_4,float *param_5)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_5 + 0x18);
  for (lVar2 = *(long *)(param_5 + 0x16); lVar2 != lVar1; lVar2 = lVar2 + 4) {
    Spline::getLength();
  }
  return 0;
}


