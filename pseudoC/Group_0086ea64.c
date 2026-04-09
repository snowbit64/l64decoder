// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Group
// Entry Point: 0086ea64
// Size: 128 bytes
// Signature: undefined __thiscall ~Group(Group * this)


/* ConditionalAnimationConditions::Group::~Group() */

void __thiscall ConditionalAnimationConditions::Group::~Group(Group *this)

{
  void *pvVar1;
  void **ppvVar2;
  void **ppvVar3;
  void **ppvVar4;
  
  ppvVar4 = *(void ***)this;
  if (ppvVar4 == (void **)0x0) {
    return;
  }
  ppvVar3 = *(void ***)(this + 8);
  ppvVar2 = ppvVar4;
  if (ppvVar3 != ppvVar4) {
    do {
      ppvVar2 = ppvVar3 + -4;
      pvVar1 = *ppvVar2;
      if (pvVar1 != (void *)0x0) {
        ppvVar3[-3] = pvVar1;
        operator_delete(pvVar1);
      }
      ppvVar3 = ppvVar2;
    } while (ppvVar2 != ppvVar4);
    ppvVar2 = *(void ***)this;
  }
  *(void ***)(this + 8) = ppvVar4;
  operator_delete(ppvVar2);
  return;
}


