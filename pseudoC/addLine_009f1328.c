// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addLine
// Entry Point: 009f1328
// Size: 380 bytes
// Signature: undefined __thiscall addLine(DeferredDebugRenderer * this, float * param_1, float * param_2, float * param_3, float * param_4, CATEGORY param_5)


/* DeferredDebugRenderer::addLine(float const*, float const*, float const*, float const*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addLine
          (DeferredDebugRenderer *this,float *param_1,float *param_2,float *param_3,float *param_4,
          CATEGORY param_5)

{
  long lVar1;
  ulong uVar2;
  long *this_00;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_5 == 0x7ff) || ((*(uint *)(this + 0x2a0) & param_5) != 0)) {
    if (this[0x1f9] == (DeferredDebugRenderer)0x0) {
      if (this[0x1fa] == (DeferredDebugRenderer)0x0) {
        if (this[0x1f8] != (DeferredDebugRenderer)0x0) {
          this = this + 0xf0;
        }
      }
      else {
        this = this + 0x168;
      }
      this_00 = (long *)(this + 0x18);
    }
    else if (this[0x1fa] == (DeferredDebugRenderer)0x0) {
      if (this[0x1f8] != (DeferredDebugRenderer)0x0) {
        this = this + 0xf0;
      }
      this_00 = (long *)(this + 0x30);
    }
    else {
      this_00 = (long *)(this + 0x198);
    }
    lVar1 = *this_00;
    uVar5 = this_00[1] - lVar1;
    uVar4 = (long)uVar5 >> 2;
    iVar3 = (int)uVar4;
    uVar2 = (ulong)(iVar3 + 0xe);
    if (uVar2 < uVar4 || uVar2 - uVar4 == 0) {
      if (uVar2 < uVar4) {
        this_00[1] = lVar1 + uVar2 * 4;
      }
    }
    else {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append
                ((vector<float,std::__ndk1::allocator<float>> *)this_00,uVar2 - uVar4);
      lVar1 = *this_00;
    }
    *(float *)(lVar1 + (uVar5 >> 2 & 0xffffffff) * 4) = *param_1;
    *(float *)(lVar1 + (ulong)(iVar3 + 1) * 4) = param_1[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 2) * 4) = param_1[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 3) * 4) = *param_2;
    *(float *)(lVar1 + (ulong)(iVar3 + 4) * 4) = param_2[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 5) * 4) = param_2[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 6) * 4) = param_2[3];
    *(float *)(lVar1 + (ulong)(iVar3 + 7) * 4) = *param_3;
    *(float *)(lVar1 + (ulong)(iVar3 + 8) * 4) = param_3[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 9) * 4) = param_3[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 10) * 4) = *param_4;
    *(float *)(lVar1 + (ulong)(iVar3 + 0xb) * 4) = param_4[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0xc) * 4) = param_4[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0xd) * 4) = param_4[3];
  }
  return;
}


