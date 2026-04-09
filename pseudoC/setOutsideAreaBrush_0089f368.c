// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setOutsideAreaBrush
// Entry Point: 0089f368
// Size: 48 bytes
// Signature: undefined __thiscall setOutsideAreaBrush(TerrainDeformation * this, TerrainBrush * param_1)


/* TerrainDeformation::setOutsideAreaBrush(TerrainBrush*) */

void __thiscall
TerrainDeformation::setOutsideAreaBrush(TerrainDeformation *this,TerrainBrush *param_1)

{
  if (*(void **)(this + 0x90) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x90));
  }
  *(TerrainBrush **)(this + 0x90) = param_1;
  return;
}


