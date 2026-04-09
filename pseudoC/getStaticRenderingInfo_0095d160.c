// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStaticRenderingInfo
// Entry Point: 0095d160
// Size: 216 bytes
// Signature: undefined __thiscall getStaticRenderingInfo(MultiresTexture * this, StaticRenderingInfo * param_1)


/* MultiresTexture::getStaticRenderingInfo(MultiresTexture::StaticRenderingInfo&) const */

void __thiscall
MultiresTexture::getStaticRenderingInfo(MultiresTexture *this,StaticRenderingInfo *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(this + 0xe0);
  uVar2 = *(uint *)(this + 0x44);
  uVar8 = *(undefined8 *)(lVar5 + 0x78);
  *(undefined8 *)param_1 = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(param_1 + 8) = uVar8;
  if (uVar2 != 0) {
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar5 + 0x80);
    if (uVar2 != 1) {
      lVar6 = (ulong)uVar2 - 1;
      lVar5 = 0x90;
      puVar7 = (undefined8 *)(param_1 + 0x18);
      do {
        lVar6 = lVar6 + -1;
        puVar1 = (undefined8 *)(*(long *)(this + 0xe0) + lVar5);
        lVar5 = lVar5 + 0x10;
        *puVar7 = *puVar1;
        puVar7 = puVar7 + 1;
      } while (lVar6 != 0);
    }
    if (3 < uVar2) goto LAB_0095d1e8;
  }
  memset(param_1 + (ulong)uVar2 * 8 + 0x10,0,(ulong)(3 - uVar2) * 8 + 8);
LAB_0095d1e8:
  lVar5 = *(long *)(this + 400);
  lVar6 = *(long *)(this + 0x198);
  iVar3 = *(int *)(this + 0x24);
  iVar4 = *(int *)(this + 0x178);
  *(int *)(param_1 + 0x30) = (int)(1L << ((ulong)**(uint **)(this + 0x90) & 0x3f));
  *(int *)(param_1 + 0x34) = 1 << (ulong)(iVar3 - iVar4 & 0x1f);
  *(int *)(param_1 + 0x38) = (int)((ulong)(lVar6 - lVar5) >> 4) * -0x11111111 + -1;
  return;
}


