// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLodTextureSize
// Entry Point: 008edf70
// Size: 144 bytes
// Signature: undefined __thiscall setLodTextureSize(BaseTerrainSyncer * this, uint param_1, uint param_2)


/* BaseTerrainSyncer::setLodTextureSize(unsigned int, unsigned int) */

void __thiscall
BaseTerrainSyncer::setLodTextureSize(BaseTerrainSyncer *this,uint param_1,uint param_2)

{
  void *__s;
  ulong uVar1;
  void **ppvVar2;
  
  uVar1 = (ulong)param_1;
  ppvVar2 = *(void ***)(this + 0x20);
  *(uint *)(this + 0x38) = param_1;
  *(uint *)(this + 0x3c) = param_2;
  if (ppvVar2 != (void **)0x0) {
    if (*ppvVar2 != (void *)0x0) {
      operator_delete__(*ppvVar2);
    }
    operator_delete(ppvVar2);
    uVar1 = (ulong)*(uint *)(this + 0x38);
    param_2 = *(uint *)(this + 0x3c);
  }
  ppvVar2 = (void **)operator_new(0x10);
  *(uint *)(ppvVar2 + 1) = param_2;
  *(int *)((long)ppvVar2 + 0xc) = (int)uVar1;
                    /* try { // try from 008edfcc to 008edfd3 has its CatchHandler @ 008ee000 */
  __s = operator_new__(uVar1 << 3);
  *ppvVar2 = __s;
  if ((int)uVar1 != 0) {
    memset(__s,0xff,uVar1 << 3);
  }
  *(void ***)(this + 0x20) = ppvVar2;
  return;
}


