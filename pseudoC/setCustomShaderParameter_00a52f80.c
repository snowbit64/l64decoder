// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCustomShaderParameter
// Entry Point: 00a52f80
// Size: 504 bytes
// Signature: undefined __thiscall setCustomShaderParameter(GsShape * this, uint param_1, float * param_2)


/* GsShape::setCustomShaderParameter(unsigned int, float const*) */

void __thiscall GsShape::setCustomShaderParameter(GsShape *this,uint param_1,float *param_2)

{
  GsMaterial **ppGVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  GsMaterial *this_00;
  uint uVar12;
  undefined8 uVar13;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ppGVar1 = (GsMaterial **)(this + 0x178);
  if (*(short *)(this + 0x196) != 1) {
    ppGVar1 = *(GsMaterial ***)(this + 0x178);
  }
  this_00 = *ppGVar1;
  lVar3 = GsMaterial::getCustomShader();
  uVar6 = (ulong)*(uint *)(this_00 + 0x88);
  uVar10 = (*(long *)(lVar3 + 0x118) - *(long *)(lVar3 + 0x110) >> 5) * 0x6db6db6db6db6db7;
  if (uVar10 < uVar6 || uVar10 - uVar6 == 0) {
    uVar12 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x110) + uVar6 * 0xe0;
    uVar12 = (uint)((ulong)(*(long *)(lVar3 + 0x48) - *(long *)(lVar3 + 0x40)) >> 3);
  }
  GsMaterial::getCustomParameter(this_00,param_1,&local_58);
  if ((((local_58 == *param_2) && (local_54 == param_2[1])) && (local_50 == param_2[2])) &&
     (local_4c == param_2[3])) {
    pcVar4 = *(char **)(this + 0x180);
    if (pcVar4 != (char *)0x0) {
      pcVar4[(ulong)param_1 * 0x14] = '\0';
      if (uVar12 != 0) {
        uVar6 = (ulong)uVar12;
        pcVar7 = pcVar4;
        do {
          if (*pcVar7 != '\0') goto LAB_00a5314c;
          pcVar7 = pcVar7 + 0x14;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      operator_delete__(pcVar4);
      *(undefined8 *)(this + 0x180) = 0;
    }
    goto LAB_00a5314c;
  }
  puVar5 = *(undefined **)(this + 0x180);
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)operator_new__(((ulong)uVar12 + (ulong)uVar12 * 4) * 4);
    if (uVar12 != 0) {
      lVar3 = (ulong)uVar12 * 0x14;
      uVar6 = lVar3 - 0x14;
      puVar8 = puVar5;
      if (0x13 < uVar6) {
        uVar6 = uVar6 / 0x14 + 1;
        uVar11 = uVar6 & 0x1ffffffffffffffe;
        puVar8 = puVar5 + uVar11 * 0x14;
        uVar10 = uVar11;
        puVar9 = puVar5;
        do {
          *puVar9 = 0;
          uVar10 = uVar10 - 2;
          puVar9[0x14] = 0;
          puVar9 = puVar9 + 0x28;
        } while (uVar10 != 0);
        if (uVar6 == uVar11) goto LAB_00a53130;
      }
      do {
        puVar9 = puVar8 + 0x14;
        *puVar8 = 0;
        puVar8 = puVar9;
      } while (puVar9 != puVar5 + lVar3);
    }
LAB_00a53130:
    *(undefined **)(this + 0x180) = puVar5;
  }
  puVar5 = puVar5 + (ulong)param_1 * 0x14;
  *puVar5 = 1;
  uVar13 = *(undefined8 *)param_2;
  *(undefined8 *)(puVar5 + 0xc) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar5 + 4) = uVar13;
LAB_00a5314c:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


