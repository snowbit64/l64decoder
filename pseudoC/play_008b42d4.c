// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 008b42d4
// Size: 180 bytes
// Signature: undefined __thiscall play(LoopSynthesisSample * this, uint param_1, float param_2, float param_3, float param_4, Sample * param_5)


/* LoopSynthesisSample::play(unsigned int, float, float, float, Sample*) */

bool __thiscall
LoopSynthesisSample::play
          (LoopSynthesisSample *this,uint param_1,float param_2,float param_3,float param_4,
          Sample *param_5)

{
  LoopSynthesisSample LVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined4 uVar4;
  
  LVar1 = this[0x30];
  *(float *)(this + 0x58) = param_2;
  if ((LVar1 != (LoopSynthesisSample)0x0) && (*(long *)(this + 0x118) != 0)) {
    if ((param_5 == (Sample *)0x0) || (((byte)param_5[0x15] & 1) == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_5 + 0x118);
    }
    LoopSynthesisGenerator::setStart((LoopSynthesisGenerator *)(this + 0x80),param_3);
    plVar3 = *(long **)(this + 0x118);
    uVar4 = Sample::getPitch();
    (**(code **)(*plVar3 + 0x10))(param_2,uVar4,0,param_4,plVar3,param_1,uVar2);
  }
  return LVar1 != (LoopSynthesisSample)0x0;
}


