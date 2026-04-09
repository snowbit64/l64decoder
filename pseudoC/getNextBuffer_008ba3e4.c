// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextBuffer
// Entry Point: 008ba3e4
// Size: 244 bytes
// Signature: undefined __thiscall getNextBuffer(GranularSynthesisSoundGenerator * this, uint param_1, float * param_2)


/* GranularSynthesisSoundGenerator::getNextBuffer(unsigned int, float*) */

void __thiscall
GranularSynthesisSoundGenerator::getNextBuffer
          (GranularSynthesisSoundGenerator *this,uint param_1,float *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  
  if (param_1 != 0) {
    uVar6 = 0;
    uVar3 = *(uint *)(this + 0x34);
    do {
      uVar4 = *(uint *)(this + 0x30);
      if (uVar4 <= uVar3) {
        fVar8 = *(float *)(this + 8);
        pfVar5 = *(float **)(this + 0x28);
        *(undefined4 *)(this + 0x34) = 0;
        if ((fVar8 == *(float *)(this + 0xc)) && (*(int *)(this + 0x10) != -1)) {
          lVar7 = *(long *)(this + 0x20);
        }
        else {
          lVar7 = *(long *)(this + 0x20);
          *(int *)(this + 0x14) = *(int *)(this + 0x10);
          *(float *)(this + 0xc) = fVar8;
          uVar2 = findGrainForDesiredRpm((vector *)(lVar7 + 0x30),(RampType *)(lVar7 + 0x10),fVar8);
          *(undefined4 *)(this + 0x10) = uVar2;
        }
        generateGrainWindow(this,*(uint *)(lVar7 + 8),*(uint *)(lVar7 + 0xc),pfVar5,
                            (uint *)(this + 0x30));
        uVar4 = *(uint *)(this + 0x30);
        uVar3 = *(uint *)(this + 0x34);
      }
      uVar1 = uVar4 - uVar3;
      if (param_1 - uVar6 <= uVar4 - uVar3) {
        uVar1 = param_1 - uVar6;
      }
      memcpy(param_2 + uVar6,(void *)(*(long *)(this + 0x28) + (ulong)uVar3 * 4),(ulong)uVar1 << 2);
      uVar6 = uVar1 + uVar6;
      uVar3 = *(int *)(this + 0x34) + uVar1;
      *(uint *)(this + 0x34) = uVar3;
    } while (uVar6 < param_1);
  }
  return;
}


