// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ifft
// Entry Point: 00e43e90
// Size: 164 bytes
// Signature: undefined __thiscall ifft(FFT * this, float * param_1, uint param_2)


/* SoLoud::FFT::ifft(float*, unsigned int) */

void __thiscall SoLoud::FFT::ifft(FFT *this,float *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  
  uVar1 = (uint)param_1;
  fftimpl::cftfsub((fftimpl *)((ulong)param_1 & 0xffffffff),(int)this,(float *)(ulong)param_2);
  if (uVar1 != 0) {
    fVar7 = 1.0 / (float)(ulong)(uVar1 >> 1);
    if (uVar1 < 8) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)param_1 & 0xfffffff8;
      puVar4 = (undefined8 *)(this + 0x10);
      uVar6 = uVar3;
      do {
        uVar6 = uVar6 - 8;
        puVar4[-1] = CONCAT44(fVar7 * (float)((ulong)puVar4[-1] >> 0x20),fVar7 * (float)puVar4[-1]);
        puVar4[-2] = CONCAT44(fVar7 * (float)((ulong)puVar4[-2] >> 0x20),fVar7 * (float)puVar4[-2]);
        puVar4[1] = CONCAT44((float)((ulong)puVar4[1] >> 0x20) * fVar7,(float)puVar4[1] * fVar7);
        *puVar4 = CONCAT44((float)((ulong)*puVar4 >> 0x20) * fVar7,(float)*puVar4 * fVar7);
        puVar4 = puVar4 + 4;
      } while (uVar6 != 0);
      if (uVar3 == ((ulong)param_1 & 0xffffffff)) {
        return;
      }
    }
    lVar2 = ((ulong)param_1 & 0xffffffff) - uVar3;
    pfVar5 = (float *)(this + uVar3 * 4);
    do {
      lVar2 = lVar2 + -1;
      *pfVar5 = fVar7 * *pfVar5;
      pfVar5 = pfVar5 + 1;
    } while (lVar2 != 0);
  }
  return;
}


