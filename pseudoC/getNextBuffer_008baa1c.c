// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getNextBuffer
// Entry Point: 008baa1c
// Size: 336 bytes
// Signature: undefined __thiscall getNextBuffer(SteadyLoopSoundGenerator * this, uint param_1, float * param_2)


/* SteadyLoopSoundGenerator::getNextBuffer(unsigned int, float*) */

void __thiscall
SteadyLoopSoundGenerator::getNextBuffer(SteadyLoopSoundGenerator *this,uint param_1,float *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  float afStack_2068 [2048];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 8);
  if (((plVar3 == (long *)0x0) || (*plVar3 == plVar3[1])) ||
     ((*(int *)(this + 0x10) < 0 && (*(int *)(this + 0x30) < 0)))) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  else {
    __memset_chk(afStack_2068,0,(ulong)param_1 << 2,0x2000);
    if (param_1 != 0) {
      uVar4 = 0;
      do {
        uVar1 = param_1 - uVar4;
        if (0x7ff < uVar1) {
          uVar1 = 0x800;
        }
        if (0.0 < *(float *)(this + 0x14)) {
          getPitchedBuffer(this,(LoopRuntimeData *)(this + 0x10),uVar1,afStack_2068,false);
        }
        if (0.0 < *(float *)(this + 0x34)) {
          getPitchedBuffer(this,(LoopRuntimeData *)(this + 0x30),uVar1,afStack_2068,true);
        }
        memcpy(param_2 + uVar4,afStack_2068,(ulong)(uVar1 << 2));
        uVar4 = uVar1 + uVar4;
      } while (uVar4 < param_1);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


