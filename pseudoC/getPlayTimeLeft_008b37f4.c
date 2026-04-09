// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPlayTimeLeft
// Entry Point: 008b37f4
// Size: 112 bytes
// Signature: undefined getPlayTimeLeft(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* StaticSample::getPlayTimeLeft() const */

float StaticSample::getPlayTimeLeft(void)

{
  long in_x0;
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  
  if (*(long **)(in_x0 + 0x78) == (long *)0x0) {
    fVar4 = 0.0;
  }
  else {
    uVar1 = (**(code **)(**(long **)(in_x0 + 0x78) + 0x28))();
    plVar3 = *(long **)(*(long *)(in_x0 + 0x70) + 0x48);
    uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    fVar4 = ((float)(uVar1 & 0xffffffff) / (float)(uVar2 & 0xffffffff)) * 1000.0;
  }
  return fVar4;
}


