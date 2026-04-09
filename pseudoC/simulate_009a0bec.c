// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: simulate
// Entry Point: 009a0bec
// Size: 304 bytes
// Signature: undefined __thiscall simulate(Bt2ScenegraphPhysicsContext * this, float param_1, uint param_2)


/* Bt2ScenegraphPhysicsContext::simulate(float, unsigned int) */

void __thiscall
Bt2ScenegraphPhysicsContext::simulate(Bt2ScenegraphPhysicsContext *this,float param_1,uint param_2)

{
  bool bVar1;
  float fVar2;
  
  if (this[0x488] != (Bt2ScenegraphPhysicsContext)0x0) {
    return;
  }
  if (this[0x5d1] == (Bt2ScenegraphPhysicsContext)0x0) {
    if ((((*(long *)(this + 0x3a8) != *(long *)(this + 0x3b0)) ||
         (*(long *)(this + 0x3e0) != *(long *)(this + 1000))) ||
        (*(long *)(this + 0x418) != *(long *)(this + 0x420))) ||
       ((*(long *)(this + 0x450) != *(long *)(this + 0x458) ||
        (*(long *)(this + 0x598) != *(long *)(this + 0x5a0))))) goto LAB_009a0cc4;
  }
  else if (((*(long *)(this + 0x3c0) != *(long *)(this + 0x3c8)) ||
           ((*(long *)(this + 0x3f8) != *(long *)(this + 0x400) ||
            (*(long *)(this + 0x430) != *(long *)(this + 0x438))))) ||
          (*(long *)(this + 0x468) != *(long *)(this + 0x470))) {
LAB_009a0cc4:
    bVar1 = 0.0 < param_1 && this[0x58] != (Bt2ScenegraphPhysicsContext)0x0;
    goto LAB_009a0cdc;
  }
  bVar1 = 0.0 < param_1 && this[0x58] != (Bt2ScenegraphPhysicsContext)0x0;
  if ((*(long *)(this + 0x5b0) == *(long *)(this + 0x5b8)) &&
     (0.0 >= param_1 || this[0x58] == (Bt2ScenegraphPhysicsContext)0x0)) {
    return;
  }
LAB_009a0cdc:
  this[0x488] = (Bt2ScenegraphPhysicsContext)0x1;
  fVar2 = param_1 * 0.001;
  if (!bVar1) {
    fVar2 = 0.0;
  }
  if (this[0x5d1] != (Bt2ScenegraphPhysicsContext)0x0) {
    *(float *)(this + 0x590) = fVar2;
    *(uint *)(this + 0x594) = param_2;
    Event::post();
    return;
  }
  doStepSimulation(this,fVar2,param_2);
  return;
}


