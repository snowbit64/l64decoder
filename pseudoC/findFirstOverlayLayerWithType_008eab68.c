// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findFirstOverlayLayerWithType
// Entry Point: 008eab68
// Size: 204 bytes
// Signature: undefined __thiscall findFirstOverlayLayerWithType(BaseTerrain * this, char * param_1)


/* BaseTerrain::findFirstOverlayLayerWithType(char const*) */

ulong __thiscall BaseTerrain::findFirstOverlayLayerWithType(BaseTerrain *this,char *param_1)

{
  size_t sVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(this + 0x20);
  lVar9 = *(long *)(this + 0x28);
  if (lVar9 != lVar10) {
    uVar6 = 0;
    do {
      lVar7 = lVar10 + uVar6 * 0x98;
      sVar4 = strlen(param_1);
      pbVar8 = (byte *)(lVar7 + 8);
      bVar2 = *pbVar8;
      sVar1 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        sVar1 = *(size_t *)(lVar7 + 0x10);
      }
      if (sVar4 == sVar1) {
                    /* try { // try from 008eabf4 to 008eac07 has its CatchHandler @ 008eac34 */
        iVar3 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar8,0,(char *)0xffffffffffffffff,(ulong)param_1);
        if (iVar3 == 0) {
          return uVar6;
        }
        lVar10 = *(long *)(this + 0x20);
        lVar9 = *(long *)(this + 0x28);
      }
      uVar6 = (ulong)((int)uVar6 + 1);
      uVar5 = (lVar9 - lVar10 >> 3) * -0x79435e50d79435e5;
    } while (uVar6 <= uVar5 && uVar5 - uVar6 != 0);
  }
  return 0xffffffff;
}


