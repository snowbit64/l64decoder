// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 008b3664
// Size: 160 bytes
// Signature: undefined __thiscall play(StaticSample * this, uint param_1, float param_2, float param_3, float param_4, Sample * param_5)


/* StaticSample::play(unsigned int, float, float, float, Sample*) */

bool __thiscall
StaticSample::play(StaticSample *this,uint param_1,float param_2,float param_3,float param_4,
                  Sample *param_5)

{
  StaticSample SVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  SVar1 = this[0x30];
  *(float *)(this + 0x58) = param_2;
  if ((SVar1 != (StaticSample)0x0) && (plVar2 = *(long **)(this + 0x78), plVar2 != (long *)0x0)) {
    if ((param_5 == (Sample *)0x0) || (((byte)param_5[0x14] >> 6 & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(param_5 + 0x78);
    }
    uVar4 = Sample::getPitch();
    (**(code **)(*plVar2 + 0x10))(param_2,uVar4,param_3,param_4,plVar2,param_1,uVar3);
  }
  return SVar1 != (StaticSample)0x0;
}


