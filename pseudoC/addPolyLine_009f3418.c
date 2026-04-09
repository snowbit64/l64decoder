// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPolyLine
// Entry Point: 009f3418
// Size: 148 bytes
// Signature: undefined __thiscall addPolyLine(DeferredDebugRenderer * this, float * * param_1, uint param_2, float * param_3, CATEGORY param_4)


/* DeferredDebugRenderer::addPolyLine(float const**, unsigned int, float const*,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addPolyLine
          (DeferredDebugRenderer *this,float **param_1,uint param_2,float *param_3,CATEGORY param_4)

{
  ulong uVar1;
  float **ppfVar2;
  ulong uVar3;
  
  uVar1 = (ulong)(param_2 - 1);
  if (param_2 - 1 == 0) {
    uVar1 = 0;
  }
  else {
    ppfVar2 = param_1 + 1;
    uVar3 = uVar1;
    do {
      addLine(this,ppfVar2[-1],param_3,*ppfVar2,param_3,param_4);
      ppfVar2 = ppfVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  addLine(this,param_1[uVar1],param_3,*param_1,param_3,param_4);
  return;
}


