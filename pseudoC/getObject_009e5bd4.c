// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getObject
// Entry Point: 009e5bd4
// Size: 28 bytes
// Signature: undefined __thiscall getObject(ProceduralPlacementRule * this, uint param_1)


/* ProceduralPlacementRule::getObject(unsigned int) */

undefined8 __thiscall ProceduralPlacementRule::getObject(ProceduralPlacementRule *this,uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  if ((ulong)(*(long *)(this + 0x70) - *(long *)(this + 0x68) >> 3) <= uVar1) {
    uVar1 = 0;
  }
  return *(undefined8 *)(*(long *)(this + 0x68) + uVar1 * 8);
}


