// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOverlayLayerTextureArrayOffset
// Entry Point: 008eac38
// Size: 224 bytes
// Signature: undefined __thiscall getOverlayLayerTextureArrayOffset(BaseTerrain * this, char * param_1)


/* BaseTerrain::getOverlayLayerTextureArrayOffset(char const*) */

int __thiscall BaseTerrain::getOverlayLayerTextureArrayOffset(BaseTerrain *this,char *param_1)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 0x20);
  lVar9 = *(long *)(this + 0x28);
  if (lVar9 != lVar10) {
    uVar8 = 0;
    do {
      lVar6 = lVar10 + uVar8 * 0x98;
      sVar4 = strlen(param_1);
      pbVar7 = (byte *)(lVar6 + 8);
      bVar2 = *pbVar7;
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x10);
      }
      if (sVar4 == sVar1) {
                    /* try { // try from 008eacc4 to 008eacd7 has its CatchHandler @ 008ead18 */
        iVar3 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar7,0,(char *)0xffffffffffffffff,(ulong)param_1);
        if (iVar3 == 0) goto LAB_008eace8;
        lVar10 = *(long *)(this + 0x20);
        lVar9 = *(long *)(this + 0x28);
      }
      uVar8 = (ulong)((int)uVar8 + 1);
      uVar5 = (lVar9 - lVar10 >> 3) * -0x79435e50d79435e5;
    } while (uVar8 <= uVar5 && uVar5 - uVar8 != 0);
  }
  uVar8 = 0xffffffff;
LAB_008eace8:
  return (int)uVar8 +
         (int)((ulong)(*(long *)(this + 0x10) - *(long *)(this + 8)) >> 4) * -0x45d1745d;
}


