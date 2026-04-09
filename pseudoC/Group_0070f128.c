// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~Group
// Entry Point: 0070f128
// Size: 144 bytes
// Signature: undefined __thiscall ~Group(Group * this)


/* AnimalSoundSource::Group::~Group() */

void __thiscall AnimalSoundSource::Group::~Group(Group *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(this + 0x40);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0x48);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(this + 0x40);
    }
    *(byte **)(this + 0x48) = pbVar2;
    operator_delete(pbVar3);
  }
  if (((byte)*this & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


