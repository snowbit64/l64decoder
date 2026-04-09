// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SteadyLoopRuntimeSettings
// Entry Point: 008b0600
// Size: 132 bytes
// Signature: undefined __thiscall ~SteadyLoopRuntimeSettings(SteadyLoopRuntimeSettings * this)


/* SteadyLoopRuntimeSettings::~SteadyLoopRuntimeSettings() */

void __thiscall
SteadyLoopRuntimeSettings::~SteadyLoopRuntimeSettings(SteadyLoopRuntimeSettings *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
                    /* try { // try from 008b0614 to 008b0617 has its CatchHandler @ 008b0684 */
  reset();
  pbVar2 = *(byte **)this;
  if (pbVar2 == (byte *)0x0) {
    return;
  }
  pbVar1 = *(byte **)(this + 8);
  pbVar3 = pbVar2;
  if (pbVar1 != pbVar2) {
    do {
      pbVar3 = pbVar1 + -0x48;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar1 + -0x38));
      }
      pbVar1 = pbVar3;
    } while (pbVar3 != pbVar2);
    pbVar3 = *(byte **)this;
  }
  *(byte **)(this + 8) = pbVar2;
  operator_delete(pbVar3);
  return;
}


