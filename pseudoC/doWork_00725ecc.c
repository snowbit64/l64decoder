// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doWork
// Entry Point: 00725ecc
// Size: 108 bytes
// Signature: undefined __thiscall doWork(DynamicAvoidance * this, bool * param_1)


/* DynamicAvoidance::doWork(bool volatile&) */

void __thiscall DynamicAvoidance::doWork(DynamicAvoidance *this,bool *param_1)

{
  if (*param_1 == false) {
    do {
      Event::wait((Event *)(this + 0x8c),0xffffffff);
      if (*param_1 == false) {
        handleCollisions();
      }
      Event::post();
    } while (*param_1 == false);
  }
  return;
}


