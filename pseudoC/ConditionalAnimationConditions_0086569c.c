// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConditionalAnimationConditions
// Entry Point: 0086569c
// Size: 200 bytes
// Signature: undefined __thiscall ~ConditionalAnimationConditions(ConditionalAnimationConditions * this)


/* ConditionalAnimationConditions::~ConditionalAnimationConditions() */

void __thiscall
ConditionalAnimationConditions::~ConditionalAnimationConditions
          (ConditionalAnimationConditions *this)

{
  void **ppvVar1;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void **ppvVar5;
  void **ppvVar6;
  void **ppvVar7;
  
  ppvVar5 = *(void ***)this;
  if (ppvVar5 == (void **)0x0) {
    return;
  }
  ppvVar6 = *(void ***)(this + 8);
  ppvVar3 = ppvVar5;
  if (ppvVar6 != ppvVar5) {
    do {
      ppvVar3 = ppvVar6 + -3;
      ppvVar7 = (void **)*ppvVar3;
      if (ppvVar7 != (void **)0x0) {
        ppvVar4 = (void **)ppvVar6[-2];
        ppvVar1 = ppvVar7;
        if (ppvVar4 != ppvVar7) {
          do {
            ppvVar1 = ppvVar4 + -4;
            pvVar2 = *ppvVar1;
            if (pvVar2 != (void *)0x0) {
              ppvVar4[-3] = pvVar2;
              operator_delete(pvVar2);
            }
            ppvVar4 = ppvVar1;
          } while (ppvVar1 != ppvVar7);
          ppvVar1 = (void **)*ppvVar3;
        }
        ppvVar6[-2] = ppvVar7;
        operator_delete(ppvVar1);
      }
      ppvVar6 = ppvVar3;
    } while (ppvVar3 != ppvVar5);
    ppvVar3 = *(void ***)this;
  }
  *(void ***)(this + 8) = ppvVar5;
  operator_delete(ppvVar3);
  return;
}


