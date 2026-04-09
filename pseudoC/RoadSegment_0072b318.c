// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~RoadSegment
// Entry Point: 0072b318
// Size: 92 bytes
// Signature: undefined __thiscall ~RoadSegment(RoadSegment * this)


/* RoadSegment::~RoadSegment() */

void __thiscall RoadSegment::~RoadSegment(RoadSegment *this)

{
  void *pvVar1;
  long *plVar2;
  
  pvVar1 = *(void **)(this + 0x38);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x40) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  plVar2 = *(long **)this;
  *(undefined8 *)this = 0;
  if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0072b364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))();
    return;
  }
  return;
}


