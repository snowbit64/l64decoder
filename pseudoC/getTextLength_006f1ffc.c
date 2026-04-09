// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextLength
// Entry Point: 006f1ffc
// Size: 288 bytes
// Signature: undefined __thiscall getTextLength(FontOverlayRenderer * this, float param_1, bool param_2, ADVANCE_MODE param_3, char * param_4, uint param_5)


/* FontOverlayRenderer::getTextLength(float, bool, FontOverlayRenderer::ADVANCE_MODE, char const*,
   unsigned int) */

int __thiscall
FontOverlayRenderer::getTextLength
          (FontOverlayRenderer *this,float param_1,bool param_2,ADVANCE_MODE param_3,char *param_4,
          uint param_5)

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
  if (!param_2) {
    param_1 = (*(float *)(this + 0x40) * param_1) / *(float *)this;
  }
  fVar5 = *(float *)(this + 0x38);
  FVar1 = this[0x3c];
  local_7c = 0xffffffff;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_74 = 0;
  uStack_70 = 0;
  uVar3 = getNextLine(this,(PrintState *)&local_90,param_4,param_1,param_3,fVar5,(bool)FVar1);
  iVar4 = 0;
  if ((uVar3 & 1) != 0) {
    iVar4 = 0;
    if (param_5 < 2) {
      param_5 = 1;
    }
    do {
      param_5 = param_5 - 1;
      if (param_5 == 0) break;
      iVar4 = (int)local_88 + iVar4 + (uint)local_80;
      uVar3 = getNextLine(this,(PrintState *)&local_90,param_4,param_1,param_3,fVar5,
                          FVar1 != (FontOverlayRenderer)0x0);
    } while ((uVar3 & 1) != 0);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)local_88 + iVar4;
}


