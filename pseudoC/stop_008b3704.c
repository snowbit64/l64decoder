// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stop
// Entry Point: 008b3704
// Size: 40 bytes
// Signature: undefined __cdecl stop(float param_1, float param_2)


/* StaticSample::stop(float, float) */

undefined8 StaticSample::stop(float param_1,float param_2)

{
  long in_x0;
  
  if (*(long **)(in_x0 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(in_x0 + 0x78) + 0x40))();
  }
  return 1;
}


