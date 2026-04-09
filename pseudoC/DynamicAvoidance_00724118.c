// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DynamicAvoidance
// Entry Point: 00724118
// Size: 164 bytes
// Signature: undefined __thiscall ~DynamicAvoidance(DynamicAvoidance * this)


/* DynamicAvoidance::~DynamicAvoidance() */

void __thiscall DynamicAvoidance::~DynamicAvoidance(DynamicAvoidance *this)

{
  void *pvVar1;
  Thread *this_00;
  
                    /* try { // try from 00724130 to 0072413f has its CatchHandler @ 007241bc */
  Thread::cancel();
  Event::post();
  this_00 = *(Thread **)(this + 0x80);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  Event::~Event((Event *)(this + 0xe8));
  Event::~Event((Event *)(this + 0x8c));
  if (*(void **)(this + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x60));
  }
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x48));
  }
  pvVar1 = *(void **)(this + 0x20);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


