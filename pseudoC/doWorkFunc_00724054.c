// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doWorkFunc
// Entry Point: 00724054
// Size: 112 bytes
// Signature: undefined __cdecl doWorkFunc(void * param_1, bool * param_2)


/* DynamicAvoidance::doWorkFunc(void*, bool volatile&) */

undefined8 DynamicAvoidance::doWorkFunc(void *param_1,bool *param_2)

{
  if (*param_2 == false) {
    do {
      Event::wait((Event *)((long)param_1 + 0x8c),0xffffffff);
      if (*param_2 == false) {
        handleCollisions();
      }
      Event::post();
    } while (*param_2 == false);
  }
  return 0;
}


