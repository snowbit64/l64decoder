// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTileUpdated
// Entry Point: 0095da50
// Size: 196 bytes
// Signature: undefined __thiscall onTileUpdated(MultiresTexture * this, uint param_1, uint param_2, uint param_3, int param_4, int param_5)


/* MultiresTexture::onTileUpdated(unsigned int, unsigned int, unsigned int, int, int) */

void __thiscall
MultiresTexture::onTileUpdated
          (MultiresTexture *this,uint param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar2 = *(long *)(this + 400);
  lVar5 = lVar2 + (ulong)param_3 * 0xf0;
  lVar6 = *(long *)(lVar5 + 0x80);
  uVar3 = (ulong)(uint)((param_4 - *(int *)(lVar5 + 0x4c)) +
                       *(int *)(lVar5 + 0x70) * (param_5 - *(int *)(lVar5 + 0x50)));
  uVar1 = *(uint *)(lVar6 + uVar3 * 4);
  if (param_2 != uVar1 >> 0x10) {
    *(undefined *)(lVar2 + (ulong)param_3 * 0xf0 + 0xe8) = 1;
  }
  *(uint *)(lVar6 + uVar3 * 4) = uVar1 & 0xff | param_2 << 0x10;
  uVar1 = *(uint *)(lVar2 + (ulong)param_3 * 0xf0);
  uVar3 = (ulong)uVar1;
  if (uVar1 != 0) {
    lVar2 = *(long *)(this + 400);
    if (uVar1 == 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3 & 0xfffffffe;
      puVar4 = (undefined *)(lVar2 + 0x1d8);
      uVar8 = uVar7;
      do {
        puVar4[-0xf0] = 1;
        uVar8 = uVar8 - 2;
        *puVar4 = 1;
        puVar4 = puVar4 + 0x1e0;
      } while (uVar8 != 0);
      if (uVar7 == uVar3) {
        return;
      }
    }
    lVar5 = uVar3 - uVar7;
    puVar4 = (undefined *)(lVar2 + uVar7 * 0xf0 + 0xe8);
    do {
      lVar5 = lVar5 + -1;
      *puVar4 = 1;
      puVar4 = puVar4 + 0xf0;
    } while (lVar5 != 0);
  }
  return;
}


