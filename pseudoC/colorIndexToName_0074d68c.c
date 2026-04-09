// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: colorIndexToName
// Entry Point: 0074d68c
// Size: 28 bytes
// Signature: undefined __thiscall colorIndexToName(DebugMarkerManager * this, uchar param_1)


/* DebugMarkerManager::colorIndexToName(unsigned char) */

undefined8 __thiscall DebugMarkerManager::colorIndexToName(DebugMarkerManager *this,uchar param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)(this + 0x18) + (ulong)param_1 * 8);
  if (0xf < param_1) {
    puVar1 = (undefined8 *)(this + 0x18);
  }
  return *puVar1;
}


