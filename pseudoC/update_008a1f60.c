// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 008a1f60
// Size: 68 bytes
// Signature: undefined __cdecl update(float param_1)


/* TerrainDeformation::update(float) */

float TerrainDeformation::update(float param_1)

{
  long in_x0;
  uint uVar1;
  
  if (*(char *)(in_x0 + 0x118) != '\0') {
    uVar1 = 0;
    do {
      param_1 = (float)doIteration();
      if (0x1c < uVar1) {
        return param_1;
      }
      uVar1 = uVar1 + 1;
    } while (*(char *)(in_x0 + 0x118) != '\0');
  }
  return param_1;
}


