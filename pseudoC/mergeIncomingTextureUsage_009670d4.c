// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeIncomingTextureUsage
// Entry Point: 009670d4
// Size: 88 bytes
// Signature: undefined __cdecl mergeIncomingTextureUsage(TextureUsageInternal * param_1, TextureUsageInternal * param_2)


/* TextureStreamingManager::mergeIncomingTextureUsage(TextureStreamingManager::TextureUsageInternal
   const&, TextureStreamingManager::TextureUsageInternal&) */

void TextureStreamingManager::mergeIncomingTextureUsage
               (TextureUsageInternal *param_1,TextureUsageInternal *param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(ulong *)(param_2 + 0x18) <= *(ulong *)(param_1 + 0x18)) {
    if (*(ulong *)(param_2 + 0x18) < *(ulong *)(param_1 + 0x18)) {
      uVar4 = *(undefined8 *)param_1;
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)param_2 = uVar4;
      *(undefined8 *)(param_2 + 0x18) = uVar3;
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      return;
    }
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + *(int *)(param_1 + 8);
    fVar1 = *(float *)(param_1 + 0xc);
    if (*(float *)(param_1 + 0xc) <= *(float *)(param_2 + 0xc)) {
      fVar1 = *(float *)(param_2 + 0xc);
    }
    *(float *)(param_2 + 0xc) = fVar1;
    fVar1 = *(float *)(param_1 + 0x10);
    if (*(float *)(param_2 + 0x10) <= *(float *)(param_1 + 0x10)) {
      fVar1 = *(float *)(param_2 + 0x10);
    }
    *(float *)(param_2 + 0x10) = fVar1;
  }
  return;
}


