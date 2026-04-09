// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NavigationMesh
// Entry Point: 00af871c
// Size: 256 bytes
// Signature: undefined __thiscall NavigationMesh(NavigationMesh * this, float param_1, float param_2, float * param_3, float * param_4, uint param_5, uint param_6, uint param_7)


/* NavigationMesh::NavigationMesh(float, float, float const*, float const*, unsigned int, unsigned
   int, unsigned int) */

void __thiscall
NavigationMesh::NavigationMesh
          (NavigationMesh *this,float param_1,float param_2,float *param_3,float *param_4,
          uint param_5,uint param_6,uint param_7)

{
  void *pvVar1;
  long lVar2;
  float fVar3;
  
  *(float *)(this + 0x50) = *param_3;
  *(float *)(this + 0x54) = param_3[1];
  fVar3 = param_3[2];
  *(undefined4 *)(this + 8) = 0;
  *(uint *)(this + 0xc) = param_5;
  *(uint *)(this + 0x10) = param_6;
  *(uint *)(this + 0x14) = param_7;
  *(float *)(this + 0x58) = fVar3;
  fVar3 = *param_4;
  *(undefined4 *)(this + 0x20) = 0;
  *(float *)(this + 0x5c) = fVar3;
  fVar3 = param_4[1];
  *(undefined ***)this = &PTR__NavigationMesh_00fe6fe0;
  *(float *)(this + 0x60) = fVar3;
  fVar3 = param_4[2];
  *(float *)(this + 0x48) = param_1;
  *(float *)(this + 0x4c) = param_2;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(float *)(this + 100) = fVar3;
                    /* try { // try from 00af87a0 to 00af87bb has its CatchHandler @ 00af881c */
  pvVar1 = operator_new__((ulong)(param_5 * 3) << 2);
  *(void **)(this + 0x28) = pvVar1;
  pvVar1 = operator_new__((ulong)param_6 * 0x18);
  if (param_6 != 0) {
    lVar2 = 0;
    do {
                    /* try { // try from 00af87d4 to 00af87d7 has its CatchHandler @ 00af8824 */
      NavigationMeshNode::NavigationMeshNode((NavigationMeshNode *)((long)pvVar1 + lVar2));
      lVar2 = lVar2 + 0x18;
    } while ((ulong)param_6 * 0x18 - lVar2 != 0);
  }
  *(void **)(this + 0x30) = pvVar1;
                    /* try { // try from 00af87f0 to 00af8803 has its CatchHandler @ 00af881c */
  pvVar1 = operator_new__((ulong)param_7 << 1);
  *(void **)(this + 0x38) = pvVar1;
  pvVar1 = operator_new__((ulong)param_7 << 1);
  *(void **)(this + 0x40) = pvVar1;
  return;
}


