// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: hasSuccessor
// Entry Point: 00733600
// Size: 52 bytes
// Signature: undefined __thiscall hasSuccessor(RoadSegment * this, ushort param_1)


/* RoadSegment::hasSuccessor(unsigned short) const */

bool __thiscall RoadSegment::hasSuccessor(RoadSegment *this,ushort param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  
  puVar2 = *(ushort **)(this + 0x28);
  puVar1 = *(ushort **)(this + 0x20);
  puVar3 = puVar1;
  for (; (puVar1 != puVar2 && (puVar3 = puVar1, *puVar1 != param_1)); puVar1 = puVar1 + 1) {
    puVar3 = puVar2;
  }
  return puVar3 != puVar2;
}


