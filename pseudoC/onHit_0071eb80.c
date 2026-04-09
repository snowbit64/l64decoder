// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onHit
// Entry Point: 0071eb80
// Size: 44 bytes
// Signature: undefined __thiscall onHit(TrafficVehicle * this, TransformGroup * param_1, Vector3 * param_2, float param_3, Vector3 * param_4, int param_5, TransformGroup * param_6, bool param_7)


/* non-virtual thunk to TrafficVehicle::onHit(TransformGroup*, Vector3 const&, float, Vector3
   const&, int, TransformGroup*, bool) */

undefined8 __thiscall
TrafficVehicle::onHit
          (TrafficVehicle *this,TransformGroup *param_1,Vector3 *param_2,float param_3,
          Vector3 *param_4,int param_5,TransformGroup *param_6,bool param_7)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_2;
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)(this + 8) = uVar1;
  uVar1 = *(undefined8 *)param_4;
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(param_4 + 8);
  *(undefined8 *)(this + 0x14) = uVar1;
  return 0;
}


