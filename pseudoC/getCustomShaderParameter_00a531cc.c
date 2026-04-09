// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCustomShaderParameter
// Entry Point: 00a531cc
// Size: 312 bytes
// Signature: undefined __thiscall getCustomShaderParameter(GsShape * this, char * param_1, float * param_2)


/* GsShape::getCustomShaderParameter(char const*, float*) const */

void __thiscall GsShape::getCustomShaderParameter(GsShape *this,char *param_1,float *param_2)

{
  long **pplVar1;
  long lVar2;
  long lVar3;
  CustomShader *this_00;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *this_01;
  long **pplVar7;
  long lVar8;
  undefined8 uVar9;
  uint local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = (ulong)*(ushort *)(this + 0x196);
  if (*(ushort *)(this + 0x196) == 0) {
LAB_00a532d4:
    if (*(long *)(lVar2 + 0x28) == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar5 = uVar4 * 8;
  lVar8 = 0;
  pplVar7 = (long **)(this + 0x178);
  do {
    pplVar1 = pplVar7;
    if ((int)uVar4 != 1) {
      pplVar1 = (long **)((long)*pplVar7 + lVar8);
    }
    this_01 = *pplVar1;
    lVar3 = GsMaterial::getCustomShader();
    if (lVar3 != 0) {
      this_00 = (CustomShader *)GsMaterial::getCustomShader();
      uVar4 = CustomShader::getParameterIndex(this_00,*(uint *)(this_01 + 0x11),param_1,&local_5c);
      if ((uVar4 & 1) != 0) {
        if (*(short *)(this + 0x196) == 0) {
          plVar6 = (long *)0x0;
          lVar8 = *(long *)(this + 0x180);
        }
        else {
          if (*(short *)(this + 0x196) != 1) {
            pplVar7 = (long **)*pplVar7;
          }
          plVar6 = *pplVar7;
          lVar8 = *(long *)(this + 0x180);
        }
        if (((lVar8 == 0) || (plVar6 != this_01)) ||
           (*(char *)(lVar8 + (ulong)local_5c * 0x14) == '\0')) {
          GsMaterial::getCustomParameter((GsMaterial *)this_01,local_5c,param_2);
        }
        else {
          lVar8 = lVar8 + (ulong)local_5c * 0x14;
          uVar9 = *(undefined8 *)(lVar8 + 4);
          *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar8 + 0xc);
          *(undefined8 *)param_2 = uVar9;
        }
        goto LAB_00a532d4;
      }
    }
    if (lVar5 + -8 == lVar8) goto LAB_00a532d4;
    uVar4 = (ulong)*(ushort *)(this + 0x196);
    lVar8 = lVar8 + 8;
  } while( true );
}


