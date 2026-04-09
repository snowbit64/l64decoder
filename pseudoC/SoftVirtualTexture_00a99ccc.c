// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SoftVirtualTexture
// Entry Point: 00a99ccc
// Size: 152 bytes
// Signature: undefined __thiscall SoftVirtualTexture(SoftVirtualTexture * this, SoftVirtualTextureDesc * param_1)


/* SoftVirtualTexture::SoftVirtualTexture(SoftVirtualTextureDesc const&) */

void __thiscall
SoftVirtualTexture::SoftVirtualTexture(SoftVirtualTexture *this,SoftVirtualTextureDesc *param_1)

{
  SoftVirtualTexture SVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *(undefined4 *)(this + 0x20) = 0;
  this[0x24] = (SoftVirtualTexture)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (SoftVirtualTexture)0x0;
  *(undefined8 *)(this + 8) = 0x400000008;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x34] = (SoftVirtualTexture)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  this[0x3c] = (SoftVirtualTexture)0x0;
  *(undefined8 *)this = 0x1000000020;
  *(undefined8 *)(this + 0x18) = 0x100000001;
  *(undefined8 *)(this + 0x10) = 0x200000002000;
  uVar3 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar3;
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  SVar1 = *(SoftVirtualTexture *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = uVar5;
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x90) = 0;
  this[0x40] = SVar1;
  *(undefined8 *)(this + 0x18) = uVar7;
  *(undefined8 *)(this + 0x10) = uVar6;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  lVar2 = (long)m_pCurrentInstance;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  if (lVar2 != 0) {
    return;
  }
  m_pCurrentInstance = this;
  return;
}


