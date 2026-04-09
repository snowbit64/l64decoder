// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onEntity
// Entry Point: 00722860
// Size: 40 bytes
// Signature: undefined __cdecl onEntity(uint param_1, int param_2, btCollisionObject * param_3, bool param_4)


/* TrafficVehicle::OvertakePhysicsReport::onEntity(unsigned int, int, btCollisionObject const*,
   bool) */

undefined8
TrafficVehicle::OvertakePhysicsReport::onEntity
          (uint param_1,int param_2,btCollisionObject *param_3,bool param_4)

{
  if ((param_2 != -1) && (*(int *)(*(long *)((ulong)param_1 + 0xf0) + 0x18) != param_2)) {
    *(undefined *)((ulong)param_1 + 0xec) = 1;
  }
  return 1;
}


