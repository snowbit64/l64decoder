// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: typeIndexToName
// Entry Point: 0074d55c
// Size: 28 bytes
// Signature: undefined __thiscall typeIndexToName(DebugMarkerManager * this, uchar param_1)


/* DebugMarkerManager::typeIndexToName(unsigned char) */

undefined8 __thiscall DebugMarkerManager::typeIndexToName(DebugMarkerManager *this,uchar param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)(this + 0x98) + (ulong)param_1 * 8);
  if (3 < param_1) {
    puVar1 = (undefined8 *)(this + 0x98);
  }
  return *puVar1;
}


