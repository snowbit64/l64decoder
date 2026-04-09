// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: process
// Entry Point: 008b7280
// Size: 100 bytes
// Signature: undefined __thiscall process(LoadSoundSimulation * this, float * param_1, uint param_2)


/* WARNING: Removing unreachable block (ram,0x008b72a4) */
/* LoadSoundSimulation::process(float*, unsigned int) */

undefined  [16] __thiscall
LoadSoundSimulation::process(LoadSoundSimulation *this,float *param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 extraout_s0;
  undefined4 uVar4;
  undefined4 extraout_var;
  undefined8 uVar5;
  undefined8 extraout_var_00;
  undefined auVar3 [16];
  
  uVar2 = 0x3f800000;
  uVar4 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    uVar1 = (ulong)param_2;
    do {
      processEffects(this,param_1);
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
      uVar2 = extraout_s0;
      uVar4 = extraout_var;
      uVar5 = extraout_var_00;
    } while (uVar1 != 0);
  }
  auVar3._4_4_ = uVar4;
  auVar3._0_4_ = uVar2;
  auVar3._8_8_ = uVar5;
  return auVar3;
}


