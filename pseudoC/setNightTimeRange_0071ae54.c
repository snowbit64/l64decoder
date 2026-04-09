// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setNightTimeRange
// Entry Point: 0071ae54
// Size: 52 bytes
// Signature: undefined __thiscall setNightTimeRange(TrafficSystem * this, float param_1, float param_2)


/* TrafficSystem::setNightTimeRange(float, float) */

void __thiscall TrafficSystem::setNightTimeRange(TrafficSystem *this,float param_1,float param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41c00000,4);
  uVar1 = NEON_fminnm(CONCAT44(ABS(param_2),ABS(param_1)),uVar1,4);
  *(ulong *)(this + 0x4d08) =
       CONCAT44((float)((ulong)uVar1 >> 0x20) * 60.0 * 60.0 * 1000.0,
                (float)uVar1 * 60.0 * 60.0 * 1000.0);
  return;
}


