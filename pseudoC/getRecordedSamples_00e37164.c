// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getRecordedSamples
// Entry Point: 00e37164
// Size: 420 bytes
// Signature: undefined __thiscall getRecordedSamples(Soloud * this, uint param_1, void * param_2, uint param_3)


/* SoLoud::Soloud::getRecordedSamples(unsigned int, void*, unsigned int) */

int __thiscall
SoLoud::Soloud::getRecordedSamples(Soloud *this,uint param_1,void *param_2,uint param_3)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  undefined4 uVar11;
  
  if (*(uint *)(this + 0x2820) != 0) {
    lVar5 = 0;
    lVar7 = -0x23a0;
    lVar8 = 0x2428;
    do {
      if (*(uint *)(this + lVar5 + 0x23a8) == param_1) {
        iVar9 = 0;
        iVar4 = *(int *)(this + lVar5 + 0x241c);
        goto LAB_00e37244;
      }
      lVar7 = lVar7 + -0x90;
      lVar5 = lVar5 + 0x90;
      lVar8 = lVar8 + 0x90;
    } while ((ulong)*(uint *)(this + 0x2820) * 0x90 - lVar5 != 0);
  }
  return -1;
LAB_00e37244:
  while( true ) {
    uVar2 = *(uint *)(this + lVar5 + 0x2418);
    uVar3 = uVar2 >> 0x14;
    if (iVar4 <= (int)uVar3) break;
    if ((int)param_3 <= iVar9) {
      return iVar9;
    }
    pfVar1 = (float *)(this + lVar8);
    if (0xfffff < uVar2) {
      pfVar1 = (float *)(*(long *)(this + lVar5 + 0x2420) + (ulong)(uVar3 - 1) * 4);
    }
    uVar11 = NEON_fmadd(*(float *)(*(long *)(this + lVar5 + 0x2420) + (ulong)uVar3 * 4) - *pfVar1,
                        (float)(uVar2 & 0xfffff) * 9.536743e-07,*pfVar1);
    if (*(int *)(this + lVar5 + 0x2410) == 0) {
      fVar10 = (float)NEON_fmadd(uVar11,0x46fffe00,0x3f000000);
      *(short *)((long)param_2 + (long)iVar9 * 2) = (short)(int)fVar10;
    }
    else if (*(int *)(this + lVar5 + 0x2410) == 1) {
      *(undefined4 *)((long)param_2 + (long)iVar9 * 4) = uVar11;
    }
    iVar9 = iVar9 + 1;
    *(uint *)(this + lVar5 + 0x2418) = *(int *)(this + lVar5 + 0x2414) + uVar2;
  }
  if (0 < iVar4) {
    *(float *)(this + lVar8) = *(float *)(*(long *)(this + lVar5 + 0x2420) + (ulong)(iVar4 - 1) * 4)
    ;
  }
  pcVar6 = *(code **)(this + 0x40);
  *(uint *)(this + lVar5 + 0x2418) = uVar2 + iVar4 * -0x100000;
  if (pcVar6 == (code *)0x0) {
    iVar4 = -1;
LAB_00e372fc:
    *(undefined4 *)(this + lVar5 + 0x241c) = 0;
    return iVar4;
  }
  iVar4 = (*pcVar6)(this,(long)this - lVar7,*(undefined8 *)(this + lVar5 + 0x2420),
                    *(undefined4 *)(this + lVar5 + 0x23c0));
  if (iVar4 < 0) goto LAB_00e372fc;
  *(int *)(this + lVar5 + 0x241c) = iVar4;
  if (iVar4 == 0) {
    return iVar9;
  }
  goto LAB_00e37244;
}


