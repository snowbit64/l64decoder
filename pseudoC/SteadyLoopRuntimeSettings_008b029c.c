// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SteadyLoopRuntimeSettings
// Entry Point: 008b029c
// Size: 40 bytes
// Signature: undefined __thiscall SteadyLoopRuntimeSettings(SteadyLoopRuntimeSettings * this)


/* SteadyLoopRuntimeSettings::SteadyLoopRuntimeSettings() */

void __thiscall
SteadyLoopRuntimeSettings::SteadyLoopRuntimeSettings(SteadyLoopRuntimeSettings *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 008b02b4 to 008b02b7 has its CatchHandler @ 008b02c4 */
  reset();
  return;
}


