// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextWidth
// Entry Point: 006f19a4
// Size: 248 bytes
// Signature: undefined __thiscall getTextWidth(FontOverlayRenderer * this, float param_1, ADVANCE_MODE param_2, char * param_3)


/* FontOverlayRenderer::getTextWidth(float, FontOverlayRenderer::ADVANCE_MODE, char const*) */

void __thiscall
FontOverlayRenderer::getTextWidth
          (FontOverlayRenderer *this,float param_1,ADVANCE_MODE param_2,char *param_3)

{
  FontOverlayRenderer FVar1;
  long lVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined4 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  fVar4 = *(float *)(this + 0x38);
  local_6c = 0xffffffff;
  FVar1 = this[0x3c];
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_64 = 0;
  uStack_60 = 0;
  uVar3 = getNextLine(this,(PrintState *)&local_80,param_3,param_1,param_2,fVar4,(bool)FVar1);
  fVar5 = 0.0;
  if ((uVar3 & 1) != 0) {
    fVar5 = 0.0;
    do {
      if (fVar5 < local_78._4_4_) {
        fVar5 = local_78._4_4_;
      }
      uVar3 = getNextLine(this,(PrintState *)&local_80,param_3,param_1,param_2,fVar4,
                          FVar1 != (FontOverlayRenderer)0x0);
    } while ((uVar3 & 1) != 0);
  }
  if (fVar5 < local_78._4_4_ && (int)local_78 != 0) {
    fVar5 = local_78._4_4_;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar5);
}


