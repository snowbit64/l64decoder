// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~EnvMapBlender
// Entry Point: 00a0e4dc
// Size: 884 bytes
// Signature: undefined __thiscall ~EnvMapBlender(EnvMapBlender * this)


/* WARNING: Type propagation algorithm not settling */
/* EnvMapBlender::~EnvMapBlender() */

void __thiscall EnvMapBlender::~EnvMapBlender(EnvMapBlender *this)

{
  EnvMapBlender EVar1;
  long *plVar2;
  Thread *this_00;
  long *plVar3;
  
  if (*(long *)(this + 0xb78) != 0) {
                    /* try { // try from 00a0e4f8 to 00a0e503 has its CatchHandler @ 00a0e850 */
    Thread::cancel();
    Semaphore::post();
    this_00 = *(Thread **)(this + 0xb78);
    if (this_00 != (Thread *)0x0) {
      Thread::~Thread(this_00);
      operator_delete(this_00);
    }
  }
  plVar3 = *(long **)(this + 0x418);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long **)(this + 0x418) == plVar3) {
    *(undefined8 *)(this + 0x418) = 0;
  }
  if (*(long **)(this + 0x420) == plVar3) {
    *(undefined8 *)(this + 0x420) = 0;
  }
  if (*(long **)(this + 0x428) == plVar3) {
    *(undefined8 *)(this + 0x428) = 0;
  }
  if (*(long **)(this + 0x430) == plVar3) {
    *(undefined8 *)(this + 0x430) = 0;
  }
  if (*(long **)(this + 0x4f8) == plVar3) {
    *(undefined8 *)(this + 0x4f8) = 0;
  }
  plVar3 = *(long **)(this + 0x420);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long **)(this + 0x420) == plVar3) {
    *(undefined8 *)(this + 0x420) = 0;
  }
  if (*(long **)(this + 0x428) == plVar3) {
    *(undefined8 *)(this + 0x428) = 0;
  }
  if (*(long **)(this + 0x430) == plVar3) {
    *(undefined8 *)(this + 0x430) = 0;
  }
  if (*(long **)(this + 0x4f8) == plVar3) {
    *(undefined8 *)(this + 0x4f8) = 0;
  }
  plVar3 = *(long **)(this + 0x428);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long **)(this + 0x428) == plVar3) {
    *(undefined8 *)(this + 0x428) = 0;
  }
  if (*(long **)(this + 0x430) == plVar3) {
    *(undefined8 *)(this + 0x430) = 0;
  }
  if (*(long **)(this + 0x4f8) == plVar3) {
    *(undefined8 *)(this + 0x4f8) = 0;
  }
  plVar3 = *(long **)(this + 0x430);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
  if (*(long **)(this + 0x430) == plVar3) {
    *(undefined8 *)(this + 0x430) = 0;
  }
  plVar2 = *(long **)(this + 0x4f8);
  if (plVar2 == plVar3) {
    *(undefined8 *)(this + 0x4f8) = 0;
    plVar3 = *(long **)(this + 0x550);
  }
  else {
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar3 = *(long **)(this + 0x550);
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(long **)(this + 0x558) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x558) + 8))();
  }
  if (*(long **)(this + 0x560) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x560) + 8))();
  }
  if (*(long **)(this + 0x568) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x568) + 8))();
  }
  if (*(long **)(this + 0x570) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x570) + 8))();
  }
  Semaphore::~Semaphore((Semaphore *)(this + 0xb80));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0xa78));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x978));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x878));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x778));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x678));
  AdhocShader::~AdhocShader((AdhocShader *)(this + 0x578));
  if (((byte)this[0x3f0] & 1) == 0) {
    EVar1 = this[0x3d8];
  }
  else {
    operator_delete(*(void **)(this + 0x400));
    EVar1 = this[0x3d8];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x3c0];
  }
  else {
    operator_delete(*(void **)(this + 1000));
    EVar1 = this[0x3c0];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x3a8];
  }
  else {
    operator_delete(*(void **)(this + 0x3d0));
    EVar1 = this[0x3a8];
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x3b8));
  }
  SmallVector<EnvMapBlender::LoadingFile,4u>::~SmallVector
            ((SmallVector<EnvMapBlender::LoadingFile,4u> *)(this + 0xe0));
  if (((byte)this[0xb8] & 1) == 0) {
    EVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 200));
    EVar1 = this[0xa0];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    EVar1 = this[0x88];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x70];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    EVar1 = this[0x70];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x48];
  }
  else {
    operator_delete(*(void **)(this + 0x80));
    EVar1 = this[0x48];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x30];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    EVar1 = this[0x30];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = this[0x18];
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    EVar1 = this[0x18];
  }
  if (((byte)EVar1 & 1) == 0) {
    EVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    EVar1 = *this;
  }
  if (((byte)EVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


