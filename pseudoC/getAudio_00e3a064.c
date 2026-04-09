// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAudio
// Entry Point: 00e3a064
// Size: 504 bytes
// Signature: undefined __thiscall getAudio(BusInstance * this, float * param_1, uint param_2, uint param_3)


/* SoLoud::BusInstance::getAudio(float*, unsigned int, unsigned int) */

uint __thiscall
SoLoud::BusInstance::getAudio(BusInstance *this,float *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  Soloud *this_00;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar1 = *(uint *)(*(long *)(this + 0x1f0) + 0xa8);
  if (uVar1 == 0) {
    if (*(int *)(this + 0x4c) * param_3 != 0) {
      memset(param_1,0,(ulong)(*(int *)(this + 0x4c) * param_3) << 2);
    }
  }
  else {
    this_00 = *(Soloud **)(*(long *)(this + 0x1f0) + 0x78);
    iVar5 = *(int *)(this_00 + 0x74);
    if (iVar5 != *(int *)(this + 0x1f8)) {
      *(int *)(this + 0x1f8) = iVar5;
      AlignedFloatBuffer::init((AlignedFloatBuffer *)(this + 0x200),iVar5 << 3);
    }
    Soloud::mixBus(this_00,param_1,param_2,param_3,(AlignedFloatBuffer *)(this + 0x200),uVar1,
                   *(float *)(this + 0x48),*(uint *)(this + 0x4c),false);
    if ((*(byte *)(*(long *)(this + 0x1f0) + 8) >> 1 & 1) != 0) {
      uVar1 = *(uint *)(this + 0x4c);
      *(undefined8 *)(this + 0x220) = 0;
      *(undefined8 *)(this + 0x218) = 0;
      *(undefined8 *)(this + 0x230) = 0;
      *(undefined8 *)(this + 0x228) = 0;
      if (param_2 < 0x100) {
        if ((int)uVar1 < 1) goto LAB_00e3a234;
        lVar4 = 0;
        do {
          uVar2 = 0;
          if (param_2 != 0) {
            uVar2 = (uint)lVar4 / param_2;
          }
          fVar9 = 0.0;
          iVar5 = 0;
          *(undefined4 *)(this + lVar4 * 4 + 0x238) = 0;
          uVar3 = (ulong)uVar1;
          pfVar8 = (float *)(this + 0x218);
          do {
            fVar10 = param_1[((uint)lVar4 - uVar2 * param_2) + iVar5 * param_3];
            fVar11 = ABS(fVar10);
            if (*pfVar8 < fVar11) {
              *pfVar8 = fVar11;
              fVar9 = *(float *)(this + lVar4 * 4 + 0x238);
            }
            fVar9 = fVar10 + fVar9;
            iVar5 = iVar5 + 1;
            pfVar8 = pfVar8 + 1;
            uVar3 = uVar3 - 1;
            *(float *)(this + lVar4 * 4 + 0x238) = fVar9;
          } while (uVar3 != 0);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x100);
      }
      else {
        if ((int)uVar1 < 1) {
LAB_00e3a234:
          memset(this + 0x238,0,0x400);
          return param_2;
        }
        uVar3 = 0;
        do {
          fVar9 = 0.0;
          uVar7 = uVar3 & 0xffffffff;
          *(undefined4 *)(this + uVar3 * 4 + 0x238) = 0;
          uVar6 = (ulong)uVar1;
          pfVar8 = (float *)(this + 0x218);
          do {
            fVar10 = param_1[uVar7];
            fVar11 = ABS(fVar10);
            if (*pfVar8 < fVar11) {
              *pfVar8 = fVar11;
              fVar9 = *(float *)(this + uVar3 * 4 + 0x238);
            }
            fVar9 = fVar10 + fVar9;
            pfVar8 = pfVar8 + 1;
            uVar7 = (ulong)((int)uVar7 + param_3);
            uVar6 = uVar6 - 1;
            *(float *)(this + uVar3 * 4 + 0x238) = fVar9;
          } while (uVar6 != 0);
          uVar3 = uVar3 + 1;
        } while (uVar3 != 0x100);
      }
    }
  }
  return param_2;
}


