// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: xyprintf
// Entry Point: 006f0104
// Size: 908 bytes
// Signature: undefined __thiscall xyprintf(FontOverlayRenderer * this, float param_1, float param_2, float param_3, ADVANCE_MODE param_4, char * param_5)


/* FontOverlayRenderer::xyprintf(float, float, float, FontOverlayRenderer::ADVANCE_MODE, char
   const*) */

void __thiscall
FontOverlayRenderer::xyprintf
          (FontOverlayRenderer *this,float param_1,float param_2,float param_3,ADVANCE_MODE param_4,
          char *param_5)

{
  uint uVar1;
  uint uVar2;
  FontOverlayRenderer FVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_b8;
  undefined8 local_b0;
  uint uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  if ((*(float *)(this + 0x48) + 1e-05 < *(float *)(this + 0x50)) &&
     (*(float *)(this + 0x4c) + 1e-05 < *(float *)(this + 0x54))) {
    lVar6 = *(long *)(this + 0x450);
    if ((((*(long *)(this + 0x448) == lVar6) ||
         ((((*(long *)(lVar6 + -0x28) != *(long *)(this + 0x420) ||
            (*(long *)(lVar6 + -0x20) != *(long *)(this + 0x428))) ||
           (*(FontOverlayRenderer *)(lVar6 + -0x18) != this[0x430])) ||
          ((*(float *)(lVar6 + -0x14) != *(float *)(this + 0x434) ||
           (*(float *)(lVar6 + -0x10) != *(float *)(this + 0x438))))))) ||
        (*(float *)(lVar6 + -0xc) != *(float *)(this + 0x43c))) ||
       (*(float *)(lVar6 + -8) != *(float *)(this + 0x440))) {
      local_b0 = *(undefined8 *)(this + 0x420);
      uStack_98 = *(ulong *)(this + 0x438);
      local_90 = *(undefined8 *)(this + 0x440);
      local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(this + 0x3fc));
      uStack_a8 = (uint)*(undefined8 *)(this + 0x428);
      uStack_a4 = (undefined4)((ulong)*(undefined8 *)(this + 0x428) >> 0x20);
      uStack_a0 = (undefined4)*(undefined8 *)(this + 0x430);
      local_9c = (undefined4)((ulong)*(undefined8 *)(this + 0x430) >> 0x20);
      FUN_006f0490(this + 0x448,&local_b8);
      if (*(long *)(this + 0x420) != 0) {
        FUN_00f276d0(1,*(long *)(this + 0x420) + 8);
      }
    }
    fVar12 = *(float *)(this + 0x44);
    fVar11 = *(float *)(this + 0x38);
    FVar3 = this[0x3c];
    fVar10 = (*(float *)(this + 0x40) * param_3) / *(float *)this;
    if (*(int *)(this + 0x34) != 0) {
      if (*(int *)(this + 0x34) == 1) {
        param_2 = param_2 - param_3;
      }
      else {
        uStack_a4 = 0xffffffff;
        uStack_a0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        uStack_a8 = uStack_a8 & 0xffffff00;
        local_9c = 0;
        uStack_98 = uStack_98 & 0xffffffff00000000;
        uVar5 = getNextLine(this,(PrintState *)&local_b8,param_5,fVar10,param_4,fVar11,
                            FVar3 != (FontOverlayRenderer)0x0);
        iVar7 = 0;
        if ((uVar5 & 1) != 0) {
          iVar7 = 0;
          do {
            iVar7 = iVar7 + 1;
            uVar5 = getNextLine(this,(PrintState *)&local_b8,param_5,fVar10,param_4,fVar11,
                                FVar3 != (FontOverlayRenderer)0x0);
          } while ((uVar5 & 1) != 0);
        }
        if ((uint)local_b0 != 0) {
          iVar7 = iVar7 + 1;
        }
        if (iVar7 < 2) {
          iVar7 = 1;
        }
        fVar9 = (float)NEON_fmadd((float)(iVar7 + -1),*(float *)(this + 0x44) * param_3,param_3);
        if (*(int *)(this + 0x34) == 3) {
          param_2 = (param_2 - param_3) + fVar9;
        }
        else if (*(int *)(this + 0x34) == 2) {
          param_2 = (float)NEON_fmadd(fVar9,0x3f000000,param_2 - param_3);
        }
      }
    }
    uVar8 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uVar1 = *(int *)(this + 0x20) + *(int *)(this + 0x24);
    uStack_a8 = uStack_a8 & 0xffffff00;
    uStack_a4 = 0xffffffff;
    uStack_a0 = 0;
    if (uVar1 < 2) {
      uVar1 = 1;
    }
    uVar2 = 0xfffffffe;
    if (*(int *)(this + 0x24) != -1) {
      uVar2 = uVar1 - 1;
    }
    local_9c = 0;
    uStack_98 = (ulong)uStack_98._4_4_ << 0x20;
    do {
      uVar5 = getNextLine(this,(PrintState *)&local_b8,param_5,fVar10,param_4,fVar11,
                          FVar3 != (FontOverlayRenderer)0x0);
      if ((uVar5 & 1) == 0) {
        if (((uint)local_b0 != 0) && (*(uint *)(this + 0x20) <= uVar8)) {
          printLine<FontOverlayRenderer::BufferData2D>
                    (this,param_1,param_2,fVar10,param_3,param_4,local_b0._4_4_,
                     param_5 + local_b8._4_4_,(uint)local_b0,(Matrix4x4 *)0x0,true,
                     (BufferData2D *)(this + 0x3f0));
        }
        break;
      }
      if (*(uint *)(this + 0x20) <= uVar8) {
        printLine<FontOverlayRenderer::BufferData2D>
                  (this,param_1,param_2,fVar10,param_3,param_4,local_b0._4_4_,
                   param_5 + local_b8._4_4_,(uint)local_b0,(Matrix4x4 *)0x0,true,
                   (BufferData2D *)(this + 0x3f0));
      }
      if (uVar2 == uVar8) break;
      param_2 = param_2 - fVar12 * param_3;
      uVar8 = uVar8 + 1;
    } while (*(float *)(this + 0x4c) - param_3 <= param_2);
  }
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


