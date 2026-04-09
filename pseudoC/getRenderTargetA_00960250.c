// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderTargetA
// Entry Point: 00960250
// Size: 104 bytes
// Signature: undefined __thiscall getRenderTargetA(MultiresTextureGpuUpdater * this, uint param_1, char * param_2)


/* MultiresTextureGpuUpdater::getRenderTargetA(unsigned int, char*) */

undefined8 __thiscall
MultiresTextureGpuUpdater::getRenderTargetA
          (MultiresTextureGpuUpdater *this,uint param_1,char *param_2)

{
  MultiresTextureGpuUpdater *pMVar1;
  uint uVar2;
  undefined4 uVar3;
  MultiresTextureGpuUpdater MVar4;
  uint uVar5;
  
  uVar2 = *(uint *)(this + 0x4c);
  uVar5 = 0;
  if (uVar2 != 0) {
    uVar5 = param_1 / uVar2;
  }
  uVar2 = param_1 - uVar5 * uVar2;
  pMVar1 = this + (ulong)uVar2 * 0x18 + 0x51;
  if (((byte)this[(ulong)uVar2 * 0x18 + 0x50] & 1) != 0) {
    pMVar1 = *(MultiresTextureGpuUpdater **)(this + (ulong)uVar2 * 0x18 + 0x60);
  }
  if (pMVar1[1] == (MultiresTextureGpuUpdater)0x3a) {
    uVar3 = *(undefined4 *)(pMVar1 + 2);
    MVar4 = *pMVar1;
    param_2[4] = '\0';
    *(undefined4 *)param_2 = uVar3;
    return *(undefined8 *)
            (*(long *)(this + 0x120) + (ulong)uVar5 * 0xf8 + (ulong)((byte)MVar4 - 0x30) * 8 + 0x50)
    ;
  }
  return 0;
}


