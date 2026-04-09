// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VehicleNavigationAgent
// Entry Point: 00736080
// Size: 436 bytes
// Signature: undefined __thiscall VehicleNavigationAgent(VehicleNavigationAgent * this, VehicleNavigationMap * param_1, VehicleNavigationData * param_2, bool param_3, ushort param_4, float param_5)


/* VehicleNavigationAgent::VehicleNavigationAgent(VehicleNavigationMap const&, VehicleNavigationData
   const&, bool, unsigned short, float) */

void __thiscall
VehicleNavigationAgent::VehicleNavigationAgent
          (VehicleNavigationAgent *this,VehicleNavigationMap *param_1,VehicleNavigationData *param_2
          ,bool param_3,ushort param_4,float param_5)

{
  ushort uVar1;
  void *pvVar2;
  VehicleNavigationGridAdapter *this_00;
  undefined4 uVar3;
  float fVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__VehicleNavigationAgent_00fda998;
  *(undefined4 *)(this + 0x32) = 0;
                    /* try { // try from 007360e0 to 007360f7 has its CatchHandler @ 007362ac */
  pvVar2 = operator_new__(0x9600);
  *(void **)(this + 0x1298) = pvVar2;
  this_00 = (VehicleNavigationGridAdapter *)operator_new(0x14080);
                    /* try { // try from 00736110 to 0073611f has its CatchHandler @ 00736294 */
  VehicleNavigationGridAdapter::VehicleNavigationGridAdapter
            (this_00,param_1,*(float *)(param_2 + 0x10) * 0.5,param_4,(Vector2 *)param_2,
             *(float *)(param_2 + 8),*(float *)(param_2 + 0x10),*(float *)(param_2 + 0x24));
  *(float *)(this + 0x137c) = param_5;
  *(undefined8 *)(this + 0x1370) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x1378) = 0xffffffff;
  *(undefined8 *)(this + 0x12f0) = 0;
  *(undefined8 *)(this + 0x12e8) = 0;
  *(undefined8 *)(this + 0x1300) = 0;
  *(undefined8 *)(this + 0x12f8) = 0;
  *(undefined8 *)(this + 0x12e0) = 0;
  *(undefined8 *)(this + 0x12d8) = 0;
  *(VehicleNavigationGridAdapter **)(this + 0x12a0) = this_00;
  *(ushort *)(this + 0x1380) = param_4;
  *(undefined8 *)(this + 0x1308) = 0xff8000007f800000;
  uVar5 = NEON_fmov(0x3f800000,4);
  *(undefined2 *)(this + 0x1383) = 0;
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  this[0x1382] = (VehicleNavigationAgent)param_3;
  *(undefined4 *)(this + 0x13a0) = *(undefined4 *)(param_2 + 0x28);
  *(ulong *)(this + 0x138c) =
       CONCAT44((float)((ulong)uVar5 >> 0x20) / (float)((ulong)uVar7 >> 0x20),
                (float)uVar5 / (float)uVar7);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar1 = *(short *)(this_00 + 8) + 1;
  *(undefined4 *)(this + 0x1394) = *(undefined4 *)(param_2 + 0x18);
  uVar3 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0x1398) = uVar6;
  *(undefined4 *)(this + 0x139c) = uVar3;
  *(undefined8 *)(this + 0x13a8) = *(undefined8 *)(param_2 + 0x30);
  if (*(void **)(this + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x28));
  }
                    /* try { // try from 007361c8 to 007361cb has its CatchHandler @ 00736238 */
  pvVar2 = operator_new__((ulong)uVar1 * (ulong)uVar1 * 6);
  *(void **)(this + 0x28) = pvVar2;
  *(ushort *)(this + 0x30) = uVar1;
  fVar4 = (*(float *)(*(long *)(this + 0x12a0) + 0x2c) + *(float *)(*(long *)(this + 0x12a0) + 0x2c)
          ) * 1.414214;
  *(float *)(this + 5000) = fVar4 * fVar4;
                    /* try { // try from 007361f8 to 007361ff has its CatchHandler @ 00736234 */
  initializeArcLengths();
  memcpy(this + 0x13b0,param_2 + 0x38,(ulong)*(uint *)(this + 0x13a0) * 0xc);
  return;
}


