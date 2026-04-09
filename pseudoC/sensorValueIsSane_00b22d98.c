// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sensorValueIsSane
// Entry Point: 00b22d98
// Size: 48 bytes
// Signature: undefined __cdecl sensorValueIsSane(float param_1)


/* WARNING: Removing unreachable block (ram,0x00b22dc0) */
/* AndroidInputDevice::sensorValueIsSane(float) */

bool AndroidInputDevice::sensorValueIsSane(float param_1)

{
  int iVar1;
  
  iVar1 = finite((double)param_1);
  return iVar1 != 0;
}


