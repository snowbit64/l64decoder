// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00753a24
// Size: 900 bytes
// Signature: undefined __thiscall operator()(__murmur2_or_cityhash<unsigned_long,64ul> * this, void * param_1, ulong param_2)


/* std::__ndk1::__murmur2_or_cityhash<unsigned long, 64ul>::TEMPNAMEPLACEHOLDERVALUE(void const*,
   unsigned long) */

long __thiscall
std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
          (__murmur2_or_cityhash<unsigned_long,64ul> *this,void *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  if (0x20 < param_2) {
    if (param_2 < 0x41) {
                    /* WARNING: Load size is inaccurate */
      lVar11 = *(long *)((long)param_1 + (param_2 - 0x10));
      uVar6 = *param_1 + (lVar11 + param_2) * -0x3c5a37a36834ced9;
      lVar14 = *(long *)((long)param_1 + 0x18);
      uVar7 = uVar6 + *(long *)((long)param_1 + 8);
      uVar10 = *(long *)((long)param_1 + (param_2 - 0x20)) + *(long *)((long)param_1 + 0x10);
      uVar8 = uVar7 + *(long *)((long)param_1 + 0x10);
      lVar3 = *(long *)((long)param_1 + (param_2 - 8)) + lVar14;
      uVar9 = *(long *)((long)param_1 + (param_2 - 0x18)) + uVar10;
      uVar12 = lVar3 + uVar10;
      uVar13 = uVar9 + lVar11;
      lVar11 = (uVar7 >> 7 | uVar7 << 0x39) + (uVar6 >> 0x25 | uVar6 * 0x8000000) +
               (uVar6 + lVar14 >> 0x34 | (uVar6 + lVar14) * 0x1000) +
               (uVar8 >> 0x1f | uVar8 << 0x21);
      uVar7 = (uVar13 + lVar3 + lVar11) * -0x3c5a37a36834ced9 +
              (uVar8 + lVar14 + (uVar10 >> 0x25 | uVar10 * 0x8000000) + (uVar9 >> 7 | uVar9 << 0x39)
               + (uVar12 >> 0x34 | uVar12 * 0x1000) + (uVar13 >> 0x1f | uVar13 << 0x21)) *
              -0x651e95c4d06fbfb1;
      uVar7 = lVar11 + (uVar7 ^ uVar7 >> 0x2f) * -0x3c5a37a36834ced9;
      return (uVar7 ^ uVar7 >> 0x2f) * -0x651e95c4d06fbfb1;
    }
    lVar11 = *(long *)((long)param_1 + (param_2 - 0x38));
    lVar1 = *(long *)((long)param_1 + (param_2 - 0x30));
    uVar10 = *(ulong *)((long)param_1 + (param_2 - 0x18));
    lVar5 = *(long *)((long)param_1 + (param_2 - 0x28));
    lVar14 = *(long *)((long)param_1 + (param_2 - 0x10));
    lVar2 = *(long *)((long)param_1 + (param_2 - 8));
    lVar3 = *(long *)((long)param_1 + (param_2 - 0x40)) + param_2;
    uVar8 = (uVar10 ^ lVar1 + param_2) * -0x622015f714c7d297;
    uVar7 = lVar11 + lVar14;
    uVar13 = lVar3 + lVar11 + lVar1;
    uVar8 = (uVar8 ^ uVar10 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    lVar11 = uVar7 + *(long *)((long)param_1 + (param_2 - 0x20)) + -0x4b6d499041670d8d;
    uVar10 = lVar11 + uVar10 + lVar14;
    uVar6 = (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297;
    uVar8 = lVar11 + lVar5 + lVar2;
    uVar9 = uVar10 + lVar2;
    uVar12 = lVar5 + lVar3 + uVar6;
                    /* WARNING: Load size is inaccurate */
    plVar4 = (long *)((long)param_1 + 0x20);
    lVar14 = *param_1;
    uVar10 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar11 + (uVar8 >> 0x15 | uVar8 << 0x2b);
    lVar11 = -(param_2 - 1 & 0xffffffffffffffc0);
    uVar8 = (uVar13 >> 0x2c | uVar13 * 0x100000) + lVar3 + (uVar12 >> 0x15 | uVar12 << 0x2b);
    uVar13 = uVar13 + lVar5;
    lVar3 = lVar14 + lVar5 * -0x4b6d499041670d8d;
    while( true ) {
      lVar11 = lVar11 + 0x40;
      lVar14 = lVar14 + uVar8 * -0x4b6d499041670d8d;
      uVar8 = uVar7 + uVar8 + plVar4[2];
      uVar12 = lVar3 + uVar13 + uVar7 + plVar4[-3];
      uVar7 = plVar4[1] + uVar13 + (uVar8 >> 0x2a | uVar8 * 0x400000) * -0x4b6d499041670d8d;
      lVar3 = (uVar6 + uVar9 >> 0x21 | (uVar6 + uVar9) * 0x80000000) * -0x4b6d499041670d8d;
      uVar6 = (uVar12 >> 0x25 | uVar12 * 0x8000000) * -0x4b6d499041670d8d ^ uVar10;
      uVar8 = lVar14 + plVar4[-3] + plVar4[-2];
      lVar1 = lVar3 + uVar10 + *plVar4;
      uVar10 = lVar1 + plVar4[1] + plVar4[2];
      uVar9 = lVar14 + uVar9 + uVar6 + plVar4[-1];
      uVar12 = uVar7 + plVar4[-2] + lVar1 + plVar4[3];
      uVar13 = uVar8 + plVar4[-1];
      uVar8 = (uVar8 >> 0x2c | uVar8 * 0x100000) + lVar14 + (uVar9 >> 0x15 | uVar9 << 0x2b);
      uVar9 = uVar10 + plVar4[3];
      uVar10 = (uVar10 >> 0x2c | uVar10 * 0x100000) + lVar1 + (uVar12 >> 0x15 | uVar12 << 0x2b);
      if (lVar11 == 0) break;
      lVar14 = plVar4[4];
      plVar4 = plVar4 + 8;
    }
    uVar12 = (uVar9 ^ uVar13) * -0x622015f714c7d297;
    uVar13 = (uVar10 ^ uVar8) * -0x622015f714c7d297;
    uVar8 = (uVar12 ^ uVar9 ^ uVar12 >> 0x2f) * -0x622015f714c7d297;
    uVar10 = (uVar13 ^ uVar10 ^ uVar13 >> 0x2f) * -0x622015f714c7d297;
    uVar10 = lVar3 + (uVar10 ^ uVar10 >> 0x2f) * -0x622015f714c7d297;
    uVar7 = (uVar10 ^ uVar6 + (uVar7 ^ uVar7 >> 0x2f) * -0x4b6d499041670d8d +
                      (uVar8 ^ uVar8 >> 0x2f) * -0x622015f714c7d297) * -0x622015f714c7d297;
    uVar7 = (uVar7 ^ uVar10 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
    return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  }
  if (param_2 < 0x11) {
    lVar3 = __hash_len_0_to_16((char *)param_1,param_2);
    return lVar3;
  }
                    /* WARNING: Load size is inaccurate */
  lVar3 = *(long *)((long)param_1 + (param_2 - 8));
  uVar7 = lVar3 * -0x651e95c4d06fbfb1;
  uVar8 = *param_1 * -0x4b6d499041670d8d - *(ulong *)((long)param_1 + 8);
  uVar10 = *(ulong *)((long)param_1 + 8) ^ 0xc949d7c7509e6557;
  uVar10 = *param_1 * -0x4b6d499041670d8d + param_2 + (uVar10 >> 0x14 | uVar10 << 0x2c) +
           lVar3 * 0x651e95c4d06fbfb1;
  uVar7 = ((uVar7 >> 0x1e | uVar7 << 0x22) + (uVar8 >> 0x2b | uVar8 * 0x200000) +
           *(long *)((long)param_1 + (param_2 - 0x10)) * -0x3c5a37a36834ced9 ^ uVar10) *
          -0x622015f714c7d297;
  uVar7 = (uVar7 ^ uVar10 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
  return (uVar7 ^ uVar7 >> 0x2f) * -0x622015f714c7d297;
}


