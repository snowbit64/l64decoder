// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FillPlaneGeometry
// Entry Point: 008c9424
// Size: 444 bytes
// Signature: undefined __thiscall FillPlaneGeometry(FillPlaneGeometry * this, char * param_1, float param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, bool param_9, bool param_10)


/* FillPlaneGeometry::FillPlaneGeometry(char const*, float, float, float, float, float, float,
   float, bool, bool) */

void __thiscall
FillPlaneGeometry::FillPlaneGeometry
          (FillPlaneGeometry *this,char *param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,bool param_9,bool param_10)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined4 local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  Geometry::Geometry((Geometry *)this,param_1,false);
  this[0x97] = (FillPlaneGeometry)param_9;
  *(float *)(this + 0x110) = param_3;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined ***)this = &PTR__FillPlaneGeometry_00fde040;
  *(undefined ***)(this + 0x10) = &PTR__FillPlaneGeometry_00fde090;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  local_d4 = 0x300000000;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(float *)(this + 0x114) = param_2;
  *(undefined4 *)(this + 0x118) = 0;
  this[0x138] = (FillPlaneGeometry)param_10;
  *(undefined4 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  local_b4 = 0;
  uStack_dc = 0;
  local_84 = 0;
  uStack_8c = 0;
  local_94 = 0;
  uStack_9c = 0;
  local_a4 = 0;
  uStack_bc = 0;
  local_c4 = 0;
  uStack_cc = 0xa00000000;
  uStack_ac = 0xf00000000;
  local_7c = 1;
  local_e4 = 0x100000000;
  local_e8 = 2;
                    /* try { // try from 008c9534 to 008c954b has its CatchHandler @ 008c95e4 */
  RenderDeviceManager::getInstance();
  plVar2 = (long *)RenderDeviceManager::getCurrentRenderDevice();
  uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,&local_e8);
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x38) = 5;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined2 *)(this + 0x94) = 0x101;
  this[0x96] = (FillPlaneGeometry)0x0;
  *(undefined4 *)(this + 0x80) = 0;
  *(float *)(this + 300) = param_8 * param_8;
                    /* try { // try from 008c957c to 008c957f has its CatchHandler @ 008c95e0 */
  lVar4 = EngineManager::getInstance();
  fVar5 = *(float *)(lVar4 + 0x1d8);
  *(float *)(this + 400) = param_4;
  fVar5 = fVar5 * param_7;
  if (param_5 <= param_4) {
    param_4 = param_5;
  }
  *(float *)(this + 0x134) = param_6 * param_6;
  *(float *)(this + 0x194) = param_4;
  *(float *)(this + 0x128) = fVar5 * fVar5;
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


