// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareBufferF32
// Entry Point: 00b0eee8
// Size: 228 bytes
// Signature: undefined __thiscall prepareBufferF32(SoftAudioBuffer * this, float * param_1, float * param_2, uint param_3)


/* SoftAudioBuffer::prepareBufferF32(float*, float const*, unsigned int) */

void __thiscall
SoftAudioBuffer::prepareBufferF32(SoftAudioBuffer *this,float *param_1,float *param_2,uint param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (param_3 != 0) {
    uVar2 = *(uint *)(this + 0x1c);
    uVar5 = (ulong)uVar2;
    uVar4 = 0;
    uVar6 = uVar5 & 0xfffffff8;
    do {
      if (uVar2 != 0) {
        if ((((uVar2 < 8) || (param_3 != 1)) || (CARRY4((uint)uVar4,(uint)(uVar5 - 1)) != false)) ||
           ((uVar5 - 1 >> 0x20 != 0 ||
            ((param_2 < param_1 + uVar4 + uVar5 && (param_1 + uVar4 < param_2 + uVar5)))))) {
          pfVar7 = param_2;
          uVar8 = 0;
        }
        else {
          pfVar7 = param_2 + uVar6;
          puVar10 = (undefined8 *)(param_2 + 4);
          uVar12 = uVar4 & 0xffffffff;
          uVar8 = uVar6;
          do {
            puVar3 = puVar10 + -1;
            uVar13 = puVar10[-2];
            uVar15 = puVar10[1];
            uVar14 = *puVar10;
            puVar1 = (undefined8 *)(param_1 + uVar12);
            puVar10 = puVar10 + 4;
            uVar8 = uVar8 - 8;
            uVar12 = (ulong)((int)uVar12 + param_3 * 8);
            puVar1[1] = *puVar3;
            *puVar1 = uVar13;
            puVar1[3] = uVar15;
            puVar1[2] = uVar14;
          } while (uVar8 != 0);
          param_2 = pfVar7;
          uVar8 = uVar6;
          if (uVar6 == uVar5) goto LAB_00b0ef0c;
        }
        uVar11 = (uint)uVar4 + param_3 * (int)uVar8;
        lVar9 = uVar5 - uVar8;
        do {
          param_2 = pfVar7 + 1;
          lVar9 = lVar9 + -1;
          param_1[uVar11] = *pfVar7;
          uVar11 = uVar11 + param_3;
          pfVar7 = param_2;
        } while (lVar9 != 0);
      }
LAB_00b0ef0c:
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 != param_3);
  }
  return;
}


