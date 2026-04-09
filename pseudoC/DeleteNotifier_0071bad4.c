// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DeleteNotifier
// Entry Point: 0071bad4
// Size: 200 bytes
// Signature: undefined __thiscall ~DeleteNotifier(DeleteNotifier * this)


/* DeleteNotifier::~DeleteNotifier() */

void __thiscall DeleteNotifier::~DeleteNotifier(DeleteNotifier *this)

{
  long **pplVar1;
  long **pplVar2;
  long **pplVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  void **ppvVar7;
  
  lVar4 = tpidr_el0;
  lVar6 = *(long *)(lVar4 + 0x28);
  ppvVar7 = (void **)(this + 8);
  pplVar2 = (long **)*ppvVar7;
  pplVar3 = *(long ***)(this + 0x10);
  *(undefined ***)this = &PTR__DeleteNotifier_00fda3d0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *ppvVar7 = (void *)0x0;
  for (pplVar1 = pplVar2; pplVar1 != pplVar3; pplVar1 = pplVar1 + 1) {
                    /* try { // try from 0071bb40 to 0071bb47 has its CatchHandler @ 0071bb9c */
    (**(code **)(**pplVar1 + 0x10))(*pplVar1,this);
  }
  if (pplVar2 != (long **)0x0) {
    operator_delete(pplVar2);
  }
  pvVar5 = *ppvVar7;
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar5;
    operator_delete(pvVar5);
  }
  if (*(long *)(lVar4 + 0x28) == lVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


