// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasPredecessor
// Entry Point: 00733634
// Size: 52 bytes
// Signature: undefined __thiscall hasPredecessor(RoadSegment * this, ushort param_1)


/* RoadSegment::hasPredecessor(unsigned short) const */

bool __thiscall RoadSegment::hasPredecessor(RoadSegment *this,ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar2 = *(ushort **)(this + 0x40);
  puVar1 = *(ushort **)(this + 0x38);
  puVar3 = puVar1;
  for (; (puVar1 != puVar2 && (puVar3 = puVar1, *puVar1 != param_1)); puVar1 = puVar1 + 1) {
    puVar3 = puVar2;
  }
  return puVar3 != puVar2;
}


