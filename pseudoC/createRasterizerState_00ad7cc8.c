// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createRasterizerState
// Entry Point: 00ad7cc8
// Size: 240 bytes
// Signature: undefined __cdecl createRasterizerState(RasterizerStateDesc * param_1, ExtendedRasterizationStateCreateInfo * param_2, bool param_3)


/* VulkanRasterizerState::createRasterizerState(RasterizerStateDesc const&,
   VulkanRasterizerState::ExtendedRasterizationStateCreateInfo&, bool) */

void VulkanRasterizerState::createRasterizerState
               (RasterizerStateDesc *param_1,ExtendedRasterizationStateCreateInfo *param_2,
               bool param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  iVar2 = *(int *)param_1;
  *(undefined4 *)param_2 = 0x17;
  uVar1 = (byte)param_1[0x19] ^ 1;
  if (param_1[0x18] == (RasterizerStateDesc)0x0) {
    uVar1 = 1;
  }
  *(uint *)(param_2 + 0x1c) = (uint)(iVar2 == 0);
  uVar3 = *(uint *)(param_1 + 4);
  *(uint *)(param_2 + 0x14) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = 0;
  if (uVar3 < 3) {
    *(uint *)(param_2 + 0x20) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x30) = 0;
  dVar4 = 8388608.0;
  if (iVar2 != 0x1e) {
    dVar4 = 16777216.0;
  }
  dVar5 = 65536.0;
  if (iVar2 != 0x1c) {
    dVar5 = dVar4;
  }
  dVar4 = *(double *)(param_1 + 8);
  *(undefined4 *)(param_2 + 0x24) = 1;
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x14);
  *(float *)(param_2 + 0x2c) = (float)(dVar4 * dVar5);
  *(uint *)(param_2 + 0x28) =
       (uint)((float)(dVar4 * dVar5) != 0.0 || *(float *)(param_1 + 0x14) != 0.0);
  *(undefined4 *)(param_2 + 0x38) = 0x3f800000;
  if ((param_3) && (param_1[0x1c] != (RasterizerStateDesc)0x0)) {
    *(undefined4 *)(param_2 + 0x40) = 0x3b9ebdb9;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 3;
    *(ExtendedRasterizationStateCreateInfo **)(param_2 + 8) = param_2 + 0x40;
  }
  return;
}


