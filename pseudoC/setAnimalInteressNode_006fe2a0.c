// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAnimalInteressNode
// Entry Point: 006fe2a0
// Size: 16 bytes
// Signature: undefined __thiscall setAnimalInteressNode(AnimalHusbandry * this, TransformGroup * param_1)


/* AnimalHusbandry::setAnimalInteressNode(TransformGroup*) */

void __thiscall
AnimalHusbandry::setAnimalInteressNode(AnimalHusbandry *this,TransformGroup *param_1)

{
  *(TransformGroup **)(this + 0x1f758) = param_1;
  return;
}


