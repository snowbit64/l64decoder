// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRenderTargetC
// Entry Point: 00960350
// Size: 152 bytes
// Signature: undefined __thiscall getRenderTargetC(MultiresTextureGpuUpdater * this, uint param_1, char * param_2)


/* MultiresTextureGpuUpdater::getRenderTargetC(unsigned int, char*) */

char * __thiscall
MultiresTextureGpuUpdater::getRenderTargetC
          (MultiresTextureGpuUpdater *this,uint param_1,char *param_2)

{
  MultiresTextureGpuUpdater *__s;
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar1 = *(uint *)(this + 0x4c);
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = param_1 / uVar1;
  }
  uVar1 = param_1 - uVar4 * uVar1;
  __s = this + (ulong)uVar1 * 0x18 + 0x51;
  if (((byte)this[(ulong)uVar1 * 0x18 + 0x50] & 1) != 0) {
    __s = *(MultiresTextureGpuUpdater **)(this + (ulong)uVar1 * 0x18 + 0x60);
  }
  pcVar5 = strchr((char *)__s,0x3b);
  if (pcVar5 != (char *)0x0) {
    if (pcVar5[2] == ':') {
      uVar2 = *(undefined4 *)(pcVar5 + 3);
      bVar3 = pcVar5[1];
      param_2[4] = '\0';
      *(undefined4 *)param_2 = uVar2;
      pcVar5 = *(char **)(*(long *)(this + 0x120) + (ulong)uVar4 * 0xf8 + (ulong)(bVar3 - 0x30) * 8
                         + 0xd0);
    }
    else {
      pcVar5 = (char *)0x0;
    }
  }
  return pcVar5;
}


