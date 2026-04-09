// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextLength
// Entry Point: 006f1a9c
// Size: 260 bytes
// Signature: undefined __thiscall getTextLength(FontOverlayRenderer * this, float param_1, ADVANCE_MODE param_2, char * param_3, uint param_4)


/* FontOverlayRenderer::getTextLength(float, FontOverlayRenderer::ADVANCE_MODE, char const*,
   unsigned int) */

int __thiscall
FontOverlayRenderer::getTextLength
          (FontOverlayRenderer *this,float param_1,ADVANCE_MODE param_2,char *param_3,uint param_4)

{
  FontOverlayRenderer FVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  float fVar5;
  undefined8 local_90;
  undefined8 local_88;
  byte local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar5 = *(float *)(this + 0x38);
  local_7c = 0xffffffff;
  FVar1 = this[0x3c];
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  uStack_70 = 0;
  uVar3 = getNextLine(this,(PrintState *)&local_90,param_3,param_1,param_2,fVar5,(bool)FVar1);
  iVar4 = 0;
  if ((uVar3 & 1) != 0) {
    iVar4 = 0;
    if (param_4 < 2) {
      param_4 = 1;
    }
    do {
      param_4 = param_4 - 1;
      if (param_4 == 0) break;
      iVar4 = (int)local_88 + iVar4 + (uint)local_80;
      uVar3 = getNextLine(this,(PrintState *)&local_90,param_3,param_1,param_2,fVar5,
                          FVar1 != (FontOverlayRenderer)0x0);
    } while ((uVar3 & 1) != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)local_88 + iVar4;
}


