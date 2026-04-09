// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LODTransformGroup
// Entry Point: 00a58720
// Size: 220 bytes
// Signature: undefined __thiscall LODTransformGroup(LODTransformGroup * this, char * param_1, float * param_2, uint param_3, bool param_4)


/* LODTransformGroup::LODTransformGroup(char const*, float const*, unsigned int, bool) */

void __thiscall
LODTransformGroup::LODTransformGroup
          (LODTransformGroup *this,char *param_1,float *param_2,uint param_3,bool param_4)

{
  uint uVar1;
  
  TransformGroup::TransformGroup((TransformGroup *)this,param_1);
  *(undefined ***)this = &PTR__LODTransformGroup_00fe37e8;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x40;
  if (param_4) {
    *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 0x1000;
  }
  if (param_3 < 2) {
    *(undefined8 *)(this + 0x15c) = 0;
    *(undefined8 *)(this + 0x154) = 0x42c8000000000000;
  }
  else {
    uVar1 = param_3;
    if (3 < param_3) {
      uVar1 = 4;
    }
    memcpy(this + 0x154,param_2,(ulong)(uVar1 * 4));
    if (param_3 < 4) {
      memset(this + (uVar1 * 4 + 0x154),0,(ulong)(3 - uVar1) * 4 + 4);
    }
  }
  *(uint *)(this + 0x40) = *(uint *)(this + 0x40) | 8;
  return;
}


