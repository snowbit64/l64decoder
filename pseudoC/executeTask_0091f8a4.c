// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 0091f8a4
// Size: 32 bytes
// Signature: undefined __cdecl executeTask(uint param_1)


/* I3DSave::TerrainSaveDetailLayerTask::executeTask(unsigned int) */

void I3DSave::TerrainSaveDetailLayerTask::executeTask(uint param_1)

{
  char *pcVar1;
  ulong uVar2;
  
  uVar2 = (ulong)param_1;
  pcVar1 = (char *)(uVar2 + 0x31);
  if ((*(byte *)(uVar2 + 0x30) & 1) != 0) {
    pcVar1 = *(char **)(uVar2 + 0x40);
  }
  BaseTerrain::saveDetailLayer(*(BaseTerrain **)(uVar2 + 0x48),*(uint *)(uVar2 + 0x28),pcVar1);
  return;
}


