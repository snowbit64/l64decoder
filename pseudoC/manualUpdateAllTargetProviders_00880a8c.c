// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: manualUpdateAllTargetProviders
// Entry Point: 00880a8c
// Size: 176 bytes
// Signature: undefined manualUpdateAllTargetProviders(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalSteering::manualUpdateAllTargetProviders() */

void AnimalSteering::manualUpdateAllTargetProviders(void)

{
  bool bVar1;
  long in_x0;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  
  pplVar4 = *(long ***)(in_x0 + 0xc0);
  while (pplVar4 != (long **)(in_x0 + 200)) {
    plVar2 = pplVar4[5];
    plVar2[3] = *(long *)(in_x0 + 4);
    plVar2[4] = *(long *)(in_x0 + 0xc);
    (**(code **)(*plVar2 + 0x10))(0);
    pplVar3 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar3 = pplVar4 + 2;
      bVar1 = (long **)**pplVar3 != pplVar4;
      pplVar4 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar2 = *pplVar3;
          pplVar3 = (long **)(plVar2 + 2);
          pplVar4 = (long **)*pplVar3;
        } while (*pplVar4 != plVar2);
      }
    }
    else {
      do {
        pplVar4 = pplVar3;
        pplVar3 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  return;
}


