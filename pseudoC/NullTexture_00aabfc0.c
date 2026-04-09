// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: NullTexture
// Entry Point: 00aabfc0
// Size: 516 bytes
// Signature: undefined __thiscall NullTexture(NullTexture * this, TextureObjectDesc * param_1, NullRenderDevice * param_2)


/* NullTexture::NullTexture(TextureObjectDesc const&, NullRenderDevice*) */

void __thiscall
NullTexture::NullTexture(NullTexture *this,TextureObjectDesc *param_1,NullRenderDevice *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  *(undefined2 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x34) = 3;
  this[0x38] = (NullTexture)0x0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x1c) = 0x20000000200;
  *(undefined8 *)(this + 0x14) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x24) = 0x100000001;
  *(undefined ***)this = &PTR__NullTexture_00fe5d28;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x3c) = 0x100000001;
  this[0x6c] = (NullTexture)0x0;
  *(undefined8 *)(this + 0x4c) = 0x3f80000000000000;
  *(undefined8 *)(this + 0x44) = 0;
  uVar12 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 8) = uVar12;
  uVar14 = *(undefined8 *)(param_1 + 0x38);
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar12 = *(undefined8 *)(param_1 + 0x40);
  uVar18 = *(undefined8 *)(param_1 + 0x18);
  uVar17 = *(undefined8 *)(param_1 + 0x10);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x48) = uVar12;
  *(undefined8 *)(this + 0x40) = uVar14;
  *(undefined8 *)(this + 0x38) = uVar13;
  *(undefined8 *)(this + 0x58) = 0;
  *(NullRenderDevice **)(this + 0x60) = param_2;
  *(undefined8 *)(this + 0x20) = uVar18;
  *(undefined8 *)(this + 0x18) = uVar17;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = uVar16;
  *(undefined8 *)(this + 0x28) = uVar15;
  uVar8 = *(uint *)(param_1 + 0x14);
  uVar10 = *(uint *)(param_1 + 0x18);
  uVar9 = *(uint *)(param_1 + 0x1c);
  uVar11 = *(uint *)(param_1 + 0xc);
  uVar6 = uVar8;
  if (uVar8 == 0) {
    uVar6 = 1;
  }
  if (uVar10 == 0) {
    uVar10 = 1;
  }
  if (uVar9 == 0) {
    uVar9 = 1;
  }
  if (uVar11 == 0xffffffff) {
    uVar11 = uVar10;
    if (uVar6 <= uVar10) {
      uVar11 = uVar6;
    }
    uVar6 = uVar9;
    if ((uVar11 <= uVar9 || uVar9 == 0) || uVar9 < uVar11 && uVar9 == 1) {
      uVar6 = uVar11;
    }
    if (uVar6 < 2) {
      uVar11 = 0;
    }
    else {
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 1;
        bVar1 = 3 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar1);
    }
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  uVar6 = 0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6d] = (NullTexture)(1 < uVar9 || 1 < uVar2);
  do {
    iVar4 = PixelFormatUtil::getMemorySize(uVar8,uVar10,uVar9,*(PIXEL_FORMAT *)(param_1 + 0x2c));
    uVar2 = uVar10 >> 1;
    uVar6 = uVar6 + 1;
    if (uVar10 < 2) {
      uVar2 = 1;
    }
    uVar8 = uVar8 >> (1 < uVar8);
    uVar3 = uVar9 >> 1;
    if (uVar9 < 2) {
      uVar3 = 1;
    }
    *(int *)(this + 0x68) = *(int *)(this + 0x68) + iVar4;
    uVar10 = uVar2;
    uVar9 = uVar3;
  } while (uVar6 <= uVar11);
  iVar5 = (**(code **)(*(long *)this + 0x40))(this);
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  iVar4 = *(int *)(this + 0x68) * iVar5 * iVar4;
  *(int *)(this + 0x68) = iVar4;
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  lVar7 = *(long *)(this + 0x60);
  uVar11 = iVar5 * iVar4 + 0xffffU & 0xffff0000;
  *(uint *)(this + 0x68) = uVar11;
  if (((byte)this[0x3c] >> 4 & 1) == 0) {
    *(uint *)(lVar7 + 0x124) = *(int *)(lVar7 + 0x124) + uVar11;
  }
  else {
    *(uint *)(lVar7 + 0x120) = *(int *)(lVar7 + 0x120) + uVar11;
  }
  return;
}


