// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addPolyLine
// Entry Point: 009f337c
// Size: 156 bytes
// Signature: undefined __thiscall addPolyLine(DeferredDebugRenderer * this, float * * param_1, float * * param_2, uint param_3, CATEGORY param_4)


/* DeferredDebugRenderer::addPolyLine(float const**, float const**, unsigned int,
   DeferredDebugRenderer::CATEGORY) */

void __thiscall
DeferredDebugRenderer::addPolyLine
          (DeferredDebugRenderer *this,float **param_1,float **param_2,uint param_3,CATEGORY param_4
          )

{
  ulong uVar1;
  float **ppfVar2;
  float **ppfVar3;
  ulong uVar4;
  
  uVar1 = (ulong)(param_3 - 1);
  if (param_3 - 1 == 0) {
    uVar1 = 0;
  }
  else {
    ppfVar2 = param_1 + 1;
    ppfVar3 = param_2 + 1;
    uVar4 = uVar1;
    do {
      addLine(this,ppfVar2[-1],ppfVar3[-1],*ppfVar2,*ppfVar3,param_4);
      ppfVar2 = ppfVar2 + 1;
      ppfVar3 = ppfVar3 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  addLine(this,param_1[uVar1],param_2[uVar1],*param_1,*param_2,param_4);
  return;
}


