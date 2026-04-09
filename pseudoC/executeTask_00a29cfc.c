// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: executeTask
// Entry Point: 00a29cfc
// Size: 20 bytes
// Signature: undefined __cdecl executeTask(uint param_1)


/* LightListRasterizer::FillGridTask::executeTask(unsigned int) */

void LightListRasterizer::FillGridTask::executeTask(uint param_1)

{
  ulong uVar1;
  
  uVar1 = (ulong)param_1;
  fillGrid(*(LightListRasterizer **)(uVar1 + 0x28),(Matrix4x4 *)(uVar1 + 0x30),
           (Matrix4x4 *)(uVar1 + 0x70));
  return;
}


