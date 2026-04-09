// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ov_read_func
// Entry Point: 00b07b6c
// Size: 104 bytes
// Signature: undefined __cdecl ov_read_func(void * param_1, ulong param_2, ulong param_3, void * param_4)


/* AudioLoaderOGG::ov_read_func(void*, unsigned long, unsigned long, void*) */

long * AudioLoaderOGG::ov_read_func(void *param_1,ulong param_2,ulong param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  uint uVar4;
  
  plVar3 = (long *)0x0;
  if (((param_2 != 0) && (param_3 != 0)) &&
     (plVar3 = *(long **)((long)param_4 + 0x10), plVar3 != (long *)0x0)) {
    uVar4 = (uint)param_2;
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3,param_1,(int)param_3 * uVar4);
    if ((int)uVar2 < 0) {
      plVar3 = (long *)0x0;
    }
    else {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar2 / uVar4;
      }
      plVar3 = (long *)(ulong)uVar1;
      *(ulong *)((long)param_4 + 8) = *(long *)((long)param_4 + 8) + (ulong)uVar2;
    }
  }
  return plVar3;
}


