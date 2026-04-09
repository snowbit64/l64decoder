// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: proceed
// Entry Point: 007288f4
// Size: 356 bytes
// Signature: undefined __thiscall proceed(StoppingPath * this, float param_1)


/* StoppingPath::proceed(float) */

void __thiscall StoppingPath::proceed(StoppingPath *this,float param_1)

{
  size_t __n;
  long lVar1;
  float *pfVar2;
  float *pfVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  float *pfVar8;
  float local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  getPose(this,(Vector2 *)&local_50,(Vector2 *)&local_58,&local_5c,param_1);
  pfVar2 = (float *)(*(long *)this + 0x18);
  pfVar8 = pfVar2;
  for (; (pfVar2 != *(float **)(this + 8) && (pfVar8 = pfVar2, *pfVar2 <= param_1));
      pfVar2 = pfVar2 + 6) {
    pfVar8 = *(float **)(this + 8);
  }
  *(undefined8 *)(pfVar8 + -4) = local_50;
  pfVar8[-5] = local_5c;
  pfVar2 = pfVar8 + -6;
  *pfVar2 = 0.0;
  *(undefined8 *)(pfVar8 + -2) = local_58;
  pfVar3 = *(float **)(this + 8);
  if (pfVar8 != pfVar3) {
    uVar4 = (long)pfVar3 + (-0x18 - (long)pfVar8);
    if (0x17 < uVar4) {
      uVar4 = uVar4 / 0x18 + 1;
      uVar6 = uVar4 & 0x1ffffffffffffffe;
      pfVar5 = pfVar8 + uVar6 * 6;
      uVar7 = uVar6;
      do {
        uVar7 = uVar7 - 2;
        *pfVar8 = *pfVar8 - param_1;
        pfVar8[6] = pfVar8[6] - param_1;
        pfVar8 = pfVar8 + 0xc;
      } while (uVar7 != 0);
      pfVar8 = pfVar5;
      if (uVar4 == uVar6) goto LAB_00728a04;
    }
    do {
      pfVar5 = pfVar8 + 6;
      *pfVar8 = *pfVar8 - param_1;
      pfVar8 = pfVar5;
    } while (pfVar5 != pfVar3);
  }
LAB_00728a04:
  pfVar8 = *(float **)this;
  if (pfVar8 != pfVar2) {
    __n = (long)pfVar3 - (long)pfVar2;
    if (__n != 0) {
      memmove(pfVar8,pfVar2,__n);
    }
    *(size_t *)(this + 8) = (long)pfVar8 + __n;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


