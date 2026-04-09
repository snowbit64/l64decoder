// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCanRenderUnicode
// Entry Point: 006f2508
// Size: 164 bytes
// Signature: undefined __thiscall getCanRenderUnicode(FontOverlayRenderer * this, uint param_1)


/* FontOverlayRenderer::getCanRenderUnicode(unsigned int) */

undefined8 __thiscall
FontOverlayRenderer::getCanRenderUnicode(FontOverlayRenderer *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == 10) || (param_1 == 0xd)) {
    return 1;
  }
  iVar4 = *(int *)(this + 0x70) + -1;
  if (0 < *(int *)(this + 0x70)) {
    iVar5 = 0;
    do {
      while( true ) {
        uVar1 = iVar4 + iVar5;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        iVar2 = (int)uVar1 >> 1;
        uVar3 = *(uint *)(*(long *)(this + 0x68) + (long)iVar2 * 0x1c);
        if (uVar3 < param_1) break;
        if (uVar3 <= param_1) {
          if (*(short *)(*(long *)(this + 0x68) + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x1c + 4)
              == 0x7fff) {
            return 0;
          }
          return 1;
        }
        iVar4 = iVar2 + -1;
        if (iVar4 < iVar5) {
          return 0;
        }
      }
      iVar5 = iVar2 + 1;
    } while (iVar5 <= iVar4);
  }
  return 0;
}


