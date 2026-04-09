// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextHeight
// Entry Point: 006f1ec8
// Size: 308 bytes
// Signature: undefined __thiscall getTextHeight(FontOverlayRenderer * this, float param_1, bool param_2, ADVANCE_MODE param_3, char * param_4, uint * param_5)


/* FontOverlayRenderer::getTextHeight(float, bool, FontOverlayRenderer::ADVANCE_MODE, char const*,
   unsigned int&) */

undefined4 __thiscall
FontOverlayRenderer::getTextHeight
          (FontOverlayRenderer *this,float param_1,bool param_2,ADVANCE_MODE param_3,char *param_4,
          uint *param_5)

{
  FontOverlayRenderer FVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_90;
  undefined8 local_88;
  undefined local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  fVar6 = param_1;
  if (!param_2) {
    fVar6 = (*(float *)(this + 0x40) * param_1) / *(float *)this;
  }
  fVar7 = *(float *)(this + 0x38);
  FVar1 = this[0x3c];
  *param_5 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_7c = 0xffffffff;
  local_74 = 0;
  uStack_70 = 0;
  uVar3 = getNextLine(this,(PrintState *)&local_90,param_4,fVar6,param_3,fVar7,(bool)FVar1);
  while ((uVar3 & 1) != 0) {
    *param_5 = *param_5 + 1;
    uVar3 = getNextLine(this,(PrintState *)&local_90,param_4,fVar6,param_3,fVar7,
                        FVar1 != (FontOverlayRenderer)0x0);
  }
  uVar4 = *param_5;
  if ((int)local_88 != 0) {
    uVar4 = uVar4 + 1;
    *param_5 = uVar4;
  }
  if ((int)uVar4 < 2) {
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  uVar5 = NEON_fmadd((float)(uVar4 - 1),*(float *)(this + 0x44) * param_1,param_1);
  return uVar5;
}


