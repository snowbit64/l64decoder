// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ProceduralPlacementIndexMask
// Entry Point: 009cbe60
// Size: 136 bytes
// Signature: undefined __thiscall ~ProceduralPlacementIndexMask(ProceduralPlacementIndexMask * this)


/* ProceduralPlacementIndexMask::~ProceduralPlacementIndexMask() */

void __thiscall
ProceduralPlacementIndexMask::~ProceduralPlacementIndexMask(ProceduralPlacementIndexMask *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *(byte **)(this + 0xd0);
  *(undefined ***)this = &PTR__ProceduralPlacementIndexMask_00fe20a8;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0xd8);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar3 != pbVar2);
      pbVar3 = *(byte **)(this + 0xd0);
    }
    *(byte **)(this + 0xd8) = pbVar2;
    operator_delete(pbVar3);
  }
  ProceduralPlacementMask::~ProceduralPlacementMask((ProceduralPlacementMask *)this);
  return;
}


