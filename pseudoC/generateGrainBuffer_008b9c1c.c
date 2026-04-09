// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: generateGrainBuffer
// Entry Point: 008b9c1c
// Size: 116 bytes
// Signature: undefined __thiscall generateGrainBuffer(GranularSynthesisSoundGenerator * this, float * param_1, uint * param_2)


/* GranularSynthesisSoundGenerator::generateGrainBuffer(float*, unsigned int&) */

void __thiscall
GranularSynthesisSoundGenerator::generateGrainBuffer
          (GranularSynthesisSoundGenerator *this,float *param_1,uint *param_2)

{
  undefined4 uVar1;
  long lVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 8);
  if (fVar3 == *(float *)(this + 0xc) && *(int *)(this + 0x10) != -1) {
    lVar2 = *(long *)(this + 0x20);
  }
  else {
    lVar2 = *(long *)(this + 0x20);
    *(int *)(this + 0x14) = *(int *)(this + 0x10);
    *(float *)(this + 0xc) = fVar3;
    uVar1 = findGrainForDesiredRpm((vector *)(lVar2 + 0x30),(RampType *)(lVar2 + 0x10),fVar3);
    *(undefined4 *)(this + 0x10) = uVar1;
  }
  generateGrainWindow(this,*(uint *)(lVar2 + 8),*(uint *)(lVar2 + 0xc),param_1,param_2);
  return;
}


