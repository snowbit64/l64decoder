// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VehicleNavigationMap
// Entry Point: 00730e8c
// Size: 196 bytes
// Signature: undefined __thiscall VehicleNavigationMap(VehicleNavigationMap * this, uint param_1, float param_2, vector * param_3, bool param_4)


/* VehicleNavigationMap::VehicleNavigationMap(unsigned int, float, std::__ndk1::vector<RoadSegment,
   std::__ndk1::allocator<RoadSegment> >&&, bool) */

void __thiscall
VehicleNavigationMap::VehicleNavigationMap
          (VehicleNavigationMap *this,uint param_1,float param_2,vector *param_3,bool param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = operator_new__((ulong)param_1 * (ulong)param_1);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(void **)this = pvVar2;
  *(short *)(this + 0x14) = (short)param_1;
  *(undefined8 *)(this + 0x18) = 0;
  uVar1 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)param_3;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_3 + 0x10);
  *(float *)(this + 8) = param_2;
  *(float *)(this + 0xc) = 1.0 / param_2;
  *(float *)(this + 0x10) = ((float)(ulong)param_1 * 0.5) / param_2;
  *(undefined8 *)param_3 = 0;
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  this[0x50] = (VehicleNavigationMap)param_4;
                    /* try { // try from 00730f28 to 00730f37 has its CatchHandler @ 00730f50 */
  createConnectivityGraph();
  createSpatialIndex();
  return;
}


