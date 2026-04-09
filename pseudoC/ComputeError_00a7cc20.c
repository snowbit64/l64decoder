// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeError
// Entry Point: 00a7cc20
// Size: 632 bytes
// Signature: undefined __cdecl ComputeError(LDRColorA * param_1, LDRColorA * param_2, uchar param_3, uchar param_4, ulong * param_5, ulong * param_6)


/* BC6BC7Util::ComputeError(BC6BC7Util::LDRColorA const&, BC6BC7Util::LDRColorA const*, unsigned
   char, unsigned char, unsigned long*, unsigned long*) */

void BC6BC7Util::ComputeError
               (LDRColorA *param_1,LDRColorA *param_2,uchar param_3,uchar param_4,ulong *param_5,
               ulong *param_6)

{
  long lVar1;
  ulong uVar2;
  LDRColorA *pLVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_6 != (ulong *)0x0) {
    *param_6 = 0;
  }
  uVar4 = 1L << ((ulong)param_3 & 0x3f);
  if (param_4 == '\0') {
    fVar8 = (float)NEON_ucvtf((uint)(byte)*param_1);
    fVar5 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
    fVar6 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
    fVar7 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
    Vector4::set((Vector4 *)&local_58,fVar8,fVar5,fVar6,fVar7);
    uVar2 = 0;
    pLVar3 = param_2 + 1;
    fVar8 = 3.402823e+38;
    while( true ) {
      fVar5 = (float)NEON_ucvtf((uint)(byte)pLVar3[-1]);
      fVar6 = (float)NEON_ucvtf((uint)(byte)*pLVar3);
      fVar7 = (float)NEON_ucvtf((uint)(byte)pLVar3[1]);
      fVar9 = (float)NEON_ucvtf((uint)(byte)pLVar3[2]);
      Vector4::set((Vector4 *)&local_68,fVar5,fVar6,fVar7,fVar9);
      uVar10 = NEON_fmadd(local_68 - local_58,local_68 - local_58,
                          (fStack_64 - fStack_54) * (fStack_64 - fStack_54));
      uVar10 = NEON_fmadd(local_60 - local_50,local_60 - local_50,uVar10);
      fVar5 = (float)NEON_fmadd(fStack_5c - fStack_4c,fStack_5c - fStack_4c,uVar10);
      if (fVar8 < fVar5) break;
      fVar6 = fVar8;
      if (fVar5 < fVar8) {
        fVar6 = fVar5;
      }
      if ((param_5 != (ulong *)0x0) && (fVar5 < fVar8)) {
        *param_5 = uVar2;
        fVar6 = fVar5;
      }
      fVar8 = fVar6;
      uVar2 = uVar2 + 1;
      if ((uVar4 <= uVar2) || (pLVar3 = pLVar3 + 4, fVar8 <= 0.0)) break;
    }
    fVar8 = fVar8 + 0.0;
  }
  else {
    uVar2 = 0;
    fVar5 = (float)NEON_ucvtf((uint)(byte)*param_1);
    pLVar3 = param_2 + 1;
    fVar6 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
    fVar7 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
    fVar8 = 3.402823e+38;
    while( true ) {
      fVar9 = (float)NEON_ucvtf((uint)(byte)*pLVar3);
      fVar11 = (float)NEON_ucvtf((uint)(byte)pLVar3[-1]);
      fVar12 = (float)NEON_ucvtf((uint)(byte)pLVar3[1]);
      uVar10 = NEON_fmadd(fVar11 - fVar5,fVar11 - fVar5,(fVar9 - fVar6) * (fVar9 - fVar6));
      fVar11 = (float)NEON_fmadd(fVar12 - fVar7,fVar12 - fVar7,uVar10);
      fVar9 = fVar8;
      if (fVar8 < fVar11) break;
      if (fVar11 < fVar8) {
        fVar9 = fVar11;
      }
      if ((param_5 != (ulong *)0x0) && (fVar11 < fVar8)) {
        *param_5 = uVar2;
        fVar9 = fVar11;
      }
      uVar2 = uVar2 + 1;
      if ((uVar4 <= uVar2) || (pLVar3 = pLVar3 + 4, fVar8 = fVar9, fVar9 <= 0.0)) break;
    }
    uVar4 = 0;
    pLVar3 = param_2 + 3;
    fVar6 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
    fVar5 = 3.402823e+38;
    while( true ) {
      fVar8 = (float)NEON_ucvtf((uint)(byte)*pLVar3);
      fVar7 = (fVar6 - fVar8) * (fVar6 - fVar8);
      fVar8 = fVar5;
      if (fVar5 < fVar7) break;
      if (fVar7 < fVar5) {
        fVar8 = fVar7;
      }
      if ((param_6 != (ulong *)0x0) && (fVar7 < fVar5)) {
        *param_6 = uVar4;
        fVar8 = fVar7;
      }
      uVar4 = uVar4 + 1;
      if ((uVar4 >> ((ulong)param_4 & 0x3f) != 0) ||
         (pLVar3 = pLVar3 + 4, fVar5 = fVar8, fVar8 <= 0.0)) break;
    }
    fVar8 = fVar9 + 0.0 + fVar8;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar8);
  }
  return;
}


