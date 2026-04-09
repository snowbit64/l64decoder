// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextLineLength
// Entry Point: 006f1ba0
// Size: 328 bytes
// Signature: undefined __thiscall getTextLineLength(FontOverlayRenderer * this, float param_1, ADVANCE_MODE param_2, char * param_3, float param_4)


/* FontOverlayRenderer::getTextLineLength(float, FontOverlayRenderer::ADVANCE_MODE, char const*,
   float) */

int __thiscall
FontOverlayRenderer::getTextLineLength
          (FontOverlayRenderer *this,float param_1,ADVANCE_MODE param_2,char *param_3,float param_4)

{
  float *pfVar1;
  long lVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  short *local_88;
  uint local_80;
  uint local_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  iVar5 = 0;
  local_78 = *(long *)(lVar2 + 0x28);
  local_7c = 0;
  if (*param_3 != '\n') {
    fVar6 = 0.0;
    iVar5 = 0;
    pfVar1 = (float *)(this + 0x14);
    do {
      uVar3 = getNextCharInfo(this,param_3,&local_7c,(CharInfo **)&local_88,&local_80);
      if ((uVar3 & 1) == 0) break;
      if (*local_88 != 0x7fff) {
        pfVar4 = pfVar1;
        if (param_2 != 1) {
          if (param_2 != 0) {
            if (((local_80 == 0x2007) || (local_80 - 0x30 < 10)) ||
               (param_2 == 3 && local_80 == 0x20)) goto LAB_006f1c4c;
          }
          pfVar4 = (float *)(local_88 + 4);
        }
LAB_006f1c4c:
        fVar6 = fVar6 + *pfVar4 * param_1;
        if (param_4 < fVar6) break;
      }
      iVar5 = iVar5 + 1;
    } while (param_3[local_7c] != '\n');
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar5;
}


