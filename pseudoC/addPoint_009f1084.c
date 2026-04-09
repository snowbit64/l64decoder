// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPoint
// Entry Point: 009f1084
// Size: 676 bytes
// Signature: undefined __thiscall addPoint(DeferredDebugRenderer * this, float * param_1, float * param_2, CATEGORY param_3)


/* DeferredDebugRenderer::addPoint(float const*, float const*, DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addPoint
          (DeferredDebugRenderer *this,float *param_1,float *param_2,CATEGORY param_3)

{
  long *this_00;
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (this[0x1fa] == (DeferredDebugRenderer)0x0) {
    this_00 = (long *)this;
    if (this[0x1f8] != (DeferredDebugRenderer)0x0) {
      this_00 = (long *)(this + 0xf0);
    }
  }
  else {
    this_00 = (long *)(this + 0x168);
  }
  if ((param_3 == 0x7ff) || ((*(uint *)(this + 0x2a0) & param_3) != 0)) {
    lVar1 = *this_00;
    uVar5 = this_00[1] - lVar1;
    uVar4 = (long)uVar5 >> 2;
    iVar3 = (int)uVar4;
    uVar2 = (ulong)(iVar3 + 0x2a);
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
    *(float *)(lVar1 + (ulong)(iVar3 + 7) * 4) = *param_1;
    *(float *)(lVar1 + (ulong)(iVar3 + 8) * 4) = param_1[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 9) * 4) = param_1[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 10) * 4) = *param_2;
    *(float *)(lVar1 + (ulong)(iVar3 + 0xb) * 4) = param_2[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0xc) * 4) = param_2[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0xd) * 4) = param_2[3];
    *(float *)(lVar1 + (ulong)(iVar3 + 0xe) * 4) = *param_1;
    *(float *)(lVar1 + (ulong)(iVar3 + 0xf) * 4) = param_1[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x10) * 4) = param_1[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x11) * 4) = *param_2;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x12) * 4) = param_2[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x13) * 4) = param_2[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x14) * 4) = param_2[3];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x15) * 4) = *param_1;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x16) * 4) = param_1[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x17) * 4) = param_1[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x18) * 4) = *param_2;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x19) * 4) = param_2[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x1a) * 4) = param_2[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x1b) * 4) = param_2[3];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x1c) * 4) = *param_1;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x1d) * 4) = param_1[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x1e) * 4) = param_1[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x1f) * 4) = *param_2;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x20) * 4) = param_2[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x21) * 4) = param_2[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x22) * 4) = param_2[3];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x23) * 4) = *param_1;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x24) * 4) = param_1[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x25) * 4) = param_1[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x26) * 4) = *param_2;
    *(float *)(lVar1 + (ulong)(iVar3 + 0x27) * 4) = param_2[1];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x28) * 4) = param_2[2];
    *(float *)(lVar1 + (ulong)(iVar3 + 0x29) * 4) = param_2[3];
  }
  return;
}


