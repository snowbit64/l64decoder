// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeACD
// Entry Point: 00ea60e0
// Size: 320 bytes
// Signature: undefined __thiscall ComputeACD(VHACD * this, double * param_1, uint param_2, uint * param_3, uint param_4, Parameters * param_5)


/* VHACD::VHACD::ComputeACD(double const*, unsigned int, unsigned int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

bool __thiscall
VHACD::VHACD::ComputeACD
          (VHACD *this,double *param_1,uint param_2,uint *param_3,uint param_4,Parameters *param_5)

{
  VHACD VVar1;
  undefined8 uVar2;
  
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 0x18))();
    *(undefined8 *)(this + 8) = 0;
  }
  *(undefined8 *)(this + 0x298) = 0x40;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x268) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(undefined8 *)(this + 0x2a8) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x228));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x240));
  *(undefined4 *)(this + 0x2b8) = 0;
  if ((param_5[0x69] != (Parameters)0x0) || (*(int *)(param_5 + 0x6c) == 2)) {
    uVar2 = RaycastMesh::createRaycastMesh(param_2,param_1,param_4,param_3);
    *(undefined8 *)(this + 8) = uVar2;
  }
  VoxelizeMesh(this,param_1,param_2,(int *)param_3,param_4,param_5);
  ComputePrimitiveSet(this,param_5);
  ComputeACD(this,param_5);
  MergeConvexHulls(this,param_5);
  SimplifyConvexHulls(this,param_5);
  VVar1 = this[0x2b8];
  if (((byte)VVar1 & 1) != 0) {
    (**(code **)(*(long *)this + 0x28))(this);
  }
  return ((byte)VVar1 & 1) == 0;
}


