// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NavigationMeshPath
// Entry Point: 00af8bc0
// Size: 128 bytes
// Signature: undefined __thiscall NavigationMeshPath(NavigationMeshPath * this, STATE param_1, float * param_2, float * param_3, uint param_4)


/* NavigationMeshPath::NavigationMeshPath(NavigationMeshPath::STATE, float const*, float const*,
   unsigned int) */

void __thiscall
NavigationMeshPath::NavigationMeshPath
          (NavigationMeshPath *this,STATE param_1,float *param_2,float *param_3,uint param_4)

{
  void *pvVar1;
  float fVar2;
  
  *(STATE *)(this + 8) = param_1;
  fVar2 = *param_2;
  *(uint *)(this + 0xc) = param_4;
  *(float *)(this + 0x10) = fVar2;
  fVar2 = param_2[1];
  *(undefined ***)this = &PTR__NavigationMeshPath_00fe7020;
  *(float *)(this + 0x14) = fVar2;
  *(float *)(this + 0x18) = param_2[2];
  *(float *)(this + 0x1c) = *param_3;
  *(float *)(this + 0x20) = param_3[1];
  *(float *)(this + 0x24) = param_3[2];
  if (param_4 == 0) {
    *(undefined8 *)(this + 0x28) = 0;
  }
  else {
    pvVar1 = operator_new__((ulong)(param_4 * 3) << 2);
    *(void **)(this + 0x28) = pvVar1;
  }
  return;
}


