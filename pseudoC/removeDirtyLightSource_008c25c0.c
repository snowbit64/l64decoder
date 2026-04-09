// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeDirtyLightSource
// Entry Point: 008c25c0
// Size: 88 bytes
// Signature: undefined __thiscall removeDirtyLightSource(CullingManager * this, LightSource * param_1)


/* CullingManager::removeDirtyLightSource(LightSource*) */

void __thiscall CullingManager::removeDirtyLightSource(CullingManager *this,LightSource *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  
  lVar1 = *(long *)(this + 0x128);
  lVar2 = *(long *)(this + 0x130);
  iVar4 = (int)((ulong)(lVar2 - lVar1) >> 3);
  if (iVar4 != 0) {
    uVar3 = 0;
    do {
      if (*(LightSource **)(lVar1 + uVar3 * 8) == param_1) {
        if ((uint)uVar3 < iVar4 - 1U) {
          *(undefined8 *)(lVar1 + uVar3 * 8) = *(undefined8 *)(lVar2 + -8);
          lVar2 = *(long *)(this + 0x130);
        }
        *(long *)(this + 0x130) = lVar2 + -8;
        return;
      }
      uVar3 = uVar3 + 1;
    } while (((ulong)(lVar2 - lVar1) >> 3 & 0xffffffff) != uVar3);
  }
  return;
}


