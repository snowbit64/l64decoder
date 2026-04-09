// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 0071eb54
// Size: 44 bytes
// Signature: undefined __cdecl onHit(TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* TrafficVehicle::onHit(TransformGroup*, Vector3 const&, float, Vector3 const&, int,
   TransformGroup*, bool) */

undefined8
TrafficVehicle::onHit
          (TransformGroup *param_1,Vector3 *param_2,float param_3,Vector3 *param_4,int param_5,
          TransformGroup *param_6,bool param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_4;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(ulong)(uint)param_5;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)((undefined8 *)(ulong)(uint)param_5 + 1);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  return 0;
}


