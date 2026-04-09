// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~SoftVirtualTexture
// Entry Point: 00a99d64
// Size: 196 bytes
// Signature: undefined __thiscall ~SoftVirtualTexture(SoftVirtualTexture * this)


/* SoftVirtualTexture::~SoftVirtualTexture() */

void __thiscall SoftVirtualTexture::~SoftVirtualTexture(SoftVirtualTexture *this)

{
  uint uVar1;
  ulong uVar2;
  long **pplVar3;
  
  if (*(long **)(this + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x60) + 8))();
  }
  *(undefined8 *)(this + 0x60) = 0;
  if (*(long **)(this + 0x68) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x68) + 8))();
  }
  *(undefined8 *)(this + 0x68) = 0;
  if (*(long **)(this + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x78) + 8))();
  }
  uVar1 = *(uint *)(this + 0x18);
  *(undefined8 *)(this + 0x78) = 0;
  if (uVar1 != 0) {
    uVar2 = 0;
    pplVar3 = (long **)(this + 0x80);
    do {
      if (*pplVar3 != (long *)0x0) {
        (**(code **)(**pplVar3 + 8))();
        uVar1 = *(uint *)(this + 0x18);
      }
      uVar2 = uVar2 + 1;
      *pplVar3 = (long *)0x0;
      pplVar3 = pplVar3 + 2;
    } while (uVar2 < uVar1);
  }
  if (m_pCurrentInstance == this) {
    m_pCurrentInstance = (SoftVirtualTexture *)0x0;
  }
  return;
}


