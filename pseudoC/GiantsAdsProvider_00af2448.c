// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~GiantsAdsProvider
// Entry Point: 00af2448
// Size: 280 bytes
// Signature: undefined __thiscall ~GiantsAdsProvider(GiantsAdsProvider * this)


/* GiantsAdsProvider::~GiantsAdsProvider() */

void __thiscall GiantsAdsProvider::~GiantsAdsProvider(GiantsAdsProvider *this)

{
  GiantsAdsProvider GVar1;
  void *pvVar2;
  Thread *this_00;
  
                    /* try { // try from 00af2460 to 00af2477 has its CatchHandler @ 00af2560 */
  Thread::cancel();
  Event::post();
  Thread::join();
  this_00 = *(Thread **)(this + 0x38);
  if (this_00 != (Thread *)0x0) {
    Thread::~Thread(this_00);
    operator_delete(this_00);
  }
  if (*(long **)(this + 0x198) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x198) + 8))();
  }
  pvVar2 = *(void **)(this + 0x1a0);
  *(undefined8 *)(this + 0x198) = 0;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x1a8) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x160));
  pvVar2 = *(void **)(this + 0x138);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x140) = pvVar2;
    operator_delete(pvVar2);
  }
  Mutex::~Mutex((Mutex *)(this + 0x110));
  if (((byte)this[0xd8] & 1) == 0) {
    GVar1 = this[0xb8];
  }
  else {
    operator_delete(*(void **)(this + 0xe8));
    GVar1 = this[0xb8];
  }
  if (((byte)GVar1 & 1) == 0) {
    pvVar2 = *(void **)(this + 0xa0);
  }
  else {
    operator_delete(*(void **)(this + 200));
    pvVar2 = *(void **)(this + 0xa0);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xa8) = pvVar2;
    operator_delete(pvVar2);
  }
  Event::~Event((Event *)(this + 0x40));
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


